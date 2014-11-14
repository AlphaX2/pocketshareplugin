#include "pockettransferinterface.h"
#include "mediaitem.h"
#include <QDebug>

PocketTransferInterface::PocketTransferInterface(QObject *parent):
    MediaTransferInterface(parent)
{
}

PocketTransferInterface::~PocketTransferInterface()
{
}

QString PocketTransferInterface::displayName() const
{
    return QString("Pocket/Read it Later");
}

QUrl PocketTransferInterface::serviceIcon() const
{
    // Url to the icon which should be shown in the transfer UI
    return QUrl("image://theme/icon-s-message");
}

bool PocketTransferInterface::restartEnabled() const
{
    // Return true, if restart is supported.
   // Return false, if restart is not supported
    return false;
}

bool PocketTransferInterface::cancelEnabled() const
{
    // Return true if cancelling ongoing upload is supported
    // Return false if cancelling ongoing upload is not supported
    return false;
}

void PocketTransferInterface::start()
{
    qDebug() << PocketTransferInterface::mediaItem()->value(MediaItem::DisplayName);
    qDebug() << PocketTransferInterface::mediaItem()->value(MediaItem::Status);
    qDebug() << "here could uploading happening";
}

void PocketTransferInterface::cancel()
{
    qDebug() << "here could cancel happening";
}

//bool PocketTransferInterface::checkLogin()
//{
//    qDebug() << "prüfe Login";
//    return true;
//}
