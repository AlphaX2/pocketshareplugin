#ifndef POCKETSHAREPLUGIN_H
#define POCKETSHAREPLUGIN_H

#include <transferplugininterface.h>
#include <QObject>

class Q_DECL_EXPORT Pocketshareplugin : public QObject, public TransferPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.gbo.pocket.transfer.plugin")
    Q_INTERFACES(TransferPluginInterface)
public:
    Pocketshareplugin();
    ~Pocketshareplugin();

    MediaTransferInterface *transferObject();
    TransferPluginInfo *infoObject();
    QString pluginId() const;
    bool enabled() const;

};

#endif // POCKETSHAREPLUGIN_H
