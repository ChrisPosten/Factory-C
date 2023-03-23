#ifdef FACTORYTABLESINGLETON
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
#ifndef PSTK_H_INCLUDED
#define PSTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define Pass(Member)\
    \
        Pass ## Member

    # define PassStk(Member)\
    \
        PassStk ## Member

    # define PassIter(Member)\
    \
        PassIter ## Member

    hazardous typename(Stk)(Pass,

        hazardous typename(Iter)(Pass,

            hazardous typename(N)(Pass))) ;

    typedef Pass(Stk) pStk;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */
    volatile static pStk * volatile pstk = 0;
                                //pass stack

    static bool         pPush(Pass);

    static Pass         pPop(void);

    static const Pass * pTop(void);

    static size_type    pHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param Class(VirtualPass)        *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool pPush

        (Pass pass)
    {//
        return PassStk

            (Push)(pstk, pass);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return pass                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Pass pPop(void)
    {//
        return PassStk(Pop)(pstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief pTop() to check last       *
     * @return Pass                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Pass * pTop(void)
    {//
        return PassStk(Top)(pstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        pHeight(void)
    {
        return Stk(Pass)(Size)(pstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Pass, );

    explicit int Iter(Pass)(ConsoleOut)
    (const Iter(Pass) * self, ...){}

    explicit int Iter(Pass)(StandardOut)
    (const Iter(Pass) * self, ...){}

    explicit int Iter(Pass)(FileOut)
    (const Iter(Pass) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Pass, );

    explicit int Stk(Pass)(ConsoleIn)
    (Stk(Pass) * self, ...){}
    explicit int Stk(Pass)(ConsoleOut)
    (const Stk(Pass) * self, ...){}

    explicit int Stk(Pass)(StandardIn)
    (Stk(Pass) * self, ...){}
    explicit int Stk(Pass)(StandardOut)
    (const Stk(Pass) * self, ...){}

    explicit int Stk(Pass)(FileIn)
    (Stk(Pass) * self, ...){}
    explicit int Stk(Pass)(FileOut)
    (const Stk(Pass) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*                 __    __
                      /\ \__/\ \  __
        ___     ____ /\__  _\ \ \/ /
       / __`\  / ____\/_/\ \/\ \  /__
      /\ \/\ \/\_____`\ \ \ \/\ \  _ \_
      \ \  __/\/\_____/  \ \__/\ \_\\__\
       \ \ \/  \/____/    \/_/  \/_//__/
        \ \_\
         \/_/
     */
    /// /// /// /// /// /// /// /// /// ///
    #endif // PSTK_H_INCLUDED
                                     //CWP
#endif // COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
