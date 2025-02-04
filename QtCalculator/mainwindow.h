#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_openButton_clicked();

    void on_addButton_clicked();

    void on_subtractButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

    void readFromPort();

private:
    Ui::MainWindow *ui;
    QSerialPort *arduino;
    quint16  vendorId;
    quint16 productId;
    QString arduinoPortName;
    bool arduino_is_available;
};
#endif // MAINWINDOW_H
