/*
    Copyright (C)  Alexander Roper

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

#ifndef HTML5OPTIONSRESOURCEITEM_H
#define HTML5OPTIONSRESOURCEITEM_H

#include "resourceitem.h"

class HTML5OptionsResourceItem : public ResourceItem
{
public:
    HTML5OptionsResourceItem();

    void load(QJsonObject object) override;
    QString filename() const override;
};

#endif // HTML5OPTIONSRESOURCEITEM_H
