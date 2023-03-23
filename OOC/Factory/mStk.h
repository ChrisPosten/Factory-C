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
    #ifndef MSTK_H_INCLUDED
    #define MSTK_H_INCLUDED

    #include "../Template/defineStk.h"

    /// /// /// /// /// /// /// /// /// ///

    #undef size_type
    #define size_type size_t

    # define methPtr(Member)methPtr ## Member

    # define Map(Member)Map ## Member


    # define methPtrStk(Member)\
    \
        methPtrStk ## Member

    # define methPtrIter(Member)\
    \
        methPtrIter ## Member


    # define MapStk(Member)\
    \
        MapStk ## Member

    # define MapIter(Member)\
    \
        MapIter ## Member

    hazardous typename(Stk)(Map,

        hazardous typename(Iter)(Map,

            hazardous typename(N)(Map)));

    typedef MapStk methPtrStk, mStk ;

    /// /// /// /// /// /// /// /// /// ///
    /*            central area           */
    volatile static mStk * volatile mstk = 0;
                                //factory method

    static bool mPush(Map);

    static Map mPop(void);

    static const Map * mTop(void);

    static size_type mHeight(void);

    /// /// /// /// /// /// /// /// /// ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    ///                                 ///
    /// /// /// /// /// /// /// /// /// ///
    /*             implement             */
    /** * * * * * * * * * * * * * * * * **
     * @brief spare list                 *
     * @param factory method(from ftable)*
     *         - - DONT TOUCH - -        *
     * @return void                      *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit bool mPush(Map method)
    {
        return Map(Stk)(Push)(mstk, method) ;
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief perform error checking     *
     * - -consider this being volatile- -*
     * @return object                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit Map mPop(void)
    {
        return Map(Stk)(Pop)(mstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief what(mTop()) to check last *
     *        object allocated (or not)  *
     * @return object                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit const Map * mTop(void)
    {
        return Map(Stk)(Top)(mstk);
    }
    /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * **
     * @brief get the height             *
     *                                   *
     * @return height                    *
     ** * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// ///
    explicit size_type        mHeight(void)
    {
        return Stk(Map)(Size)(mstk);
    }
    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryIter)(Map, );

    explicit int Iter(Map)(ConsoleOut)
    (const Iter(Map) * self, ...){}

    explicit int Iter(Map)(StandardOut)
    (const Iter(Map) * self, ...){}

    explicit int Iter(Map)(FileOut)
    (const Iter(Map) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///

    typename(FactoryStk)(Map, );

    explicit int Stk(Map)(ConsoleIn)
    (Stk(Map) * self, ...){}
    explicit int Stk(Map)(ConsoleOut)
    (const Stk(Map) * self, ...){}

    explicit int Stk(Map)(StandardIn)
    (Stk(Map) * self, ...){}
    explicit int Stk(Map)(StandardOut)
    (const Stk(Map) * self, ...){}

    explicit int Stk(Map)(FileIn)
    (Stk(Map) * self, ...){}
    explicit int Stk(Map)(FileOut)
    (const Stk(Map) * self, ...){}

    /// /// /// /// /// /// /// /// /// ///
    /*                    __    __
                         /\ \__/\ \  __
       _______     ____ /\__  _\ \ \/ /
      / __  __`\  / ____\/_/\ \/\ \  /__
     /\ \/\ \/\ \/\_____`\ \ \ \/\ \  _ \_
     \ \_\ \_\ \_\/\_____/  \ \__/\ \_\\__\
      \/_/\/_/\/_/\/____/    \/_/  \/_//__/
     */
    /// /// /// /// /// /// /// /// /// ///
    #endif // MSTK_H_INCLUDED
                                     //CWP
#endif // FACTORYTABLESINGLETON
