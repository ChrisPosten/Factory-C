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
#ifndef HSTK_H_INCLUDED
#define HSTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t
  #if 0
    # define Heap(Member)Heap ## Member//namespace
  #else
    # define Heap(type) type##Heap//template
  #endif // NEED

    /* note: this one is what works i believe
     */
    # define NHeap(Member)\
    \
        NHeap ## Member

    # define StkHeap(Member)\
    \
        StkHeap ## Member

    # define IterHeap(Member)\
    \
        IterHeap ## Member

    /* old one doesn't get used (i believe)
     */
  #if 0
    # define HeapN(Member)\
    \
        HeapN ## Member

    # define HeapStk(Member)\
    \
        HeapStk ## Member

    # define HeapIter(Member)\
    \
        HeapIter ## Member
  #endif // 0
    hazardous typename(Stk)(Heap,

        hazardous typename(Iter)(Heap,

            hazardous typename(N)(Heap))) ;

    typedef Heap(Stk) hStk ;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */

    volatile static hStk * volatile hstk = 0;
                                //heap container

    static bool         hPush(Heap);

    static Heap         hPop(void);

    static const Heap * hTop(void);

    static size_type    hHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * - - keep a spare list of ptrs - - *
     * @param                            *
     * @return bool                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool hPush(Heap obj)//
    {//
        return Heap(Stk)(Push)(hstk, obj);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * @return automatic Heap pair       *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Heap hPop(void)
    {//
        return Heap(Stk)(Pop)(hstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief hTop() to check last       *
     * @return Heap pointer              *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Heap * hTop(void)
    {//
        return Heap(Stk)(Top)(hstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        hHeight(void)
    {
        return Stk(Heap)(Size)(hstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Heap, );

    explicit int Iter(Heap)(ConsoleOut)
    (const Iter(Heap) * self, ...){}

    explicit int Iter(Heap)(StandardOut)
    (const Iter(Heap) * self, ...){}

    explicit int Iter(Heap)(FileOut)
    (const Iter(Heap) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Heap, );

    explicit int Stk(Heap)(ConsoleIn)
    (Stk(Heap) * self, ...){}
    explicit int Stk(Heap)(ConsoleOut)
    (const Stk(Heap) * self, ...){}

    explicit int Stk(Heap)(StandardIn)
    (Stk(Heap) * self, ...){}
    explicit int Stk(Heap)(StandardOut)
    (const Stk(Heap) * self, ...){}

    explicit int Stk(Heap)(FileIn)
    (Stk(Heap) * self, ...){}
    explicit int Stk(Heap)(FileOut)
    (const Stk(Heap) * self, ...){}

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
