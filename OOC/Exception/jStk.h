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
#ifndef JSTK_H_INCLUDED
#define JSTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define Jump(Member)Jump ## Member

    # define JumpStk(Member)\
    \
        JumpStk ## Member

    # define JumpIter(Member)\
    \
        JumpIter ## Member

    hazardous typename(Stk)(Jump,

        hazardous typename(Iter)(Jump,

            hazardous typename(N)(Jump))) ;

    typedef JumpStk jStk ;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */
    volatile static jStk * volatile jstk = 0;
                                //jump

    static bool         jPush(Jump);

    static Jump         jPop(void);

    static const Jump * jTop(void);

    static size_type    jHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param                            *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool jPush(Jump pair)//struct pair = {}
    {//
        return Jump(Stk)(Push)(jstk, pair);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return automatic Jump pair       *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Jump jPop(void)
    {//
        return Jump(Stk)(Pop)(jstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief jTop() to check last       *
     * @return Jump pointer              *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Jump * jTop(void)
    {//
        return Jump(Stk)(Top)(jstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        jHeight(void)
    {
        return Stk(Jump)(Size)(jstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Jump, );

    explicit int Iter(Jump)(ConsoleOut)
    (const Iter(Jump) * self, ...){}

    explicit int Iter(Jump)(StandardOut)
    (const Iter(Jump) * self, ...){}

    explicit int Iter(Jump)(FileOut)
    (const Iter(Jump) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Jump, );

    explicit int Stk(Jump)(ConsoleIn)
    (Stk(Jump) * self, ...){}
    explicit int Stk(Jump)(ConsoleOut)
    (const Stk(Jump) * self, ...){}

    explicit int Stk(Jump)(StandardIn)
    (Stk(Jump) * self, ...){}
    explicit int Stk(Jump)(StandardOut)
    (const Stk(Jump) * self, ...){}

    explicit int Stk(Jump)(FileIn)
    (Stk(Jump) * self, ...){}
    explicit int Stk(Jump)(FileOut)
    (const Stk(Jump) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*  __             __    __
       /\_\           /\ \__/\ \  __
       \/_/_    ____ /\__  _\ \ \/ /
         /\ \  / ____\/_/\ \/\ \  /__
         \ \ \/\_____`\ \ \ \/\ \  _ \_
          \ \ \/\_____/  \ \__/\ \_\\__\
          _\ \ \/____/    \/_/  \/_//__/
         /\ \_\ \
         \ \____/
          \/___/
    */
    /// /// /// /// /// /// /// /// /// ///
    #endif // JSTK_H_INCLUDED
                                     //CWP
#endif // EXCEPTION
