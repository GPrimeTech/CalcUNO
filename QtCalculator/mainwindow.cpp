#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>

quint16  vendorId=0;
quint16 productId=0;
QString arduinoPortName="";
bool arduino_is_available=false;
QString operand1,operand2,operation;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    arduino =new QSerialPort;
    setWindowTitle("CalcUNO");

    connect(arduino, &QSerialPort::readyRead, this, &MainWindow::readFromPort);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*This section falls under the serial communication module and is responsible
for connecting the arduino to the destop application and opening the serial communication
port for sending and receiving of data. */

void MainWindow::on_openButton_clicked()
{
    vendorId = static_cast<quint16>(ui->vidLineEdit->text().toUInt());
    productId = static_cast<quint16>(ui->pidLineEdit->text().toUInt());

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier())
        {
            if (serialPortInfo.vendorIdentifier() == vendorId)
            {
                if (serialPortInfo.productIdentifier() == productId)
                {
                    arduinoPortName = serialPortInfo.portName();
                    arduino_is_available = true;
                    break;
                }
            }
        }
        else
        {
            arduino_is_available = false;
            break;
        }

    if (arduino_is_available)
    {
        arduino->setPortName(arduinoPortName);
        if (arduino->open(QSerialPort::ReadWrite))
        {
            arduino->setBaudRate(QSerialPort::Baud9600);
            arduino->setDataBits(QSerialPort::Data8);
            arduino->setParity(QSerialPort::NoParity);
            arduino->setStopBits(QSerialPort::OneStop);
            arduino->setFlowControl(QSerialPort::NoFlowControl);

            QMessageBox msgBox;
            msgBox.setText("Connection successful");
            msgBox.exec();
        }
        else
        {
            qDebug() << "Failed to open port" << arduino->errorString();
            QMessageBox::warning(this, "Port error", "Failed to open port: " + arduino->errorString());
        }
    }
    else
    {
        QMessageBox::warning(this, "Port error", "Couldn't find the Arduino");
    }
}


/*This is the arithmetic operation module and receives the inputed operands from the destop interface,
 creates a string based on which operator button was chosen and then sends it to the arduino board
through the serial communication module for computations to be made*/
void MainWindow::on_addButton_clicked()
{
    if(arduino_is_available)
    {
        operand1=ui->firstNum->text();
        operand2=ui->secondNum->text();
        operation=operand1+"+"+operand2+"\n";
        arduino->write(operation.toUtf8());

    }
    else
    {//display error
       QMessageBox::warning(this, "Port error", "couldn't find the arduino");
    }
}



void MainWindow::on_subtractButton_clicked()
{
    if(arduino_is_available)
    {
        operand1=ui->firstNum->text();
        operand2=ui->secondNum->text();
        operation=operand1+"-"+operand2+"\n";
        arduino->write(operation.toUtf8());
    }
    else
    {//display error
        QMessageBox::warning(this, "Port error", "couldn't find the arduino");
    }
}


void MainWindow::on_multiplyButton_clicked()
{
    if(arduino_is_available)
    {
        operand1=ui->firstNum->text();
        operand2=ui->secondNum->text();
        operation=operand1+"*"+operand2+"\n";
        arduino->write(operation.toUtf8());
    }
    else
    {//display error
        QMessageBox::warning(this, "Port error", "couldn't find the arduino");
    }
}


void MainWindow::on_divideButton_clicked()
{
    if(arduino_is_available)
    {
        operand1=ui->firstNum->text();
        operand2=ui->secondNum->text();
        operation=operand1+"/"+operand2+"\n";
        arduino->write(operation.toUtf8());
    }
    else
    {//display error
        QMessageBox::warning(this, "Port error", "couldn't find the arduino");
    }
}
/* This section falls under the serial communication module and is responsible for receiving the feedback (result)
 which contains the results of the computed operands sent by the arduino board's serial communication module */
void MainWindow::readFromPort()
{
    if (arduino->bytesAvailable() > 0)
    {
        QByteArray data = arduino->readAll();
        qDebug() << "Data received:" << data;
        ui->result->setText(data);
    }
    else
    {
        qDebug() << "No data available.";
    }
}

