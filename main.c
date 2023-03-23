#define OOC
#define DesignPatterns
#define WorkSpace
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
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        //! () . -> & * [] + - * :? >> += [] * [] + - -> / % ## //!
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
        //! ## \ # () _ ^ == << [] += ## \ = () _ ! << >> %= {} //!
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
    BUGS:

          -there seemed to be a problem (bug) with obj(03) the float for some reason
          even though double worked just fine (obj(04)). (f 1) (NOT FIXED)(10/22/2022)
                -when i add the extra assign, as if the constructor assign didn't work,
                then it works.

          -THE OBJECT STACK HAS A Stk(int) STUCK ON IT (print error maybe cuz works)
          (undefined behavior?) (default(8)) (FIXED) took stk printing out of vtable print

          -EXCEPTIONS REPEAT THEMSELVES SOMETIMES but this can be used to your advantage, jk
                -control factory exception repeats itself when in a while loop (using cout
                without popping at all or using cend and getting a control stack overflow)

          -composite pattern has a bug (d 8?) (GOT RID OF)
          (SAME IDEA AS FACTORY TABLE CLASS)

          -the bool datatype has bugs surrounding it
          for multimap having an asserting double assignment in it
          so does try/throw/catch... (NEEDS DISSASEMBLY TO EXPLAIN)(MULTIMAP FIXED)

          -and it (bool) is not (does not have) a virtual table object apparently
          but works just wont print classname off stack... (ONE OF THE default(0-15) prints)
                (DEBUGGING IO LIKE THAT IS NOT A PRIORITY, JUST FUNNY THAT IT WORKS AND PRINTS
                 SOMETHING DIFFERENT)

          -goes into the catch block for control/command examples (control factory)(FIXED)

          ...this is all good since i fixed multimap so i am proud of my work
          even tho i am annoyed by how my code gets assembled somehow... i wish
          i could find someone to help me debug or this could still take some time

          the 3 hash tables are flawless just when the pair->val is null it causes recursion
          of the quadratic probe somehow which tells me there is a flaw in the tables
          when they might not be able to have set implementations

          the program stacks, however many their may be should be checked since
          they might all have a problem if one does.


          (10/06/2022) fixed several of the above problems and am more than proud of
          everything, the jump val for exception throwing needed a cast. the string function
          f02 was using the wrong interface, waiting for input yes it was.

          for the first time in a long time i think nothing is a problem (10/06/2022).


    TODO: your chores


          now onto my final set of chores/todos since v 1.1.1 is
          working as a library included using a single strategic object file
          (pre compiled Factory C)(01/10/2023).

          (and especially that the class builder is actually implemented
          and working) (PROPERLY DEFINED TOO) SEE: class.h, builder.h, multimap.h
          (the class builder multimap files).

    -->     -the one thing i think is a problem is the Standard portion
             of cout + cin since it does nothing i can have a use for, it
             seems to do something for sprintf() by itself so there has
             to be a problem (printing to a string using cout + cin)
                *standard for cout,cin (MAJOR TODO)
                (NEED/WOULD LIKE ASSISTANCE EVEN) (CIN/COUT)(01/29/2023)

            -the other small thing i think was a problem has to do with how not
             all the assertions from program start can be popped, so they
             have... (DONE)

            -the factory table needs to deallocate builder(FactoryMethods)
             and without forgetting the btable, also a struct abort method
             needs to be implemented for copying into builder heaps
                *factory table deallocates builder heaps (DONE)
                *struct abort (DONE)
                *dont forget the btable (DONE)

            -the factory table needs to be filled with all the datastructures
             used to implement factory c,
                *builder heaps         (DONE)
                *String base type      (DONE)
                *hash table base types (DONE)
                *maybe register string (DONE)

            -dont forget that the substr or concat method (one of them)
             still needs to be implemented for String.h (DONE)

            -this is where it gets interesting, but every available or
             included c function needs to go into a strategy heap (1)

                +

            -cin, cout need to have (!instance) param go straight into printf
             and scanf (2)... so cin needs to take a non-virtual table object parameter(3)
                i took a little bit of a snoop and realized i don't have the scanf
                family of factory function implementations on hand, making things
                difficult there (so just hold off maybe)


            -reimplement override (you know why) (DONE)


            -make multimap fill the case for is_class by pushing
             the primary factory method onto the stack. might need to
             come with a singleton: primary("") (DONE)


            -nothrow needs to be implemented (fun) (DONE)
            -destroy

            -make multimap check for a security set of known
             subfactory methods to use with the pass(SecurityHeap)(NO)

            -add multimap to the factory table for its security set

            -make it so abort and setup are decoupled from the class
            factory method so u need an abort table and setup table
            (or both in one) actually just abort cuz setup should be
            given when it has to be registered but thats the second pointer
            to the abort table, also make the class factory method like
            another interface moreso. so a pointer to the reg list goes into
            meth[2] (is list) meth[0] is typeid and meth[1] is search (DEFINED)

            (NOT BEING CHANGED) (DONE)

            -change class(SubjectTable) to class(SubjectStack) ? (WHATEVER)

			- swapped the passnumber being the interface typeid for
			the pass(SecurityHeap) registration interface, so now
			you just search for the interface name (makes copying dynamic)
			maybe in the future you can see the passnumbers being placed
			inside strategy heaps for dynamic access.
     */
    /*   version 1.3.1

            - reimplemented is_polymorphic, should make the "is" family
              (except multi word ones maybe like: struct(bunker)(is_object))
              of functions/methods into macros that substitute for the
              if(){} : so is_...(){} not if( is_...() ) maybe since
              you didn't care for wordyness, just pleasant so see is instead
              of if. or not. (don't change anything)

            - added thrown exceptions for null pointer in the factory methods.

            - added the macro: class(multimap)(true)("")
                              (class(FactoryTable))("")
                        to the usual multimap.

            - made the adapter table able to downsize itself like the
              vtable and in a way parallel to the vtable like it is
              (by vstk)

            - finally made it so printf doesn't need to be used,
              im not gonna miss using it where the object is
              since i still use it for the class(IOTable) family
              of regs. cout("num: %u", 123)cend; : )

            - re-implemented override

            - fixed standard output for cout

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
        ____  ____         _____  _____
       /\  _\/\__ \__     /\  __\/\___ \                         __
      /\  _\/\/_/\__ \    \ \ \_/\/__/\ \                       /\_\__
      \ \ \/    \/_/\ \    \ \ \     \ \ \                ______\/_/\_\__
       \ \ \       \ \ \    \ \ \     \ \ \              /\______\ \/_ \_\
        \ \ \__     \_\ \    \ \ \     \ \ \       __    \/______/   / _\/
         \ \__ \__  /\  _\    \ \ \__   \_\ \     /\_\              /\_\/
          \/_/\___\/\___\/     \ \____\/\____\    \/_/              \/_/
             \/___/\/___/       \/____/\/____/

                                                                     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*    TODO:

            1)implement the heap for:

                -the builder (DONE)
                -the bunker  (DONE)

            2)finish implementing the control factory (DONE)

            3)IO isnt fully complete (File) specifically
              and Standard IO is not tested... (update)
              (File works just Standard not done)


            * housekeeping... File Strategy Table... housekeeping
                - housekeeping can be your slang for GNU maintenance task
                    GNU (maintainer) and of course housekeeping means
                    tideing old C files and figuring out what their worth
                        ... if you become a GNU maintainer, seems like
                        something of an inspiration, and "thank you very much"
                        gets help out of me since why not help then.
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*    clipboard:

    - - where the factory table has a lack of an implementation as
        if it was a hazard area, is where it does not use a stack
        handling multiple insertions, searches, removals for
        (unlike vTable). the implementation here might not be tight
        enough to need a stack but just be careful.

            (MULTIMAP USES MAP STACK + FLAG STACK SO ALL GOOD)

    - - the factory table is going to use a builder that is
        a singleton inside it (non-virtual table object). (DONE)

    - - the factory table is going to use a struct bunker for
        operating system components like abort and override. (DONE)

    - - the hash set needs an iterator that skips empty slots
        also should be a full object-oriented level extension
        or class extension (for stability).  (NOT DONE) (WHATEVER)

    - - define a sort check that checks or asserts if a heap is sorted
        when it is handed in (registered) to the ftable (factory table)
        (a class interface heap and its sub-heaps)
        ... (GOOD IDEA?) (MAKES FACTORY C MORE FULL-PROOF)
        (MAYBE ONE DAY) ...
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

            this is a list of files that are the tidy do them last

            files so save them for as long as u can clean up

            your workspace, or find a helper who will implement them

            using the function helper multimap.


              (DONE)  - union.h           (ftable) and (atable) (prep for)

              (DONE)  - Comparable.h      (ftable) +is_polymorphic

              (DONE)  - Observable.h      (ftable)

              (DONE)  - override.h        (ftable)

              (DONE)  - type_info.h       (atable) (no TypeInfo object)

              (DONE)  - complex.h         (ftable)

                - auto.h (or do)    (Control Factory)

                - break.h           (Control Factory) (DO LAST)

                - goto.h            (Control Factory)

              (DONE)  - class.h           (vtable) and (ftable)


              (DONE)  - builder.h

              (DONE)  - Bunker.h

              (DONE)        - nothrow (in Assertion.h)

                      - destroy.h (IN vTable.h)


                - Polish Calculator (Postfix) (plz try & get around to)


            - double check everything for singleton functions

                (that might need a stack) (done mostly) ??? say what ???
                    *i did that yes good multimap got worked out for
                     struct class/builder class config (same with typeid)

            - implement everything as a factory table class YES (DONE)

                (so u can also check the factory
                 table for error if it needs a stack)

            - implement heap (binary tree) (DONE)     (so)

            - implement the builder
                then:

                     - Interface reg = build("class(FactoryTable)")(0)

                     - demolish(reg)

                     - int_id(reg)

                     - bytes(obj)

                      (the helpers used in class.h)

            - for the first time you see that the functions datatype
              cast will be its typeid (just an intricate one)(no spaces)

            - clean your workspace file before/after going
              through every file and checking how they are included (DONE)

            - maybe use another stack, another Class stack possibly
              for a stack of certificates, ePop(), ePush(), ...all still
              need to be implemented... (DONE)

            - to go with every .search from a singleton returning a double
              pointer, possibly make sure each one can check to see if
              something is a part of its set without throwing an exception (DONE) (GOOD)


            - finish the override tables for the bunker, the interface/typeid
              table and other tables for the builder, finish filling the ftable
              with data types and finish what your doing with exception/assertion
              and using them as certificates to non-error handling things...
                so:     - override tables (bunker)  (NOT IN FACTORY C)
                        - builder tables

                        - exception work
                        - fill the ftable... File...
                            -exceptions
                            -stacks
                            -hashsets
                            -arrays
                            -heaps


        TODO: your chores (GENERAL HOUSEKEEPING) (BELOW)


            - salvage what u can from c files and brush up against
              their prototypes/implementations so u can make them
              all call control() (NOT DONE)

            - put every c function into a strategy heap or
              virtual heap or interface aka virtual table (like File) (NOT DONE)

            - figure out how to put a class into  both   .h/.c (SORTA DONE)



        TODO DOC: put the factory object interface in context
                  sometime... (big polymorphisms/dynamic overload(s))

                  and here it is.

                    the factory table is the data types table implemented

                  in c using a runtime string, a pointer, a struct,

                  a struct variable, an array, and a function/prototype

                  that is the data types table for the function that

                  was assembled from assembler and used in c. this

                  data types table provides an overload table to the

                  function used in c. used in conjunction with the stack that gets

                  declared inside a function for factory function

                  stack control for full control of the entire function

                  arguments stack from a single pointer the factory

                  table can use its implemented factory methods from

                  the interior of an "overload" that is a factory function

                  that calls control() for function arguments stack control

                  and uses any number of factory methods in its

                  implementation, with virtual table objects being passed

                  into it for clearing them as objects of a specific

                  runtime string id type (typeid(obj)) for specific

                  overload(s) or function implementations called externally

                  seemingly that every function can be called from one function

                  the c programming language has its implementation that

                  it needed for its function to be what it was meant to be

                  for dynamic/polymorphic/power. (this implementation).


                    but as functions become methods and interface methods

                  and the difference between a factory function and a

                  factory method is not the difference between a function

                  and a method this was all the talk i had for the

                  factory object interface for now... or its overloading

                  part not the overriding part its other half.


                  for the function assembled in c.


                    the last part explained a strategy overload or datatype

                  level overload using a strategy heap that is the low-level

                  overload but there is a high-level overload table (heap)

                  that overloads the interface methods between classes

                  irregardless of class heirachy or interface method data field

                  position. that same table the virtual heap table is also

                  the override table.


                  for the interface engineered in c


                  the next part has to do with using a builder heap (complex)

                  for the runtime method exchange using the virtual heap and

                  complex heap and factory heap and that is all that will be

                  implemented by me here in c (Factory C)



    *//**

        there needs to be (extended from exception)

        -an override certificate

        -a polymorph certificate

        -a passnumber to a specific factory method case/
        datamember

        -passnumber typeid

        (NOT IN FACTORY C) (COMPLEX C)


    **//*

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                FACTORY C
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        - - *//**           Factory Object              **//*

            - arrays & primitives

            - data structures

            - multiple inheritance

        - - *//**           Control Factory             **//*

            - command & factory    ->    control & builder

            - control structures (loops)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                   FACTORY C TABLES (STATIC AND VOLATILE)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        - - *//**        Program Tables (volatile)      **//*

            - virtual table (object key & interface val)

            - factory table (class name key & class factory method val)

            - adapter table (adapter key & object val)

        - - *//**          Class Tables (static)        **//*

            - strategy table (heap)

            - polymorph table (heap)

            - object table (complex heap)

            - interface table (virtual heap)

            - security set (heap)

            - control table (heap)

            - builder table (heap)

            - adapter table (heap)

            inorder:

                strategy  #1
                polymorph #2
                virtual   #3 - 4  (Complex) (3-4)
                complex   #4 - 3
                control   #5 - 6  (Control Factory) (5-6)
                builder   #6 - 5
                security  #7
                adapter   #8

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

            - complex constructor ... ? (complex heap)

            - namespace method          (??? union? dynamic template redefine?)

            - class builder ... ?       (builder factory method & subs)
                                        (and builder object in ftable)
                                        (as the factory table(s) helper)

            - control struct (struct bunker) (BunkerBunker)

                (Control/Bunker.h)

            - table auxiliary stack(s) 5 (NO 7) in total (jstk,vstk,fstk,mstk,istk,cstk,pstk)
                + 3 = 10 (hstk,tstk,estk)

                Virtual   (Class)                  = vstk
                Jump                               = jstk
                Flag                               = fstk
                Map       (Meth)                   = mstk
                Interface (Class(VirtualTable))    = istk

                +

                ControlFactory                     = cstk
                Pass                               = pstk

                +

                Heap                               = hstk
                Type      (typeid)                 = tstk
                Except    (pException) (Exception *) = estk

            - exception throw with const Object * (NO)

                (use vstk to try/throw/catch with choice of object(s)) (FOR PREFERENCE)

                vPush(obj)
                vTop()
                vPop()      (this)

                vPrint()
                vHeight()

                 .. SAME FOR EACH LETTER ABOVE


            - finish the override tables for the bunker, the interface/typeid
              table and other tables for the builder, finish filling the ftable
              with data types and finish what your doing with exception/assertion
              and using them as certificates to non-error handling things... (like above)
                (NOT IMPLEMENTED IN FACTORY C) (COMPLEX C)



     */

               /*so try working on the struct bunker and put it there
                 (put our jumpBuf in the accumulator table in the struct
                 bunker in the factory table)  *sigh* actually, it looks to
                 me that since it (the try{}) is inside the while loop it will
                 continuously allocate the jumpbuf and put it on the stack,
                 still, something to watch out for since there is a window
                 between when destroy is called and the end of the try{}
                 that it may try to jump (using throw) and do so with a
                 bad jumpBuf pointer (dont forget the jump flag object also) (DONE)
                 (IMPLEMENTED OPERATING SYSTEMS STRATEGY)(PRI AND SEC VTABLE)(FACTORY C)


                 everything like a side-process object has been moved to
                 the secondary virtual table (inside struct bunker) (GOOD)


                 also the input might always need to be accepted as a string
                 so i can handle any error putting an f where a 1 goes.
                 (JUST A DEMO CONSOLE PROGRAM BUT STILL)(FOR EXPERIENCE)
                 (FOR CLARITY)(NOT DONE)

                 */

    /*    clipboard: (fTable.h)

    - - the builder is not fully implemented (IS NOW SEE:builder.h).

    - - close to being time absolutely everything gets registered here
        so C can have its table of datatypes/overloads it deserves.

    - - maybe move the assertions to the program constructors since
        the struct bunkers virtual table and the class builders adapter
        table both call the init function(s) adding more assertions
        (DONE).

        i believe there should be 12 assertions, 3 + 7 + 2 for u know
        what, (DONE) and thats 15 assertions 3 + 10 + 2
        i took the startup assertions out because they are faulty
        checking for memory failure (so never do).
                                                                 */

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        //! & * [] + - ## -> & * () -> * & [] -> & ^ [] * ## () //!
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
        //! & * -> & : [] & * [] >> << -> * {} + -= & * [] + :? //!
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
#include "OOC/OOC.h"///  everything needed to implement before main ///
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                //big files to include:

        //#include "OOC/vTable.h"  ///  struct class object factory
        //#include "OOC/aTable.h"  ///  solution for Adapters
        //#include "OOC/fTable.h"  ///  the OO factory solution

        //#include "OOC/Control/template.h"
                            ///thats two days worth of success (or three)
    ///static void vTableTesting(void);///now i can include another .c file
                                   ///since every prototype is labeled
    ///static void printVirtualTable(void);///static (static) and every
                                  ///function is explicit (static inline)
                                  ///if its implemented inside a .h file
    ///static void fTableTesting(void); ///otherwise its static still

    ///static void printFactoryTable(void);


    //#include "vTableTesting.c"

    //#include "fTableTesting.c" //ClassBuilder NOT IMPLEMENTED
    /**
            ... c11

            -std=c99

            CodeBlocks/MinGW/bin/gdb32.exe (debugger path)
     */

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**       Factory C Object-Oriented Programming Definition      **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    static void f01();     //data type extravaganza (FACTORY C)
    static void f02();     //String Interface Heap
    static void f03();     //Exception/Assertion (try/throw/catch)
    static void f04();     //Container/Iterator  (stack, vector, ...)
    static void f05();     //The Factory Table MultiMap
    static void f06();     //Factory Object/Complex Object Helper(s)
    static void f07();     //empty the Exception Stack (+Security)
    static void f08();     /*testing*/

    static void f09();     /*testing*/
    static void f10();     /*testing*/
    static void f11();     //Comparable.h
    static void f12();     /*testing*/
    static void f13();     //Interface Heap Printing (Factory Object)
    static void f14();     //The Accumulator
    static void f15();     /*testing*/
    static void f16();     /*...testing*/

    #if 1
        enum _f { _16 = 17 };
    #endif // 0
    static void (*f[_16])(void)  =
    {
        & f01,& f02,& f03,& f04,& f05,& f06,& f07,& f08,
        & f09,& f10,& f11,& f12,& f13,& f14,& f15,& f16, 0
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**     - - Head First: Design Patterns (in Factory C) - -      **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    static void d01();     //Adapter (Object)     (AdapterTable Ex: #1)
    static void d02();     //Observer/Subject     (AdapterTable Ex: #2)
    static void d03();     //Decorator            (AdapterTable Ex: #3)
    static void d04();     //Factory (Method) -Security
    static void d05();     //Singleton
    static void d06();     //Command
    static void d07();     //Template(Method)
    static void d08();     //Facade

    static void d09();     //Complex (BONUS)
    static void d10();
    static void d11();     ///(in the future:)
    static void d12();     ///Strategy vs. Overload
    static void d13();     ///Container vs. Iterator
    static void d14();
    static void d15();
    static void d16();

    #if 0
        enum _f { _16 = 17 };
    #endif // 0
    static void (*d[_16])(void)  =
    {
        & d01,& d02,& d03,& d04,& d05,& d06,& d07,& d08,
        & d09,& d10,& d11,& d12,& d13,& d14,& d15,& d16, 0
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**   Temporary Functions and Non-Object Oriented Definitions   **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    static void t01();     //food for thought for arrays (non-oo)
    static void t02();     //typemax(type) example
    static void t03();     //asm
    static void t04();     //language extras
    static void t05();     //
    static void t06();     //hardware issue (vtable size)
    static void t07();     //
    static void t08();     //

    static void t09();     //
    static void t10();     //
    static void t11();     //
    static void t12();
    static void t13();
    static void t14();     //
    static void t15();
    static void t16();     //...

    #if 0
        enum _t { _16 = 17 };
    #endif // 0
    static void (*t[_16])(void)  =
    {
        & t01,& t02,& t03,& t04,& t05,& t06,& t07,& t08,
        & t09,& t10,& t11,& t12,& t13,& t14,& t15,& t16, 0
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**    The Control Factory (Factory C) Constructor Sequence     **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    static void c01();//Control    (substitute control structure "for")
    static void c02();//Command    (call commands really fast)
    static void c03();//Factory    (constructor sequence for object stack)
    static void c04();//Console    (cout)
    static void c05();//Template   (array initializer)
    static void c06();/*Control    (using command/control array)*/
    static void c07();/*Builder*/
    static void c08();/*Control    (auto)*/

    static void c09();/*Command    (goto)*/
    static void c10();/*Factory    (break)*/
    static void c11();
    static void c12();
    static void c13();
    static void c14();
    static void c15();
    static void c16();

    #if 0 //0
        enum _c { _16 = 17 };
    #endif // 0
    static void (*c[_16]) (void)  =
    {
        & c01,& c02,& c03,& c04,& c05,& c06,& c07,& c08,
        & c09,& c10,& c11,& c12,& c13,& c14,& c15,& c16, 0
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #include "WorkSpace/WorkSpace.h"/// implementations for prototypes
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                       Program Entry Point                   **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

/// + fully-dynamic instances support + central overload functions support +
/// + central override method support + multiple inheritance support +
/// + dynamic IO support + assign a factory method with interface heap to a class +
/// + complex object (class builder) support + fully dynamic programming +

/// + control pattern for commands + control pattern for control structures +
/// + control pattern for factory functions + control pattern for IO +
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

///       + support for extra interfaces per class implementation (adapters) +
/// + support for invisible object adapters (by typeid)
/// + support for observers (many-to-one adapter) +
///      + support for decorators (recursive stackable adapter) +
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

/// + memory management support + constructor support + destructor support +
/// + assign an interface to each object + type id foreign key at factory table
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/// + full control of the function arguements stack for the factory function
/// + overloads +

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                       Program Entry Point                   **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        void typename (constructor) ({  }) ; ///(Factory C)


#if 0 ///1 for top 0 for bottom
        int main(void)      //f  d
        { void (**p) (void) = f; p--;
                            //c  t

12[   ((p))   ]();// 1      14      23      27      41      52

            return 0;
        }
//33
#else


        int main(void)
        {


          while(true)  /// ( (*ch) != 'q' ) <--
          {
              char * ch ;

              unsigned * i ;


              void (**p) (void) = nullptr;

            try
            {
                    //cout(vtable)cend;//that is empty my friend (cheers)


                  ch = new(char)(this, '\0');

                  i = new(unsigned)(this, 0);


                cout endl endl
                    ("pick an array ?")endl("(q for quit)")endl
                    ("(f for factory c)")endl
                    ("(d for design patterns)")endl
                    ("(t for temporary or non-oo)")endl
                    ("(c for control factory): ") cend;
                cin(ch)cend;//
                //scanf(" %c", ch);


                if( (*ch) == 'q' ){ cout("goodbye.")endl cend; break; } /// <--


                   //cout endl cend;

                   //cout i am writing a book without punctiation cend; (joke)

                if( (*ch) != 'f' && (*ch) != 'd'

                 && (*ch) != 't' && (*ch) != 'c' )

                { throw(new(InputMismatch))(this, "InvalidChar"); }

                if( (*ch) == 'f' )
                { p = f; p--; }
                if( (*ch) == 'd' )
                { p = d; p--; }
                if( (*ch) == 't' )
                { p = t; p--; }
                if( (*ch) == 'c' )
                { p = c; p--; }

                cout("\nenter a function # (1-16): ")cend;

                cin(i)cend;//

                cout("\n")cend;//


                p [ (*i) ] ();//CALL WORKSPACE FUNCTION STRATEGICALLY


                cout("\n")cend;


                delete(ch);

                delete(i);
            }
            catch( Exception * e )
            {cout(delete)cend;
               if( instanceof( e, NotFound ) )
               {
                    cout("last:\t\t %s", volatile(class))cend;
               }
               cout(cout(e))cend;

               destroy();/*<---*/
            }

          }

          destroy();

          return 0;
        }

        /*endl = ("\n")*/

#endif // 1


        void typename(destructor) ( {} ) ;


    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    ///pizza registrations are (of now) only implemented for fully-dynamic
    ///instances condiment decorators are implemented for fully dynamic
                        ///instances but not registered

  /* DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED */
  /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
   * <library that defines Object-Oriented essentials in C (Factory C)>*
   *                                                                   *
   * Copyright (C) <2017 - 2021>  <Christopher Posten>                 *
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
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
  /* DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED */
