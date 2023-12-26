import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import "components"

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Welcome Screen")

    CustomButton {
        id: hidroforButonu
        x: 50
        y: 220
        width: 260
        height: 40
        text: qsTr("Hidrofor Hesabı için Tıklayınız")
        onClicked: {
            var component = Qt.createComponent("hidrofor.qml")
            var window    = component.createObject()
            window.show()
        }

    }

    CustomButton {
        id: genlesmeTankiButonu
        x: 50
        y: 280
        width: 260
        height: 40
        text: qsTr("Genleşme Tankı Seçimi için Tıklayınız")
        onClicked: {
            var component = Qt.createComponent("genlesmeTanki.qml")
            var window    = component.createObject()
            window.show()
        }
    }

    CustomButton {
        id: boylerKapasiteButonu
        x: 50
        y: 340
        width: 260
        height: 40
        text: qsTr("Boyler Kapasitesi Hesabı İçin Tıklayınız")
        onClicked: {
            var component = Qt.createComponent("boyler.qml")
            var window    = component.createObject()
            window.show()
        }
    }

    CustomButton {
        id: pisSuButonu
        x: 50
        y: 400
        width: 260
        height: 40
        text: qsTr("Pis Su Pompası Hesabı İçin Tıklayınız")
        onClicked: {
            var component = Qt.createComponent("pisSuPompasi.qml")
            var window    = component.createObject()
            window.show()
        }
    }
}
