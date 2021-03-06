/*
    Copyright (C) Alexander Roper

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SCRIPTRESOURCEITEM_H
#define SCRIPTRESOURCEITEM_H

#include "resourceitem.h"

class ScriptResourceItem : public ResourceItem
{
    Q_OBJECT

public:
    ScriptResourceItem();

    void load(QJsonObject object) override;
    QString filename() const override;

    QString scriptFilename() const;

    QString code() const;
    void setCode(QString code);

private:
    QString m_code;
};

#endif // SCRIPTRESOURCEITEM_H
