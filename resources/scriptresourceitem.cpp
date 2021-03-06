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

#include "scriptresourceitem.h"
#include "utils/utils.h"

ScriptResourceItem::ScriptResourceItem()
    : ResourceItem { ResourceType::Script }
{
}

void ScriptResourceItem::load(QJsonObject object)
{
    setName(object["name"].toString());

    auto filepath = QString("%1/%2").arg(GameSettings::rootPath(), scriptFilename());
    setCode(Utils::readFile(filepath));
}

QString ScriptResourceItem::filename() const
{
    return QString("scripts/%1/%1.yy").arg(name());
}

QString ScriptResourceItem::scriptFilename() const
{
    return QString("scripts/%1/%1.gml").arg(name());
}

QString ScriptResourceItem::code() const
{
    return m_code;
}

void ScriptResourceItem::setCode(QString code)
{
    m_code = code;
}
