#ifndef EXCEPTION_H_INCLUDED
#define EXCEPTION_H_INCLUDED
#define EXCEPTION
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

    #include "../Library/File.h"
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||   C EXCEPTION (STRUCTCLASS EXCEPTION CERTIFICATE)   || *
     *                                                           *
     *             by Willy (11/06/2018)(01/17/2021)             *
     *                      (12/21/2021)(08/23/2022)             *
     * ||                   (09/04/2022)(12/11/2022)          || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief throw(new(Exception))(this, "text");               *
     *                                                           *
     *  note: this exception gets extended into an assertion.    *
     *                                                           *
     *        new(Assertion)(this, assert(a > b));               *
     *                                                           *
     *                                                           *
     *  note: as an aide, thrown exceptions and failed assertions*
     *                                                           *
     *        can both make a ding or alert beep when they occur,*
     *                                                           *
     *        for those who are oldschool, see ... (Assertion.h) *
     *                                                           *
     *        also, the Exception(Flag) when true makes a ding,  *
     *                                                           *
     *        false does not make a ding. print in the catch block*
     *                                                           *
     *        after throw so when either there is a ding + print *
     *                                                           *
     *                                                           *
     *  also: if there is an object you want to be there         *
     *                                                           *
     *        for you after a throw you can push it not          *
     *                                                           *
     *        onto the jump stack (jPush(jump)) but the          *
     *                                                           *
     *        object stack using vPush(obj) and then use         *
     *                                                           *
     *        vTop() and vPop() in the catch block. vPop()       *
     *                                                           *
     *        as you may know is used by this (for the           *
     *                                                           *
     *        constructor).                                      *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //#define printStackTrace Exception(ConsoleOut)

   typedef struct Exception Certificate;
   # define Certificate(Member)Exception ## Member


   # define Exception(Member)Exception ## Member
    typedef struct Exception Exception;
    /**+---------------------------------+
     * @brief base Exception             |
     * +---------------------------------+
     */
    struct Exception//PassNumber
    {   struct class base; // = {}

        char *  text,//[4] pass (name)

             *  file,//[1] name

             *  time,//[2]

             *  date;//[3]

        size_t  line;//[0] algn

    };//        cond //[5]      (pass)


   # define Assertion(Member)Assertion ## Member
    typedef struct Assertion Assertion;
    /**+---------------------------------+
     * @brief derived Assertion          |
     * +---------------------------------+
     */
    struct Assertion//InformationSecurity
    {   Exception base;
          //+item
        bool cond;
    };

   # define PassNumber(Member)PassNumber ## Member
  #if 0
    struct PassNumber;

    typedef struct PassNumber PassNumber;

    struct PassNumber//USE EXCEPTION
    {   struct class base; // = {}

        int8_t algn;// +1 or -1 place or remove

        char * name,// "insert"

             * time,// _time_

             * date,// _date_

             * pass;// 0xffffffff

    };
    /*
     this is all fine and dandy but just look at the Exception

     for how all its data members are equivalent. (couple names

     are off)
     */
  #else
  /*
    typedef struct PassNumber PassNumber ;

    /**+---------------------------------+
     * @brief derived PassNumber         |
     * +---------------------------------+
     * /
    struct PassNumber
    {   Exception base;

        char * pass; //size_t ? hash value if so
    } ;
  */
  #endif // 0

  #if 0
    struct Exception//Certificate (they are all certificates)
    {   struct class base; // = {}

        size_t  line;//[0] numb polymorphs or numb adapters

        char *  file,//[1] name of class

             *  time,//[2]

             *  date,//[3]

             *  text;//[4] list (adapters or polymorphs)

    };//        cond //[5] (true if adapter, polymorphic)
  #else

  #endif // 0

    #define  NotFound(Member)\
        NotFound##Member
    typedef struct NotFound
    {   Exception base;
        char * item;
    }NotFound, NotFound(Exception);


    #define  Override(Member)\
        Override##Member
    typedef struct Override
    {   Exception base;
        char * item;
    }Override, Override(Exception);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - - there needs to be a polymorph certificate that may/may not
        be a part of a type info certificate, now that i think about it,
        the type_info certificate should include num of adapters
        not num of polymorphs.

    - - a composite stack might be good for a pass number stack,
        so when a specific interface is accessed from multimap,
        if the interface has one, then it pushes its list of passes
        for individual data members onto the stack, it would be
        just a single pass that gets loaded onto the stack for
        an entire interface heap or entire interface (like the
        complex table/heap)

    - - just food for thought, but a better or more abstract
        definition of an exception, being it is used as such here
        (or in more ways than one) but an exception is a form
        of a certificate, just that its an operation abort
        certificate (id) is all. also exception is an inherited
        pattern, inherited from the public domain's definition
        of, so it should always be an exception by name, just
        food for thought that it is a certificate or that everything
        in this folder is the "certificates folder" and try for
        defining good construction for macros that make the other
        "certificates" good to use like exception, or assertion,
        the runtime condition validation certificate, that is not
        thrown, but laid or placed as its placed on the stack, like
        every other certificate i think. also there would be
        extended assertions for pass numbers like RestrictedAccess,
        "0xffffffff == 0xffffffff" and true or false, maybe that
        is just passnumber, but this whole thing almost deserves
        a struct prototype area like the interface heap... (DONE)

        ...or one extended from plain exception, like
        InformationSecurity, "RestrictedArea", ...maybe but just
        try to remember what the purpose was because one was a
        placed assertion the other was a thrown exception.

        the TypeInfo certificate (exception) as an adapter list
        included certificate

    - - try and exclude class as a polymorph item for certain cases
        +is_polymorphic will always return true if it was counted,
        so your doing good just having something for that heap, just
        that function wont include

    - - #1 i just wanted to point out, a volatile variable declared
        here without being declared as static in a .h file causes a
        multiple definition error (just for a keepsake on errors).

    - - #2 "... declared as a function returning a function" appears
           when you forget your namespace macro:
           #define Class(Member)Class ## Member

    - - #3 "... redeclared as a different kind of symbol" happens when
           you use something before it is declared (like a function)

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*               central area (try/catch setup)              */
    #define  exception  Exception(Exception)()

    volatile static bool Exception(Flag) = true;

    Object * * pJumpVal;//(bool*)

    volatile static bool JumpFlag = false;

    static Jump _pair_ = { 0, 0 };

    #include "try.h"

    #include "throw.h" //includes macro constructor _exception
                      //
    #include "catch.h"

    static bool   jPush(Jump);
    static Jump   jPop(void);
    static const Jump * jTop(void);
    static size_t       jHeight(void);
    static int          jPrint(void);
    #include           "jStk.h"//Jump Stack


    typedef Exception * Except;

    static bool   ePush(Except);
    static Except   ePop(void);
    static const Except * eTop(void);
    static size_t       eHeight(void);
    static int          ePrint(void);
    #include           "eStk.h"//Certificate Stack (Exception)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    typedef struct Exception Exception;   //declare and type define

    typedef struct Exception (VirtualTable)
    {   struct class (VirtualTable) base;
    }Exception (VirtualTable);


    static Exception * Exception(Init)( Exception *,

        size_t, char *, char *, char *, char * );


    static void Exception(Dtor)( Exception * );

    static cstring Exception(Type)();

    static ctorPtr Exception(Ctor)();


    MACROS; ARE; AN; ART; FORM; ; ;  MACROS;


    static int Exception(ConsoleOut)( Exception * );

    static int () (*printStackTrace)( Exception * ) //global method
            = & Exception(ConsoleOut);


    explicit cstring Exception(Type)() { return "Exception"; }

//volatile?
    static Exception(VirtualTable)

        Exception(Interface) =
    {//volatile?
        {  //don't think so
            &Exception(Type),
           //but this is where
            &Exception(Init),
           //C++ uses a static
            &Exception(Dtor)
        }  //interface or "virtual table", so we do too
    };
    explicit ctorPtr Exception(Ctor)(){ return new(Exception); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       exception initializer/constructor            *
     *                                                           *
     * @param  self                            this              *
     *                                                           *
     * @param  line     __LINE__     (or)     _line_             *
     *                                                           *
     * @param  file     __FILE__     (or)     _file_             *
     *                                                           *
     * @param  time     __TIME__     (or)     _time_             *
     *                                                           *
     * @param  date     __DATE__     (or)     _date_             *
     *                                                           *
     * @param  text     (your own personalized message)          *
     *                                                           *
     *         note:    typeid(e) returns class name as cstring  *
     *                                                           *
     * @return self to init pointer with memory from new(Class)  *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Exception * Exception(Init)( Exception * self, size_t line,

        char * file, char * time, char * date, char * text )
    {
        if( self == nullptr ){ return nullptr; }//unreachable by self = this

        self->line = line;
                                //check for an off-by-one error (GOOD)
        self->file = (char *)allocate(string(size)(file));

        self->time = (char *)allocate(string(size)(time));

        self->date = (char *)allocate(string(size)(date));

        self->text = (char *)allocate(string(size)(text));

        if(self->file == nullptr || self->time == nullptr

        || self->date == nullptr || self->text == nullptr )

        {
            Exception(Dtor)(self);

            return nullptr;
        }

        string(fill)(self->file, file);

        string(fill)(self->time, time);

        string(fill)(self->date, date);

        string(fill)(self->text, text);

        //just re-add the exception using vPush(object)

        //and send it on its way! ( #define this vPop() )


        //update: this was redefined to throw an exception,

        //( #define this vTable(This)() ).

        if( !estk || (estk && !ePush(self)) )//called immediately
        {
            printStackTrace(self);

            Exception(Dtor)(self);

            destroy(); abort();

            return nullptr;//unreachable now (good)
        }
    #if 0
        if( Exception(Flag)

           && !string(equal)( typeid(self), "Assertion" ) )

            {printf("\a");}//SYSTEM ALERT OR BEEP
    #endif // 0
        return self;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief              exception destructor                  *
     *                                                           *
     * @param self                                               *
     *                                                           *
     * @return void                                              *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void Exception(Dtor)( Exception * self )
    {
        deallocate(self->file);

        deallocate(self->time);

        deallocate(self->date);

        deallocate(self->text);

        self->file = 0;

        self->time = 0;

        self->date = 0;

        self->text = 0;

        self->line = 0;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief          global print stack trace                  *
     *                                                           *
     *       - - (printf)  #define  print  printf  NO - -        *
     *                                                           *
     * @param self                                               *
     *                                                           *
     * @return int                                               *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define definePrintStackTrace( Class, Type, Print, End, Before )\
    \
        static int Class(Type##Out)( Exception * );\
    \
        explicit int Class(Type##Out)( Exception * self )\
        {\
            if( !self ){ printf("(exception)"); return 0; }\
    \
            /*Stack * stack = control();*/\
    \
            Before    ;    \
    \
            register size_t retval = 0;\
    \
            retval += Print "\n" End;\
    \
    \
            retval += Print "type:\t\t %s\n", typeid(self)End;/* */\
    \
            retval += Print "time:\t\t %s\n", self->time End;/*[2]*/\
    \
            retval += Print "date:\t\t %s\n", self->date End;/*[3]*/\
    \
            retval += Print "file:\t\t %s\n", self->file End;/*[1]*/\
    \
            retval += Print "line:\t\t %d\n", self->line End;/*[2]*/\
    \
            retval += Print "text:\t\t %s\n", self->text End;/*[0]*/\
    \
    \
            retval += Print "\n" End;\
    \
            return retval;\
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief         IO for the exception class                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static int Exception(ConsoleOut)( Exception * );

    typename(PrintStackTrace)
    ( Exception, Console,

        _cPrint(), cEnd(),
    ;);


    static int Exception(StandardOut)( Exception * );

    typename(PrintStackTrace)
    ( Exception, Standard,

        _sPrint(str), sEnd(),

        string str = ConsoleOut(String);
    ;);


    static int Exception(FileOut)( Exception * );

    typename(PrintStackTrace)
    ( Exception, File,

        _fPrint(file), fEnd(),

        File * file = ConsoleOut(Object);
    ;);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief      registrations for exception class             *
     * - - each of these is an interface, identifiable by the - -*
     *  - - first data field position used as a type method - -  *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static struct class(FactoryTable)

        Exception(Factory) =
    {
        &class(FactoryTable)(Type),

        &Exception(Ctor), 0
    };


    static struct class(ConsoleTable)

        Exception(Console) =
    {
        &class(ConsoleTable)(Type),

        0, &Exception(ConsoleOut)
    };


    static struct class(StandardTable)

        Exception(Standard) =
    {
        &class(StandardTable)(Type),

        0, &Exception(StandardOut)
    };


    static struct class(FileTable)

        Exception(File) =
    {
        &class(FileTable)(Type),

        0, &Exception(FileOut)
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        virtual heap for exceptions                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Virtual
        Exception(VirtualHeap)[three] =
    {
        {"dtor", 2, & Exception(Dtor), "void(*)(Exception*)"},
        {"init", 1, & Exception(Init), "Exception*(*)(Exception*,...)"},
        {"type", 0, & Exception(Type), "cstring(*)()"},

        {"",0,0,""}
    };
    static Virtual *
    typename(SubFactoryMethod) (Exception,Virtual,Virtual,0,2) ;


    static class(VirtualHeap)
        Exception(Virtual) =

    {&class(VirtualHeap)(Type),
    &Exception(VirtualSearch),Exception(VirtualHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        complex heap for exceptions                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Complex
        Exception(ComplexHeap)[five] =
    {
        {"date", 3, sizeof(char*), "char*"},
        {"file", 1, sizeof(char*), "char*"},
        {"line", 4, sizeof(size_t), "size_t"},
        {"text", 0, sizeof(char*), "char*"},
        {"time", 2, sizeof(char*), "char*"},

        {"",0,0,""}
    };
    static Complex *
    typename(SubFactoryMethod) (Exception,Complex,Complex,0,4) ;


    static class(ComplexHeap)
        Exception(Complex) =

    {&class(ComplexHeap)(Type),
    &Exception(ComplexSearch),Exception(ComplexHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       polymorph heap for exceptions                *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Polymorph

        Exception  (PolymorphHeap)[one] =

    { {"class",0,0,""},   //{"Assertion",0,0,""},
    {"",0,0,""} } ;
    static Polymorph *
    typename(SubFactoryMethod)(Exception,Polymorph,Polymorph,0,0);


    static struct class(PolymorphHeap)//#3

        Exception (Polymorph) =

    { &class(PolymorphHeap)(Type), &Exception(PolymorphSearch),
      Exception(PolymorphHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        security heap for exceptions                *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Security //A

        Exception(SecurityHeap)[fifteen] =
    /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
    {
      {"Assertion"},{"EmptyString"},
      {"Exception"},{"IllegalOperation"},
      {"InformationSecurity"},{"InputMismatch"},
      {"IsPolymorphic"},{"NotFound"},{"NullPointer"},
      {"OutOfBounds"},{"OutOfMemory"},
      {"Override"},{"PassNumber"},
      {"RestrictedAccess"},{"TypeInfo"},

      {""},};
    static Security *
    typename(SubFactoryMethod)(Exception,Security,Security,0,14);//B


    static struct class(SecurityHeap) //C

        Exception(Security) = {&class(SecurityHeap)(Type),
        &Exception(SecuritySearch), Exception(SecurityHeap)};
    /* note: A,B,C are the array, factory method, and interface
     *       using a type method for interface type id. that's
     *       called the A,B,C's of implementing registrations
     *       (interfaces) that use a factory method.
     */

    # define ExceptionSecurity(Member)ExceptionSecurity ## Member
    #if 1
    static cstring typename(PassNumber)(Exception, Security);
    #endif // 0
    /*extern struct pass(SecurityHeap)Exception(Registrations);*/
    #if 1
    static struct pass(SecurityHeap)
        Exception(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
        0/*Exception(InterfaceHeap)*/ },
        & Exception(Security)(ID), 0 };
    #endif // 0

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       exception class interface heap               *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Interface Exception

        (InterfaceHeap)[ten] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &Exception(Interface),//Exception

        &Exception(Complex),   //+sub  class(...)

        &Exception(Console),

        &Exception(Factory),

        &Exception(File),

        &Exception(Polymorph), //+sub

        &Exception(Security),  //+sub

        &Exception(Standard),

        &Exception(Virtual),   //+sub

        &Exception(Registrations),   //pass(...)0xffffffff (passnum)

        nullptr//
    } ;//
    static Interface
    typename(ClassFactoryMethod)(Exception,0,9);//


    static void typename(Setup)(Exception)
    { Exception(Security)(ID)();

        ((Interface)&Exception(Registrations))
        [2] = Exception(InterfaceHeap) ;}


    static void typename(Abort)(Exception){}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                 EXCEPTION GENERATOR                 || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #include "../Template/defineException.h" ///<-------- moved to
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #define ex(self, text)(self ,_line_,_file_,_time_,_date_, text)
/**********************************************************************
 *             Exception pattern for error code objects               *
 * - -place this code into the appropriately named Exception file- -  *
 **********************************************************************/
/*              write a file such as:

#ifndef INPUTMISMATCH_H_INCLUDED
#define INPUTMISMATCH_H_INCLUDED

    #include "Exception.h"

    define(Exception)(InputMismatch) ;

#endif // INPUTMISMATCH_H_INCLUDED

                as the way to write [Type].h

    PERSONALLY I WOULD USE A PLACE BEFORE OR AFTER THE FACTORY

    TABLE PROGRAM CONSTRUCTOR, INSIDE main.c

        (and use typename for syntax instead of define)
*/
/**********************************************************************/

    #define defineItemException(Item, item)\
    \
        typedef struct Item(VirtualTable)\
        {   Exception (VirtualTable) base;\
        }Item(VirtualTable);\
    \
        static Item * Item(Init)( Item *,\
            size_t, char *, char *, char *, char *, char * );\
        static void Item(Dtor)( Item * );\
        static cstring Item(Type)();\
        explicit cstring Item(Type)(){ return # Item ; }/*stringize*/\
    \
        static Item(VirtualTable)\
            Item(Interface) =\
        {{{ &Item(Type), &Item(Init), &Item(Dtor) }}};\
    \
        explicit Item * Item(Init)( Item * self, size_t line,\
            char * file, char * time, char * date, char * text, char * item )\
        { if( self == nullptr ){ return nullptr; }\
            self = Exception(Init)(self, line, file, time, date, text);\
            if( self == nullptr ){ return nullptr; }\
            self->item = (char *)allocate(string(size)(item));\
    \
            if( self->item == nullptr )\
            {   Item(Dtor)(self);\
                return nullptr;   }\
    \
            string(fill)(self->item, item);\
            return self; }\
    \
        explicit void Item(Dtor)( Item * self )\
        {   Exception(Dtor)(self);\
            deallocate(self->item); self->item = 0;}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef NOTFOUND
    #define NOTFOUND

        //#include "../Exception/defineException.h"

        #define  NotFound(Member)\
            NotFound##Member
      #if 0
        typename(Exception)(NotFound);
      #else
        typename(ItemException)(NotFound, item);
      #endif // 0


    #define defineItemExceptionPrint( Class, Type, Print, End, Before )\
    \
        static int Class(Type##Out)( Class * );\
    \
        explicit int Class(Type##Out)( Class * self )\
        {\
            if( !self ){ printf("(exception)"); return 0; }\
    \
            Before    ;  \
    \
            register size_t retval = 0;\
    \
            retval += Print "\n" End;/* */\
    \
            if( instance(self) )\
            {\
                retval += Print "type:\t\t %s\n", typeid(self) End;/* */\
            }\
            else\
            if( struct(bunker)(instance)(self) )\
            {\
                retval += Print "type:\t\t %s\n", struct(bunker)(typeid)(self) End;\
            }\
    \
            retval += Print "time:\t\t %s\n", self->base.time End;/*[2]*/\
    \
            retval += Print "date:\t\t %s\n", self->base.date End;/*[3]*/\
    \
            retval += Print "file:\t\t %s\n", self->base.file End;/*[1]*/\
    \
            retval += Print "line:\t\t %d\n", self->base.line End;/*[2]*/\
    \
            retval += Print "text:\t\t %s:%s\n", self->base.text, self->item End;\
    \
            retval += Print "\n" End;\
    \
            return retval;\
        }

    /* note: typename for implementation moved to Assertion.h
     */
    static int NotFound(ConsoleOut)( NotFound * );

    static struct class(ConsoleTable)

        NotFound(Console) =
    {
        &class(ConsoleTable)(Type),

        0, &NotFound(ConsoleOut)
    };

    /* note: typename for implementation moved to Assertion.h
     */
    static int NotFound(StandardOut)( NotFound * );

    static struct class(StandardTable)

        NotFound(Standard) =
    {
        &class(StandardTable)(Type),

        0, &NotFound(StandardOut)
    };

    /* note: typename for implementation moved to Assertion.h
     */
    static int NotFound(FileOut)( NotFound * );

    static struct class(FileTable)

        NotFound(File) =
    {
        &class(FileTable)(Type),

        0, &NotFound(FileOut)
    };


    static ctorPtr typename(Ctor)(NotFound);//vto factory

    static struct class(FactoryTable)
        NotFound(Factory) =
    {
        &class(FactoryTable)(Type),

        &NotFound(Ctor), 0
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief         complex heap for notfound                  *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Complex
        NotFound(ComplexHeap)[six] =
    {
        {"date", 3, sizeof(char*), "char*"},
        {"file", 1, sizeof(char*), "char*"},
        {"item", 5, sizeof(char*), "char*"},
        {"line", 4, sizeof(size_t), "size_t"},
        {"text", 0, sizeof(char*), "char*"},
        {"time", 2, sizeof(char*), "char*"},

        {"",0,0}
    };
    static Complex *
    typename(SubFactoryMethod) (NotFound,Complex,Complex,0,5) ;


    static class(ComplexHeap)
        NotFound(Complex) =

    {&class(ComplexHeap)(Type),
    &NotFound(ComplexSearch),NotFound(ComplexHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       polymorph heap for assertion                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Polymorph

        Assertion  (PolymorphHeap)[two] =          ///Assertion

    { {"Exception",0,0,""},{"class",0,0,""},
    {"",0,0,""} } ;
    static Polymorph *
    typename(SubFactoryMethod)(Assertion,Polymorph,Polymorph,0,1);


    static struct class(PolymorphHeap)//
        Assertion (Polymorph) =

    { &class(PolymorphHeap)(Type),
    &Assertion(PolymorphSearch),
      Assertion(PolymorphHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief         interface heap for notfound                *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    # define NotFoundSecurity(Member)NotFoundSecurity ## Member
    /*extern struct pass(SecurityHeap)NotFound(Registrations);*/

    #if 1
    static struct pass(SecurityHeap)
        NotFound(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
        0/*NotFound(InterfaceHeap)*/ },
        & Exception(Security)(ID) };
    #endif // 0

    static Interface NotFound
        (InterfaceHeap)[nine] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &NotFound(Interface), //vto
        &NotFound(Complex),   //+
        &NotFound(Console),
        &NotFound(Factory),
        &NotFound(File),
        &Assertion(Polymorph),   //+
        &NotFound(Standard),
        &Exception(Virtual),     //+
        &NotFound(Registrations),

        nullptr//
    } ;//
    static Interface
    typename(ClassFactoryMethod)(NotFound,0,8);//

    static void typename(Setup)(NotFound)
    { ((Interface)&NotFound(Registrations))
        [2] = NotFound(InterfaceHeap) ;}

    static void typename(Abort)(NotFound){}

    #endif // NOTFOUND
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef OVERRIDE
    #define OVERRIDE

        //#include "../Exception/defineException.h"

        #define  Override(Member)\
            Override##Member
      #if 0
        typename(Exception)(Override);
      #else
        typename(ItemException)(Override, item);
      #endif // 0

    static int Override(ConsoleOut)( Override * );

    static int Override(StandardOut)( Override * );

    static int Override(FileOut)( Override * );


    static ctorPtr typename(Ctor)(Override);

    static struct class(FactoryTable)
        Override(Factory) =
    {
        &class(FactoryTable)(Type),

        &Override(Ctor), 0
    };


    static struct class(ConsoleTable)

        Override(Console) =
    {
        &class(ConsoleTable)(Type),

        0, &Override(ConsoleOut)
    };


    static struct class(StandardTable)

        Override(Standard) =
    {
        &class(StandardTable)(Type),

        0, &Override(StandardOut)
    };


    static struct class(FileTable)

        Override(File) =
    {
        &class(FileTable)(Type),

        0, &Override(FileOut)
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        complex heap for override                   *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Complex
        Override(ComplexHeap)[six] =
    {
        {"date", 3, sizeof(char*), "char*"},
        {"file", 1, sizeof(char*), "char*"},
        {"line", 4, sizeof(size_t), "size_t"},
        {"pass", 5, sizeof(char*), "char*"},
        {"text", 0, sizeof(char*), "char*"},
        {"time", 2, sizeof(char*), "char*"},

        {"",0,0}
    };
    static Complex *
    typename(SubFactoryMethod) (Override,Complex,Complex,0,5) ;


    static class(ComplexHeap)
        Override(Complex) =

    {&class(ComplexHeap)(Type),
    &Override(ComplexSearch),Override(ComplexHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       interface heap for override                  *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    # define OverrideSecurity(Member)OverrideSecurity ## Member
    /*extern struct pass(SecurityHeap)Override(Registrations);*/

    #if 1
    static struct pass(SecurityHeap)
        Override(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
        0/*Override(InterfaceHeap)*/ },
        & Exception(Security)(ID) };
    #endif // 0

    static Interface Override
        (InterfaceHeap)[nine] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &Override(Interface), //vto
        &Override(Complex),   //+
        &Override(Console),
        &Override(Factory),
        &Override(File),
        &Assertion(Polymorph),   //+
        &Override(Standard),
        &Exception(Virtual),     //+
        &Override(Registrations),

        nullptr//
    } ;//
    static Interface
    typename(ClassFactoryMethod)(Override,0,8);//


    static void typename(Setup)(Override)
    { ((Interface)&Override(Registrations))
        [2] = Override(InterfaceHeap) ;}

    static void typename(Abort)(Override){}

    #endif // OVERRIDE
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///


    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**

        new (Exception) exception ("InputMismatch");

            and/or: (or a combination of)

        new (InputMismatch) exception ("... tell a story");


    now all thats left is some way to simulate throw using goto label:

    ...

        1) take advantage of functions that return bool

        2) consider functions that return any number >= 1
           or 0 (thats every function that returns a pointer)

        3) always place function calls inside an:
           if( !... ){ ...; return true; } else { return false; }

        4) always check estack for an instance of Exception
           if a function returns false

        5) unlike C++ (i think), delete(object) returns true
           or false for the successful removal of the object from
           the vtable

        6) always declare/implement functions that return bool
           where they would otherwise return void (except dtor)

        X) consider procedurally safe functions like a set
           function that takes a parameter and goes: self->a = a;
           or deallocate(self->array) as the only functions that
           return void (because they wouldn't throw anything)

        X) (or) C++/Java style exception throwing:    (WHAT!!)

            try
            {
                f();
            }
            catch( Exception * e )
            {
                e->...;

                //...

                delete(e);
            }

            and inside f():

                throw( new(Exception) )(this, "...");


        X)

    ... ... ... ... ... ... ... ... ... ... ... ... ... ... ... ...

    ... ... ... ... ... ... ... ... ... ... ... ... ... ... ... ...
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef OUTOFMEMORY                                        //#1
    #define OUTOFMEMORY

        //#include "../Exception/defineException.h"

        #define OutOfMemory(Member)\
            OutOfMemory##Member

    # define OutOfMemorySecurity(Member)\
        OutOfMemorySecurity ## Member

        typename(Exception)(OutOfMemory);

    #define defineFactoryException(Type)\
    \
    static ctorPtr typename(Ctor)(Type);\
    \
    static struct class(FactoryTable)\
        Type(Factory) =\
    \
    {   &class(FactoryTableType),\
        &Type(Ctor), 0};\
    \
    /*extern struct pass(SecurityHeap)Type(Registrations);*/\
    \
    static struct pass(SecurityHeap)\
        Type(Registrations) =\
    \
    { { & pass(SecurityHeapType), 0,\
        0/*Type(InterfaceHeap)*/ },\
        & Exception(Security)(ID) };\
    \
    static Interface Type\
        (InterfaceHeap)[nine] =\
    \
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
    \
        &Type(Interface), \
        &Exception(Complex),   \
        &Exception(Console),\
        &Type(Factory),\
        &Exception(File),\
        &Exception(Polymorph),   \
        &Exception(Standard),\
        &Exception(Virtual),       \
        &Type(Registrations),\
    \
        nullptr \
    } ;\
    static Interface\
    typename(ClassFactoryMethod)(Type,0,8);\
    \
    \
    static void typename(Setup)(Type)\
    { ((Interface)&Type(Registrations))\
        [2] = Type(InterfaceHeap) ;}\
    \
    static void typename(Abort)(Type){}

    #if 0
    #define defineFactoryExceptionPass(Type)\
    \
    struct pass(SecurityHeap)\
        Type(Registrations) =\
    \
    { { & pass(SecurityHeapType), 0,\
          Type(InterfaceHeap) },\
        & Exception(Security)(ID) };
    #endif // _DEFINED_INSIDE_ASSERT_H_(ALL)

        typename(FactoryException)(OutOfMemory);

        explicit void throwOutOfMemory(Object * self)
        {
            if(!self){throw(new(OutOfMemory))
                (this, "MemoryFailure");}
        }

    #endif // OUTOFMEMORY
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef OUTOFBOUNDS                                        //#2
    #define OUTOFBOUNDS

        //#include "../Exception/defineException.h"

        #define OutOfBounds(Member)\
            OutOfBounds##Member

    # define OutOfBoundsSecurity(Member)\
        OutOfBoundsSecurity ## Member

        typename(Exception)(OutOfBounds);

        typename(FactoryException)(OutOfBounds);

    #endif // OUTOFBOUNDS
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef EMPTYSTRING                                        //#3
    #define EMPTYSTRING

        //#include "../Exception/defineException.h"

        #define EmptyString(Member)\
            EmptyString##Member

    # define EmptyStringSecurity(Member)\
        EmptyStringSecurity ## Member

        typename(Exception)(EmptyString);

        typename(FactoryException)(EmptyString);

    #endif // EMPTYSTRING
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef INPUTMISMATCH                                      //#4
    #define INPUTMISMATCH

        //#include "../Exception/defineException.h"

        #define InputMismatch(Member)\
            InputMismatch##Member

    # define InputMismatchSecurity(Member)\
        InputMismatchSecurity ## Member

        typename(Exception)(InputMismatch);

        typename(FactoryException)(InputMismatch);
                                                       //CWP
    #endif // INPUTMISMATCH
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef ILLEGALOPERATION                                   //#5
    #define ILLEGALOPERATION

        //#include "../Exception/defineException.h"

        #define IllegalOperation(Member)\
            IllegalOperation##Member

    # define IllegalOperationSecurity(Member)\
        IllegalOperationSecurity ## Member

        typename(Exception)(IllegalOperation);//

        typename(FactoryException)(IllegalOperation);//

    #endif // ILLEGALOPERATION
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef RESTRICTEDACCESS                                   //#6
    #define RESTRICTEDACCESS

        //#include "../Exception/defineException.h"
    //          "/// /// RESTRICTED AREA /// ///"
        #define RestrictedAccess(Member)\
            RestrictedAccess##Member

    # define RestrictedAccessSecurity(Member)\
        RestrictedAccessSecurity ## Member

        typename(Exception)(RestrictedAccess);//Pass-Oriented (ID)

        typename(FactoryException)(RestrictedAccess);//

    #endif // RESTRICTEDACCESS
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef PASSNUMBER                                         //#7
    #define PASSNUMBER

        //#include "../Exception/defineException.h"
        // DO NOT THROW // DO NOT THROW // DO NOT THROW //
        #define PassNumber(Member)\
            PassNumber##Member

    # define PassNumberSecurity(Member)\
        PassNumberSecurity ## Member

        typename(Exception)(PassNumber);//Pass-Oriented (ID)

        typename(FactoryException)(PassNumber);//
        // DO NOT THROW // DO NOT THROW // DO NOT THROW //
    #endif // PASSNUMBER
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef NULLPOINTER                                        //#8
    #define NULLPOINTER

        //#include "../Exception/defineException.h"

        #define NullPointer(Member)\
            NullPointer##Member

    # define NullPointerSecurity(Member)\
        NullPointerSecurity ## Member

        typename(Exception)(NullPointer);//

        typename(FactoryException)(NullPointer);//

    #endif // NULLPOINTER

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 throw(new(Exception))(this, "text") ;
    #endif // DISPLAY 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
 _______          \ /                       __    __
/\  ____\        - * -                     /\ \__/\_\
\ \ \___/   __  __/ \ ___     ___     ___ /\__  _\/_/_    ___     ___
 \ \  _\   /\_\/ _\  / ___\  / __`\  / __`\/_/\ \/ /\ \  / __`\  / __`\
  \ \ \/___\/_/ _\/_/\ \__/_/\  __/_/\ \/\ \ \ \ \/\ \ \/\ \/\ \/\ \/\ \
   \ \______\/\_\/\_\ \_____\ \_____\ \  __/  \ \__/\ \_\ \____/\ \_\ \_\
    \/______/\/_/\/_/\/_____/\/_____/\ \ \/    \/_/  \/_/\/___/  \/_/\/_/
                                      \ \_\
                                       \/_/\ /
                                          - * -
                                           / \                   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
            volatile static size_t Exception(Recursion) = 0;
    #endif // TRASH_BIN
                                                            //CWP
#endif // EXCEPTION_H_INCLUDED
