/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the test suite of Qt for Python.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef TYPEDEF_H
#define TYPEDEF_H

#include "libminimalmacros.h"

#include <vector>

// Test wrapping of a typedef
using MyArrayInt = std::vector<int>;

LIBMINIMAL_API bool arrayFuncInt(std::vector<int> a);
LIBMINIMAL_API bool arrayFuncIntTypedef(MyArrayInt a);

LIBMINIMAL_API std::vector<int> arrayFuncIntReturn(int size);
LIBMINIMAL_API MyArrayInt arrayFuncIntReturnTypedef(int size);

// Test wrapping of a typedef of a typedef
using MyArray = MyArrayInt;

LIBMINIMAL_API bool arrayFunc(std::vector<int> a);
LIBMINIMAL_API bool arrayFuncTypedef(MyArray a);

LIBMINIMAL_API std::vector<int> arrayFuncReturn(int size);
LIBMINIMAL_API MyArray arrayFuncReturnTypedef(int size);

#endif
