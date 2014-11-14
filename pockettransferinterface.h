#ifndef POCKETTRANSFERINTERFACE_H
#define POCKETTRANSFERINTERFACE_H

#include "mediatransferinterface.h"

class PocketTransferInterface : public MediaTransferInterface
{
    Q_OBJECT
public:
    PocketTransferInterface(QObject *parent = 0);
    ~PocketTransferInterface();

    QString displayName() const;
    QUrl serviceIcon() const;
    bool cancelEnabled() const;
    bool restartEnabled() const;

public Q_SLOTS:
    void start();
    void cancel();
    void check();
};

#endif // POCKETTRANSFERINTERFACE_H
