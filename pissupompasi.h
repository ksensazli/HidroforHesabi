#ifndef PISSUPOMPASI_H
#define PISSUPOMPASI_H

#include <QDebug>
#include <QObject>

class pisSuPompasi : public QObject
{
    Q_OBJECT
public:
    explicit pisSuPompasi(QObject *parent = nullptr);

    Q_INVOKABLE void toplamBulma(const QString& lavaboSayisiText, const QString& bideSayisiText, const QString& dusSayisiText, const QString& pisuarSayisiText,
                                 const QString& banyoSayisiText, const QString& eviyeSayisiText, const QString& bulasikMakinasiText, const QString& camasirMakinasiText,
                                 const QString& wcSayisiText, const QString& yerSuzgeci5070Text, const QString& yerSuzgeci100Text);

    Q_PROPERTY(double lavaboPisSu READ lavaboPisSuText WRITE lavaboPisSuSet NOTIFY lavaboPisSuChanged)
    Q_PROPERTY(double bidePisSu READ bidePisSuText WRITE bidePisSuSet NOTIFY bidePisSuChanged)
    Q_PROPERTY(double dusPisSu READ dusPisSuText WRITE dusPisSuSet NOTIFY dusPisSuChanged)
    Q_PROPERTY(double pisuarPisSu READ pisuarPisSuText WRITE pisuarPisSuSet NOTIFY pisuarPisSuChanged)
    Q_PROPERTY(double banyoPisSu READ banyoPisSuText WRITE banyoPisSuSet NOTIFY banyoPisSuChanged)
    Q_PROPERTY(double eviyePisSu READ eviyePisSuText WRITE eviyePisSuSet NOTIFY eviyePisSuChanged)
    Q_PROPERTY(double bulasikMakinasiPisSu READ bulasikMakinasiPisSuText WRITE bulasikMakinasiPisSuSet NOTIFY bulasikMakinasiPisSuChanged)
    Q_PROPERTY(double camasirMakinasiPisSu READ camasirMakinasiPisSuText WRITE camasirMakinasiPisSuSet NOTIFY camasirMakinasiPisSuChanged)
    Q_PROPERTY(double wcPisSu READ wcPisSuText WRITE wcPisSuSet NOTIFY wcPisSuChanged)
    Q_PROPERTY(double yerSuzgeci5070PisSu READ yerSuzgeci5070PisSuText WRITE yerSuzgeci5070PisSuSet NOTIFY yerSuzgeci5070PisSuChanged)
    Q_PROPERTY(double yerSuzgeci100PisSu READ yerSuzgeci100PisSuText WRITE yerSuzgeci100PisSuSet NOTIFY yerSuzgeci100PisSuChanged)
    Q_PROPERTY(double toplam READ toplamText WRITE toplamSet NOTIFY toplamChanged)
    Q_PROPERTY(double toplamPisSu READ toplamPisSuText WRITE toplamPisSuSet NOTIFY toplamPisSuChanged)
    Q_PROPERTY(double emniyetliYuzdeOn READ emniyetliYuzdeOnText WRITE emniyetliYuzdeOnSet NOTIFY emniyetliYuzdeOnChanged)
    Q_PROPERTY(double emniyetli READ emniyetliText WRITE emniyetliSet NOTIFY emniyetliChanged)
    Q_PROPERTY(double basincKaybi READ basincKaybiText WRITE basincKaybiSet NOTIFY basincKaybiChanged)

    void ileriHesap();

    double lavaboPisSuText() const{
        return lavaboPisSu;
    }

    double bidePisSuText() const{
        return bidePisSu;
    }

    double dusPisSuText() const{
        return dusPisSu;
    }

    double pisuarPisSuText() const{
        return pisuarPisSu;
    }

    double banyoPisSuText() const{
        return banyoPisSu;
    }

    double eviyePisSuText() const{
        return eviyePisSu;
    }

    double bulasikMakinasiPisSuText() const{
        return bulasikMakinasiPisSu;
    }

    double camasirMakinasiPisSuText() const{
        return camasirMakinasiPisSu;
    }

    double wcPisSuText() const{
        return wcPisSu;
    }

    double yerSuzgeci5070PisSuText() const{
        return yerSuzgeci5070PisSu;
    }

    double yerSuzgeci100PisSuText() const{
        return yerSuzgeci100PisSu;
    }

    double toplamText() const{
        return toplam;
    }

    double toplamPisSuText() const{
        return toplamPisSu;
    }

    double emniyetliYuzdeOnText() const{
        return emniyetliYuzdeOn;
    }

    double emniyetliText() const{
        return emniyetli;
    }

    double basincKaybiText() const{
        return basincKaybi;
    }

    void lavaboPisSuSet(const double &lavaboPisSuText){
        if(lavaboPisSuText == lavaboPisSu)
            return;
        lavaboPisSu = lavaboPisSuText;
        emit lavaboPisSuChanged(lavaboPisSu);
    }

    void bidePisSuSet(const double &bidePisSuText){
        if(bidePisSuText == bidePisSu)
            return;
        bidePisSu = bidePisSuText;
        emit bidePisSuChanged(bidePisSu);
    }

    void dusPisSuSet(const double &dusPisSuText){
        if(dusPisSuText == dusPisSu)
            return;
        dusPisSu = dusPisSuText;
        emit dusPisSuChanged(dusPisSu);
    }

    void pisuarPisSuSet(const double &pisuarPisSuText){
        if(pisuarPisSuText == pisuarPisSu)
            return;
        pisuarPisSu = pisuarPisSuText;
        emit pisuarPisSuChanged(pisuarPisSu);
    }

    void banyoPisSuSet(const double &banyoPisSuText){
        if(banyoPisSuText == banyoPisSu)
            return;
        banyoPisSu = banyoPisSuText;
        emit banyoPisSuChanged(banyoPisSu);
    }

    void eviyePisSuSet(const double &eviyePisSuText){
        if(eviyePisSuText == eviyePisSu)
            return;
        eviyePisSu = eviyePisSuText;
        emit eviyePisSuChanged(eviyePisSu);
    }

    void bulasikMakinasiPisSuSet(const double &bulasikMakinasiPisSuText){
        if(bulasikMakinasiPisSuText == bulasikMakinasiPisSu)
            return;
        bulasikMakinasiPisSu = bulasikMakinasiPisSuText;
        emit bulasikMakinasiPisSuChanged(bulasikMakinasiPisSu);
    }

    void camasirMakinasiPisSuSet(const double &camasirMakinasiPisSuText){
        if(camasirMakinasiPisSuText == camasirMakinasiPisSu)
            return;
        camasirMakinasiPisSu = camasirMakinasiPisSuText;
        emit camasirMakinasiPisSuChanged(camasirMakinasiPisSu);
    }

    void wcPisSuSet(const double &wcPisSuText){
        if(wcPisSuText == wcPisSu)
            return;
        wcPisSu = wcPisSuText;
        emit wcPisSuChanged(wcPisSu);
    }

    void yerSuzgeci5070PisSuSet(const double &yerSuzgeci5070PisSuText){
        if(yerSuzgeci5070PisSuText == yerSuzgeci5070PisSu)
            return;
        yerSuzgeci5070PisSu = yerSuzgeci5070PisSuText;
        emit yerSuzgeci5070PisSuChanged(yerSuzgeci5070PisSu);
    }

    void yerSuzgeci100PisSuSet(const double &yerSuzgeci100PisSuText){
        if(yerSuzgeci100PisSuText == yerSuzgeci100PisSu)
            return;
        yerSuzgeci100PisSu = yerSuzgeci100PisSuText;
        emit yerSuzgeci100PisSuChanged(yerSuzgeci100PisSu);
    }

    void toplamSet(const double &toplamText){
        if(toplamText == toplam)
            return;
        toplam = toplamText;
        emit toplamChanged(toplam);
    }

    void toplamPisSuSet(const double &toplamPisSuText){
        if(toplamPisSuText == toplamPisSu)
            return;
        toplamPisSu = toplamPisSuText;
        emit toplamPisSuChanged(toplamPisSu);
    }

    void emniyetliYuzdeOnSet(const double &emniyetliYuzdeOnText){
        if(emniyetliYuzdeOnText == emniyetliYuzdeOn)
            return;
        emniyetliYuzdeOn = emniyetliYuzdeOnText;
        emit emniyetliYuzdeOnChanged(emniyetliYuzdeOn);
    }

    void emniyetliSet(const double &emniyetliText){
        if(emniyetliText == emniyetli)
            return;
        emniyetli = emniyetliText;
        emit emniyetliChanged(emniyetli);
    }

    void basincKaybiSet(const double &basincKaybiText){
        if(basincKaybiText == basincKaybi)
            return;
        basincKaybi = basincKaybiText;
        emit basincKaybiChanged(basincKaybi);
    }

signals:
    void toplamChanged(const double & toplam);
    void toplamPisSuChanged(const double & toplamPisSu);
    void lavaboPisSuChanged(const double & lavaboPisSu);
    void bidePisSuChanged(const double & bidePisSu);
    void dusPisSuChanged(const double & dusPisSu);
    void pisuarPisSuChanged(const double & pisuarPisSu);
    void banyoPisSuChanged(const double & banyoPisSu);
    void eviyePisSuChanged(const double & eviyePisSu);
    void bulasikMakinasiPisSuChanged(const double & bulasikMakinasiPisSu);
    void camasirMakinasiPisSuChanged(const double & camasirMakinasiPisSu);
    void wcPisSuChanged(const double & wcPisSu);
    void yerSuzgeci5070PisSuChanged(const double & yerSuzgeci5070PisSu);
    void yerSuzgeci100PisSuChanged(const double & yerSuzgeci100PisSu);
    void emniyetliYuzdeOnChanged(const double & emniyetliYuzdeOn);
    void emniyetliChanged(const double & emniyetli);
    void basincKaybiChanged(const double & basincKaybi);

public slots:
    void setAralikliKullanim();
    void setSikKullanim();
    void setYogunKullanim();
    void setOzelKullanim();

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

    double katSayi;

    double emniyetliYuzdeOn, emniyetli, basincKaybi;
};

#endif // PISSUPOMPASI_H
