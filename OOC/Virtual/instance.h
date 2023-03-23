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
    #ifndef INSTANCE_H_INCLUDED //
    #define INSTANCE_H_INCLUDED //
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                 THE INSTANCE METHOD                 || *
     *                                                           *
     *             by Willy (09/??/2022)                         *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         instance                          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1) ask the vtable if its an instance passed         *
     *          and return its class vtable if it is.            *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief               !instance(obj) ;                     *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         instance                          */
    #define defineInstance(v, vtable)\
    \
      /*noexcept explicit Class(VirtualTable) * */ v##Table(Instance)\
    \
            ( const Object * self )\
        {\
            Pair(Class,ClassVirtualTable) pair = { self, 0 },\
            * p = ((Container(VirtualTable)*)\
                    &VirtualTable(Interface)) -> at( vtable, pair );\
    \
            if( !p || !p->key )\
            {\
             return 0;\
            }\
            return p->val;\
        }

    noexcept explicit class(VirtualTable) * typename(Instance)(v,vtable);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                         !is_object( vector ) ;
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define  is_object  instance

    #endif // INSTANCE_H_INCLUDED
                                            //CWP
#endif // VIRTUALTABLE
