#ifndef CONTAINER_H_INCLUDED
#define CONTAINER_H_INCLUDED
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
    #include "../Object/Object.h"

    #include "../Object/SizeType.h"

    #include "../Object/Iterator.h"


    # define Container(Member)Container ## Member

    # define ContainerVirtualTable(Member)ContainerVirtualTable ## Member
    static cstring Container (VirtualTable)(Type)(void);
    /**+---------------------------------+
     * @brief Container interface        |
     * +---------------------------------+
     */ //PRIMARY (BASE) INTERFACE (FACTORY C)
    typedef struct Container { struct class base; } Container ;

    typedef struct Container (VirtualTable)
    {   struct class (VirtualTable) base;  /// = { 0, 0, 0 } (0, 1, 2)

        bool () (*copy)( Container *, const Container * );///= 0   (3)

        bool () (*insert)( Container *, ... );/// = 0              (4)

        bool () (*remove)( Container *, ... );/// = 0              (5)

        Object * (*at)( const Container *, ... );/// = 0           (6)

        SizeType (*size)( const Container * );/// = 0              (7)

        Iterator * (*begin)( const Container * );/// = 0           (8)

    }Container (VirtualTable);//
  explicit
    cstring Container (VirtualTable)(Type)(void)
    { return "Container(VirtualTable)"; }

  #if 1
    static Container(VirtualTable)   /*0, 1, 2    3, 4, 5, 6, 7, 8*/

            Container(Interface) =

    { { & Container (VirtualTable)(Type), 0, 0 }, 0, 0, 0, 0, 0, 0 };


    static Virtual

        Container(VirtualHeap)[nine] =
    {/*A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
      { "at",              6,             0,
      "Object*(*)((const Container*,...)"      },
      { "begin",           8,             0,
      "Iterator*(*)(const Container*)"         },
      { "copy",            3,             0,
      "bool()(*)(Container*,const Container*)" },
      { "dtor",            2,             0,
      "void(*)(Object*)"                       },
      { "init",            1,             0,
      "Object*(*)(Object*,...)"                },
      { "insert",          4,             0,
      "bool()(*)(Container*,...)"              },
      { "remove",          5,             0,
      "bool( (*)(Container*,...)"              },
      { "size",            7,             0,
      "SizeType(*)(const Container*)"          },
      { "type",            0,             & Container (VirtualTable)(Type),
      "cstring(*)()"                           },

      { "", 0, 0 }
    };static Virtual *
    typename(SubFactoryMethod)(Container,Virtual,Virtual,0,8);


    static struct class(VirtualHeap)
        Container(Virtual) =

    {   &class(VirtualHeap)(Type),
        &Container(VirtualSearch),
        Container(VirtualHeap)};


    static struct pass(SecurityHeap)
        Container(Security) =
    { { & pass(SecurityHeap)(Type), 0, 0 }, 0, 0 };


    static Interface Container(InterfaceHeap)[three] =
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
        &Container(Interface),

        &Container(Virtual),

        &Container(Security),

        nullptr /*(null termination required)*/ };

    /**
     * @brief class factory method (Factory C)
     */
    static Interface
    typename(ClassFactoryMethod)(Container,0,2);


    static void typename(Setup)(Container)
    {((Interface)&Container(Security))
    [2] = Container(InterfaceHeap) ;}

    static void typename(Abort)(Container) {}


    static Strategy Container(FunctionHeap)[zero] = {0};

  #endif // 0 IF_WAS_FACTORY_TABLE_CLASS 1

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
       note: the SizeType returned from size() should be a pointer
             to the size_type variable for 64 bit u-integer

     */
    /* C++

        this Container is abstract enough to work for all types
        of Containers when there are:     (3 classifications)

            Sequence Containers:

                vector

                list

            Associative Containers:

                set

                map

                hash_map

                hash_set

            Container Adapters (Adapter Container):

                stack

                queue

                deque

        when performing polymorphism on Container,
        realistically you should only swap out one
        container for another when they are containers
        of the same classification, depending on the
        circumstances with what set of operations
        are performed on a container in any one place

        this file is my best work (program to the interface) - author

                - - Factory C primary interface - -

        the abstract Container interface is by design:

                Collection (maybe)
    */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C

        this Container is abstract enough to work for all types
        of Containers when there are:  (3 classifications)

            Sequence Container (Objects):

                Vector(type)(Adapters):

                    Stack

                    Queue

                Matrix(type)                   [unimplemented]


                NodeRow(type)                  [unimplemented]


                NodeGrid(type)                 [unimplemented]


            Associative Containers (Objects):

                Heap(type)

                HashSet(type, bits)

            Container Adapters (Objects):

                Stk(t)

                Que(t)                         [unimplemented]

                Deque(t)                       [unimplemented]


    */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            ///Interface Type Not Class Type
                                                            //CWP
#endif // Container_H_INCLUDED
