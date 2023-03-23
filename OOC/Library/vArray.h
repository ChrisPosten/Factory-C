#ifndef VARRAY_H_INCLUDED
#define VARRAY_H_INCLUDED
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
  #if 0
    #include "../Builder/class.h"
  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                                                     || *
     * @brief                   OO Array                         *
     *                                                           *
     *                         constructor                       *
     *                                                           *
     * @param        self           =       this          ,      *
     *               typesize       =       sizeof(type)  ,      *
     *               size           =                     ,      *
     *               dtor           =                            *
     *                                                           *
     * @return      instance of memory                           *
     *                                                           *
     * TODO:        write your own typedef for front-end:        *
     *                                                           *
     *                  typedef int intArray;                    *
     *                                                           *
     *                  allows: vArray(int)*                     *
     *                                                           *
     *              or:                                          *
     *                                                           *
     *                  typedef int * intArray;                  *
     *                                                           *
     *                  allows: vArray(int)  ...                 *
     *                                                           *
     * TODO:        write your own destructor                    *
     *                                                           *
     * size_type should be defined/redefined as VARRAY is        *
     * defined and before vArray.h gets included    X            *
     *                                                           *
     * @version (2021 - 03 - 09)                                 *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
        DONT FORGET THAT THIS IS NOT A PART OF MY DEFINITION OF

        OBJECT-ORIENTED PROGRAMMING BUT A PART OF MY DEFINITION

        OF STACK-ORIENTED PROGRAMMING.  OBJECT - ARRAY - STACK
     */
    #if 0
       # define vArray(Member)vArray ## Member
        typedef struct vArray vArray;


        typedef struct vArray(VirtualTable)
        {   struct class (VirtualTable) base;
        }vArray(VirtualTable);


        struct vArray
        {   class base;  //dtor (old)
            size_t size;   };


        public vArray * vArrayInit( vArray *, dtorPtr, size_t, size_t );

        public cstring vArrayWhat();


        explicit cstring vArrayWhat() { return "vArray"; }


        static vArray(VirtualTable)

            vArray(Interface) =
        {
            {
                &vArrayWhat,

                &vArrayInit,

                &class(Dtor)
                               }
                                   };


        explicit vArray * vArrayInit( vArray * self, dtorPtr dtor,

            size_t type_size, size_t size )
        {
            if( !self ){ return nullptr; }

            self = class(Init)( self, 2, dtor,

                sizeof(size_t) + type_size * size);

            if( !self ){ return nullptr; }

            ((vArray*)self)->size = size;    //

            return self; }

    #endif // CONCRETE_CLASS_REIMPLEMENTED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    ///vArray * a = new(vArray)(this, nullptr, sizeof(type), size);

        ///vArr(a, type)[i] = x;

        ///printf( "%?", vArr(a, type)[i] );

    ///delete(a);
  #if 0
    #define vArr(self, type)   ( (type*)( self + sizeof(vArray) ) )
  #endif // 0
    ///typedef int intArray; //vArray(int) * = ...   X

        //vArray(int)       =    int##Array *

        //vArray(int)*      =    int##Array

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                             //CWJB
#endif // VARRAY_H_INCLUDED
