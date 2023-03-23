#ifndef ITERATOR_H_INCLUDED
#define ITERATOR_H_INCLUDED
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
    #include "../Object/structclass.h"


    # define Iterator(type)type ## Iterator /*(no namespace macro)*/

    //# define VirtualTableIterator(Member)IteratorVirtualTable ## Member


    //# define VirtualTable(Iterator) Iterator(VirtualTable)

    static cstring Iterator (VirtualTableType)(void);
    /**+---------------------------------+
     * @brief Iterator interface         |
     * +---------------------------------+
     */ //HELPER INTERFACE FOR PRIMARY (BASE) INTERFACE (FACTORY C)
    typedef struct Iterator { struct class base; } Iterator;//

    typedef struct Iterator (VirtualTable)
    {   struct class (VirtualTable) base;/// = { 0, 0, 0 }        (0, 1, 2)

        Object * (*get)( Iterator * );/// = 0                           (3)

        bool () (*equal)( const Iterator *, const Iterator * );/// = 0  (4)

        bool () (*next)( Iterator * );/// = 0                           (5)

    }Iterator (VirtualTable);
  explicit
    cstring Iterator (VirtualTableType)(void)
    { return "Iterator(VirtualTable)"; }

  #if 1                                                 /*0, 1, 2    3, 4, 5*/
    static Iterator(VirtualTable) IteratorInterface =

        { { & Iterator (VirtualTableType), 0, 0 }, 0, 0, 0 };

    static Virtual

        IteratorVirtualHeap[six] =
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
        { "dtor",       2,      0,
        "void(*)(Object*)"                           },
        { "equal",      4,      0,
        "bool()(*)(const Iterator*,const Iterator*)" },
        { "get",        3,      0,
        "Object*(*)(Iterator*)"                      },
        { "init",       1,      0,
        "Object*(*)(Object*,...)"                    },
        { "next",       5,      0,
        "bool()(*)(Iterator*)"                       },
        { "type",       0,      & Iterator (VirtualTableType),
        "cstring(*)()"                               },

        { "", 0, 0, "" }
    };static Virtual * IteratorVirtualSearch (cstring);
    explicit Virtual * IteratorVirtualSearch (cstring key)
    {   if(key == 0){return 0;}
         Virtual slot[1]; slot[0].key  =  key  ;
         size_type  i;Virtual * p  =  Search(Virtual)(
         IteratorVirtualHeap, slot[0], & i, 0, 5 );
        if ((p)) { return ((p)) ; } else { return 0; }  }


    static struct class(VirtualHeap)
        IteratorVirtual =

    {   &class(VirtualHeap)(Type),
        &IteratorVirtualSearch,
        IteratorVirtualHeap};


    static struct pass(SecurityHeap)
        IteratorSecurity =
    { { & pass(SecurityHeap)(Type), 0, 0 }, 0, 0 };


    static Interface IteratorInterfaceHeap[three] =
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
        &IteratorInterface,

        &IteratorVirtual,

        &IteratorSecurity,

        nullptr /*(null termination required)*/ };

    /**
     * @brief class factory method (Factory C)
     */
    static Interface IteratorHeapSearch (cstring);

    explicit Interface IteratorHeapSearch (cstring key)
    {   if(key == 0){return 0;}
        Interface iterator[3]  =  { &volatile(Type), 0, 0 };
        size_type i; volatile(type) = key;
        Interface * p  =  Search(Interface)(
        IteratorInterfaceHeap, iterator, & i, 0, 2 );
        if ((p)) { return ((*p)) ; } else { return 0; }  }


    static void IteratorSetup(void);
    static void IteratorAbort(void);
    static class(FactoryMethod)
        IteratorMethod =
    { &class(FactoryMethod)(Type),&IteratorHeapSearch,
      &IteratorSetup, &IteratorAbort, IteratorInterfaceHeap };


    explicit void IteratorSetup(void)
    {((Interface)&IteratorSecurity)
    [2] = IteratorInterfaceHeap ;}

    explicit void IteratorAbort(void) {}


    static Strategy IteratorFunctionHeap[zero] = {0};
  #endif // 0

    /// bool (*assign)( Iterator *, const Iterator * );///             (3)

    /*void (*assign)( Iterator *, const Iterator * ); // (too hard to use) */
/*
    also: Iterator(Member) is Member##Iterator here not Iterator##Member
          since Iterator(type) and Iterator are the derived and base types
 */

                                                                    //CWP
#endif // ITERATOR_H_INCLUDED
