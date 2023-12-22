#ifndef PISSUPOMPASI_H
#define PISSUPOMPASI_H

#include <QObject>

class pisSuPompasi : public QObject
{
    Q_OBJECT
public:
    explicit pisSuPompasi(QObject *parent = nullptr);

signals:

public slots:
    void toplamaHesap();
    void debiHesap();

private:
    double lavaboBSEN = 0.3;
    double bideBSEN = 0.3;
    double dusBSEN = 0.4;
    double pisuarBSEN = 0.5;
    double banyoBSEN = 0.6;
    double eviyeBSEN = 0.6;
    double bulasikMakinasiBSEN = 0.6;
    double camasirMakinasiBSEN = 0.6;
    double wcBSEN = 1.8;
    double yerSuzgeci5070BSEN = 0.9;
    double yerSuzgeci100BSEN = 1.2;

    double lavaboSayisi, bideSayisi, dusSayisi, pisuarSayisi, banyoSayisi, eviyeSayisi, bulasikMakinasiSayisi, camasirMakinasiSayisi, wcSayisi, yerSuzgeci5070Sayisi, yerSuzgeci100Sayisi;
    double lavaboPisSu, bidePisSu, dusPisSu, pisuarPisSu, banyoPisSu, eviyePisSu, bulasikMakinasiPisSu, camasirMakinasiPisSu, wcPisSu, yerSuzgeci5070PisSu, yerSuzgeci100PisSu;

    int toplam;
    double toplamPisSu;

    double aralikliKatSayi, sikKatSayi, yogunKatSayi, ozelKatSayi;

    double pisSuDebisi, emniyetliYuzdeOn, emniyetli, basincKaybi;
};

#endif // PISSUPOMPASI_H
