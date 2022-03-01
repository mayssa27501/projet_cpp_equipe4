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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Ajouter_clicked();



    void on_Supp_btn_clicked();

    void on_mod_btn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
