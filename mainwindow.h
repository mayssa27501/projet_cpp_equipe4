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
    void on_ajouter_li_clicked();

    void on_supp_btn_clicked();

    void on_modif_btn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
