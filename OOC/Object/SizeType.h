#ifndef SIZETYPE_H_INCLUDED
#define SIZETYPE_H_INCLUDED
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

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # if 0//!_STDDEF_H
        typedef __SIZE_TYPE__ size_t;
    # endif // 0

        typedef void * SizeType;

  //# if (defined)

    # ifdef size_type
        # undef size_type
        # define size_type size_t
    # else

        # define size_type size_t
    # endif

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        this could potentially (does) create an error
       returning an 8 byte unsigned long int
       as a 4 byte pointer and should then
       therefore have its implementations
       that use this generic SizeType return
       a pointer to the size type variable
       instead.

       (that could mean allocating
       off-the-stack memory for a stack (Stk)
       that doesn't use a sizetype variable)
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        this macro is used to hide the SizeType
       used for data structures so, what this
       macro is defined as at the time data
       structures are implemented is what data
       type is used for the SizeType of a data
       structure eg: Vector(int) , ...

       #undef size_type
       #define size_type unsigned short

       define(Vector)(int);   (old)
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
        #undef  size_type
        #define size_type unsigned int
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        look inside template.h for the code display case that
       contains the typename example for the size_type re-def
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
        size_type size_t:
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

                                                             //CWP
#endif // SIZETYPE_H_INCLUDED
