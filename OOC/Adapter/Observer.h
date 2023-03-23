#ifndef OBSERVER_H_INCLUDED
#define OBSERVER_H_INCLUDED
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
    #include "Subject.h"

    # define Observer(Member)Observer ## Member
    # define ObserverVirtualTable(Member)ObserverVirtualTable ## Member
    static cstring Observer(VirtualTable)(Type)(void);
    /**+---------------------------------+
     * @brief Observer interface         |
     * +---------------------------------+
     *///HELPER INTERFACE TO THE PRIMARY (BASE) INTERFACE (OBSERVER C)
    typedef struct Observer Observer;


    typedef struct Observer (VirtualTable)
    {   struct class (VirtualTable) base; // = {0,0,0} (0,1,2)

        void (*update)(Observer *, ... ); // = 0           (3)
                                                  //
    } Observer (VirtualTable);                   //
                                                //

    struct Observer
    {   struct class base; // = {}
    };
  explicit
    cstring Observer(VirtualTable)(Type)(void)
    { return "Observer(VirtualTable)"; }

  #if 0
    static ObserverVirtualTable ObserverInterface = {{0,0,0},0};
  #endif // 0
#endif // OBSERVER
