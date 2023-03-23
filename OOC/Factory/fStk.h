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
#ifndef FSTK_H_INCLUDED
#define FSTK_H_INCLUDED

    # define Flag(Member)Flag ## Member

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define FlagStk(Member)\
    \
        FlagStk ## Member

    # define FlagIter(Member)\
    \
        FlagIter ## Member

    hazardous typename(Stk)(Flag,

        hazardous typename(Iter)(Flag,

            hazardous typename(N)(Flag))) ;

    typedef FlagStk fStk ;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */
    volatile static fStk * volatile fstk = 0;
                                //flag

    static bool         fPush(Flag);

    static Flag         fPop(void);

    static const Flag * fTop(void);

    static size_type    fHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param                            *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool fPush(Flag object)//
    {//throw?
        return Flag(Stk)(Push)(fstk, object);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return object oriented bool(Flag)*
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Flag fPop(void)
    {//
        return Flag(Stk)(Pop)(fstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief fTop() to check last       *
     * @return Flag pointer              *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Flag * fTop(void)
    {//
        return Flag(Stk)(Top)(fstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        fHeight(void)
    {
        return Stk(Flag)(Size)(fstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Flag, );

    explicit int Iter(Flag)(ConsoleOut)
    (const Iter(Flag) * self, ...){}

    explicit int Iter(Flag)(StandardOut)
    (const Iter(Flag) * self, ...){}

    explicit int Iter(Flag)(FileOut)
    (const Iter(Flag) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Flag, );

    explicit int Stk(Flag)(ConsoleIn)
    (Stk(Flag) * self, ...){}
    explicit int Stk(Flag)(ConsoleOut)
    (const Stk(Flag) * self, ...){}

    explicit int Stk(Flag)(StandardIn)
    (Stk(Flag) * self, ...){}
    explicit int Stk(Flag)(StandardOut)
    (const Stk(Flag) * self, ...){}

    explicit int Stk(Flag)(FileIn)
    (Stk(Flag) * self, ...){}
    explicit int Stk(Flag)(FileOut)
    (const Stk(Flag) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*  _____           __    __
       /  ___\         /\ \__/\ \  __
      /\ \___/   ____ /\__  _\ \ \/ /
      \ \  _\   / ____\/_/\ \/\ \  /__
       \ \ \/  /\_____`\ \ \ \/\ \  _ \_
        \ \_\  \/\_____/  \ \__/\ \_\\__\
         \/_/   \/____/    \/_/  \/_//__/
     */
    /// /// /// /// /// /// /// /// /// ///
    #endif // FSTK_H_INCLUDED
                                      //CWP
#endif // FACTORYTABLESINGLETON
