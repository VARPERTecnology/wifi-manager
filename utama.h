#ifndef UTAMA_H
#define UTAMA_H

#include <QtWidgets/QMainWindow>
#include <dbusnetwork.h>
#include <dbuswifi.h>
#include <QMap>

namespace Ui {
class Utama;
}

class Utama : public QMainWindow
{
    Q_OBJECT

public:
    explicit Utama(QWidget *parent = 0);
    void updateUI();

    ~Utama();

private slots:
    void on_pushButton_clicked();
    void _onNetworkManagerStateChanged(const int newState);

private:
    Ui::Utama *ui;
    DbusNetwork *debus;
    DbusWifi *wifi;

    QMap<QString /* SSID */, QString /* Access Point */> ssids;
};

#endif // UTAMA_H
