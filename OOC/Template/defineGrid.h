#ifndef DEFINEGRID_H_INCLUDED
#define DEFINEGRID_H_INCLUDED
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
     * @brief quadtriplet table (grid)    key/val/col/end        *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineGrid(Key,Val,Col,End)\
    \
        typedef struct Grid(Key,Val,Col,End)\
        {   Key     key;\
            Val     val;\
            Col     col;\
            End     end;\
        }Grid(Key,Val,Col,End);

    #define Grid(Key,Val,Col,End)     Key##Val##Col##End##Grid
              ///typename(Grid)(Key, Val, Col, End);
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
                  _________         __      __
                 /\  ______\       /\_\    /\ \
                 \ \ \_____/_  ____\/_/_   \_\ \
                  \ \ \ /\__ \/\  _`\/\ \  / __`\
                   \ \ \\/__\ \ \ \_/\ \ \/\ \/\.\_
                    \ \________\ \_\  \ \_\ \___/\_\
                     \/________/\/_/   \/_/\/__/\/_/

                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                             //CWP
#endif // DEFINEGRID_H_INCLUDED
