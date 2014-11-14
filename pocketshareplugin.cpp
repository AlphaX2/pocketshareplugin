#include <QtPlugin>
#include <QDebug>
#include "pocketshareplugin.h"
#include "pockettransferinterface.h"
#include "pocketplugininfo.h"

Pocketshareplugin::Pocketshareplugin()
{
}

Pocketshareplugin::~Pocketshareplugin()
{
}

MediaTransferInterface *Pocketshareplugin::transferObject()
{
    return new PocketTransferInterface;
}

TransferPluginInfo *Pocketshareplugin::infoObject()
{
    return new PocketPluginInfo;
}

QString Pocketshareplugin::pluginId() const
{
    return "gbo-pocket-share-plugin-method-id";
}

bool Pocketshareplugin::enabled() const
{
    return true;
}
