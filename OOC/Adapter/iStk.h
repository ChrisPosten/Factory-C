#ifdef ADAPTERTABLESINGLETON
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *<library that defines Object-Oriented essentials in C (Factory C)> *
 *                                                                   *
 * Copyright (C) <2023>  <Christopher Posten>                        *
 *                                                                   *
 * This program is free software: you can redistribute it and/or     *
 * modify it under the terms of the GNU General Public License       *
 * as published by the Free Software Foundation, either version 3    *
 * of the License, or any later version.                             *
 *                                                                   *
 * This program is distributed in the hope that it will be useful,   *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     *
 * GNU General Public License for more details.                      *
 *                                                                   *
 * You should have received a copy of the GNU General Public         *
 * License along with this program.  If not, see:                    *
 * <https://www.gnu.org/licenses/>.                                  *
 * Also: <https://www.fsf.org>  (Free Software Foundation).          *
 *                                                                   *
 * The author may be reached at: <christopher.posten@factoryc.org>.  *
 * or: <jb.bee250@gmail.com>                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef ISTK_H_INCLUDED
#define ISTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define Interface(Member)\
    \
        Interface ## Member

    # define InterfaceStk(Member)\
    \
        InterfaceStk ## Member

    # define InterfaceIter(Member)\
    \
        InterfaceIter ## Member

    hazardous typename(Stk)
        (Interface,

        hazardous typename(Iter)
            (Interface,

            hazardous typename(N)
                (Interface))) ;

    typedef Interface(Stk) iStk;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */
    volatile static iStk * volatile istk = 0;
                                // interface stack

    static bool         iPush(Interface);

    static Interface    iPop(void);

    static const Interface * iTop(void);

    static size_type    iHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param Interface                  *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool iPush

        (Interface interface)
    {//
        return Interface(Stk)

            (Push)(istk, interface);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return interface                 *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Interface iPop(void)
    {//
        return Interface(Stk)(Pop)(istk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief iTop() to check last       *
     * @return Interface                 *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Interface * iTop(void)
    {//
        return Interface(Stk)(Top)(istk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        iHeight(void)
    {
        return Stk(Interface)(Size)(istk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Interface, );

    explicit int Iter(Interface)(ConsoleOut)
    (const Iter(Interface) * self, ...){}

    explicit int Iter(Interface)(StandardOut)
    (const Iter(Interface) * self, ...){}

    explicit int Iter(Interface)(FileOut)
    (const Iter(Interface) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Interface, );

    explicit int Stk(Interface)(ConsoleIn)
    (Stk(Interface) * self, ...){}
    explicit int Stk(Interface)(ConsoleOut)
    (const Stk(Interface) * self, ...){}

    explicit int Stk(Interface)(StandardIn)
    (Stk(Interface) * self, ...){}
    explicit int Stk(Interface)(StandardOut)
    (const Stk(Interface) * self, ...){}

    explicit int Stk(Interface)(FileIn)
    (Stk(Interface) * self, ...){}
    explicit int Stk(Interface)(FileOut)
    (const Stk(Interface) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*  __              __    __
       /\_\            /\ \__/\ \  __
       \/_/_     ____ /\__  _\ \ \/ /
         /\ \   / ____\/_/\ \/\ \  /__
         \ \ \ /\_____`\ \ \ \/\ \  _ \_
          \ \_\\/\_____/  \ \__/\ \_\\__\
           \/_/ \/____/    \/_/  \/_//__/
     */
    /// /// /// /// /// /// /// /// /// ///
    #endif // ISTK_H_INCLUDED
                                     //CWP
#endif // ADAPTERTABLESINGLETON
