#ifndef ASSERTION_H_INCLUDED
#define ASSERTION_H_INCLUDED
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
    #include "Exception.h"
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                     C ASSERTION                     || *
     *                                                           *
     *                by Willy (01/27/2022)(12/11/2022)          *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief new(Assertion)(this, assert( a > b ));             *
     *                                                           *
     *  note: the normal assert() is now Assert()                *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  note: as an aide, thrown exceptions and failed assertions*
     *                                                           *
     *   can both make a ding or alert beep when they occur,     *
     *                                                           *
     *   for those who are oldschool, see ...                    *
     *                                                           *
     *   ... when the Assertion(Flag) is raised it calls the     *
     *                                                           *
     *   old assert() in the assertion constructor and the       *
     *                                                           *
     *   ding + print is turned off. to let you know, (if your   *
     *                                                           *
     *   not so oldschool) the original form of assert() from    *
     *                                                           *
     *   C aborts the program writing to std error or something  *
     *                                                           *
     *   in a way that is supposed to make debugging easier,     *
     *                                                           *
     *   (i think) anyways i like having assertions and not      *
     *                                                           *
     *   having to get rid of them after so leaving the flag set *
     *                                                           *
     *   the way it is wont terminate/abort the program.         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          macros                           */
    #define assert( cond ) _line_,_file_,_time_,_date_, #cond, cond

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    volatile static bool Assertion(Flag) = false;

    typedef struct Assertion(VirtualTable)
    {   Exception(VirtualTable) base;
                    /// (#cond,         __FILE__,     __LINE__)
        void (*assertion)(const char *, const char *, int);

    }Assertion(VirtualTable);


    static Assertion * Assertion(Init)( Assertion *, size_t, char *,
                               char *, char *, char *, bool );
  #if 0
    static void Assertion(Dtor)( Assertion * );
  #endif // 0
    static cstring Assertion(Type)();


    static int Assertion(ConsoleOut)( Assertion * );

    static int () (*printAssertion)( Assertion * ) //global method
            = & Assertion(ConsoleOut);


    explicit cstring Assertion(Type)(){return "Assertion";}


    static Assertion(VirtualTable)

        Assertion(Interface) =
    {
        {
            {
                & Assertion(Type),

                & Assertion(Init),

                & Exception(Dtor)
            }
        },

        &_assert
    };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       assertion constructor/initializer            *
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
     * @param  text     (assertion expression cstring)           *
     *                                                           *
     * @param  cond     true/false for assert (bool value)       *
     *                                                           *
     * @return self                                              *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
           //Exception
    explicit Assertion * Assertion(Init)( Assertion * self, size_t line,
           //
        char * file, char * time, char * date, char * text, bool cond )
    {
        self = Exception(Init)( self, line, file, time, date, text );

        if( self == nullptr ){ return nullptr; }

        self->cond = cond;

        /*
         * THINK ABOUT WRITING TO A FILE OR
         *
         * SOMETHING ALSO (MAYBE) STDERR stderr
         */ /**  **/
        if( Exception(Flag) ) {}

        else {  }


        if( !Assertion(Flag) ) { if( !cond )

        { printAssertion(self) ; if(Exception(Flag)){printf("\a") ;} } }

        else {                   if( !cond )
        {
            Pair(Class, ClassVirtualTable) pair = { self, 0 };
            VirtualTable(Interface).base.base.base.remove( vtable, pair );

            destroy();//same as: Assert( case ) but not in this spot
            /// /// /// /// /// /// /// /// /// /// /// ///
            ((cond) ? (void)0 : _assert(text, file, line));// -- assert
        }   /// /// /// /// /// /// /// /// /// /// /// /// }
                                                    //now Assert( a > b )
        } return self; } /**MISSING BRACKET }*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
        MISSING A BRACKET HERE AND THE COMPILER POINTS TO THE NEXT

        ACTUAL IMPLEMENTATION OF SOMETHING, 2 FILES LATER WHERE

        A typename IS USED, SAYING:


        "error: static declaration of '...' follows non-static

        declaration" - GNU GCC MINGW COMPILER (CodeBlocks)


        (line:   330   vTable.h)


        BECAUSE THE NEXT THING IMPLEMENTED FOR THE COMPILER

        WAS JUST THE PROTOTYPE OF A FUNCTION, DECLARED,

        BUT NOT AN IMPLEMENTED FUNCTION, CONSIDERING WHAT THE

        COMPILER SEES OR WHAT IT THINKS (BASED ON CASE) IS I

        MIGHT HAVE TO SAY THAT A DECLARATION IS AN IMPLEMENTATION,

        (OF AN IMPLEMENTATION) OR SOMETHING.
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineAssertionPrint( Class, Type, Print, End, Before )\
    \
        static int Class(Type##Out)( Class * );\
    \
        explicit int Class(Type##Out)( Class * self )\
        {\
            if( !self ){ printf("(assertion)"); return 0; }\
    \
            /*Stack * stack = control();*/\
    \
            Before    ;    \
    \
            register size_t retval = 0;\
    \
            retval += Print "\n" End;\
    \
            if( instance(self) )\
            {\
                retval += Print "type:\t\t %s\n", typeid(self)End;/* */\
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
            retval += Print "cond:\t\t %s\n", self->base.text End;/*[0]*/\
    \
            retval += Print "eval:\t\t %s\n", \
            ( self->cond ? "true" : "false" ) End;\
    \
    \
            retval += Print "\n" End;\
    \
            return retval;\
        }


    static int NotFound(ConsoleOut)( NotFound * );

    typename(ItemExceptionPrint)
    (   NotFound, Console,

        _cPrint(), cEnd(),
    ;);


    static int NotFound(StandardOut)( NotFound * );

    typename(ItemExceptionPrint)
    (   NotFound, Standard,

        _sPrint(str), sEnd(),

        string str = ConsoleOut(String);
    ;);


    static int NotFound(FileOut)( NotFound * );

    typename(ItemExceptionPrint)
    (   NotFound, File,

        _fPrint(file), fEnd(),

        File * file = ConsoleOut(Object);
    ;);


    static int Override(ConsoleOut)( Override * );

    typename(ItemExceptionPrint)
    (   Override, Console,

        _cPrint(), cEnd(),
    ;);


    static int Override(StandardOut)( Override * );

    typename(ItemExceptionPrint)
    (   Override, Standard,

        _sPrint(str), sEnd(),

        string str = ConsoleOut(String);
    ;);


    static int Override(FileOut)( Override * );

    typename(ItemExceptionPrint)
    (   Override, File,

        _fPrint(file), fEnd(),

        File * file = ConsoleOut(Object);
    ;);


    static int Assertion(ConsoleOut)( Assertion * );

    typename(AssertionPrint)
    ( Assertion, Console,

        _cPrint(), cEnd(),
    ;);


    static int Assertion(StandardOut)( Assertion * );

    typename(AssertionPrint)
    ( Assertion, Standard,

        _sPrint(str), sEnd(),

        string str = ConsoleOut(String);
    ;);


    static int Assertion(FileOut)( Assertion * );

    typename(AssertionPrint)
    ( Assertion, File,

        _fPrint(file), fEnd(),

        File * file = ConsoleOut(Object);
    ;);


    static ctorPtr typename(Ctor)(Assertion);

    static struct class(FactoryTable)

        Assertion(Factory) =
    {
        &class(FactoryTable)(Type),
        &Assertion(Ctor), 0};


    static struct class(ConsoleTable)
        Assertion(Console) =
    {
        &class(ConsoleTable)(Type),
        0, &Assertion(ConsoleOut)};


    static struct class(StandardTable)
        Assertion(Standard) =
    {
        &class(StandardTable)(Type),
        0, &Assertion(StandardOut)};


    static struct class(FileTable)
        Assertion(File) =
    {
        &class(FileTable)(Type),
        0, &Assertion(FileOut)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        security heap for assertions                *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Security

        Assertion(SecurityHeap)[four] =
    /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
    {
      {"Assertion"},
      {"InformationSecurity"},
      {"IsPolymorphic"},
      {"TypeInfo"},

      {""},};
    static Security *
    typename(SubFactoryMethod)(Assertion,Security,Security,0,3);


    static struct class(SecurityHeap)

        Assertion(Security) = {&class(SecurityHeap)(Type),
        &Assertion(SecuritySearch), Assertion(SecurityHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        virtual heap for assertions                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Virtual
        Assertion(VirtualHeap)[four] =
    {   {"assertion", 3, & _assert,    "void(*)(cstring,cstring,int)" },
        {"dtor", 2, & Exception(Dtor), "void(*)(Exception*)"},
        {"init", 1, & Assertion(Init), "Assertion*(*)(Assertion*,...)"},
        {"type", 0, & Assertion(Type), "cstring(*)()"},

        {"",0,0,""}
    };
    static Virtual *
    typename(SubFactoryMethod) (Assertion,Virtual,Virtual,0,3) ;


    static struct class(VirtualHeap)
        Assertion(Virtual) =

    {&class(VirtualHeap)(Type),
    &Assertion(VirtualSearch),Assertion(VirtualHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        complex heap for assertions                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Complex
        Assertion(ComplexHeap)[six] =
    {
        {"cond", 20, sizeof(bool), "bool"},
        {"date", 3, sizeof(char*), "char*"},
        {"file", 1, sizeof(char*), "char*"},
        {"line", 4, sizeof(size_t), "size_t"},
        {"text", 0, sizeof(char*), "char*"},
        {"time", 2, sizeof(char*), "char*"},

        {"",0,0}
    };
    static Complex *
    typename(SubFactoryMethod) (Assertion,Complex,Complex,0,5) ;


    static struct class(ComplexHeap)
        Assertion(Complex) =

    {&class(ComplexHeap)(Type),
    &Assertion(ComplexSearch),Assertion(ComplexHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                 moved from Exception.h                    */
    # define ExceptionSecurity(Member)ExceptionSecurity ## Member
    /**static cstring typename(PassNumber)(Exception, Security);*/
    /*                 moved from Exception.h                    */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define AssertionSecurity(Member)AssertionSecurity ## Member
    /*extern struct pass(SecurityHeap)Assertion(Registrations);*/
    static struct pass(SecurityHeap)
        Assertion(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
        0/*Assertion(InterfaceHeap)*/ },
        & Exception(Security)(ID), 0 };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       assertion class interface heap               *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Interface Assertion

        (InterfaceHeap)[ten] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &Assertion(Interface),//Assertion
        &Assertion(Complex),   //+sub  class(...)
        &Assertion(Console),
        &Assertion(Factory),
        &Assertion(File),
        &Assertion(Polymorph), //+sub
        &Assertion(Security), //+sub
        &Assertion(Standard),
        &Assertion(Virtual),   //+sub
        &Assertion(Registrations),   //0xffffffff (passnum)

        nullptr//
    } ;//
    static Interface
    typename(ClassFactoryMethod)(Assertion,0,9);//


    static void typename(Setup)(Assertion)
    { ((Interface)&Assertion(Registrations))
        [2] = Assertion(InterfaceHeap) ;

      /* note: this override will be my tool for figuring
       *       out what is wrong with the program destructor
       *       without using the debugger. i can also define/use
       *       nothrow()(); after.
       */
      //printStackTrace = & NotFound(ConsoleOut) ; //override ;)
    }

    static void typename(Abort)(Assertion){}


    /**
        use this Assertion anywhere you would otherwise just

        use the normal assert() function/macro/case just

        remember that when they evaluate to true, not only

        the program (may) not get aborted, but you get to use

        the instances of Assertions that get placed around

        from either the vtable or the vstk when you invoke

        (this) or use vTop() and vPop() manually. Don't

        (that has been updated to use the exception stack)

        (so use eTop() and ePop() and ePush() and exception)

        forget that the assert case is stringized and

        stored with the Object as a string so u can print it,

        (then again, only if the case passes) then again,

        there is no problem like that that cant be fixed by

        declaring another global flag... actually i should

        mention that the assertion flag when lowered instead

        of the original assertion or assert being executed

        (abort()) there is an alert ding and the assertion

        is printed, as when an exception is thrown (like always)

        there is an alert ding. so thats failed assertions

        and thrown exceptions that both make a ding...


        CHEERS


     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define InformationSecurity(Member)\
        InformationSecurity ## Member

    # define InformationSecuritySecurity(Member)\
        InformationSecuritySecurity ## Member

        /**+---------------------------------+
         * @brief derived InformationSecurity|
         * +---------------------------------+
         */
        typedef struct InformationSecurity
        {   Exception base;
            char * item;
            bool   cond;

        }InformationSecurity;

        typedef struct InformationSecurity(VirtualTable)
        {   Exception (VirtualTable) base;
        }InformationSecurity(VirtualTable);

        static InformationSecurity * InformationSecurity
        (Init)( InformationSecurity *, size_t, char *, char *,
               char *, char *, char *, bool );

        static void InformationSecurity(Dtor)
            ( InformationSecurity * );

        static cstring InformationSecurity(Type)();

        explicit cstring InformationSecurity(Type)()
        { return "InformationSecurity" ; }/*stringize*/

        static int InformationSecurity
        (ConsoleOut)( InformationSecurity * );

        static int () (*printInformationSecurity)
        ( InformationSecurity * ) //global method
                = & InformationSecurity(ConsoleOut);

        static InformationSecurity(VirtualTable)
            InformationSecurity(Interface) =

        {{{ &InformationSecurity(Type),
        &InformationSecurity(Init),
        &InformationSecurity(Dtor) }}};

        explicit InformationSecurity *
        InformationSecurity(Init)( InformationSecurity * self,
            size_t line, char * file, char * time, char * date,
            char * text, char * item, bool cond )
        { if( self == nullptr ){ return nullptr; }
            self = Exception(Init)(self, line, file, time, date, text);
            if( self == nullptr ){ return nullptr; }
            self->item = (char *)allocate(string(size)(item));
            self->cond = cond;
            if( self->item == nullptr )
            {   InformationSecurity(Dtor)(self);
                return nullptr;   }

            string(fill)(self->item, item);

            if( !Assertion(Flag) ) { if( !cond )

            { printInformationSecurity(self) ; printf("\a") ; } }

            return self; }

        explicit void InformationSecurity(Dtor)
        ( InformationSecurity * self )
        {   Exception(Dtor)(self);
            deallocate(self->item); self->item = 0;}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        IO for information security                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineInformationSecurityPrint( \
    \
        Class, Type, Print, End, Before, After )\
    \
        static int Class(Type##Out)( Class * );\
    \
        explicit int Class(Type##Out)( Class * self )\
        {\
            if( !self ){ printf("(information)"); return 0; }\
    \
            /*Stack * stack = control();*/\
    \
            Before   ; \
    \
            register size_t retval = 0;\
    \
    \
            retval += Print "\n" End;\
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
            retval += Print "line:\t\t %s\n", self->base.line End;/*[1]*/\
    \
    \
            retval += Print "cond:\t\t %s == %s\n", self->base.text, \
                                    self->item End;/*[0]*/\
    \
            retval += Print "eval:\t\t %s\n", \
            ( self->cond ? "true" : "false" ) End;\
    \
    \
            retval += Print "\n" End;\
    \
            return retval;\
        }


    static int InformationSecurity(ConsoleOut)( InformationSecurity * );

    typename(InformationSecurityPrint)
    ( InformationSecurity, Console,

        _cPrint(), cEnd(),,

    ;);


    static int InformationSecurity(StandardOut)( InformationSecurity * );

    typename(InformationSecurityPrint)
    ( InformationSecurity, Standard,

        _sPrint(str), sEnd(),

        string * str = ConsoleOut(Object);,
    ;);


    static int InformationSecurity(FileOut)( InformationSecurity * );

    typename(InformationSecurityPrint)
    ( InformationSecurity, File,

        _fPrint(file), fEnd(),

        File * file = ConsoleOut(Object);,

    ;);


    static ctorPtr typename(Ctor)(InformationSecurity);

    static struct class(FactoryTable)
        InformationSecurity(Factory) =
    {
        &class(FactoryTable)(Type),
        &InformationSecurity(Ctor), 0};


    static struct class(ConsoleTable)
        InformationSecurity(Console) =
    {
        &class(ConsoleTable)(Type),
        0, &InformationSecurity(ConsoleOut)};


    static struct class(StandardTable)
        InformationSecurity(Standard) =
    {
        &class(StandardTable)(Type),
        0, &InformationSecurity(StandardOut)};


    static struct class(FileTable)
        InformationSecurity(File) =
    {
        &class(FileTable)(Type),
        0, &InformationSecurity(FileOut)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        complex heap for assertions                 *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Complex
        InformationSecurity(ComplexHeap)[seven] =
    {
        {"cond",24, sizeof(bool), "bool"},
        {"date", 3, sizeof(char*), "char*"},
        {"file", 1, sizeof(char*), "char*"},
        {"item", 5, sizeof(char*), "char*"},
        {"line", 4, sizeof(size_t), "size_t"},
        {"text", 0, sizeof(char*), "char*"},
        {"time", 2, sizeof(char*), "char*"},

        {"",0,0}
    };
    static Complex *
    typename(SubFactoryMethod) (InformationSecurity,Complex,Complex,0,6) ;


    static struct class(ComplexHeap)
        InformationSecurity(Complex) =

    {&class(ComplexHeap)(Type),
    &InformationSecurity(ComplexSearch),
    InformationSecurity(ComplexHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief       polymorph heap for assertions                *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Polymorph

        InformationSecurity  (PolymorphHeap)[two] =

    { {"Exception",0,0,""},{"class",0,0,""},
    {"",0,0,""} } ;
    static Polymorph *
    typename(SubFactoryMethod)(InformationSecurity,Polymorph,Polymorph,0,1);


    static struct class(PolymorphHeap)//#3
        InformationSecurity (Polymorph) =

    { &class(PolymorphHeap)(Type),
    &InformationSecurity(PolymorphSearch),
      InformationSecurity(PolymorphHeap)};


    /*extern struct pass(SecurityHeap)InformationSecurity(Registrations);*/

    static struct pass(SecurityHeap)
        InformationSecurity(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
        0 /*InformationSecurity(InterfaceHeap)*/ },
        & Exception(Security)(ID), 0 };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief   information security class interface heap        *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Interface InformationSecurity

        (InterfaceHeap)[nine] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &InformationSecurity(Interface),//InformationSecurity
        &InformationSecurity(Complex),   //+sub  class(...)
        &InformationSecurity(Console),
        &InformationSecurity(Factory),
        &InformationSecurity(File),
        &InformationSecurity(Polymorph), //+sub
        &InformationSecurity(Standard),
        &Exception(Virtual),   //+sub
        &InformationSecurity(Registrations),   //0xffffffff (passnum)

        nullptr//
    } ;//
    static Interface
    typename(ClassFactoryMethod)(InformationSecurity,0,8);//


    static void typename(Setup)(InformationSecurity)
    { ((Interface)&InformationSecurity(Registrations))
        [2] = InformationSecurity(InterfaceHeap) ;}

    static void typename(Abort)(InformationSecurity){}


    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef INFORMATIONSECURITY
    #define INFORMATIONSECURITY
      #if 0
        //#include "../Exception/defineAssertion.h"
    //          "/// /// RESTRICTED AREA /// ///"
        typename(Assertion)(InformationSecurity);
        #define InformationSecurity(Member)\
            InformationSecurity##Member
      #endif // 0
    #endif // INFORMATIONSECURITY
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef TYPEINFO
    #define TYPEINFO
      #if 0
        //#include "../Exception/defineAssertion.h"
        /**+---------------------------------+
         * @brief derived TypeInfo           |
         * +---------------------------------+
         */
        typename(Assertion)(TypeInfo);
        #define TypeInfo(Member)\
            TypeInfo##Member
      #endif // 0
    #endif // TYPEINFO
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifndef ISPOLYMORPHIC
    #define ISPOLYMORPHIC
      #if 0
        //#include "../Exception/defineAssertion.h"
        /**+---------------------------------+
         * @brief derived IsPolymorphic      |
         * +---------------------------------+
         */
        typename(Assertion)(IsPolymorphic);
        #define IsPolymorphic(Member)\
            IsPolymorphic##Member
      #endif // 0
    #endif // ISPOLYMORPHIC
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
    struct pass(SecurityHeap)
        Exception(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
          Exception(InterfaceHeap) },
        & Exception(Security)(ID), 0 };


    struct pass(SecurityHeap)
        NotFound(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
          NotFound(InterfaceHeap) },
        & Exception(Security)(ID), 0 };


    struct pass(SecurityHeap)
        Override(Registrations) =

    { { & pass(SecurityHeap)(Type), 0,
          Override(InterfaceHeap) },
        & Exception(Security)(ID), 0 };


    #define defineFactoryExceptionPass(Type)\
    \
    struct pass(SecurityHeap)\
        Type(Registrations) =\
    \
    { { & pass(SecurityHeapType), 0,\
          Type(InterfaceHeap) },\
        & Exception(Security)(ID) };

                                ///Exception              ///#1

                                ///NotFound               ///#2

                                ///Override               ///#3

    typename(FactoryExceptionPass)(OutOfMemory);          ///#4

    typename(FactoryExceptionPass)(OutOfBounds);          ///#5

    typename(FactoryExceptionPass)(EmptyString);          ///#6

    typename(FactoryExceptionPass)(InputMismatch);        ///#7

    typename(FactoryExceptionPass)(IllegalOperation);     ///#8

    typename(FactoryExceptionPass)(RestrictedAccess);     ///#9

    typename(FactoryExceptionPass)(PassNumber);           ///#10

    typename(FactoryExceptionPass)(NullPointer);          ///#11

                                ///Assertion              ///#12

                                ///InformationSecurity    ///#13


                                ///TypeInfo               ///#14

                                ///IsPolymorphic          ///#15

                                /// ... ?
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

    - - PassNumber, Override, InformationSecurity and RestrictedAccess
        are all unused for the most part coming from big inspirations
        that were cut short because ooc or object-oriented programming
        in c doesn't need too much just if it was an operating system
        they are good exception classes, TypeInfo and IsPolymorphic
        also are unused but have nothing to do with the security passes
        stored by the struct bunker for interface heaps in the form of
        interface registration lists. these are all exceptions that don't
        get thrown for the most part, alot of good information for
        someone who likes keeping track of the day/time of events over
        a long period of time in a large or long running system full
        of files and events. so skim the list of Exceptions and Assertions and
        get rid of the unused ones u don't want, or use or add to the
        list just be at home with these error handling items and know
        that these exceptions/assertions are what u get to gto with things
        like the compiler/debugger.

    - - again, thats PassNumber, Override, InformationSecurity and
        RestrictedAccess for security restricting access with the factory
        methods off multimap()()() using break()()() and protected, these
        defintions may have been cut short for the sake of factory c
        being simple enough for any program not just an operating system.

    - - TypeInfo and IsPolymorphic are ready to be added to the
        implementation also like the above mentioned. they can provide
        a certificate or info slip for objects, adapters, etc...
        and go onto the eStk with ePush(obj) as the certificate stack
        (exception certificate).

    - - Overrides can go into the struct bunker as a builder heap,
        PassNumbers into its (struct bunker) secondary vtable (stable).

    - - of all the above mentioned, RestrictedAccess is something
        that gets thrown, InformationSecurity is used like an assertion,
        asserting two pass numbers, PassNumber extends the string
        used to hold a pass or variable typeid. Override is supposed
        to keep track of overrides or something and get stored
        by the struct bunker, where restricted access to overrides
        is centralized (also using break()()()) also that may or should use
        a template method so the pinner implementation that break will
        have can easily be extended to do all the things it is inspired
        to do.

    - - if the class(AbortTable) is implemented, Exceptions and
        assertions should get and use to go into builder mode,
        aborting their compile-time struct classes.

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
    #define _assertion( self, cond )\
    \
        ( self,_line_,_file_,_time_,_date_, #cond, cond )

    #define nothrow( instance )\
    \
        instance _assertion

        /* note: maybe this nothrow(new(Assertion))(this, a > b);
                 would work better for an exception?
         */
  #else
        /* note: the actual definition of nothrow is goin to have to
         *       go into the file class.h
         */
  #endif // 0-
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                new(Assertion)(this, assert( a > b )) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
               nothrow((!instance))(class(ComplexHeap)) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// nothrow ;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**\ /
  _____ * -                                  __    __
 /  __ `\\                                  /\ \__/\_\
/\  \/\  \    ____     ____     ___   ____ /\__  _\/_/_    ___     ___
\ \  ___  \  / ____\  / ____\  / __`\/\  _`\/_/\ \/ /\ \  / __`\  / __`\
 \ \ \__/\ \/\_____`\/\_____`\/\  __/_ \ \_/  \ \ \/\ \ \/\ \/\ \/\ \/\ \
  \ \_\ \ \_\/\_____/\/\_____/\ \_____\ \_\    \ \__/\ \_\ \____/\ \_\ \_\
   \/_/  \/_/\/____/  \/____/  \/_____/\/_/\ /  \/_/  \/_/\/___/  \/_/\/_/
                                          - * -
                                           / \                   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //#error Assertion
    ///        new(Assertion)(this, assert( a < b ));
#endif // ASSERTION_H_INCLUDED
