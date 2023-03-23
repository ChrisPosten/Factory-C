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
    #ifndef NEW_H_INCLUDED
    #define NEW_H_INCLUDED
    #define OBJECTFACTORY
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1) write an add function for the vtable             *
     *          to take memory from an object, init              *
     *          and return the constructor's pointer.            *
     *                                                           *
     *       2) an extra front-end pointer named this can        *
     *          pass memory from the vtable into the ctor        *
     *                                                           *
     *       3) write the constructor to return memory           *
     *          finishing new in a statement                     *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief         new(Class)(this, ...);                     *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define new(Class)(Class*)VirtualTable(Interface).insert(\
    \
        vtable, vstk, (Class*)allocate(sizeof(Class)),\
    \
        & Class(Interface), & Class(Init) ) // ()

    typedef Object *(*(*new)(void))(Object *, ...) ;//cast

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

           //write a way to find any objects init
           //function that the ctor can point to
        /// & Class##Init, & Class##Interface
           //write a way to undefine then redefine
           //what vtable is used
           //...
        /// & Class##Init, & Class##Dtor, & Class##Type

        //new(Class) is a factory front end or a factory

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *   the constructor is the pointer thats used to call the   *
     *   initializer function from new(Class).                   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
         Vector(int) * vector = new (Vector(int))(this, ...) ;
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #endif // NEW_H_INCLUDED
                                                    //CWP
#endif // VIRTUALTABLESINGLETON
