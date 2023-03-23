#ifdef VIRTUALTABLESINGLETON
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
#ifndef CSTK_H_INCLUDED
#define CSTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define ControlFactory(Member)\
    \
        ControlFactory ## Member

    # define ControlFactoryStk(Member)\
    \
        ControlFactoryStk ## Member

    # define ControlFactoryIter(Member)\
    \
        ControlFactoryIter ## Member

    typedef Object * ControlFactory;

    hazardous typename(Stk)
        (ControlFactory,

        hazardous typename(Iter)
            (ControlFactory,

            hazardous typename(N)
                (ControlFactory))) ;

    typedef ControlFactory(Stk) cStk;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */
    volatile static cStk * volatile cstk = 0;
                                //control factory

    static bool         cPush(ControlFactory);

    static ControlFactory cPop(void);

    static const ControlFactory * cTop(void);

    static size_type    cHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param ControlFactory             *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool cPush (ControlFactory c)
    {//
        return ControlFactory(Stk)

            (Push)(cstk, c);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return pass                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit ControlFactory cPop(void)
    {//
        return ControlFactory(Stk)(Pop)(cstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief cTop() to check last       *
     * @return ControlFactory            *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const ControlFactory * cTop(void)
    {//
        return ControlFactory(Stk)(Top)(cstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        cHeight(void)
    {
        return Stk(ControlFactory)(Size)(cstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(ControlFactory, );

    explicit int Iter(ControlFactory)(ConsoleOut)
    (const Iter(ControlFactory) * self, ...){}

    explicit int Iter(ControlFactory)(StandardOut)
    (const Iter(ControlFactory) * self, ...){}

    explicit int Iter(ControlFactory)(FileOut)
    (const Iter(ControlFactory) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(ControlFactory, );

    explicit int Stk(ControlFactory)(ConsoleIn)
    (Stk(ControlFactory) * self, ...){}
    explicit int Stk(ControlFactory)(ConsoleOut)
    (const Stk(ControlFactory) * self, ...){}

    explicit int Stk(ControlFactory)(StandardIn)
    (Stk(ControlFactory) * self, ...){}
    explicit int Stk(ControlFactory)(StandardOut)
    (const Stk(ControlFactory) * self, ...){}

    explicit int Stk(ControlFactory)(FileIn)
    (Stk(ControlFactory) * self, ...){}
    explicit int Stk(ControlFactory)(FileOut)
    (const Stk(ControlFactory) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*                 __    __
                      /\ \__/\ \  __
         ___     ____/\__  _\ \ \/ /
       / ___\  / ____\/_/\ \/\ \  /__
      /\ \__/_/\_____`\ \ \ \/\ \  _ \_
      \ \_____\/\_____/  \ \__/\ \_\\__\
       \/_____/\/____/    \/_/  \/_//__/
     */
    /// /// /// /// /// /// /// /// /// ///
    #endif // CSTK_H_INCLUDED
                                     //CWP
#endif // COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
