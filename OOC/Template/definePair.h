#ifndef DEFINEPAIR_H_INCLUDED
#define DEFINEPAIR_H_INCLUDED
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
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           *
     * @brief key/value map pair                                 *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define definePair(Key,Value)\
    \
        typedef struct Pair(Key,Value)\
        {   Key    key;\
            Value  val;\
        }Pair(Key,Value);

    #define Pair(Key,Value) Key##Value##Pair

                ///typename(Pair)(Key, Value) ;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
                    ______         __
                   /\  __ `\      /\_\
                   \ \ \_/\ \ ___ \/_/_  ____
                    \ \  ___// __`\ /\ \/\  _`\
                     \ \ \_//\ \/\.\_ \ \ \ \_/
                      \ \_\ \ \___/\_\ \_\ \_\
                       \/_/  \/__/\/_/\/_/\/_/
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                             //CWP
#endif // DEFINEPAIR_H_INCLUDED
