#ifndef OOC_H_INCLUDED
#define OOC_H_INCLUDED
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

  /*#ifndef VTABLE_H_INCLUDED*/     //this is the virtual table, built to
    /*#include "Virtual/vTable.h"*///match C++ with new, delete, typeid,
                                   // -> (virtual), ...
                                   //and its the (Factory C) equivalent
                                   //to #include <vector> in C++

                                //this is everything from the first 3-4
                                //years (2017-2021) accumulated in this
                                //virtual table, this is OOC, Cheers.

  /*#endif*/ // VTABLE_H_INCLUDED //  HAVE FUN!

                                //oh and remember, the 4 corners of
                                //Factory C: (4 big files to pick to include)

                                //Virtual/vTable.h (oldschool OOC (2017) (this))
                                //Adapter/aTable.h (includes vtable so 2 tables)
                                //Factory/fTable.h (includes 3 tables)
                                //Control/using.h  (everything)

                                //and include the factory table second
                                //so the adapter table can be implemented
                                //as a factory table class itself

                                //now thats object-oriented C or OOC
                                //and i call it Factory C! remember,
                                //look towards the factory table for
                                //the solution(s) needed for fully
                                //dynamic-at-runtime programming, look towards
                                //the factory table class!

                                //Cheers.

  #ifndef USING_H_INCLUDED
    /** Factory C: (like as if the folders went inside each other)
     *
     *          OOC                             Control
     *           |                                 |
     * Library Object Standard                    / \
     *           |                         Virtual ? Factory
     *        Template    <---+                 /     \
     *           |            |                ?       ?
     *        Virtual         |               /
     *       /      |         |              ?
     * Exception  Factory ----+
     *           /   |   \                      Builder (Complex C)
     *       Adapter | Builder                     |
     *               |                            / \
     *            Control                  Control   Factory
     **/
    /*
        OOC FOLDER: (SUBFOLDERS)

    #1) Adapter         - The AdapterTable Singleton

    #2) Control         - Control Factory + Control Bunker + IO + Factory Function

    #3) Exception       - struct class Exception/Assertion (Certifications)

    #4) Factory         - The FactoryTable Singleton

    #5) Library         - OOC (Factory C) library files (loosies)

    #6) Object          - The Object-Oriented definition (OOC DEFINITION)

    #7) Standard        - std (c-standard-library) (CLIB)

    #8) Template        - typenames (Container/Iterator Templates)

    #9) Virtual         - The VirtualTable Singleton

     */
    /* note: typename for the program constructor/destructor.
             one goes before main() and one goes after.
     */
    #define defineconstructor(Block)\
    \
    /*void*/ FactoryControl(02)(Constructor)(void) Block \
    \
       void FactoryControl(01)(Constructor)(void) \
       { Factory(Constructor)(); }\

    #define definedestructor(Block)\
    \
    /*void*/ FactoryControl(01)(Destructor)(void) Block \
    \
       void FactoryControl(02)(Destructor)(void) \
       { Factory(Destructor)(); }\

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 #include <OOC/OOC.h> /// (Factory C)

                 void typename (constructor) ({  }) ;


                  int main()
                  {
                    ///...

                    return 0;
                  }


                 void typename (destructor) ({  }) ;
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #include "Control/using.h" // FACTORY C (OOC) (C+) HAVE FUN!

                                //Virtual/vTable.h (oldschool OOC (2017) (this))
                                //Adapter/aTable.h (includes vtable so 2 tables)
                                //Factory/fTable.h (includes 3 tables)
                                //Control/using.h  (everything)

                                //note: Library/String.h NOT INCLUDED

                                /* note: since the class builder and one
                                         or two other things have been
                                         implemented there has been tighter
                                         couplings around everything, so
                                         Factory C is included with one file,
                                         this file. and it would take ripping
                                         things apart completely to have just
                                         the vTable or something, the secondary
                                         virtual table inside the struct bunker
                                         and just the struct bunker itself
                                         makes it so everything gets included
                                         or nothing gets included, that is all.
                                         (12/24/2022).

                                         the class builder is implemented
                                         (Complex C).

                                            CHEERS


                                 */

/// + full control of the function arguements stack for the factory function + overloads +
  /// + memory management support + constructor support + destructor support +
/// + assign an interface to each object + type id foreign key at factory table +
///       + support for extra interfaces per class implementation (adapters) +
/// + support for invisible object adapters + support for observers (many-to-one adapter) +
///      + support for decorators (recursive stackable adapter) +
/// + control pattern for commands + control pattern for control structures +
/// + control pattern for factory functions + control pattern for IO +
/// + fully-dynamic instances support + central overload functions support +
/// + central override method support + multiple inheritance support +
/// + dynamic IO support + assign a factory method with interface heap to a class +
/// + complex object (class builder) support + fully dynamic programming +

  #endif //
/* DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * <library that defines Object-Oriented essentials in C (Factory C)>*
 *                                                                   *
 * THIS SOFTWARE IS NOT COPYRIGHTED                                  *
 *                                                                   *
 * This source code is offered for use in the public domain.         *
 * You may use, modify or distribute it freely.                      *
 *                                                                   *
 * This code is distributed in the hope that it will be useful, but  *
 * WITHOUT ANY WARRANTY.  ALL WARRANTIES, EXPRESS OR IMPLIED ARE     *
 * HEREBY DISCLAIMED.  This includes but is not limited to           *
 * warranties of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.*
 *                                                                   *
 * <jb.bee250@gmail.com> <Christopher Posten>                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/* DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED */
                                //just look
                                //inside! (at the bottom of every file
                                //that defines something of keyword
                                //quality) so just look! or don't use
                                //the vector!
#endif // OOC_H_INCLUDED
