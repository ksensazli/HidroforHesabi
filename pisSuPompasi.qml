import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 920
    visible: true
    title: qsTr("Hidrofor Hesabı")

    Label {
        id: aciklamaLabel
        x: 50
        y: 54
        width: 150
        height: 30
        text: qsTr("AÇIKLAMA")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.underline: true
    }

    Label {
        id: bsEn12056DuLabel
        x: 210
        y: 54
        width: 140
        height: 30
        text: qsTr("BS EN 12056 DU (L/S)")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.underline: true
    }

    Label {
        id: sayiLabel
        x: 367
        y: 54
        width: 60
        height: 30
        text: qsTr("SAYI")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.underline: true
    }

    Label {
        id: pisSuMiktariLabel
        x: 444
        y: 54
        width: 140
        height: 30
        text: qsTr("PİS SU MİKTARI (L/S)")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.underline: true
    }

    Label {
        id: lavaboLabel
        x: 50
        y: 100
        width: 150
        height: 30
        text: qsTr("Lavabo")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: bideLabel
        x: 50
        y: 130
        width: 150
        height: 30
        text: qsTr("Bide")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: dusLabel
        x: 50
        y: 160
        width: 150
        height: 30
        text: qsTr("Duş")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: pisuarLabel
        x: 50
        y: 190
        width: 150
        height: 30
        text: qsTr("Pisuar")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: banyoLabel
        x: 50
        y: 220
        width: 150
        height: 30
        text: qsTr("Banyo")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: eviyeLabel
        x: 50
        y: 250
        width: 150
        height: 30
        text: qsTr("Eviye")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: bulasikMakinasiLabel
        x: 50
        y: 280
        width: 150
        height: 30
        text: qsTr("Bulaşık Makinası")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: camasirMakinasiLabel
        x: 50
        y: 310
        width: 150
        height: 30
        text: qsTr("Çamaşır Makinası")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: wcLabel
        x: 50
        y: 340
        width: 150
        height: 30
        text: qsTr("6 lt Su Hazneli WC")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: yersuzgeci5070Label
        x: 50
        y: 370
        width: 150
        height: 30
        text: qsTr("Yer Süzgeci DN50/DN70")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: yersuzgeci100Label
        x: 50
        y: 400
        width: 150
        height: 30
        text: qsTr("Yer Süzgeci DN100")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    TextField {
        id: lavaboSetKatsayi
        x: 210
        y: 100
        text: "0.3"
        horizontalAlignment: Text.AlignRight
        width: 140
        height: 30
        color: "#0080ff"
        readOnly: true
    }

    TextField {
        id: bideSetKatsayi
        x: 210
        y: 130
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.3"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: dusSetKatsayi
        x: 210
        y: 160
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.4"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: pisuarSetKatsayi
        x: 210
        y: 190
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.5"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: banyoSetKatsayi
        x: 210
        y: 220
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.6"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: eviyeSetKatsayi
        x: 210
        y: 250
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.6"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: bulasikMakinasiSetKatsayi
        x: 210
        y: 280
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.6"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: camasirMakinasiSetKatsayi
        x: 210
        y: 310
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.6"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: wcSetKatsayi
        x: 210
        y: 340
        width: 140
        height: 30
        color: "#0080ff"
        text: "1.8"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: yerSuzgeci5070SetKatsayi
        x: 210
        y: 370
        width: 140
        height: 30
        color: "#0080ff"
        text: "0.9"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: yerSuzgeci100SetKatsayi
        x: 210
        y: 400
        width: 140
        height: 30
        color: "#0080ff"
        text: "1.2"
        horizontalAlignment: Text.AlignRight
        readOnly: true
    }

    TextField {
        id: lavaboSayiText
        x: 367
        y: 100
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: bideSayiText
        x: 367
        y: 130
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: dusSayiText
        x: 367
        y: 160
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: pisuarSayiText
        x: 367
        y: 190
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: banyoSayiText
        x: 367
        y: 220
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: eviyeSayiText
        x: 367
        y: 250
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: bulasikMakinasiSayiText
        x: 367
        y: 280
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: camasirMakinasiSayiText
        x: 367
        y: 310
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: wcSayiText
        x: 367
        y: 340
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: yerSuzgeci5070SayiText
        x: 367
        y: 370
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: yerSuzgeci100SayiText
        x: 367
        y: 400
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Sayı")
    }

    TextField {
        id: lavaboSuMiktariText
        x: 444
        y: 100
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: bideSuMiktariText
        x: 444
        y: 130
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: dusSuMiktariText
        x: 444
        y: 160
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: pisuarSuMiktariText
        x: 444
        y: 190
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: banyoSuMiktariText
        x: 444
        y: 220
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: eviyeSuMiktariText
        x: 444
        y: 250
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: bulasikMakinasiSuMiktariText
        x: 444
        y: 280
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: camasirMakinasiSuMiktariText
        x: 444
        y: 310
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: wcSuMiktariText
        x: 444
        y: 340
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: yerSuzgeci5070SuMiktariText
        x: 444
        y: 370
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }
    TextField {
        id: yerSuzgeci100SuMiktariText
        x: 444
        y: 400
        horizontalAlignment: Text.AlignHCenter
        width: 140
        height: 30
    }

    Label {
        id: toplamLabel
        x: 210
        y: 440
        width: 140
        height: 30
        text: qsTr("TOPLAM")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    TextField {
        id: toplamText
        x: 367
        y: 440
        width: 60
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Toplam")
    }

    TextField {
        id: toplamSuMiktariText
        x: 444
        y: 440
        width: 140
        height: 30
        horizontalAlignment: Text.AlignHCenter
        placeholderText: qsTr("Toplam Su Miktarı")
    }

    Button {
        id: hesaplaButon
        x: 50
        y: 660
        width: 534
        height: 30
        text: qsTr("HESAPLA")
    }

    Label {
        id: sihhiTesisatKatsayilariLabel
        x: 50
        y: 480
        width: 534
        height: 30
        text: qsTr("SIHHİ TESİSATLARIN KULLANIM KATSAYILARI")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.underline: true
    }

    Button {
        id: aralikliKullanimButon
        x: 50
        y: 510
        width: 534
        height: 30
        text: qsTr("ARALIKLI KULLANIM (EV, İŞYERİ, MİSAFİRHANE) = 0.5")
    }

    Button {
        id: sikKullanimButon
        x: 50
        y: 545
        width: 534
        height: 30
        text: qsTr("SIK KULLANIM (HASTANE, OKUL, RESTORAN, OTEL) = 0.7")
    }

    Button {
        id: yogunKullanimButon
        x: 50
        y: 580
        width: 534
        height: 30
        text: qsTr("YOĞUN KULLANIM (UMUMİ TUVALETLER ve/veya DUŞLAR) = 1.0")
    }

    Button {
        id: ozelKullanimButon
        x: 50
        y: 615
        width: 534
        height: 30
        text: qsTr("ÖZEL KULLANIM (LABORATUAR) = 1.2")
    }

    Label {
        id: pisSuDebisiLabel
        x: 187
        y: 710
        width: 240
        height: 30
        text: qsTr("PİS SU DEBİSİ:")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: kullanimKatsayisiLabel
        x: 187
        y: 740
        width: 240
        height: 30
        text: qsTr("KULLANIM KATSAYISI:")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: emniyetliPompaYuzdeOnLabel
        x: 102
        y: 770
        width: 325
        height: 30
        text: qsTr("EMNİYETLİ SEÇİLEN PİS SU POMPASI DEBİSİ (%10):")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: emniyetliPompaLabel
        x: 102
        y: 800
        width: 325
        height: 30
        text: qsTr("EMNİYETLİ SEÇİLEN PİS SU POMPASI DEBİSİ:")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: basincKaybiLabel
        x: 102
        y: 830
        width: 325
        height: 30
        text: qsTr("PİS SU POMPASI BASINÇ KAYBI (mSS):")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: pisSuDebisiSonucLabel
        x: 444
        y: 710
        width: 140
        height: 30
    }

    Label {
        id: kullanimKatsayisiSonucLabel
        x: 444
        y: 740
        width: 140
        height: 30
    }

    Label {
        id: emniyetliPompaYuzdeOnSonucLabel
        x: 444
        y: 770
        width: 140
        height: 30
    }

    Label {
        id: emniyetliPompaSonucLabel
        x: 444
        y: 800
        width: 140
        height: 30
    }

    Label {
        id: basincKaybiSonucLabel
        x: 444
        y: 830
        width: 140
        height: 30
    }
}
