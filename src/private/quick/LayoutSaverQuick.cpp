/*
  This file is part of KDDockWidgets.

  Copyright (C) 2018-2020 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
  Author: Sérgio Martins <sergio.martins@kdab.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "LayoutSaver.h"

// TODO: Temporary, until LayoutSaver.cpp is ported to QtQuick

using namespace KDDockWidgets;

LayoutSaver::LayoutSaver() : d(nullptr) {}
LayoutSaver::~LayoutSaver() {}

bool LayoutSaver::saveToDisk() { return false; }
bool LayoutSaver::restoreFromDisk() { return false; }

bool LayoutSaver::restoreInProgress() { return false; }
