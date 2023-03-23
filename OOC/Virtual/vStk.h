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
    #ifndef VSTK_H_INCLUDED
    #define VSTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define ClassStk(Member)\
    \
        ClassStk ## Member

    # define ClassIter(Member)\
    \
        ClassIter ## Member

    hazardous typename(Stk)(Class,

        hazardous typename(Iter)(Class,

            hazardous typename(N)(Class))) ;

    typedef ClassStk vStk;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */
  #if 0
    volatile static vStk * volatile vstk = 0;
                                //object stack
  #endif // VTABLE_H_DECLARES_FOR_TYPEID
    static bool             vPush(Object *);

    static Object *         vPop(void);

    static const Object * * vTop(void);

    static size_type        vHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * solution for when: new()(new()()) *
     * - - keep a spare list of ptrs - - *
     * @param Class object (from vtable) *
     *         - - DONT TOUCH - -        *
     * @return void                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool vPush(Object * object)
    {
        return Class(Stk)(Push)(vstk, object);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     *        self = vPop() in your ctor *
     *        before if(!self){return 0;}*
     *        for when new(Class)(new...)*
     *        (or not)                   *
     * - -consider this being volatile- -*
     * @return object                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Object * vPop(void)
    {
        return Class(Stk)(Pop)(vstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief typeid(*vTop()) to check last*
     *        object allocated (or not)  *
     * @return object                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Object * * vTop(void)
    {
        if(!vstk){return 0;}//startup case

        return Class(Stk)(Top)(vstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        vHeight(void)
    {
        return Stk(Class)(Size)(vstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Class, );

    explicit int Iter(Class)(ConsoleOut)
    (const Iter(Class) * self, ...){}

    explicit int Iter(Class)(StandardOut)
    (const Iter(Class) * self, ...){}

    explicit int Iter(Class)(FileOut)
    (const Iter(Class) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Class, );

    explicit int Stk(Class)(ConsoleIn)
    (Stk(Class) * self, ...){}
    explicit int Stk(Class)(ConsoleOut)
    (const Stk(Class) * self, ...){}

    explicit int Stk(Class)(StandardIn)
    (Stk(Class) * self, ...){}
    explicit int Stk(Class)(StandardOut)
    (const Stk(Class) * self, ...){}

    explicit int Stk(Class)(FileIn)
    (Stk(Class) * self, ...){}
    explicit int Stk(Class)(FileOut)
    (const Stk(Class) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*                 __    __
                      /\ \__/\ \  __
       __  __   ____ /\__  _\ \ \/ /
      /\ \/\ \ / ____\/_/\ \/\ \  /__
      \ \ \/ //\_____`\ \ \ \/\ \  _ \_
       \ \__/ \/\_____/  \ \__/\ \_\\__\
        \/_/   \/____/    \/_/  \/_//__/
     */
    /// /// /// /// /// /// /// /// /// ///
    #endif // VSTK_H_INCLUDED
                                     //CWP
#endif // VIRTUALTABLESINGLETON
