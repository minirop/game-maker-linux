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

#include "graphicslayer.h"
#include "graphicsinstance.h"

GraphicsLayer::GraphicsLayer()
{
    setEnabled(false);
}

QRectF GraphicsLayer::boundingRect() const
{
    return QRectF();
}

void GraphicsLayer::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
{
    Q_UNUSED(painter)
    Q_UNUSED(option)
    Q_UNUSED(widget)
}

void GraphicsLayer::selectItem(ObjectInstance * instance)
{
    auto children = childItems();
    for (auto & child : children)
    {
        auto pInstance = static_cast<GraphicsInstance*>(child);
        if (pInstance->objectInstance() == instance)
        {
            pInstance->setSelected(true);
        }
        else
        {
            pInstance->setSelected(false);
        }
    }
}

void GraphicsLayer::setElementVisible(ObjectInstance * instance, bool visible)
{
    auto children = childItems();
    for (auto & child : children)
    {
        auto pInstance = static_cast<GraphicsInstance*>(child);
        if (pInstance->objectInstance() == instance)
        {
            pInstance->setVisible(visible);
            break;
        }
    }
    update();
}

bool GraphicsLayer::isElementVisible(ObjectInstance * instance) const
{
    auto children = childItems();
    for (auto & child : children)
    {
        auto pInstance = static_cast<GraphicsInstance*>(child);
        if (pInstance->objectInstance() == instance)
        {
            return pInstance->isVisible();
        }
    }
    return false;
}

void GraphicsLayer::setCurrent(bool b)
{
    setEnabled(b);

    if (b)
        setOpacity(1);
    else
        setOpacity(0.5);
}
