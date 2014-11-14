#ifndef POCKETPLUGININFO_H
#define POCKETPLUGININFO_H

#include "transferplugininfo.h"

class PocketPluginInfo : public TransferPluginInfo
{
    Q_OBJECT
public:
    PocketPluginInfo();
    ~PocketPluginInfo();

    QList<TransferMethodInfo> info() const;
    void query();
    bool ready() const;
private:
    QList<TransferMethodInfo> m_infoList;
    bool m_ready;
};

#endif // POCKETPLUGININFO_H
