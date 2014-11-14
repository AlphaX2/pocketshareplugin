#include "pocketplugininfo.h"
#include <QDebug>

PocketPluginInfo::PocketPluginInfo()
    : m_ready(false)
{
}

PocketPluginInfo::~PocketPluginInfo()
{
}

QList<TransferMethodInfo> PocketPluginInfo::info() const
{
    return m_infoList;
}

void PocketPluginInfo::query()
{

    qDebug() << "query() in cpp world";

    TransferMethodInfo info;
    QStringList capabilities;

     // Capabilites ie. what mimetypes this plugin supports
    capabilities << QLatin1String("text/x-url");

    // Name in sharing menu
    info.displayName = QString("Pocket");

    // Method ID is a unique identifier for this plugin. It is used to identify which share plugin should be
    // used for starting the sharing.
    info.methodId = QLatin1String("gbo-pocket-share-plugin-method-id");

    // Path to the Sharing UI which this plugin provides.
    info.shareUIPath = QLatin1String("/usr/share/nemo-transferengine/plugins/PocketSharePlugin.qml");

    // Pass information about capabilities. This info is used for filtering share plugins
    // which don't support defined types. For example, this plugin won't appear in the
    // share method list, if someone tries to share content which isn't image or vcard type,
    info.capabilitities = capabilities;

    m_infoList << info;

    m_ready = true;
    emit infoReady();
}

bool PocketPluginInfo::ready() const
{
    qDebug() << "ready is returned";
    return m_ready;
}
