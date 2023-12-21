import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15

Window {
    id:boylerScreen
    width: 640
    height: 480
    visible: true
    title: qsTr("Boyler Kapasitesi Hesap")

    ComboBox {
        id: secimComboBox
        x: 50
        y: 80
        width: 250
        height: 40
        displayText: "Hesap Yapmak İstediğiniz Tür:"
        currentIndex: -1
        model: ListModel {
            id: model
            ListElement { text: "Apartman" }
            ListElement { text: "Hastane" }
            ListElement { text: "Otel" }
            ListElement { text: "Fabrika" }
            ListElement { text: "Konut(Özel)" }
            ListElement { text: "Okul(Yatılı)" }
        }
        onCurrentIndexChanged: {
            secimComboBox.displayText = model.get(currentIndex).text
            secilenTurLabel.text = "Hesap Yapmak İstediğiniz Tür:"
        }
    }

    Label {
        id: secilenTurLabel
        x: 50
        y: 45
        width: 250
        height: 40
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }
}
