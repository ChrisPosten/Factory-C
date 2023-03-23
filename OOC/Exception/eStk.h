#ifdef EXCEPTION
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
#ifndef ESTK_H_INCLUDED
#define ESTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define Except(Member)Except ## Member

    # define ExceptStk(Member)\
    \
        ExceptStk ## Member

    # define ExceptIter(Member)\
    \
        ExceptIter ## Member

    hazardous typename(Stk)(Except,

        hazardous typename(Iter)(Except,

            hazardous typename(N)(Except))) ;

    typedef ExceptStk eStk ;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */

    volatile static eStk * volatile estk = 0;
                                //except

    static bool         ePush(Except);

    static Except         ePop(void);

    static const Except * eTop(void);

    static size_type    eHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param                            *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool ePush(Except obj)//
    {//
        return Except(Stk)(Push)(estk, obj);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return automatic Except pair       *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Except ePop(void)
    {//
        return Except(Stk)(Pop)(estk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief eTop() to check last       *
     * @return Except pointer            *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Except * eTop(void)
    {//
        return Except(Stk)(Top)(estk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        eHeight(void)
    {
        return Stk(Except)(Size)(estk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Except, );

    explicit int Iter(Except)(ConsoleOut)
    (const Iter(Except) * self, ...){}

    explicit int Iter(Except)(StandardOut)
    (const Iter(Except) * self, ...){}

    explicit int Iter(Except)(FileOut)
    (const Iter(Except) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Except, );

    explicit int Stk(Except)(ConsoleIn)
    (Stk(Except) * self, ...){}
    explicit int Stk(Except)(ConsoleOut)
    (const Stk(Except) * self, ...){}

    explicit int Stk(Except)(StandardIn)
    (Stk(Except) * self, ...){}
    explicit int Stk(Except)(StandardOut)
    (const Stk(Except) * self, ...){}

    explicit int Stk(Except)(FileIn)
    (Stk(Except) * self, ...){}
    explicit int Stk(Except)(FileOut)
    (const Stk(Except) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*                  __    __
                       /\ \__/\ \  __
         ___     ____ /\__  _\ \ \/ /
        / __`\  / ____\/_/\ \/\ \  /__
       /\  __/_/\_____`\ \ \ \/\ \  _ \_
       \ \_____\/\_____/  \ \__/\ \_\\__\
        \/_____/\/____/    \/_/  \/_//__/
    */
    /// /// /// /// /// /// /// /// /// ///
    #endif // ESTK_H_INCLUDED
                                     //CWP
#endif // EXCEPTION
