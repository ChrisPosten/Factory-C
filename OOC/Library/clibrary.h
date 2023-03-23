#ifndef CLIBRARY_H_INCLUDED
#define CLIBRARY_H_INCLUDED
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
[ 0 ]kindergarden;
#endif // TAG
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/**
             __             _____  __                       _______
            /\ \           /  ___\/\_\                     /\  ____\  __
            \_\ \     ___ /\ \___/\/_/_    ___     ___     \ \ \___/ /\_\
            / __`\   / __`\ \  _\   /\ \  / __`\  / __`\    \ \ \    \/_/_
           /\ \/\.\_/\  __/_ \ \/   \ \ \/\ \/\ \/\  __/_    \ \ \____ /\_\
           \ \___/\_\ \_____\ \_\    \ \_\ \_\ \_\ \_____\    \ \______\/_/
            \/__/\/_/\/_____/\/_/     \/_/\/_/\/_/\/_____/     \/______/

 */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * define c:                                                                 *
     *                                                                           *
     *      c is defined by/with functions and other structures/mechanisms.      *
     * everything in c is a form of a structure or mechanism.                    *
     *                                                                           *
     *      the smallest unit of information understood by the c compiler is     *
     * a token: identifier, keyword, operator, symbol.                           *
     *                                                                           *
     *      symbols include the block separators ({}), the statement terminator  *
     * (;) and the space and comma delimiters ( ) and (,). these may be called   *
     * special symbols as an operator is a form of a symbol. it's a principle    *
     * of operators that operators are used to operate on variables and          *
     * everything it finds as an operand. this principle is what separates       *
     * special symbols from operator symbols as the parenthesis operator/symbol  *
     * is overloaded for use in several structures/mechanisms.                   *
     *                                                                           *
     *      operators are similar to small, built-in functions as its the        *
     * parenthesis operator that defines a function. the parenthesized arguments *
     * that make up the parameters of a function are also known as the operands  *
     * of the parenthesis operator. keywords are used for/as operators and other *
     * structures/mechanisms. identifiers are used for/as variables and other    *
     * structures/mechanisms.                                                    *
     *                                                                           *
     *      working its way out of assembly, c defines something known as an     *
     * automatic data type. all data types in c are automatic data types.        *
     * A pointer is a variable who's value is the address of another             *
     * location in memory. There can be any dimension of pointer-to-pointer      *
     * data types where the pointer's value is the address of another pointer,   *
     * recursively. When a pointer is dereferenced it returns the reference of   *
     * the data type the pointer is used to point to as a data type itself.      *
     *                                                                           *
     *      everything that uses a set of block separators ({}) can be referred  *
     * to as a structure in c. there is a careful difference between definition, *
     * declaration, and implementation of c's structures. the block separators   *
     * implement a function or any other structure/mechanism. control structures *
     * used for iterating, sequencing, and/or vectoring are another form of      *
     * structure. the reasons why programmers are mathematicians is found deep   *
     * inside of c's control structures. operations consisting of operators      *
     * operating on operands are chained together forming statements terminated  *
     * by the statement termination symbol. this occurs mainly inside of function*
     * implementations (inside the function block a.k.a. function structure      *
     * a.k.a. function body a.k.a. function implementation) and, inside of       *
     * control structures inside function structures. (c is purely structured,   *
     * procedural, and algebraic).                                               *
     *                                                                           *
     * - - tokens like keywords and identifiers may not contain spaces as the    *
     * space character is defined as a delimiter symbol and so therefore is      *
     * its own token. - -                                                        *
     *                                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/**
       _______                  __                                  _______
      /\  ____\                /\ \__                              /\  ____\  __
      \ \ \___/  ___      ___ /\__  _\    ___   ____   __  __      \ \ \___/ /\_\
       \ \  _\  / __`\   / ___\/_/\ \/   / __`\/\  _`\/\ \/\ \      \ \ \    \/_/_
        \ \ \/ /\ \/\.\_/\ \__/_ \ \ \/\/\ \/\ \ \ \_/\ \ \_\ \      \ \ \____ /\_\
         \ \_\ \ \___/\_\ \_____\ \ \__/\ \____/\ \_\  \ \____ \      \ \______\/_/
          \/_/  \/__/\/_/\/_____/  \/_/  \/___/  \/_/   \/___/\ \      \/______/
                                                          /\ \_\ \
                                                          \ \____/
                                                           \/___/
 */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
        After having spent a few years in college i became attached to Data
        Structures in C++ around the same time i was taking a Data Structures
        in C++ course. I implemented, re-implemented every textbook Data Structure
        in C++ except the Vector. When it came to the Vector i figured C++
        used a good enough Vector and no-one would use mine if i gave it to
        them. So I implemented a Vector in C. Around the same time when I was
        back home from college, I decided to study a C programming textbook
        called "OOC". I was truly inspired by "OOC" for being pure of the Object
        in Object-Oriented Programming, but declined at reading the whole book
        when it came to their definitions, and instead told myself I was going
        to implement OOP in C (or OOC for short) myself (because then if their
        my definitions I would always remember/be ready to use them). I then
        implemented a Virtual Table in C, which I have spent a few years with
        doing so... Then I decided I was in a good place to try Design Patterns
        in C, since I was in the door to Design Patterns with having covered
        early or primitive patterns like Template, Virtual, Polymorphism. Now
        I have Factory C that is like (or is) my personal demonstration of
        Design Patterns and Data Structures, Advanced Polymorphisms, ... All
        I did was read "Head First : Design Patterns in Java" and convert their
        code examples into C, Getting ideas and implementing things for my OOC
        the way i wanted them, etc...


        Dear Recruiters,

        I have lots of good work as a reference when you goto https://factoryc.org
        that is my website for the free download of Factory C thats Object-Oriented
        Programming in C including DesignPatterns. Factory C is Object-Oriented
        Programming that is largely implemented in a big empty area that even C++ has.
        Having a proper virtual table object factory for strategic objects of strategic
        sets of classes across the full range of registered factory table classes is a
        start. When two objects are compared, for instance, they are checked to see if
        they are objects of classes that are registered and if they are registered, if
        they have been given the proper registration interfaces to go into the class
        interface heap for a factory table class. Some interfaces contain class
        information tables that manage the datatypes of things like the object or
        the interface, this way when the factory object has a fully self-contained
        class that its class description is stored by a series of runtime
        objects/containers (or just a struct class with built-in arrays, strategic
        factory method typenames) then there is no limit on
        datatypes or multiple inheritance or coupling and and
        object that by its original definition, can have
        anything at any of its data field positions at any time.(the complex
        object is an array of pointers like its interface). Where the Object
        in Object-Oriented Progamming is anything you want it to be. (truly
        and fully dynamically using things like multimap and typeid). Factory C
        started off really slow and i have spent years with its virtual table,
        made to replace the modern C++ virtual table with something fashioned
        using the aged C compiler, which does its job using pointers, etc... C
        can have its program data types table and virtual table of objects for
        overloading functions, the adapter table also provides something like
        an overload when used with the factory table, otherwise is more strategic
        like taking an override over an overload. This provides structure to a
        set of functions provided by interface. all one has to do is implement
        a struct class and use adapter(Class, Adapter)(this, ...) instead of
        new(Class)(this, ...) also factory("Class")(this, ...)
        can be used to intialize an object. Im not done because
        accumulate(Class)(this, ...) instantiates a new object that is placed
        into the secondary virtual table, the operating systems control bunker
        accumulator table. As build("class(Interface)")(...) is used to instantiate
        an interface as a runtime object. The class builder multimap uses build &
        demolish so they are just small helpers like the function helper bytes("Class").
        Stacks are used to operate things like the constructors for various things,
        virtual table object or not, (the factory methods are called like constructors
        from multimap()()()()), so constructors stack, factory methods stack,
        try{}catch(){} 's stack, control factories stack (the syntax sugar constructor
        sequence + function arguments stack control for the factory function).
        everything stacks properly when it needs to.

        I wasn't sure but I thought I would give it a shot and C is a Programming
        Language thats low-level, im not sure if you wanted someone with Assembler
        experience more but I can learn Assembler I know how to find the dissassembly
        window from my GDB debugger in CodeBlocks I just need to learn how to understand
        the Assembler code if the job calls for it. As of so far, I have not needed it
        to implement Object-Oriented Programming in C, OOP in C or OOC for short.

        https://factoryc.org is a website that distributes my Factory C Library i
        implemented in C, there I have Data Structures and Design Patterns all
        implemented in C, a language low-level enough to implement an operating
        system(s) and was used to implement the windows operating system(s).
        Factory C reaches the highest-level of Object-Oriented Programming by
        holding true to things like the original definition of an Object being
        a void pointer that points to memory for a runtime-object, that an Object
        can have anything at any of its dat field positions at any time. This is
        true and also I need to say that the error-free Complex Object or the
        level 3 Object (Complex Object) is a proper array of pointers like its
        interface, since we actually don't want just anything at any of the
        datafield positions but we want other Objects strategically. There is
        still a level 1 Object a Virtual Object and a level 2 Object a Factory
        Object used by Factory C (good sturdy, dynamic Factory C uses an
        implemented structclass for a Factory Object) (mid-level). These
        Objects may have anything at any of their datafield positions, just
        non-dynamically since the class description is still based on a
        compile-time struct (short for structure) . Factory C is free software
        i am proud to announce, for the purpose of education, study,
        modification, distribution, etc... (similar to open source). In short,
        I have learned from using C as low-level as it is (being non OO by
        default) how to implement structures around in a big circle up until
        to point that I don't need to implement another structured data type
        using a struct, all I need is my Complex constructor for my Complex
        Object and its Builder Complex, and DataTypes registered at the
        FactoryTable to add as datamembers to my Complex Object. If you were
        to use the C Programming Language at its full potential, you would use
        my Factory C definitions, using C as the Programming Language
        Constructor (the C in Factory C is for Constructor). So thats
        Constructor, after Assembler
    */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * define factory c: (what will be version 1.1.1 when first posted)          *
     *                                                                           *
     *      factory c is an object oriented class factory implemented in the c   *
     * programming language. factory c is defined by using a factory object.     *
     * a factory object is not only a virtual table object but an object of a    *
     * factory table class. a factory object is defined by using a class factory *
     * method. the primary factory method takes an objects type id and returns   *
     * the class factory method, which returns either an interface or the sub    *
     * factory method. there may be more factory method(s) that follow but       *
     * most others are just methods that use the factory table multimap, like    *
     * the factory method that returns the constructor for an object. factory c  *
     * not only uses an object but it uses an adapter. there is a factory        *
     * adapter to their being an adapter.                                        *
     *                                                                           *
     *      factory c offers a container object that itself is an object table   *
     * of objects and each objects assigned interface (the virtual table).       *
     *                                                                           *
     *      factory c offers a container object that itself is a class table     *
     * of runtime strings and each classes assigned singleton factory method     *
     * (the factory table).                                                      *
     *                                                                           *
     *      factory c offers a container object that itself is an adapter table  *
     * of adapters and each adapters assigned adaptee (the adapter table).       *
     *                                                                           *
     *      factory c offers also 7 singleton container objects that are stacks  *
     * to go beside/around the tables, they are the jump, object, map, flag,     *
     * interface, pass, and control factory (stacks).                            *
     *                                                                           *
     *      factory c offers a control factory that uses a runtime               *
     * structure capable of 99-100 constructor style function calls from factory *
     * functions (or execute functions) called strategically from an array in one*
     * sequence or runtime statement (operation/procedure).                      *
     *                                                                           *
     *      sub-object(s) of the factory table include a runtime class interface *
     * heap builder object that is a "class builder" for a runtime form of a     *
     * factory table class that may not have any struct class implementation(s)  *
     * or any use for them, at least come runtime. this is for a "complex" form  *
     * of data type, relying on a builder factory method with multiple builder   *
     * sub-factory methods, to go beside primitive types as factory table classes*
     * using a class factory method possibly with no sub-factory methods and also*
     * compile-time struct class versions that are implemented classes, possibly *
     * with a full set of sub-factory methods, that wont be dynamic themselves   *
     * like their builder versions (factory c class builder).                    *
     *                                                                           *
     *      the other significant implementation of a sub-object (singleton)     *
     * inside the factory table is the factory c struct bunker thats an operating*
     * system(s) control bunker for an operating system. because of the object-  *
     * not-class (runtime-not-compile time) coupling between the factory table   *
     * and its builder or its bunker it is possible for either to be aborted if  *
     * there are extenuating circumstances or if not needed... the struct bunker *
     * contains an atomic volatile double pointer to each volatile hash table and*
     * each volatile stack. it contains an atomic volatile accumulator virtual   *
     * table thats a restricted access virtual table that is protected           *
     * by a runtime pass number(s) that may also lock the factory methods so     *
     * they cant be used. the struct bunker has important program flags as to    *
     * place/remove important access locks on factory methods and the resulting  *
     * "private" or "public" runtime info/classes ... (factory c struct bunker). *
     *                                                                           *
     *      with all the advanced things like overloads on functions that occur  *
     * at multiple levels and runtime data type (class) building factory c also  *
     * (if only a limited amount of its files are included) offers basic or      *
     * primitive (in terms of things like overloads and multiple inheritance)    *
     * object oriented programming that may only use the virtual table. that is  *
     * where factory c uses the same table as c++/java/c#...so the virtual table *
     * is built to match the c++ virtual table in what would still be just basic *
     * object-oriented programming in c or ooc for short. that is where the      *
     * object has an assigned interface with typeid, initializer, destructor.    *
     * the virtual table. ooc (factory c).                                       *
     *                                                                           *
     *      the adapter table has a special hand in assigning a special adapter- *
     * constructor and adapter-interface to a virtual table object that is then  *
     * used as an object adapter to another object.                              *
     *                                                                           *
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/*[ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                c-library files that get included                   *
     *                                                                           *
     *            these are the files that have headers in the c standard.       *
     *                                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    //[ 1 ]array
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "../Standard/stdint.h"


#include "../Standard/setjmp.h"
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "../Standard/stdlib.h"//? abort()


#include "../Standard/stdatomic.h" //keeper (atomic qualifier)


#include "../Standard/iso646.h"    //keeper (and, not, or, ...)


#include "../Standard/string.h"    //keeper (String LibraryHeap)


#include "../Standard/assert.h"    //keeper (Assertion)


#include "../Standard/conio.h"


#include "../Standard/ctype.h"


//#include "../Standard/gl.h"


#include "../Standard/inttypes.h"  //keeper (OO-primitives)


#include "../Standard/io.h"//?


#include "../Standard/setjmp.h"    //keeper (try, throw, catch)


#include "../Standard/signal.h"


//#include "../Standard/sql.h"


#include "../Standard/stddef.h"  //not sure but looks important (dont get rid of)


#include "../Standard/stdint.h"  //more int types, fast, least? (objects)


#include "../Standard/wchar.h"   //wide char (object)


//#include "../Standard/stdio.h"   ///printf (KEEPER) (MOVED TO STACK.H)
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <math.h>


#include <unistd.h> //sleep()  ... (guess not)


#include <pthread.h>


#include <time.h> //good thing: clock_t begin = clock();
                  //like:        size_t

#include <conio.h>//          clock_t * begin = new(clock_t)(this, clock());


//#include <windows.h>


//#include <windows.h>  //sleep( seconds );
    //#undef      max  //!!!!!!!!!! and Rectangle is now _Rectangle
    //#undef      Rectangle

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                c-library front-end macros                          *
     *                                                                           *
     *            macros to hide the built-in library functions                  *
     *            that come standard, things that use the built-                 *
     *            in functions rely on this front-end file so                    *
     *            everything can be changed by editing this file.                *
     *                                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    //[ 2 ]array
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define  allocate                malloc           //allocate(size)


#define  deallocate              free             //deallocate(p)


#define  reallocate              realloc          //reallocate(p, size)
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define  _line_                  __LINE__


#define  _file_                  __FILE__


#define  _time_                  __TIME__


#define  _date_                  __DATE__
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define  attribute               __attribute__
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
 //
#define  set                     setjmp  //setJump                 setjmp


#define  jump                    longjmp //longJump                longjmp


#define  per_sec                 CLOCKS_PER_SEC
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define  random                  rand
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                factory c special syntax macros                     *
     *                                                                           *
     *            these macros are for the kinder gardeners, to the              *
     *            person who wrote them, they are exciting to brainstorm         *
     *            with but generally unused (because they are too wordy).        *
     *                                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    //[ 3 ]array
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
                    //more similar stuff in Standard/iso646///
#define  as                      {


#define  then                    {                 //if(true)then ... endif


#define  endif                   }  //Visual Basic


#define  endfor                  }


#define  endwhile                }
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
        ///
//#define  each( ... )

        // for( ; ; ){}
//#define  in( ... )
    // for( each( item ); in ( list ) ) then {  }    ///(when there is time)
    // for( each( item ); in ( list ) ) then ;...endl///(or not)
//#define  endl


//#define  p(o)                    { o ;  //...


//#define  b(c)                    } c ;


#define  extends( type )         type base
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define  reference               *


#define  addressof               &
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
                    ///
//#define  multidex                 multimap


#define  pokedex                  multimap

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                factory c input output                              *
     *                                                                           *
     *            these macros are for converting 3 separate implementations     *
     *            of io (console, standard, file) into one implementation, 2     *
     *            if you include a debuggable version (one/two sets of 3         *
     *            functions).                                                    *
     *                                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    //[ 4 ]array
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#define  _cPrint()               printf(


#define  cEnd()                  )


#define  _sPrint(self)           sprintf( ConsoleOut(String)/*self + retval*/,


#define  sEnd()                  )


#define  _fPrint(self)           fprintf( (*(File*)self),


#define   fEnd()                 )
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define  _cScan()                scanf(


#define  cEnd()                  )


#define  _sScan(self)            sscanf( ConsoleIn(String)/*self + retval*/,


#define  sEnd()                  )


#define  _fScan(self)            fscanf( (*(File*)self),


#define   fEnd()                 )

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                         factory c                                  *
     *                                                                           *
     *            this is the start of the definition of factory c,              *
     *            where factory c, to the person who wrote it, part              *
     *            of the agenda was always for borrow every available            *
     *            c++ keyword and use them all some way or other.                *
     *                                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    //[ 5 ]array
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
//#define  static                  static
                               //
         //private;
//#define  private                 static
                               //
         //protected;            //
//#define  protected               static//

         explicit;             //
#define  explicit                static inline//
                                          //
         noexcept;                        //
#define  noexcept                         //(02/19/2022)
/*extern*/
/*inline*/
#define  except


#define  hazardous               volatile        volatile        volatile
                                            //any more volatile? X2? X3? XX?

#define  atomic                  _Atomic//atomic qualifier from std/stdatomic

         final;
//#define  final                   const// Control Factory using/final

//         friend;
//#define  friend                //free label (Factory C) (now used by atable)


//#define  struct(struct)        struct##struct


#define  singleton               volatile
    /* namespaces  namespaces  namespaces  namespaces  namespaces */

#define  class(member)           class##member


#define  builder(member)         struct builder ## member//temp


#define  pass(member)            pass ## member


#define  object(member)          object ## member


#define  interface(member)       interface ## member


#define  array(member)           array ## member
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define  case(member)            case##member


#define  casedefault             0


#define  casecopy                1


#define  caseassign              2

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                factory c (non-ooc) library files                   *
     *                                                                           *
     *            these files are included here before the definition            *
     *            of the Factory Object just so everything can be out            *
     *            of the way for Object.h (and the other 2 primary files).       *
     *                                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    //[ 6 ]array
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include  "nullptr.h"            //defined in C++ 11


#include  "bool.h"               //defined in C++


#include  "typemax.h"            //


#include  "cstring.h"            //cstring typedef and functions


#include  "hash.h"               ///hash bag


#include  "../Control/template.h"//template & typename

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

            /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
            /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
            #if 0
                      pokedex(1)(typeid(pokemon))("...")("...") ;
            #endif // 0
            /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
            /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
            /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
                                                            //CWP
#endif // CLIBRARY_H_INCLUDED
