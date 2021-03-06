/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      FLEXRAY_ETAS_ES520.h
 * \brief     Contains derived class for CWinApp application
 * \author    Arunkumar Karri
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * Contains derived class for CWinApp application
 */

#pragma once

/**
 * See FLEXRAY_ETAS_ES520.cpp for the implementation of this class
 */
class CFLEXRAY_ETAS_BOA : public CWinApp
{
public:
    CFLEXRAY_ETAS_BOA();

    // Overrides
public:
    virtual BOOL InitInstance();

    DECLARE_MESSAGE_MAP()
};
