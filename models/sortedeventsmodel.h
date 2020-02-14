/*
    Copyright (C) 2018  Alexander Roper

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

#ifndef SORTEDEVENTSMODEL_H
#define SORTEDEVENTSMODEL_H

#include <QSortFilterProxyModel>

class SortedEventsModel : public QSortFilterProxyModel
{
    Q_OBJECT

public:
    explicit SortedEventsModel(QObject *parent = nullptr);

protected:
    bool lessThan(const QModelIndex & source_left, const QModelIndex & source_right) const override;
};

#endif // SORTEDEVENTSMODEL_H
