#ifndef DEFINETABLE_H_INCLUDED
#define DEFINETABLE_H_INCLUDED
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
     * @brief triplet table     key/val/end                      *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineTable(Key,Val,End)\
    \
        typedef struct Table(Key,Val,End)\
        {   Key     key;\
            Val     val;\
            End     end;\
        }Table(Key,Val,End);

    #define Table(Key,Val,End)     Key##Val##End##Table
              ///typename(Table)(Key, Val, End);
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
               ________        __      __
              /\___  __\      /\ \    /\ \
              \/__/\ \_/   __ \ \ \___\ \ \    ___
                  \ \ \  / __`\\ \  __`\ \ \  / __`\
                   \ \ \/\ \/\.\_ \ \/\ \ \ \/\  __/_
                    \ \_\ \___/\_\ \____/\ \_\ \_____\
                     \/_/\/__/\/_/\/___/  \/_/\/_____/

                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                             //CWP
#endif // DEFINETABLE_H_INCLUDED
