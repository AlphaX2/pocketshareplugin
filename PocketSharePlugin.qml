import QtQuick 2.0
import Sailfish.Silica 1.0
import Sailfish.TransferEngine 1.0

ShareDialog {
    id: root

    Component.onCompleted: {
        console.log(root.content)
        console.log(root.content.status)
        console.log(root.content.linkTitle)
        console.log(typeof(root.content.status))
        console.log(typeof(root.content.linkTitle))
        console.log(typeof(shareItem))

        loggedIn = shareItem.checkLogin()
    }

    onAccepted: {
        shareItem.start()
    }
    onCanceled: {
        shareItem.cancel()
    }

    SilicaFlickable {
        anchors.fill: parent

        height: Column.height

        Column {
            id: contentColumn
            width: parent.width

            spacing: Theme.paddingSmall

            DialogHeader {
                id: header
                title: "Freigeben"
            }

            TextField {
                id: linkTitleTextField
                anchors.horizontalCenter: parent.horizontalCenter
                width: parent.width - Theme.paddingMedium*2
                text: root.content.linkTitle
                focus: true
            }

            Label {
                id: shareLink
                anchors.horizontalCenter: parent.horizontalCenter
                color: Theme.highlightColor
                text: root.content.status
                width: parent.width - Theme.paddingLarge*2
                wrapMode: Text.Wrap
                elide: Text.ElideRight
                maximumLineCount: 3
                opacity: .6
                font.pixelSize: Theme.fontSizeSmall
            }
        }
    }

    // siehe auch https://github.com/nemomobile/transfer-engine/blob/master/src/transferengine.cpp Zeile 840!

    SailfishShare {
        id: shareItem

        source: root.source
        metadataStripped: true
        serviceId: root.methodId
        mimeType: "text/x-url"
        userData: {"description": "Shared link for getpocket.com",
                   "linkTitle": root.content.linkTitle,
                   "link": root.content.status}
    }
}
