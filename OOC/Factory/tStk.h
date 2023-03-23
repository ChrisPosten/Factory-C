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
#ifndef TSTK_H_INCLUDED
#define TSTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define Type(Member)Type ## Member

    # define TypeStk(Member)\
    \
        TypeStk ## Member

    # define TypeIter(Member)\
    \
        TypeIter ## Member

    hazardous typename(Stk)(Type,

        hazardous typename(Iter)(Type,

            hazardous typename(N)(Type))) ;

    typedef TypeStk tStk ;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */

    volatile static tStk * volatile tstk = 0;
                                //heap container

    static bool         tPush(Type);

    static Type         tPop(void);

    static const Type * tTop(void);


    static size_type    tHeight(void);

    static int          tPrint(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param                            *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool tPush(Type obj)//
    {//
        return Type(Stk)(Push)(tstk, obj);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return automatic Type pair       *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Type tPop(void)
    {//
        return Type(Stk)(Pop)(tstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief hTop() to check last       *
     * @return Type pointer              *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Type * tTop(void)
    {//
        return Type(Stk)(Top)(tstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        tHeight(void)
    {
        return Stk(Type)(Size)(tstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Type, );

    explicit int Iter(Type)(ConsoleOut)
    (const Iter(Type) * self, ...){}

    explicit int Iter(Type)(StandardOut)
    (const Iter(Type) * self, ...){}

    explicit int Iter(Type)(FileOut)
    (const Iter(Type) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Type, );

    explicit int Stk(Type)(ConsoleIn)
    (Stk(Type) * self, ...){}
    explicit int Stk(Type)(ConsoleOut)
    (const Stk(Type) * self, ...){}

    explicit int Stk(Type)(StandardIn)
    (Stk(Type) * self, ...){}
    explicit int Stk(Type)(StandardOut)
    (const Stk(Type) * self, ...){}

    explicit int Stk(Type)(FileIn)
    (Stk(Type) * self, ...){}
    explicit int Stk(Type)(FileOut)
    (const Stk(Type) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*__                 __    __
     /\ \               /\ \__/\ \  __
     \ \ \___     ____ /\__  _\ \ \/ /
      \ \  __`\  / ____\/_/\ \/\ \  /__
       \ \ \/\ \/\_____`\ \ \ \/\ \  _ \_
        \ \_\ \_\/\_____/  \ \__/\ \_\\__\
         \/_/\/_/\/____/    \/_/  \/_//__/
    */
    /// /// /// /// /// /// /// /// /// ///
    #endif // HSTK_H_INCLUDED
                                     //CWP
#endif // FACTORYTABLESINGLETON
