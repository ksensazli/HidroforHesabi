#include "pissupompasi.h"

pisSuPompasi::pisSuPompasi(QObject *parent) : QObject{parent}
{

}

void pisSuPompasi::toplamBulma(const QString& lavaboSayisiText, const QString& bideSayisiText, const QString& dusSayisiText, const QString& pisuarSayisiText,
                               const QString& banyoSayisiText, const QString& eviyeSayisiText, const QString& bulasikMakinasiText, const QString& camasirMakinasiText,
                               const QString& wcSayisiText, const QString& yerSuzgeci5070Text, const QString& yerSuzgeci100Text)
{
    lavaboSayisi = lavaboSayisiText.toDouble();
    bideSayisi = bideSayisiText.toDouble();
    dusSayisi = dusSayisiText.toDouble();
    pisuarSayisi = pisuarSayisiText.toDouble();
    banyoSayisi = banyoSayisiText.toDouble();
    eviyeSayisi = eviyeSayisiText.toDouble();
    bulasikMakinasiSayisi = bulasikMakinasiText.toDouble();
    camasirMakinasiSayisi = camasirMakinasiText.toDouble();
    wcSayisi = wcSayisiText.toDouble();
    yerSuzgeci5070Sayisi = yerSuzgeci5070Text.toDouble();
    yerSuzgeci100Sayisi = yerSuzgeci100Text.toDouble();

    lavaboPisSu = lavaboBSEN * lavaboSayisi;
    bidePisSu = bideBSEN * bideSayisi;
    dusPisSu = dusBSEN * dusSayisi;
    pisuarPisSu = pisuarBSEN * pisuarSayisi;
    banyoPisSu = banyoBSEN * banyoSayisi;
    eviyePisSu = eviyeBSEN * eviyeSayisi;
    bulasikMakinasiPisSu = bulasikMakinasiBSEN * bulasikMakinasiSayisi;
    camasirMakinasiPisSu = camasirMakinasiBSEN * camasirMakinasiSayisi;
    wcPisSu = wcBSEN * wcSayisi;
    yerSuzgeci5070PisSu = yerSuzgeci5070BSEN * yerSuzgeci5070Sayisi;
    yerSuzgeci100PisSu = yerSuzgeci100BSEN * yerSuzgeci100Sayisi;

    toplam = (lavaboSayisi + bideSayisi + dusSayisi + pisuarSayisi + banyoSayisi + eviyeSayisi + bulasikMakinasiSayisi + camasirMakinasiSayisi + wcSayisi + yerSuzgeci5070Sayisi + yerSuzgeci100Sayisi);
    toplamPisSu = (lavaboPisSu + bidePisSu + dusPisSu + pisuarPisSu + banyoPisSu + eviyePisSu + bulasikMakinasiPisSu + camasirMakinasiPisSu + wcPisSu + yerSuzgeci5070PisSu + yerSuzgeci100PisSu);
}

void pisSuPompasi::ileriHesap()
{
    emniyetliYuzdeOn = sqrt(toplamPisSu) * katSayi * 1.1;
    emniyetli = emniyetliYuzdeOn * 3.6;
    basincKaybi = (int)(toplamPisSu - emniyetli);
}

void pisSuPompasi::setAralikliKullanim()
{
    katSayi = 0.5;
    ileriHesap();
}

void pisSuPompasi::setSikKullanim()
{
    katSayi = 0.7;
    ileriHesap();
}

void pisSuPompasi::setYogunKullanim()
{
    katSayi = 1.0;
    ileriHesap();
}

void pisSuPompasi::setOzelKullanim()
{
    katSayi = 1.2;
    ileriHesap();
}
