#ifndef BOYLERKAPASITESI_H
#define BOYLERKAPASITESI_H

#include <QDebug>
#include <QObject>

class boylerKapasitesi : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString index READ indexDegeri WRITE indexSet NOTIFY indexChanged)
    Q_PROPERTY(double ozelLavaboSayisi READ ozelLavaboSayisiText WRITE ozelLavaboSayisiSet NOTIFY ozelLavaboSayisiChanged)
    Q_PROPERTY(double genelLavaboSayisi READ genelLavaboSayisiText WRITE genelLavaboSayisiSet NOTIFY genelLavaboSayisiChanged)
    Q_PROPERTY(double banyoSayisi READ banyoSayisiText WRITE banyoSayisiSet NOTIFY banyoSayisiChanged)
    Q_PROPERTY(double dusSayisi READ dusSayisiText WRITE dusSayisiSet NOTIFY dusSayisiChanged)
    Q_PROPERTY(double eviyeSayisi READ eviyeSayisiText WRITE eviyeSayisiSet NOTIFY eviyeSayisiChanged)
    Q_PROPERTY(double camasirMakinasiSayisi READ camasirMakinasiSayisiText WRITE camasirMakinasiSayisiSet NOTIFY camasirMakinasiSayisiChanged)
    Q_PROPERTY(double bulasikMakinasiSayisi READ bulasikMakinasiSayisiText WRITE bulasikMakinasiSayisiSet NOTIFY bulasikMakinasiSayisiChanged)
    Q_PROPERTY(int kullanmaFaktoruInt READ kullanmaFaktoruText WRITE kullanmaFaktoruSet NOTIFY kullanmaFaktoruChanged)
    Q_PROPERTY(int isitmaYukuInt READ isitmaYukuText WRITE isitmaYukuSet NOTIFY isitmaYukuChanged)
    Q_PROPERTY(int depolamaFaktoruInt READ depolamaFaktoruText WRITE depolamaFaktoruSet NOTIFY depolamaFaktoruChanged)
    Q_PROPERTY(int boylerIsitmaYukuInt READ boylerIsitmaYukuText WRITE boylerIsitmaYukuSet NOTIFY boylerIsitmaYukuChanged)


public:
    explicit boylerKapasitesi(QObject *parent = nullptr);

    QString indexDegeri() const{
        return index;
    }

    double ozelLavaboSayisiText() const{
        return ozelLavaboSayisi;
    }

    double genelLavaboSayisiText() const{
        return genelLavaboSayisi;
    }

    double banyoSayisiText() const{
        return banyoSayisi;
    }

    double dusSayisiText() const{
        return dusSayisi;
    }

    double eviyeSayisiText() const{
        return eviyeSayisi;
    }

    double camasirMakinasiSayisiText() const{
        return camasirMakinasiSayisi;
    }

    double bulasikMakinasiSayisiText() const{
        return bulasikMakinasiSayisi;
    }

    int kullanmaFaktoruText() const{
        return kullanmaFaktoruInt;
    }

    int isitmaYukuText() const{
        return isitmaYukuInt;
    }

    int depolamaFaktoruText() const{
        return depolamaFaktoruInt;
    }

    int boylerIsitmaYukuText() const{
        return boylerIsitmaYukuInt;
    }

    void indexSet(const QString &indexDegeri){
        if(indexDegeri == index)
            return;
        index = indexDegeri;
        emit indexChanged(index);
    }

    void ozelLavaboSayisiSet(const double &ozelLavaboSayisiText){
        if(ozelLavaboSayisiText == ozelLavaboSayisi)
            return;
        ozelLavaboSayisi = ozelLavaboSayisiText;
        emit ozelLavaboSayisiChanged(ozelLavaboSayisi);
    }

    void genelLavaboSayisiSet(const double &genelLavaboSayisiText){
        if(genelLavaboSayisiText == genelLavaboSayisi)
            return;
        genelLavaboSayisi = genelLavaboSayisiText;
        emit genelLavaboSayisiChanged(genelLavaboSayisi);
    }

    void banyoSayisiSet(const double &banyoSayisiText){
        if(banyoSayisiText == banyoSayisi)
            return;
        banyoSayisi = banyoSayisiText;
        emit banyoSayisiChanged(banyoSayisi);
    }

    void dusSayisiSet(const double &dusSayisiText){
        if(dusSayisiText == dusSayisi)
            return;
        dusSayisi = dusSayisiText;
        emit dusSayisiChanged(dusSayisi);
    }

    void eviyeSayisiSet(const double &eviyeSayisiText){
        if(eviyeSayisiText == eviyeSayisi)
            return;
        eviyeSayisi = eviyeSayisiText;
        emit eviyeSayisiChanged(eviyeSayisi);
    }

    void camasirMakinasiSayisiSet(const double &camasirMakinasiSayisiText){
        if(camasirMakinasiSayisiText == camasirMakinasiSayisi)
            return;
        camasirMakinasiSayisi = camasirMakinasiSayisiText;
        emit camasirMakinasiSayisiChanged(ozelLavaboSayisi);
    }

    void bulasikMakinasiSayisiSet(const double &bulasikMakinasiSayisiText){
        if(bulasikMakinasiSayisiText == bulasikMakinasiSayisi)
            return;
        bulasikMakinasiSayisi = bulasikMakinasiSayisiText;
        emit bulasikMakinasiSayisiChanged(bulasikMakinasiSayisi);
    }

    void kullanmaFaktoruSet(const int &kullanmaFaktoruText) {
        if(kullanmaFaktoruText == kullanmaFaktoruInt)
            return;
        kullanmaFaktoruInt = kullanmaFaktoruText;
        emit kullanmaFaktoruChanged(kullanmaFaktoruInt);
    }

    void isitmaYukuSet(const int & isitmaYukuText) {
        if(isitmaYukuText == isitmaYukuInt)
            return;
        isitmaYukuInt = isitmaYukuText;
        emit isitmaYukuChanged(isitmaYukuInt);
    }

    void depolamaFaktoruSet(const int &depolamaFaktoruText) {
        if(depolamaFaktoruText == depolamaFaktoruInt)
            return;
        depolamaFaktoruInt = depolamaFaktoruText;
        emit depolamaFaktoruChanged(depolamaFaktoruInt);
    }

    void boylerIsitmaYukuSet(const int & boylerIsitmaYukuText) {
        if(boylerIsitmaYukuText == boylerIsitmaYukuInt)
            return;
        boylerIsitmaYukuInt = boylerIsitmaYukuText;
        emit boylerIsitmaYukuChanged(boylerIsitmaYukuInt);
    }

signals:
    void indexChanged(const QString & indexDegeri);
    void ozelLavaboSayisiChanged(const double & ozelLavaboSayisi);
    void genelLavaboSayisiChanged(const double & genelLavaboSayisi);
    void banyoSayisiChanged(const double & banyoSayisi);
    void dusSayisiChanged(const double & dusSayisi);
    void eviyeSayisiChanged(const double & eviyeSayisi);
    void camasirMakinasiSayisiChanged(const double & camasirMakinasiSayisi);
    void bulasikMakinasiSayisiChanged(const double & bulasikMakinasiSayisi);
    void kullanmaFaktoruChanged(const int & kullanmaFaktoruInt);
    void isitmaYukuChanged(const int & isitmaYukuInt);
    void depolamaFaktoruChanged(const int & depolamaFaktoruInt);
    void boylerIsitmaYukuChanged(const int & boylerIsitmaYukuInt);

public slots:
    void getIndex();
    void boylerHesap();

private:
    QString index;
    double ozelLavaboKatSayisi, genelLavaboKatSayisi, banyoKatSayisi, dusKatSayisi, eviyeKatSayisi, camasirMakinasiKatSayisi, bulasikMakinasiKatSayisi;
    double kullanmaKatSayisi, depolamaKatSayisi;
    double ozelLavaboSayisi, genelLavaboSayisi, banyoSayisi, dusSayisi, eviyeSayisi, camasirMakinasiSayisi, bulasikMakinasiSayisi;
    double kullanmaFaktoru, depolamaFaktoru, isitmaYuku, boylerIsitmaYuku;
    int kullanmaFaktoruInt, depolamaFaktoruInt, isitmaYukuInt, boylerIsitmaYukuInt;

};

#endif // BOYLERKAPASITESI_H
