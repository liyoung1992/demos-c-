#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void readText(const QString &path);
    void writeText(const QString &line);

private slots:
    void on_readTxtBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
