#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

#include "Database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_aggiungiAutoreButton_clicked();

    void on_aggiungiConferenzaButton_clicked();

    void on_aggiungiOrganizzatoreButton_clicked();

    void on_aggiungiRivistaButton_clicked();

    void on_aggiungiArticoloButton_clicked();

    void on_pubblicatoPerConferenzaRadioButton_clicked();

    void on_pubblicatoPerRivistaRadioButton_clicked();

    void on_aggiungiKeywordButton_clicked();

    void on_listaAutoriArticoloListWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_listaArticoliCorrelatiArticoloListWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_b1c12Button_clicked();

    void on_b45Button_clicked();

    void on_b4RadioButton_clicked();

    void on_b5RadioButton_clicked();

    void on_c6Button_clicked();

    void on_dButton_clicked();

    void on_e6Button_clicked();

    void on_f4Button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
