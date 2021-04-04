#ifndef ECHO_TUNE_H
#define ECHO_TUNE_H

#include <QDialog>

namespace Ui {
class EchoTune;
}

class EchoTune : public QDialog
{
    Q_OBJECT

public:
    explicit EchoTune(QWidget *parent = nullptr);
    ~EchoTune();

public slots:
    void on_echo_reload_clicked();

private slots:
    void on_reset_clicked();

    void on_echo_eon_clicked(bool checked);
    void on_echo_edl_valueChanged(int arg1);
    void on_echo_efb_valueChanged(int arg1);
    void on_echo_mvoll_valueChanged(int arg1);
    void on_echo_mvolr_valueChanged(int arg1);
    void on_echo_evoll_valueChanged(int arg1);
    void on_echo_evolr_valueChanged(int arg1);
    void on_echo_fir0_valueChanged(int arg1);
    void on_echo_fir1_valueChanged(int arg1);
    void on_echo_fir2_valueChanged(int arg1);
    void on_echo_fir3_valueChanged(int arg1);
    void on_echo_fir4_valueChanged(int arg1);
    void on_echo_fir5_valueChanged(int arg1);
    void on_echo_fir6_valueChanged(int arg1);
    void on_echo_fir7_valueChanged(int arg1);

private:
    Ui::EchoTune *ui;
};

#endif // ECHO_TUNE_H