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
    void readExcel(const QString &path);
    void writeText(const QString &platform, const QString &line);
    void loadPlatformList();

private slots:
    void on_fileBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
