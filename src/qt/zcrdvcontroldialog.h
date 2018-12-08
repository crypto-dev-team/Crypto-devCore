// Copyright (c) 2017-2018 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZCRDVCONTROLDIALOG_H
#define ZCRDVCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZCrdvControlDialog;
}

class ZCrdvControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZCrdvControlDialog(QWidget *parent);
    ~ZCrdvControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZCrdvControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZCRDVCONTROLDIALOG_H
