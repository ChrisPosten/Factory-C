#ifndef USING_H_INCLUDED
#define USING_H_INCLUDED
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
    #define TEMPLATE_ARRAYS // ...
    #ifdef  TEMPLATE_ARRAYS
    //#define TEMPLATE_ENUM 1 //
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                                                     || *
     *                         FACTORY C                         *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief   UNDER CONSTRUCTION (OOC) (Factory C)             *
     *                                                           *
     * TODO: find the implementations for every factory function *
     *       provided by the C library header files and add the  *
     *       extra case each one needs to have. look inside      *
     *       std/stdio.h i believe it was for that case if you   *
     *       dont know. (inside printf there) (NOT COMPLETE)     *
     *                                                           *
     * - std/stdio     line: 271      (printf)     (01/10/2022)  *
     *                                                           *
     * -  try and find implementations so as to make every library
     *    function have a strategy table its called from and a   *
     *    Stack that gets declared for control at the top of each*
     *    function.                                              *
     *                                                           *
     * -  ...                                                    *
     *                                                           *
     * -  ...                                                    *
     *                                                           *
     * -  ... (NOT COMPLETE)                                     *
     *                                                           *
     * HOUSEKEEPING: place every C-library header file inside    *
     *               the std sub-folder or parallel sub-folder   *
     *               to the project folder (or library include   *
     *               sub-folder) OOC. housekeeping for any file  *
     *               included using <> in this project can be    *
     *               pulling up and tidying any potentially      *
     *               useful file. OOC (C+) (OOC/Standard)        *
     *                                                           *
     * throw a ControlFactoryStackAbort:                         *
     *         FactoryStackOverflow:                             *
     *         ImplementationLimit                               *
     *                                                           *
     * TODO: declare/initialize an array of control              *
     *       factory addresses for wedging a control             *
     *       factory inside a control factory and implement      *
     *       a setting for an array of template methods to use   *
     *       (should that just use the template method?)         *
     *                                                           *
     *                                                           *
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief  Reasons to use:                                   *
     *                                                           *
     *   1)     UNDER CONSTRUCTION (OOC) (Factory C)             *
     *                                                           *
     *   2)     ||   ((p)) == true   /** PHAT FARM ** /          *
     *                                                           *
     *   3)     FACTORY C                                        *
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*************************************************************
     * NOTICE:  UNDER CONSTRUCTION (Factory C)                   *
     *                                                           *
     * @author  i do not consider this file to be a part of my   *
     *          definition of Object-Oriented Programming and    *
     *          so i separated this file (using.h) into its      *
     *          own sub-folder (Control) *//*(01/10/2022)*//**   *
     *                                                           *
     *          THIS FILE IS NOT PROVIDED AS A SOLUTION TO ANY   *
     *          PROBLEM i know. NOT TO DETER ANYONE FROM ITS     *
     *          USE or jeopardize its INTEGRITY.                 *
     *                                                           *
     *************************************************************/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*************************************************************
     *                                                           *
     * @author  THIS FILE IS DISTRIBUTED IN THE HOPE THAT IT     *
     *          WILL BE USEFUL, WITHOUT WARRANTY. WITH OR        *
     *          WITHOUT A COPYRIGHT NOTICE VALIDATED BY ANY      *
     *          FOUNDATION OF SOFTWARE DEVELPOMENT. WITH OR      *
     *          WITHOUT ANY MAINSTREAM DISTRIBUTION SOURCE.      *
     *                                                           *
     *          THIS PROGRAM IS FREE SOFTWARE.                   *
     *                                                           *
     *************************************************************/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||               TEMPLATE ARRAYS PATTERN               || *
     *                                                           *
     *                   by Willy (11/06/2018)                   *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** 1[array]           Example Template 1:

        this is for the template macro without command center:

        this is for an inactive definition of template.

            enum [Set]Enum { [En0], [En1], [En2], ... [En] };

            ...

            void* [Set]Array[n] = { p1, p2, p3, ... pn };

            ...

            typedef type1 [En1][Set];

            typedef type2 [En2][Set];

            typedef type3 [En3][Set];

            typedef typen [Enn][Set]; ...

            ...

            typedef void       [Set]0n    (type* self, ...); ...

            typedef [Set]0n*   [Set]03    (type* self, ...);

            typedef [Set]03*   [Set]02    (type* self, ...);

            typedef [Set]02*   [Set]01    (type* self, ...);

            typedef [Set]01*   [Set]00    (type* self, ...);

            ...

        Use an array of void pointers and an enumeration for
        this pattern.

        The typedefs are used for a cast from a void pointer
        to the type of whatever items you want to place inside
        the array.

        The enum values and typedefs need to match each other
        by the enum name at the front of the typedef name, with
        the typedef for a data type matching it's parallel enum
        value (parallel by cast and data field position in array).

        The enum value argument is used to subscript a pointer
        from the array of void pointers at the same time it is
        concatenated to the set name to locate the appropriate
        cast for the specific data type needed for the pointer
        being returned.

        The array needs to contain the set name.

        The value being returned is always still a pointer,
        this helps for functions, so they get called immediately
        afterwards.

        this is a Strategic pattern:

        this is a Command/Control like pattern:

        this is a Template pattern:

        this is a Factory pattern:
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** 2[array]          Example Template 2:

        this is only for another inactive definition of template.

        this example will use any data type other than a function
        pointer with an enum thats used to locate its corresponding
        array value. so template(Set, Case) is used as a front end
        to an array of any one thing at a time or a different form
        of an object (nearly)

            int a = 1;

            int b = 2;

            int c = 3;

            ...

            int n = n;

            [Case][Set]* x1 = & a;

            [Case][Set]* x2 = & b;

            [Case][Set]* x3 = & c;

            ...

            [Case][Set]* xn = & n;

            enum [Set]Enum{ [En0], [En1], [En2], ...[En] };//cases

            void* [Set]Array[n] = { x1, x2, x3, ... xn };

        also: consider Set as classname and Case as datamember
              directly below for an object
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** 3[array]           Example Template 3:

            this is for the Command/Control/Factory/Template.

            this no longer uses compile-time assignemt of array
            based on something like a classname, rather you pass
            the array itself into template(array) and it needs to
            be a virtual table object.

        try
        {
            int i = 0;

            using template(Set, Case);
            ( ... )
            ( ... )
            ( ... )
            ( ... )
            ( ... )


            ( ... )
            ( ... )
            ( ... )
            ( ... )
            ( ... );
            flags(def);

            using template(Set, Case)(& i)(i < 5)(...)(i++);

            continue(label)(...)(...)(...);

        Object * object = using template(Set, Case)(new(Class))

            (this,...);

            flags(def);

            using template(Command, Start)(1)(5)(6)(9)(2);


        }
        catch( Exception * e )
        {
            printStackTrace(e);
        }


        ...
        {

          [En3][Set]* = continue()( ... , ... )(...)(...)(...);


          continue()( ..., ... )(...)(...)(...)(...)([En3][Set]);

          *//* remember it returns a pointer not a double pointer */
          /**
          *continue()( ..., ... )(...)(...)(...) = [En3][Set];/


          continue;



        **//* remember also that using stack(s) here works *//**

          [En3][Set]* = using template( [Set], [En1] )(...)(...)(...);


          using template([Set],[En1])(...)(...)(...)(...)([En3][Set]);


          template( [Set], [En1] ) = using template( [Set], [En1] );


          continue()     ([Set],[En1])(...)(...)(...)(...)  ;
                                                  *
                                                 / \
          continue;                               |
                                                  |
        }                                     flag raised
                                        inside encapsulated func */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*   this is a front-end for an array using an enumeration   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    //#include "../Control/template.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*   this is a front-end for an array using an enumeration   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            ///(& SetName##0##Num )
     ///  #define   typename(Set, Case)\
         //       \
                    ( ((Case##Set**)Set##Array)[Case] )->key

               ///typename
               ///template

        ///(needs another level of cast)

        ///maybe set up something like this as extra stuff after

        ///if theres room for it
    //#ifndef VTABLEGUARD
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                //hospital example defined with keys:
    ///  Hospital* h = new(Hospital)(this, ...);
                //call levels 0-2
    ///  template(Emergency, Green)(h, ...)(h, ...)(h, ...);
                //call level 1 and return pointer to level 2
    ///  Emergency(Red)* p = template(Emergency, Yellow)(h, ...);
                //call level 2 and return no pointer
    ///  template(Emergency, Red)(h, ...);

                //Game example defined with indexes:
    ///  Game* g = new(Game)(this, ...);
                //call levels 0-3
    ///  template(Level, 0)(g, ...)(g, ...)(g, ...)(g, ...);
                //call level 08 and return pointer to level 09
    ///  Level(9)* p = template(Level, 8)(g, ...);
                //no front-end macros
    ///  pLevel00* p = (pLevel00*) LevelArray[100];


    ///  Emergency(Green)* p = template(Emergency, Green);

    ///  Level(1)* p = template(Level, 0)(g, ...);

    ///  template(Level, 2) = ...

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    ///         optional:   create a macro ...

    ///  #define [SetName](Case) Case##[SetName]
                //such as ...
    ///  #define Emergency(Case) Case##Emergency
                //then use like...
    ///  Emergency(Yellow)* p = template(Emergency, Yellow);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    ///cout("name: ")(name)(", ")(question)("\n")(item)("%.2f", .89);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                OOC TEMPLATE ARRAYS PATTERN                */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||    C FACTORY  (THE CONTROL FACTORY A.K.A. USING)    || *
     *                                                           *
     *              by Willy (02/13/2022)(01/10/2022)            *
     *                       (01/12/2022)(01/14/2022)            *
     *                       (01/28/2022)(02/13/2022)            *
     * ||                    (10/20/2022)                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                OOC TEMPLATE ARRAYS PATTERN                */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    /**      INCLUDE ALL THE VOLATILE PROGRAM LEVEL TABLES      **/
    #include "../Virtual/vTable.h"                   //VirtualTable

    #include "../Factory/fTable.h"                   //FactoryTable

    #include "../Adapter/aTable.h"                   //AdapterTable
    /**       THESE WILL BE WHERE THERE IS RUNTIME ACCESS
               TO ALL STATIC CLASS LEVEL TABLES (ABOVE)         **/

    #include "../Control/Command.h"                  //CommandArray
  #if 0
    #include "../Control/Bunker.h"                   //StructBunker
  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    //#include "../Library/synchronized.h"

    #include "../Library/String.h"

    //#include "../Library/File.h"

    //#include "../Library/Comparable.h"//files are for sure included

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define   FactoryControl(Member)         FactoryControl##Member

    #define   CommandCenter(Member)           CommandCenter##Member

    #define   StrategicCommand(Member)     StrategicCommand##Member

    #define   ControlTower(Member)             ControlTower##Member

    #define   Factory(Member)                       Factory##Member

    #define   Const(Member)                           Const##Member

    #define   ControlFactory(Member)         ControlFactory##Member

    #define   ConstFactory(Member)             ConstFactory##Member

    #define   jumpControlFlag(Index)       jumpControl##Index##Flag

    #define   envControlBuffer(Index)     envControl##Index##Buffer

    #define   ControlStart(Index)             Control##Index##Start

    #define   ControlCheck(Index)             Control##Index##Check

    #define   ControlBlock(Index)             Control##Index##Block

    #define   ControlProbe(Index)             Control##Index##Probe

    #define   StartControl(Index)             Start##Index##Control

    #define   CheckControl(Index)             Check##Index##Control

    #define   BlockControl(Index)             Block##Index##Control

    #define   ProbeControl(Index)             Probe##Index##Control

    #define   ControlTable(Index)             Control##Index##Table

    #define   ControlWhileCheck(Index)   Control##Index##WhileCheck

    #define   ControlWhileBlock(Index)   Control##Index##WhileBlock

    #define   MiniFactory(Member)               MiniFactory##Member

    #define   MiniCommand(Member)               MiniCommand##Member

    #define   MiniControl(Member)               MiniControl##Member

    #define   jumpBuffers(Index)             JumpBuffers[Index].end

    #define   jumpFlags(Index)               JumpBuffers[Index].key

    #define   jumpMarkers(Index)             JumpBuffers[Index].val

    #define   FactoryArray(Member)             FactoryArray##Member

    #define   CommandArray(Member)             CommandArray##Member

    #define   cFactory(Member)                     cFactory##Member

    #define   intStk(member)                         intStk##member

    #define   intIter(member)                       intIter##member

    #define   boolIter(Member)                     boolIter##Member

    #define   boolStk(Member)                       boolStk##Member

    #define   DataTypeIter(Member)             DataTypeIter##Member

    #define   DataTypeStk(Member)               DataTypeStk##Member

   #define AbortCommandSequence(Member) AbortCommandSequence##Member

   #define AbortControlSequence(Member) AbortControlSequence##Member

   #define AbortFactorySequence(Member) AbortFactorySequence##Member

   #define FactoryInsertFailure(Member) FactoryInsertFailure##Member

   #define ControlStackOverflow(Member) ControlStackOverflow##Member

   #define NullStrategicCommand(Member) NullStrategicCommand##Member

    #define StrategicCommandInterface(Member)\
    \
        StrategicCommand##Member##Interface

    #define StrategicCommandType(Member)\
    \
        StrategicCommand##Member##Type

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory stack definitions (datatyping)   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*               implement control structures                */
  #if 0 //DEFINED IN ARRAY.H
    # define DataType(Member)DataType ## Member

    typedef  void            StackControl;//for initializer
    typedef  void              StackTop; //for sequence
    /// {}
    typedef  Object *    DataType;//good token   Object
    typedef              DataType ()(*Function)( StackTop *, ... ) ;
                                             ///Container
        typedef              bool () (*Insert)( Object *, ... );
        typedef              void (*Execute)( Object * );///
  #endif // ARRAY.H
    /// {
        typename(Exception) (AbortCommandSequence);//1
        typename(Exception) (AbortControlSequence);//2
        typename(Exception) (AbortFactorySequence);//3
        typename(Exception) (FactoryInsertFailure);//4
        typename(Exception) (ControlStackOverflow);//5
        typename(Exception) (NullStrategicCommand);//6

        enum ControlDefault     { Start, Check, Block, Probe };

        typedef Factory * StartSet;    //Case##Set
        typedef Factory * CheckSet;
        typedef Factory * BlockSet;
        typedef Factory * ProbeSet;
    #if 0
        typedef Factory * StartPrint;
        typedef Factory * StartScan;
    #endif // 0
        typename(Stk)(int, typename(Iter)(int, typename(N)(int)));
        typename(Stk)(bool, typename(Iter)(bool, typename(N)(bool)));
        typename(Stk)(DataType,
            typename(Iter)(DataType,
                    typename(N)(DataType)));/**FILL BOTH UTILITY PARAM*/


        static void cFactory(Destroy)(void) ;

        /**+---------------------------------+
         * @brief Strategic Command          |
         * +---------------------------------+
         *///___STRATEGIC_COMMAND___OOC
        typedef struct StrategicCommand()
        { struct class base;

            bool defaults[8] ;//-[0]+[1-7]
            size_t skip;
            StackControl * * controller;

            Method * _template;

        }StrategicCommand();

        /* note: this control factory object may need

                 to contain the jump flag/marker array

                 (doesn't look like it actually)
         */
    #if 0
        typedef StrategicCommand () * ControlFactory;
    #endif // CSTK_H_DEFINES
        static Object * StrategicCommand(Init)( Object * );

        static void StrategicCommand(Dtor)( Object * );

        static cstring StrategicCommand(Type)(OOC)();


    #define defineStrategicCommandInterface(Num)\
    \
        StrategicCommand(Type)(Num)();\
    \
        explicit cstring StrategicCommand(Type)(Num)()\
    \
        {return"___STRATEGIC_COMMAND___" # Num;}\
    \
        static struct class(VirtualTable)\
    \
            StrategicCommand(Interface)(Num) =\
        {\
            & StrategicCommand(Type)(Num),\
    \
            & StrategicCommand(Init),\
    \
            & StrategicCommand(Dtor)\
        };

        explicit cstring StrategicCommand(Type)(OOC)()

        {return"___STRATEGIC_COMMAND___OOC";}

        static struct class(VirtualTable)

            StrategicCommand(Interface)(OOC) =
        {
            & StrategicCommand(Type)(OOC),

            & StrategicCommand(Init),

            & StrategicCommand(Dtor)
        };

        /* note: factory table class (start) for basic command
         */
        explicit ctorPtr Command(Ctor)(){return new(Command);}

        static struct class(FactoryTable)

            Command(Factory) =
        { &class(FactoryTable)(Type), &Command(Ctor), 0 } ;


        static Interface Command

            (InterfaceHeap)[one] =

        {
            &Command(Factory), nullptr
        } ;
        static Interface
        typename(ClassFactoryMethod)(Command,0,0);


        static void typename (Setup)(Command) {}

        static void typename (Abort)(Command) {}

    /// }
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C                                                 */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory index pointers A-Z (definition)  *
     *                                                           *
     *          this includes functions for a default            *
     *          control block for each index pointer             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineIndex(X)\
    \
      volatile static Index * volatile                    X = 0 ;\
    \
      volatile static bool      jumpControlFlag              (X) = true;\
    \
    /*jumpBuf                   envControlBuffer             (X);*//*not used*/\
            /**             for(int i = 0; i < 5;      i++) {} */\
    /*using template(array)(& i)(i < 5)(...)(i++)cend; DEFINED*/\
      static void            ControlStart(X)         ( Index * );\
    \
      static bool            ControlCheck(X)         ( Boolean );\
    \
      static DataType        ControlBlock(X)        ( Function );\
    \
      static void            ControlProbe(X)           ( Index );\
    \
    \
        explicit void          ControlStart(X)( Index * Address )\
        {\
            if( jumpControlFlag(X) )\
            {\
              X = Address;\
              jumpControlFlag(X) = false; } }\
    \
        explicit bool          ControlCheck(X)( Boolean Condition )\
        {\
            if( !Condition )\
            {\
              jumpControlFlag(X) = true; } \
              return Condition; }\
    \
        explicit DataType      ControlBlock(X)( Function Pointer )\
        {\
            if( !jumpControlFlag(X) )\
            {\
              return Pointer( (*X) );/*Default*/\
            } return 0; }\
    \
        explicit void          ControlProbe(X)( Index Probe )\
        {\
            if( !jumpControlFlag(X) )\
            {\
              (*X) = Probe;\
    \
              if( jTop() )\
              {\
                  Jump pair = jPop();\
    \
                  jPush(pair);\
    \
                  Object * obj = cPop();\
    \
                  deaccumulate(obj);\
    \
                  jump( pair.key, &jumpControlFlag(X) );/**/\
              }\
              else { new(AbortControlSequence) \
    \
                _exception (this, "ControlJumpAbort"); \
    \
              /*printStackTrace(this); destroy(); abort();*/ } } }\
    \
        static Factory      \
    \
            ControlTable(X)[4] = \
        {\
            { &ControlStart(X), 0 },\
    \
            { &ControlCheck(X), 0 },/*assign new(Stk(bool))*/\
    \
            { &ControlBlock(X), 0 },/*assign new(Stk(type))*/\
    \
            { &ControlProbe(X), 0 },\
    \
            { 0, 0 }\
        };\
            /** (((Case##Set**)Set##Array)[Case]) **/\
            /*  (((StartControl**)ControlArray)[Start]) */\
    \
      typedef  void     (*StartControl(X))           ( Index * );\
    \
      typedef  bool ()  (*CheckControl(X))           ( Boolean );\
    \
      typedef DataType()(*BlockControl(X))          ( Function );\
    \
      typedef  void     (*ProbeControl(X))             ( Index );

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C                                                 */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory index pointers A-Z (implementations)*
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

      typename(Index)/**this may say index but pointer**/(A);

      typename(Index)/**these are index kits**/          (B);

      typename(Index)                                    (C);

      typename(Index)                                    (D);

      typename(Index)                                    (E);

      typename(Index)                                    (F);

      typename(Index)                                    (G);

      typename(Index)                                    (H);

      typename(Index)                                    (I);

      typename(Index)                                    (J);

      typename(Index)                                    (K);

      typename(Index)                                    (L);

      typename(Index)                                    (M);

      typename(Index)                                    (N);

      typename(Index)                                    (O);

      typename(Index)                                    (P);

      typename(Index)                                    (Q);

      typename(Index)                                    (R);

      typename(Index)                                    (S);

      typename(Index)                                    (T);

      typename(Index)                                    (U);

      typename(Index)                                    (V);

      typename(Index)                                    (W);

      typename(Index)                                    (X);

      typename(Index)                                    (Y);

      typename(Index)                                    (Z);

      static volatile size_t               Skip         = 0;

      static bool           ControlIf             ( Boolean );
      explicit bool           ControlIf    ( Boolean Condition )
      {   if( !Condition )
            { Skip = 1;/*1 (non-bool)*/ }
              return Condition;   }

      typedef  void     (*IfControl)       ( Boolean Condition );

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //                                                           //
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C                                                 */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory typedefines                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*          typedef factory function control sequence        */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
  #if 0
     #undef                                              protected
  #endif // REDEFINED
        typedef void           Factory(99)   ( void );
          typedef void           Const(99)     ( void );

        typedef Factory(99) *  Factory(98)   ( Object *, ... );
        typedef Const(99) *   Const(98)( const Object *, ... );

        typedef Factory(98) *  Factory(97)   ( Object *, ... );
        typedef Const(98) *   Const(97)( const Object *, ... );

        typedef Factory(97) *  Factory(96)   ( Object *, ... );
        typedef Const(97) *   Const(96)( const Object *, ... );

        typedef Factory(96) *  Factory(95)   ( Object *, ... );
        typedef Const(96) *   Const(95)( const Object *, ... );

        typedef Factory(95) *  Factory(94)   ( Object *, ... );
        typedef Const(95) *   Const(94)( const Object *, ... );

        typedef Factory(94) *  Factory(93)   ( Object *, ... );
        typedef Const(94) *   Const(93)( const Object *, ... );

        typedef Factory(93) *  Factory(92)   ( Object *, ... );
        typedef Const(93) *   Const(92)( const Object *, ... );

        typedef Factory(92) *  Factory(91)   ( Object *, ... );
        typedef Const(92) *   Const(91)( const Object *, ... );

        typedef Factory(91) *  Factory(90)   ( Object *, ... );
        typedef Const(91) *   Const(90)( const Object *, ... );

        typedef Factory(90) *  Factory(89)   ( Object *, ... );
        typedef Const(90) *   Const(89)( const Object *, ... );

        typedef Factory(89) *  Factory(88)   ( Object *, ... );
        typedef Const(89) *   Const(88)( const Object *, ... );

        typedef Factory(88) *  Factory(87)   ( Object *, ... );
        typedef Const(88) *   Const(87)( const Object *, ... );

        typedef Factory(87) *  Factory(86)   ( Object *, ... );
        typedef Const(87) *   Const(86)( const Object *, ... );

        typedef Factory(86) *  Factory(85)   ( Object *, ... );
        typedef Const(86) *   Const(85)( const Object *, ... );

        typedef Factory(85) *  Factory(84)   ( Object *, ... );
        typedef Const(85) *   Const(84)( const Object *, ... );

        typedef Factory(84) *  Factory(83)   ( Object *, ... );
        typedef Const(84) *   Const(83)( const Object *, ... );

        typedef Factory(83) *  Factory(82)   ( Object *, ... );
        typedef Const(83) *   Const(82)( const Object *, ... );

        typedef Factory(82) *  Factory(81)   ( Object *, ... );
        typedef Const(82) *   Const(81)( const Object *, ... );

        typedef Factory(81) *  Factory(80)   ( Object *, ... );
        typedef Const(81) *   Const(80)( const Object *, ... );

        typedef Factory(80) *  Factory(79)   ( Object *, ... );
        typedef Const(80) *   Const(79)( const Object *, ... );

        typedef Factory(79) *  Factory(78)   ( Object *, ... );
        typedef Const(79) *   Const(78)( const Object *, ... );

        typedef Factory(78) *  Factory(77)   ( Object *, ... );
        typedef Const(78) *   Const(77)( const Object *, ... );

        typedef Factory(77) *  Factory(76)   ( Object *, ... );
        typedef Const(77) *   Const(76)( const Object *, ... );

        typedef Factory(76) *  Factory(75)   ( Object *, ... );
        typedef Const(76) *   Const(75)( const Object *, ... );

        typedef Factory(75) *  Factory(74)   ( Object *, ... );
        typedef Const(75) *   Const(74)( const Object *, ... );

        typedef Factory(74) *  Factory(73)   ( Object *, ... );
        typedef Const(74) *   Const(73)( const Object *, ... );

        typedef Factory(73) *  Factory(72)   ( Object *, ... );
        typedef Const(73) *   Const(72)( const Object *, ... );

        typedef Factory(72) *  Factory(71)   ( Object *, ... );
        typedef Const(72) *   Const(71)( const Object *, ... );

        typedef Factory(71) *  Factory(70)   ( Object *, ... );
        typedef Const(71) *   Const(70)( const Object *, ... );

        typedef Factory(70) *  Factory(69)   ( Object *, ... );
        typedef Const(70) *   Const(69)( const Object *, ... );

        typedef Factory(69) *  Factory(68)   ( Object *, ... );
        typedef Const(69) *   Const(68)( const Object *, ... );

        typedef Factory(68) *  Factory(67)   ( Object *, ... );
        typedef Const(68) *   Const(67)( const Object *, ... );

        typedef Factory(67) *  Factory(66)   ( Object *, ... );
        typedef Const(67) *   Const(66)( const Object *, ... );

        typedef Factory(66) *  Factory(65)   ( Object *, ... );
        typedef Const(66) *   Const(65)( const Object *, ... );

        typedef Factory(65) *  Factory(64)   ( Object *, ... );
        typedef Const(65) *   Const(64)( const Object *, ... );

        typedef Factory(64) *  Factory(63)   ( Object *, ... );
        typedef Const(64) *   Const(63)( const Object *, ... );

        typedef Factory(63) *  Factory(62)   ( Object *, ... );
        typedef Const(63) *   Const(62)( const Object *, ... );

        typedef Factory(62) *  Factory(61)   ( Object *, ... );
        typedef Const(62) *   Const(61)( const Object *, ... );

        typedef Factory(61) *  Factory(60)   ( Object *, ... );
        typedef Const(61) *   Const(60)( const Object *, ... );

        typedef Factory(60) *  Factory(59)   ( Object *, ... );
        typedef Const(60) *   Const(59)( const Object *, ... );

        typedef Factory(59) *  Factory(58)   ( Object *, ... );
        typedef Const(59) *   Const(58)( const Object *, ... );

        typedef Factory(58) *  Factory(57)   ( Object *, ... );
        typedef Const(58) *   Const(57)( const Object *, ... );

        typedef Factory(57) *  Factory(56)   ( Object *, ... );
        typedef Const(57) *   Const(56)( const Object *, ... );

        typedef Factory(56) *  Factory(55)   ( Object *, ... );
        typedef Const(56) *   Const(55)( const Object *, ... );

        typedef Factory(55) *  Factory(54)   ( Object *, ... );
        typedef Const(55) *   Const(54)( const Object *, ... );

        typedef Factory(54) *  Factory(53)   ( Object *, ... );
        typedef Const(54) *   Const(53)( const Object *, ... );

        typedef Factory(53) *  Factory(52)   ( Object *, ... );
        typedef Const(53) *   Const(52)( const Object *, ... );

        typedef Factory(52) *  Factory(51)   ( Object *, ... );
        typedef Const(52) *   Const(51)( const Object *, ... );

        typedef Factory(51) *  Factory(50)   ( Object *, ... );
        typedef Const(51) *   Const(50)( const Object *, ... );

        typedef Factory(50) *  Factory(49)   ( Object *, ... );
        typedef Const(50) *   Const(49)( const Object *, ... );

        typedef Factory(49) *  Factory(48)   ( Object *, ... );
        typedef Const(49) *   Const(48)( const Object *, ... );

        typedef Factory(48) *  Factory(47)   ( Object *, ... );
        typedef Const(48) *   Const(47)( const Object *, ... );

        typedef Factory(47) *  Factory(46)   ( Object *, ... );
        typedef Const(47) *   Const(46)( const Object *, ... );

        typedef Factory(46) *  Factory(45)   ( Object *, ... );
        typedef Const(46) *   Const(45)( const Object *, ... );

        typedef Factory(45) *  Factory(44)   ( Object *, ... );
        typedef Const(45) *   Const(44)( const Object *, ... );

        typedef Factory(44) *  Factory(43)   ( Object *, ... );
        typedef Const(44) *   Const(43)( const Object *, ... );

        typedef Factory(43) *  Factory(42)   ( Object *, ... );
        typedef Const(43) *   Const(42)( const Object *, ... );

        typedef Factory(42) *  Factory(41)   ( Object *, ... );
        typedef Const(42) *   Const(41)( const Object *, ... );

        typedef Factory(41) *  Factory(40)   ( Object *, ... );
        typedef Const(41) *   Const(40)( const Object *, ... );

        typedef Factory(40) *  Factory(39)   ( Object *, ... );
        typedef Const(40) *   Const(39)( const Object *, ... );

        typedef Factory(39) *  Factory(38)   ( Object *, ... );
        typedef Const(39) *   Const(38)( const Object *, ... );

        typedef Factory(38) *  Factory(37)   ( Object *, ... );
        typedef Const(38) *   Const(37)( const Object *, ... );

        typedef Factory(37) *  Factory(36)   ( Object *, ... );
        typedef Const(37) *   Const(36)( const Object *, ... );

        typedef Factory(36) *  Factory(35)   ( Object *, ... );
        typedef Const(36) *   Const(35)( const Object *, ... );

        typedef Factory(35) *  Factory(34)   ( Object *, ... );
        typedef Const(35) *   Const(34)( const Object *, ... );

        typedef Factory(34) *  Factory(33)   ( Object *, ... );
        typedef Const(34) *   Const(33)( const Object *, ... );

        typedef Factory(33) *  Factory(32)   ( Object *, ... );
        typedef Const(33) *   Const(32)( const Object *, ... );

        typedef Factory(32) *  Factory(31)   ( Object *, ... );
        typedef Const(32) *   Const(31)( const Object *, ... );

        typedef Factory(31) *  Factory(30)   ( Object *, ... );
        typedef Const(31) *   Const(30)( const Object *, ... );

        typedef Factory(30) *  Factory(29)   ( Object *, ... );
        typedef Const(30) *   Const(29)( const Object *, ... );

        typedef Factory(29) *  Factory(28)   ( Object *, ... );
        typedef Const(29) *   Const(28)( const Object *, ... );

        typedef Factory(28) *  Factory(27)   ( Object *, ... );
        typedef Const(28) *   Const(27)( const Object *, ... );

        typedef Factory(27) *  Factory(26)   ( Object *, ... );
        typedef Const(27) *   Const(26)( const Object *, ... );

        typedef Factory(26) *  Factory(25)   ( Object *, ... );
        typedef Const(26) *   Const(25)( const Object *, ... );

        typedef Factory(25) *  Factory(24)   ( Object *, ... );
        typedef Const(25) *   Const(24)( const Object *, ... );

        typedef Factory(24) *  Factory(23)   ( Object *, ... );
        typedef Const(24) *   Const(23)( const Object *, ... );

        typedef Factory(23) *  Factory(22)   ( Object *, ... );
        typedef Const(23) *   Const(22)( const Object *, ... );

        typedef Factory(22) *  Factory(21)   ( Object *, ... );
        typedef Const(22) *   Const(21)( const Object *, ... );

        typedef Factory(21) *  Factory(20)   ( Object *, ... );
        typedef Const(21) *   Const(20)( const Object *, ... );

        typedef Factory(20) *  Factory(19)   ( Object *, ... );
        typedef Const(20) *   Const(19)( const Object *, ... );

        typedef Factory(19) *  Factory(18)   ( Object *, ... );
        typedef Const(19) *   Const(18)( const Object *, ... );

        typedef Factory(18) *  Factory(17)   ( Object *, ... );
        typedef Const(18) *   Const(17)( const Object *, ... );

        typedef Factory(17) *  Factory(16)   ( Object *, ... );
        typedef Const(17) *   Const(16)( const Object *, ... );

        typedef Factory(16) *  Factory(15)   ( Object *, ... );
        typedef Const(16) *   Const(15)( const Object *, ... );

        typedef Factory(15) *  Factory(14)   ( Object *, ... );
        typedef Const(15) *   Const(14)( const Object *, ... );

        typedef Factory(14) *  Factory(13)   ( Object *, ... );
        typedef Const(14) *   Const(13)( const Object *, ... );

        typedef Factory(13) *  Factory(12)   ( Object *, ... );
        typedef Const(13) *   Const(12)( const Object *, ... );

        typedef Factory(12) *  Factory(11)   ( Object *, ... );
        typedef Const(12) *   Const(11)( const Object *, ... );

        typedef Factory(11) *  Factory(10)   ( Object *, ... );
        typedef Const(11) *   Const(10)( const Object *, ... );

        typedef Factory(10) *  Factory(09)   ( Object *, ... );
        typedef Const(10) *   Const(09)( const Object *, ... );

        typedef Factory(09) *  Factory(08)   ( Object *, ... );
        typedef Const(09) *   Const(08)( const Object *, ... );

        typedef Factory(08) *  Factory(07)   ( Object *, ... );
        typedef Const(08) *   Const(07)( const Object *, ... );

        typedef Factory(07) *  Factory(06)   ( Object *, ... );
        typedef Const(07) *   Const(06)( const Object *, ... );

        typedef Factory(06) *  Factory(05)   ( Object *, ... );
        typedef Const(06) *   Const(05)( const Object *, ... );

        typedef Factory(05) *  Factory(04)   ( Object *, ... );
        typedef Const(05) *   Const(04)( const Object *, ... );

        typedef Factory(04) *  Factory(03)   ( Object *, ... );
        typedef Const(04) *   Const(03)( const Object *, ... );

        typedef Factory(03) *  Factory(02)   ( Object *, ... );
        typedef Const(03) *   Const(02)( const Object *, ... );

        typedef Factory(02) *  Factory(01)   ( Object *, ... );
        typedef Const(02) *   Const(01)( const Object *, ... );

        typedef Factory(01) *  Factory(00)   ( Object *, ... );
        typedef Const(01) *   Const(00)( const Object *, ... );
  #if 0
    typedef     Factory(00) *                            protected;
  #endif // REDEFINED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory prototypes/hooks (strategic command)*
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
    static StackControl * ControlFactory(NameSpace) ( Set, Case ) ;
  #endif // UNUSED_PLUS_REDEFINED
          static void        ControlFactory(Setup)  (void);
          static void        ControlFactory(Abort)  (void);

          static void               SetJumpStructs  (void);
          static void               SetJumpBuffers  (void);

                static bool  pPush(Pass);
                static Pass  pPop(void);              ///
                static const Pass * pTop(void);
                static size_t           pHeight(void);
                static int              pPrint(void);
                #include     "pStk.h"


                static bool  cPush(ControlFactory);
                static ControlFactory  cPop(void);              ///
                static const ControlFactory * cTop(void);
                static size_t           cHeight(void);
                static int              cPrint(void);
                #include     "cStk.h"
  #if 1
  static void  CommandCenter(01)    (void)attribute((constructor));

  static void  StrategicCommand(01) (void)attribute((constructor));

  static void  StrategicCommand(02) (void)attribute((destructor));

  static void  ControlTower(01)     (void)attribute((constructor));
  #endif // EXTRA_PROGRAM_CONSTRUCTOR_(S)
  static void  FactoryControl(01)   (void)attribute((constructor));

  static void  FactoryControl(02)   (void)attribute((destructor));

  #define FactoryControl01(Member) Factory01##Member

  #define FactoryControl02(Member) Factory02##Member

  static void  FactoryControl(01)(Constructor)   (void)attribute((constructor));

  static void  FactoryControl(01)(Destructor)   (void)attribute((destructor));

  static void  FactoryControl(02)(Constructor)   (void)attribute((constructor));

  static void  FactoryControl(02)(Destructor)   (void)attribute((destructor));


    static void Factory(Constructor) (void) ; //PROGRAM INITIALIZER

    static void Factory(Destructor)(void);


    static cstring CommandCenter(Type)() ;

    static cstring StrategicCommand(Type)(00)();

    explicit cstring CommandCenter(Type)()
                 {return"___COMMAND_CENTER___";}
  #if 0
  explicit cstring StrategicCommand(Type)(00)()
               {return"___STRATEGIC_COMMAND___00";}
  #endif // 0
    explicit  cstring   typename(StrategicCommandInterface)(00);

    explicit  cstring   typename(StrategicCommandInterface)(01);

    explicit  cstring   typename(StrategicCommandInterface)(02);

    explicit  cstring   typename(StrategicCommandInterface)(03);

    explicit  cstring   typename(StrategicCommandInterface)(04);

    explicit  cstring   typename(StrategicCommandInterface)(05);

    explicit  cstring   typename(StrategicCommandInterface)(06);

    explicit  cstring   typename(StrategicCommandInterface)(07);

    explicit  cstring   typename(StrategicCommandInterface)(08);

    explicit  cstring   typename(StrategicCommandInterface)(09);

        #if 0
            enum _StrategicCommandTypeArray { _8 = 9 };
        #endif // 0
        static struct class(VirtualTable) *

            StrategicCommand(InterfaceArray)[11]  =
        {
            & StrategicCommand(Interface)(01),
            & StrategicCommand(Interface)(02),
            & StrategicCommand(Interface)(03),
            & StrategicCommand(Interface)(04),
            & StrategicCommand(Interface)(05),
            & StrategicCommand(Interface)(06),
            & StrategicCommand(Interface)(07),
            & StrategicCommand(Interface)(08),
            & StrategicCommand(Interface)(09),
            & StrategicCommand(Interface)(OOC),
            nullptr//not new but loop termination
        };

        static ControlFactory newControlFactory();

        static Object * StrategicCommand(Init)( Object * );

    #if 0
        static int ConsoleIn( const Object *, ... );//unused
    #endif // 0
        static void TemplateBuilder( Object * );
        static void TemplateControl( Object * );

        static Array TemplateArrays( Array * );

  #define TEMPLATE_METHOD_TEMPORARY______IMPLEMENTATIONS______01  1

  #if TEMPLATE_METHOD_TEMPORARY______IMPLEMENTATIONS______01
        static void TemplateInt( Object * );
        static void TemplateTwin( Object *, ... );
  #endif //  TEMPLATE_METHOD_TEMPORARY______IMPLEMENTATIONS______01

    #undef  control //()
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory sequence prototypes              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*        prototype factory function control sequence        */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

      static void          ControlFactory(99)( void );
      static void            ConstFactory(99)( void );

      static Factory(99) * ControlFactory(98)( StackTop *, ... );
      static Const(99) * ConstFactory(98)(const StackTop *, ...);

      static Factory(98) * ControlFactory(97)( StackTop *, ... );
      static Const(98) * ConstFactory(97)(const StackTop *, ...);

      static Factory(97) * ControlFactory(96)( StackTop *, ... );
      static Const(97) * ConstFactory(96)(const StackTop *, ...);

      static Factory(96) * ControlFactory(95)( StackTop *, ... );
      static Const(96) * ConstFactory(95)(const StackTop *, ...);

      static Factory(95) * ControlFactory(94)( StackTop *, ... );
      static Const(95) * ConstFactory(94)(const StackTop *, ...);

      static Factory(94) * ControlFactory(93)( StackTop *, ... );
      static Const(94) * ConstFactory(93)(const StackTop *, ...);

      static Factory(93) * ControlFactory(92)( StackTop *, ... );
      static Const(93) * ConstFactory(92)(const StackTop *, ...);

      static Factory(92) * ControlFactory(91)( StackTop *, ... );
      static Const(92) * ConstFactory(91)(const StackTop *, ...);

      static Factory(91) * ControlFactory(90)( StackTop *, ... );
      static Const(91) * ConstFactory(90)(const StackTop *, ...);

      static Factory(90) * ControlFactory(89)( StackTop *, ... );
      static Const(90) * ConstFactory(89)(const StackTop *, ...);

      static Factory(89) * ControlFactory(88)( StackTop *, ... );
      static Const(89) * ConstFactory(88)(const StackTop *, ...);

      static Factory(88) * ControlFactory(87)( StackTop *, ... );
      static Const(88) * ConstFactory(87)(const StackTop *, ...);

      static Factory(87) * ControlFactory(86)( StackTop *, ... );
      static Const(87) * ConstFactory(86)(const StackTop *, ...);

      static Factory(86) * ControlFactory(85)( StackTop *, ... );
      static Const(86) * ConstFactory(85)(const StackTop *, ...);

      static Factory(85) * ControlFactory(84)( StackTop *, ... );
      static Const(85) * ConstFactory(84)(const StackTop *, ...);

      static Factory(84) * ControlFactory(83)( StackTop *, ... );
      static Const(84) * ConstFactory(83)(const StackTop *, ...);

      static Factory(83) * ControlFactory(82)( StackTop *, ... );
      static Const(83) * ConstFactory(82)(const StackTop *, ...);

      static Factory(82) * ControlFactory(81)( StackTop *, ... );
      static Const(82) * ConstFactory(81)(const StackTop *, ...);

      static Factory(81) * ControlFactory(80)( StackTop *, ... );
      static Const(81) * ConstFactory(80)(const StackTop *, ...);

      static Factory(80) * ControlFactory(79)( StackTop *, ... );
      static Const(80) * ConstFactory(79)(const StackTop *, ...);

      static Factory(79) * ControlFactory(78)( StackTop *, ... );
      static Const(79) * ConstFactory(78)(const StackTop *, ...);

      static Factory(78) * ControlFactory(77)( StackTop *, ... );
      static Const(78) * ConstFactory(77)(const StackTop *, ...);

      static Factory(77) * ControlFactory(76)( StackTop *, ... );
      static Const(77) * ConstFactory(76)(const StackTop *, ...);

      static Factory(76) * ControlFactory(75)( StackTop *, ... );
      static Const(76) * ConstFactory(75)(const StackTop *, ...);

      static Factory(75) * ControlFactory(74)( StackTop *, ... );
      static Const(75) * ConstFactory(74)(const StackTop *, ...);

      static Factory(74) * ControlFactory(73)( StackTop *, ... );
      static Const(74) * ConstFactory(73)(const StackTop *, ...);

      static Factory(73) * ControlFactory(72)( StackTop *, ... );
      static Const(73) * ConstFactory(72)(const StackTop *, ...);

      static Factory(72) * ControlFactory(71)( StackTop *, ... );
      static Const(72) * ConstFactory(71)(const StackTop *, ...);

      static Factory(71) * ControlFactory(70)( StackTop *, ... );
      static Const(71) * ConstFactory(70)(const StackTop *, ...);

      static Factory(70) * ControlFactory(69)( StackTop *, ... );
      static Const(70) * ConstFactory(69)(const StackTop *, ...);

      static Factory(69) * ControlFactory(68)( StackTop *, ... );
      static Const(69) * ConstFactory(68)(const StackTop *, ...);

      static Factory(68) * ControlFactory(67)( StackTop *, ... );
      static Const(68) * ConstFactory(67)(const StackTop *, ...);

      static Factory(67) * ControlFactory(66)( StackTop *, ... );
      static Const(67) * ConstFactory(66)(const StackTop *, ...);

      static Factory(66) * ControlFactory(65)( StackTop *, ... );
      static Const(66) * ConstFactory(65)(const StackTop *, ...);

      static Factory(65) * ControlFactory(64)( StackTop *, ... );
      static Const(65) * ConstFactory(64)(const StackTop *, ...);

      static Factory(64) * ControlFactory(63)( StackTop *, ... );
      static Const(64) * ConstFactory(63)(const StackTop *, ...);

      static Factory(63) * ControlFactory(62)( StackTop *, ... );
      static Const(63) * ConstFactory(62)(const StackTop *, ...);

      static Factory(62) * ControlFactory(61)( StackTop *, ... );
      static Const(62) * ConstFactory(61)(const StackTop *, ...);

      static Factory(61) * ControlFactory(60)( StackTop *, ... );
      static Const(61) * ConstFactory(60)(const StackTop *, ...);

      static Factory(60) * ControlFactory(59)( StackTop *, ... );
      static Const(60) * ConstFactory(59)(const StackTop *, ...);

      static Factory(59) * ControlFactory(58)( StackTop *, ... );
      static Const(59) * ConstFactory(58)(const StackTop *, ...);

      static Factory(58) * ControlFactory(57)( StackTop *, ... );
      static Const(58) * ConstFactory(57)(const StackTop *, ...);

      static Factory(57) * ControlFactory(56)( StackTop *, ... );
      static Const(57) * ConstFactory(56)(const StackTop *, ...);

      static Factory(56) * ControlFactory(55)( StackTop *, ... );
      static Const(56) * ConstFactory(55)(const StackTop *, ...);

      static Factory(55) * ControlFactory(54)( StackTop *, ... );
      static Const(55) * ConstFactory(54)(const StackTop *, ...);

      static Factory(54) * ControlFactory(53)( StackTop *, ... );
      static Const(54) * ConstFactory(53)(const StackTop *, ...);

      static Factory(53) * ControlFactory(52)( StackTop *, ... );
      static Const(53) * ConstFactory(52)(const StackTop *, ...);

      static Factory(52) * ControlFactory(51)( StackTop *, ... );
      static Const(52) * ConstFactory(51)(const StackTop *, ...);

      static Factory(51) * ControlFactory(50)( StackTop *, ... );
      static Const(51) * ConstFactory(50)(const StackTop *, ...);

      static Factory(50) * ControlFactory(49)( StackTop *, ... );
      static Const(50) * ConstFactory(49)(const StackTop *, ...);

      static Factory(49) * ControlFactory(48)( StackTop *, ... );
      static Const(49) * ConstFactory(48)(const StackTop *, ...);

      static Factory(48) * ControlFactory(47)( StackTop *, ... );
      static Const(48) * ConstFactory(47)(const StackTop *, ...);

      static Factory(47) * ControlFactory(46)( StackTop *, ... );
      static Const(47) * ConstFactory(46)(const StackTop *, ...);

      static Factory(46) * ControlFactory(45)( StackTop *, ... );
      static Const(46) * ConstFactory(45)(const StackTop *, ...);

      static Factory(45) * ControlFactory(44)( StackTop *, ... );
      static Const(45) * ConstFactory(44)(const StackTop *, ...);

      static Factory(44) * ControlFactory(43)( StackTop *, ... );
      static Const(44) * ConstFactory(43)(const StackTop *, ...);

      static Factory(43) * ControlFactory(42)( StackTop *, ... );
      static Const(43) * ConstFactory(42)(const StackTop *, ...);

      static Factory(42) * ControlFactory(41)( StackTop *, ... );
      static Const(42) * ConstFactory(41)(const StackTop *, ...);

      static Factory(41) * ControlFactory(40)( StackTop *, ... );
      static Const(41) * ConstFactory(40)(const StackTop *, ...);

      static Factory(40) * ControlFactory(39)( StackTop *, ... );
      static Const(40) * ConstFactory(39)(const StackTop *, ...);

      static Factory(39) * ControlFactory(38)( StackTop *, ... );
      static Const(39) * ConstFactory(38)(const StackTop *, ...);

      static Factory(38) * ControlFactory(37)( StackTop *, ... );
      static Const(38) * ConstFactory(37)(const StackTop *, ...);

      static Factory(37) * ControlFactory(36)( StackTop *, ... );
      static Const(37) * ConstFactory(36)(const StackTop *, ...);

      static Factory(36) * ControlFactory(35)( StackTop *, ... );
      static Const(36) * ConstFactory(35)(const StackTop *, ...);

      static Factory(35) * ControlFactory(34)( StackTop *, ... );
      static Const(35) * ConstFactory(34)(const StackTop *, ...);

      static Factory(34) * ControlFactory(33)( StackTop *, ... );
      static Const(34) * ConstFactory(33)(const StackTop *, ...);

      static Factory(33) * ControlFactory(32)( StackTop *, ... );
      static Const(33) * ConstFactory(32)(const StackTop *, ...);

      static Factory(32) * ControlFactory(31)( StackTop *, ... );
      static Const(32) * ConstFactory(31)(const StackTop *, ...);

      static Factory(31) * ControlFactory(30)( StackTop *, ... );
      static Const(31) * ConstFactory(30)(const StackTop *, ...);

      static Factory(30) * ControlFactory(29)( StackTop *, ... );
      static Const(30) * ConstFactory(29)(const StackTop *, ...);

      static Factory(29) * ControlFactory(28)( StackTop *, ... );
      static Const(29) * ConstFactory(28)(const StackTop *, ...);

      static Factory(28) * ControlFactory(27)( StackTop *, ... );
      static Const(28) * ConstFactory(27)(const StackTop *, ...);

      static Factory(27) * ControlFactory(26)( StackTop *, ... );
      static Const(27) * ConstFactory(26)(const StackTop *, ...);

      static Factory(26) * ControlFactory(25)( StackTop *, ... );
      static Const(26) * ConstFactory(25)(const StackTop *, ...);

      static Factory(25) * ControlFactory(24)( StackTop *, ... );
      static Const(25) * ConstFactory(24)(const StackTop *, ...);

      static Factory(24) * ControlFactory(23)( StackTop *, ... );
      static Const(24) * ConstFactory(23)(const StackTop *, ...);

      static Factory(23) * ControlFactory(22)( StackTop *, ... );
      static Const(23) * ConstFactory(22)(const StackTop *, ...);

      static Factory(22) * ControlFactory(21)( StackTop *, ... );
      static Const(22) * ConstFactory(21)(const StackTop *, ...);

      static Factory(21) * ControlFactory(20)( StackTop *, ... );
      static Const(21) * ConstFactory(20)(const StackTop *, ...);

      static Factory(20) * ControlFactory(19)( StackTop *, ... );
      static Const(20) * ConstFactory(19)(const StackTop *, ...);

      static Factory(19) * ControlFactory(18)( StackTop *, ... );
      static Const(19) * ConstFactory(18)(const StackTop *, ...);

      static Factory(18) * ControlFactory(17)( StackTop *, ... );
      static Const(18) * ConstFactory(17)(const StackTop *, ...);

      static Factory(17) * ControlFactory(16)( StackTop *, ... );
      static Const(17) * ConstFactory(16)(const StackTop *, ...);

      static Factory(16) * ControlFactory(15)( StackTop *, ... );
      static Const(16) * ConstFactory(15)(const StackTop *, ...);

      static Factory(15) * ControlFactory(14)( StackTop *, ... );
      static Const(15) * ConstFactory(14)(const StackTop *, ...);

      static Factory(14) * ControlFactory(13)( StackTop *, ... );
      static Const(14) * ConstFactory(13)(const StackTop *, ...);

      static Factory(13) * ControlFactory(12)( StackTop *, ... );
      static Const(13) * ConstFactory(12)(const StackTop *, ...);

      static Factory(12) * ControlFactory(11)( StackTop *, ... );
      static Const(12) * ConstFactory(11)(const StackTop *, ...);

      static Factory(11) * ControlFactory(10)( StackTop *, ... );
      static Const(11) * ConstFactory(10)(const StackTop *, ...);

      static Factory(10) * ControlFactory(09)( StackTop *, ... );
      static Const(10) * ConstFactory(09)(const StackTop *, ...);

      static Factory(09) * ControlFactory(08)( StackTop *, ... );
      static Const(09) * ConstFactory(08)(const StackTop *, ...);

      static Factory(08) * ControlFactory(07)( StackTop *, ... );
      static Const(08) * ConstFactory(07)(const StackTop *, ...);

      static Factory(07) * ControlFactory(06)( StackTop *, ... );
      static Const(07) * ConstFactory(06)(const StackTop *, ...);

      static Factory(06) * ControlFactory(05)( StackTop *, ... );
      static Const(06) * ConstFactory(05)(const StackTop *, ...);

      static Factory(05) * ControlFactory(04)( StackTop *, ... );
      static Const(05) * ConstFactory(04)(const StackTop *, ...);

      static Factory(04) * ControlFactory(03)( StackTop *, ... );
      static Const(04) * ConstFactory(03)(const StackTop *, ...);

      static Factory(03) * ControlFactory(02)( StackTop *, ... );
      static Const(03) * ConstFactory(02)(const StackTop *, ...);

      static Factory(02) * ControlFactory(01)( StackTop *, ... );
      static Const(02) * ConstFactory(01)(const StackTop *, ...);

      static Factory(01) * ControlFactory(00)( StackTop *, ... );
      static Const(01) * ConstFactory(00)(const StackTop *, ...);

      static Factory(00) * ControlFactory(Init)( StackControl * * );
      static Const(00) * ConstFactory(Init)( StackControl * * );

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C                                                 */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   command control factory components (global).     *
     *                                                           *
     *          this is a non-object oriented definition.        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*              COMMAND/CONTROL/FACTORY/TEMPLATE             */
    #ifndef COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
    #define COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
#if 0 //
    volatile static void*volatile*volatile*StackControlSlot[1]={0};
#endif // not used?
    volatile static Object * volatile TemplateArray = nullptr;//new

static volatile StackControl * volatile *  volatile Controller = nullptr;
      #define                              default(flag)flags(flag)
      static volatile bool                 ControlFlag      = false;
      #define                              control()/*stack control*/\
      \
           (*Flags[0]?ControlSlot[0][0]:&self);stack=((void**)stack)+1
static volatile StackTop * volatile *      volatile control = nullptr;
      #define                              using/*template(...)*/\
      \
            (Object*)ControlFactory(Init) /**using template( array )**/
      #define                              final/*template(...)*/\
      \
            (Object*)ConstFactory(Init)   /**final template(array)**/
      static volatile bool                 InitialFlag      = true;
      #define                              continue(label)/*init or exec*/\
      \
            (Object*)ControlFactory(Init)(Controller)
      static void (*Template)( Object * ) = & TemplateBuilder;
      #define                              flags(def)/*template method*/\
      \
            *Flags[def]
    #if 1
      #define cbegin(array)                using template(array)
      #define cend                         (&ControlFactory(00))
    #endif // 0
      static volatile Function volatile    LvlAddr      = 0x0;

      static volatile Name                 LvlName      = "";

      static volatile bool                 TemplateFlag = false,
                                           /*user mode*/
      FactoryFlag  = true,/*fact-or-comm*/ CommandFlag  = false,
                                           /*halt*/
      DefaultFlag  = true,/*fact + comm*/  StrategyFlag = false ,
                                           /*pri or sec vtable*/
      TerminateFlag= false;/*return obj*/

    /*         OOP in C or OOC is now 100% defined here          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

      static Factory FactoryDefault =

        {0,0},    * AFactoryDefault = & FactoryDefault;

      static Command ControlDefault =

        {{},0,0}, * AControlDefault = & ControlDefault;


        static Method *

            ControlFactory(Addresses)[201] =
        {
            &ControlFactory(00), &ControlFactory(01),
            &ControlFactory(02), &ControlFactory(03),
            &ControlFactory(04), &ControlFactory(05),
            &ControlFactory(06), &ControlFactory(07),
            &ControlFactory(08), &ControlFactory(09),
            &ControlFactory(10), &ControlFactory(11),
            &ControlFactory(12), &ControlFactory(13),
            &ControlFactory(14), &ControlFactory(15),
            &ControlFactory(16), &ControlFactory(17),
            &ControlFactory(18), &ControlFactory(19),

            &ControlFactory(20), &ControlFactory(21),
            &ControlFactory(22), &ControlFactory(23),
            &ControlFactory(24), &ControlFactory(25),
            &ControlFactory(26), &ControlFactory(27),
            &ControlFactory(28), &ControlFactory(29),
            &ControlFactory(30), &ControlFactory(31),
            &ControlFactory(32), &ControlFactory(33),
            &ControlFactory(34), &ControlFactory(35),
            &ControlFactory(36), &ControlFactory(37),
            &ControlFactory(38), &ControlFactory(39),

            &ControlFactory(40), &ControlFactory(41),
            &ControlFactory(42), &ControlFactory(43),
            &ControlFactory(44), &ControlFactory(45),
            &ControlFactory(46), &ControlFactory(47),
            &ControlFactory(48), &ControlFactory(49),
            &ControlFactory(50), &ControlFactory(51),
            &ControlFactory(52), &ControlFactory(53),
            &ControlFactory(54), &ControlFactory(55),
            &ControlFactory(56), &ControlFactory(57),
            &ControlFactory(58), &ControlFactory(59),

            &ControlFactory(60), &ControlFactory(61),
            &ControlFactory(62), &ControlFactory(63),
            &ControlFactory(64), &ControlFactory(65),
            &ControlFactory(66), &ControlFactory(67),
            &ControlFactory(68), &ControlFactory(69),
            &ControlFactory(70), &ControlFactory(71),
            &ControlFactory(72), &ControlFactory(73),
            &ControlFactory(74), &ControlFactory(75),
            &ControlFactory(76), &ControlFactory(77),
            &ControlFactory(78), &ControlFactory(79),

            &ControlFactory(80), &ControlFactory(81),
            &ControlFactory(82), &ControlFactory(83),
            &ControlFactory(84), &ControlFactory(85),
            &ControlFactory(86), &ControlFactory(87),
            &ControlFactory(88), &ControlFactory(89),
            &ControlFactory(90), &ControlFactory(91),
            &ControlFactory(92), &ControlFactory(93),
            &ControlFactory(94), &ControlFactory(95),
            &ControlFactory(96), &ControlFactory(97),
            &ControlFactory(98), &ControlFactory(99),

             &ConstFactory(00),   &ConstFactory(01),
             &ConstFactory(02),   &ConstFactory(03),
             &ConstFactory(04),   &ConstFactory(05),
             &ConstFactory(06),   &ConstFactory(07),
             &ConstFactory(08),   &ConstFactory(09),
             &ConstFactory(10),   &ConstFactory(11),
             &ConstFactory(12),   &ConstFactory(13),
             &ConstFactory(14),   &ConstFactory(15),
             &ConstFactory(16),   &ConstFactory(17),
             &ConstFactory(18),   &ConstFactory(19),

             &ConstFactory(20),   &ConstFactory(21),
             &ConstFactory(22),   &ConstFactory(23),
             &ConstFactory(24),   &ConstFactory(25),
             &ConstFactory(26),   &ConstFactory(27),
             &ConstFactory(28),   &ConstFactory(29),
             &ConstFactory(30),   &ConstFactory(31),
             &ConstFactory(32),   &ConstFactory(33),
             &ConstFactory(34),   &ConstFactory(35),
             &ConstFactory(36),   &ConstFactory(37),
             &ConstFactory(38),   &ConstFactory(39),

             &ConstFactory(40),   &ConstFactory(41),
             &ConstFactory(42),   &ConstFactory(43),
             &ConstFactory(44),   &ConstFactory(45),
             &ConstFactory(46),   &ConstFactory(47),
             &ConstFactory(48),   &ConstFactory(49),
             &ConstFactory(50),   &ConstFactory(51),
             &ConstFactory(52),   &ConstFactory(53),
             &ConstFactory(54),   &ConstFactory(55),
             &ConstFactory(56),   &ConstFactory(57),
             &ConstFactory(58),   &ConstFactory(59),

             &ConstFactory(60),   &ConstFactory(61),
             &ConstFactory(62),   &ConstFactory(63),
             &ConstFactory(64),   &ConstFactory(65),
             &ConstFactory(66),   &ConstFactory(67),
             &ConstFactory(68),   &ConstFactory(69),
             &ConstFactory(70),   &ConstFactory(71),
             &ConstFactory(72),   &ConstFactory(73),
             &ConstFactory(74),   &ConstFactory(75),
             &ConstFactory(76),   &ConstFactory(77),
             &ConstFactory(78),   &ConstFactory(79),

             &ConstFactory(80),   &ConstFactory(81),
             &ConstFactory(82),   &ConstFactory(83),
             &ConstFactory(84),   &ConstFactory(85),
             &ConstFactory(86),   &ConstFactory(87),
             &ConstFactory(88),   &ConstFactory(89),
             &ConstFactory(90),   &ConstFactory(91),
             &ConstFactory(92),   &ConstFactory(93),
             &ConstFactory(94),   &ConstFactory(95),
             &ConstFactory(96),   &ConstFactory(97),
             &ConstFactory(98),   &ConstFactory(99),

             nullptr
        };

    #include "../Control/Command.h"                  //CommandArray
  #if 1
    #include "../Control/Bunker.h"                   //StructBunker
  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* FACTORY C (using)                                         */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   the control factory initializer A.K.A. using     *
     *                                                           *
     * @param   ex: using template(array)(...)(...)(...)(...)    *
     *                                                           *
     * @throw   AbortControlSequence                             *
     *                                                           *
     * @return  the control factory sequence function #00-#99    *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*           FACTORY CONTROL SEQUENCE INITIALIZER            */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*           FACTORY CONTROL SEQUENCE INITIALIZER            */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* FACTORY C (using)                                         */
    #define defineFactoryInit(Type)\
    \
        /*explicit Factory(00) * */ \
        Type##FactoryInit ( StackControl * * p )\
        { if(p == nullptr)\
    \
           {throw(new(AbortControlSequence))(this,"ControlAbort:Init");}\
    \
                Controller    =   ((p)) ; /*//PHAT FARM//*/\
            /**WARNING**WARNING**WARNING**WARNING**WARNING**/\
        /*new(Assertion)(this, assert( Controller != nullptr ));*/\
            /**WARNING**WARNING**WARNING**WARNING**WARNING**/\
                ControlFlag   =   false;\
    \
            if( FactoryFlag )\
            {\
                control       =   &AFactoryDefault;\
            } else {\
                control       =   &AControlDefault;\
            }\
                TerminateFlag =   false;\
    \
                Skip          =   0;\
    \
                LvlName       =   "";\
    \
                LvlAddr       =   0x0;\
    \
    \
                cPush(newControlFactory());\
    \
    \
            return & Type ## Factory ## 00;  }

        explicit Factory(00) * typename(FactoryInit)(Control);
       explicit Const(00) * typename(FactoryInit)(Const);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* X - LEVEL MACRO                                           */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   the factory control sequence (definition)        *
     *                                                           *
     * @param   the object-oriented pointer self to              *
     *          initialize the stack pointer by control()        *
     *          call/case.                                       *
     *                                                           *
     *          ex: Stack * stack = control()                    *
     *                                                           *
     *          (for proper stacktop)                            *
     *                                                           *
     * @throw   throw(new(AbortFactorySequence))                 *
     *              (this,"FactoryAbort:xx");                    *
     *                                                           *
     * @throw   throw(new(AbortCommandSequence))                 *
     *              (this,"CommandAbort:xx");                    *
     *                                                           *
     * @return  the next factory sequence function #01 - #99     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; SEQUENCE;           COMMAND; SEQUENCE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*            FACTORY CONTROL SEQUENCE DEFINITION            */
    #define defineFactory(Type, Case, Next, Const)\
    \
        Type##Factory##Case ( Const StackTop * p, ... )\
        {StrategicCommand * self = 0;\
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
    \
            for(size_t i = 0; i < 200; i++)\
            /*this is for a control factory inside*/\
            {/*a control factory so pop and return next*/\
               if( p == ControlFactory(Addresses)[i] )\
               {Object * obj = cPop();deaccumulate(obj);\
                return & Type##Factory##Next;} }\
    \
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
    /*
        -pop the control factory object off the stack and use it to
         assign everything, then push back on the stack

        -there has to be an array of template methods or something...
         (if one sequence is supposed to do everything) maybe have a
         case where it accepts a null and does nothing. (or this can
         be an opportunity to use the defaults[0] flag NO)

        -a template method can push an extra control factory onto the
         stack or handle the skip counter.

     */\
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
    /*ControlSlot[0]  =  & control;*//**this is only needed once**/\
    \
               LvlName          =   # Case; \
    \
               LvlAddr          =   & Type##Factory##Case;\
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
    \
            self = cPop();\
    \
            if( !self ){ throw(new(NullStrategicCommand))\
            (this, "NoVirtualTableObjectOnControlStack"); }\
    \
           /*default(0) = ((StrategicCommand*)self)->defaults[0];*/\
             default(1) = ((StrategicCommand*)self)->defaults[1];\
             default(2) = ((StrategicCommand*)self)->defaults[2];\
             default(3) = ((StrategicCommand*)self)->defaults[3];\
             default(4) = ((StrategicCommand*)self)->defaults[4];\
             default(5) = ((StrategicCommand*)self)->defaults[5];\
             default(6) = ((StrategicCommand*)self)->defaults[6];\
             default(7) = ((StrategicCommand*)self)->defaults[7];\
    \
             Controller = ((StrategicCommand*)self)->controller;\
             Skip = ((StrategicCommand*)self)->skip;\
    \
             Template = ((StrategicCommand*)self)->_template;\
    \
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
    \
    if(Skip){((StrategicCommand*)self)->skip=--Skip;\
    \
    Controller();((StrategicCommand*)self)->controller = Controller;\
    \
    cPush(self); return & ControlFactory(Case);}\
    \
                 cPush(self);\
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
      if ( TemplateFlag ){ ControlFlag = true; control = & ((p)) ; \
    \
                            Template ((p)) ; ControlFlag = false; } \
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
      if( TerminateFlag ){ return control; }\
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
    \
        if ( DefaultFlag )\
          {\
          /**  Default  **//*                                    */\
          if ( FactoryFlag )\
            {\
    \
            if ( InitialFlag )\
              {\
    \
                    Stack * stack = & ((p)); \
    \
                    stack = ((void**)stack) + 1;\
    \
    \
                    Factory * iterator = &(((Factory*)Controller)[0]);\
    \
    \
                    ((Function*)iterator)[0] = p;\
    \
                    ((Return*)iterator)[1] = arg(stack, Return*);\
    \
                    Controller += 2;\
              }\
            else \
              {\
    \
                ControlFlag = true;\
    \
                if ( TerminateFlag && *control == ((Function*)Controller)\
    \
                    [0] )\
             /**terminate factory control sequence with object return**/\
                { control = & ((p)) ;\
    \
                  return (StackControl*)((Function*)Controller)\
    \
                    [0]((p)); }\
    \
    \
    \
                                        /*
                */control = & ((p)) ;/* /// ... ///
                                        /// ... ///
                                        /// ... ///

                *//*                    /// ... ///
                                        /// ... ///
                                        /// ... ///
                                                 */\
                         /* if new(Class) passed in */\
                /*if ( ((p)) == ((Function*)Controller)[0] )\
    \
                { TerminateFlag = true;  *//**<---**//*\
    \
                  return & Type##Factory##Next;*//**ctor next return**//* \
                }*/\
    \
    \
    \
    \
    \
                  if ( ! (((Function*)Controller)[0]) )\
                  { throw ( new(AbortFactorySequence) )\
                        (this, "FactoryAbort:" #Case);/**abort**/\
                  }\
    \
    \
    \
    \
    \
                  if( TerminateFlag )\
                  { return ((Function*)Controller)[0]((p));/**Factory**/\
                  }\
    \
    \
    \
    \
    \
                  if ( (((Return*)Controller))[1] )\
    \
                  { \
                   if( StrategyFlag )\
                   {\
                    if ( !( ((Insert*) \
    \
                             ( (virtual( ((Return*)Controller)\
    \
                    [1], Container ) ) )) \
    \
                    [4]( this, ((Function*)Controller)[0]((p)) ) ) )  \
    \
                        {throw(new(FactoryInsertFailure))\
                         (this, "ControlFactory:" #Case);}\
    \
                        /**Factory Primary VirtualTable**/\
    \
                        /**  **/\
                   }\
                   else \
                   {\
                    if ( !( ((Insert*) \
    \
                        ( (struct(bunker)(virtual)( ((Return*)Controller)\
    \
                    [1], Container ) ) )) \
    \
                    [4]( this, ((Function*)Controller)[0]((p)) ) ) )  \
    \
                        {throw(new(FactoryInsertFailure))\
                         (this, "ControlFactory:" #Case);}\
    \
                        /**Factory Secondary VirtualTable**/\
    \
                        /** ... **/\
                   }\
                  }\
    \
                  else \
    \
                  {\
                    ((Function*)Controller)[0]((p));/**Factory**/\
                  }\
    \
    \
    \
    \
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * **/\
    for(unsigned short i = 0; i < 26; i++)\
        \
    {\
        if(  ((  *JumpTable[i].key) == false   ) \
        &&   (   (JumpTable[i].val) == false  ))\
        {\
            \
            JumpTable[i].val = true;          /**Control**/\
        }\
    \
    \
        if(  ((*JumpTable[i].key) == true   ) \
        &&   (( JumpTable[i].val) == true  ))\
        {\
            \
            JumpTable[i].val = false;     /**Control**/\
        }\
    }\
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * **/\
    \
    \
    \
                ControlFlag = false; /*<---*/\
    \
                /*Command-Style is where the iterator is halted*/\
    \
                Controller() ;/*<---*/\
    \
    \
    \
    \
              }\
            }\
            else\
              {\
                /**CommandMode**/\
           /*if ( !FactoryFlag )*/\
              if ( InitialFlag )  \
                {\
                    Stack * stack = & ((p)); \
    \
                    stack = ((void**)stack) + 1;\
    \
    \
                    Command * iterator = &(((Command*)Controller)[0]);\
    \
    \
                    ((Class*)iterator)[0] = p;\
    \
                    ((Execute*)iterator)[1] = arg(stack, Object*);\
    \
    \
                  /*((Execute*)&Controller)[1]
    \
                    ((Class*)&Controller)[0] */\
    \
                    Controller += 2;\
                }\
              else\
                {\
    \
    \
    \
    \
    \
                  Command * iterator = &(((Command*)Controller)\
    \
                  [   (Index)  ((p))   ]);/**Command**/\
    \
    \
    \
    \
    \
                    if ( !((Class*)iterator)[0] )\
                    { throw ( new(AbortCommandSequence) )\
                          (this, "CommandAbort:" #Case);/**abort**/\
                    }\
    \
    \
    \
    \
    \
                  ((Execute*)iterator)[1]( ((Class*)iterator)[0] );\
                /**Command**/\
    \
    \
                }\
    \
              }\
    \
            }\
    \
            self = cPop();\
    \
            if( !self ){ /*throw(new(NullStrategicCommand))\
            (this, "NoVirtualTableObjectOnControlStack");*/ }\
    \
            else{\
    \
              ((StrategicCommand*)self)->controller = Controller;\
              ((StrategicCommand*)self)->skip = Skip;\
    \
              cPush(self);\
    \
            }\
    \
            return & Type##Factory##Next;\
        }

    #define Controller()\
    \
        if ( !CommandFlag ) { Controller += 2; }

    #endif//COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; SEQUENCE;           COMMAND; SEQUENCE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C                                                 */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   the factory control sequence (implementations)   *
     ** * * * * * * * * * * * *  * * * * * * * * * * * * * * * ***/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; SEQUENCE;           COMMAND; SEQUENCE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*         COMMAND/CONTROL/FACTORY/TEMPLATE/SEQUENCE         */
    #ifndef TEMPLATE_ARRAYS____________FACTORY_CONTROL_SEQUENCE__01
    #define TEMPLATE_ARRAYS____________FACTORY_CONTROL_SEQUENCE__01
        explicit void                   ControlFactory(99)(void)
       /**THIS IS/WAS FOR CHECKING THE FULL SET OF JUMP FLAGS**/
        { if(    1    )

      {throw(new(AbortControlSequence))(this,"ControlAbort:99");}
                        /**sequence implementation limit abort**/
          else {   }
        }
        explicit void                   ConstFactory(99)(void)
       /** ... **/
        { if(    1    )

   {throw(new(AbortControlSequence))(this,"ControlAbort:99C") ;}
                        /** ... **/
          else {   }
        }
        explicit Factory(99) * typename(Factory)(Control,98,99,);
      explicit Const(99) * typename(Factory)(Const,98,99,const);

        explicit Factory(98) * typename(Factory)(Control,97,98,);
      explicit Const(98) * typename(Factory)(Const,97,98,const);

        explicit Factory(97) * typename(Factory)(Control,96,97,);
      explicit Const(97) * typename(Factory)(Const,96,97,const);

        explicit Factory(96) * typename(Factory)(Control,95,96,);
      explicit Const(96) * typename(Factory)(Const,95,96,const);

        explicit Factory(95) * typename(Factory)(Control,94,95,);
      explicit Const(95) * typename(Factory)(Const,94,95,const);

        explicit Factory(94) * typename(Factory)(Control,93,94,);
      explicit Const(94) * typename(Factory)(Const,93,94,const);

        explicit Factory(93) * typename(Factory)(Control,92,93,);
      explicit Const(93) * typename(Factory)(Const,92,93,const);

        explicit Factory(92) * typename(Factory)(Control,91,92,);
      explicit Const(92) * typename(Factory)(Const,91,92,const);

        explicit Factory(91) * typename(Factory)(Control,90,91,);
      explicit Const(91) * typename(Factory)(Const,90,91,const);

        explicit Factory(90) * typename(Factory)(Control,89,90,);
      explicit Const(90) * typename(Factory)(Const,89,90,const);

        explicit Factory(89) * typename(Factory)(Control,88,89,);
      explicit Const(89) * typename(Factory)(Const,88,89,const);

        explicit Factory(88) * typename(Factory)(Control,87,88,);
      explicit Const(88) * typename(Factory)(Const,87,88,const);

        explicit Factory(87) * typename(Factory)(Control,86,87,);
      explicit Const(87) * typename(Factory)(Const,86,87,const);

        explicit Factory(86) * typename(Factory)(Control,85,86,);
      explicit Const(86) * typename(Factory)(Const,85,86,const);

        explicit Factory(85) * typename(Factory)(Control,84,85,);
      explicit Const(85) * typename(Factory)(Const,84,85,const);

        explicit Factory(84) * typename(Factory)(Control,83,84,);
      explicit Const(84) * typename(Factory)(Const,83,84,const);

        explicit Factory(83) * typename(Factory)(Control,82,83,);
      explicit Const(83) * typename(Factory)(Const,82,83,const);

        explicit Factory(82) * typename(Factory)(Control,81,82,);
      explicit Const(82) * typename(Factory)(Const,81,82,const);

        explicit Factory(81) * typename(Factory)(Control,80,81,);
      explicit Const(81) * typename(Factory)(Const,80,81,const);

        explicit Factory(80) * typename(Factory)(Control,79,80,);
      explicit Const(80) * typename(Factory)(Const,79,80,const);

        explicit Factory(79) * typename(Factory)(Control,78,79,);
      explicit Const(79) * typename(Factory)(Const,78,79,const);

        explicit Factory(78) * typename(Factory)(Control,77,78,);
      explicit Const(78) * typename(Factory)(Const,77,78,const);

        explicit Factory(77) * typename(Factory)(Control,76,77,);
      explicit Const(77) * typename(Factory)(Const,76,77,const);

        explicit Factory(76) * typename(Factory)(Control,75,76,);
      explicit Const(76) * typename(Factory)(Const,75,76,const);

        explicit Factory(75) * typename(Factory)(Control,74,75,);
      explicit Const(75) * typename(Factory)(Const,74,75,const);

        explicit Factory(74) * typename(Factory)(Control,73,74,);
      explicit Const(74) * typename(Factory)(Const,73,74,const);

        explicit Factory(73) * typename(Factory)(Control,72,73,);
      explicit Const(73) * typename(Factory)(Const,72,73,const);

        explicit Factory(72) * typename(Factory)(Control,71,72,);
      explicit Const(72) * typename(Factory)(Const,71,72,const);

        explicit Factory(71) * typename(Factory)(Control,70,71,);
      explicit Const(71) * typename(Factory)(Const,70,71,const);

        explicit Factory(70) * typename(Factory)(Control,69,70,);
      explicit Const(70) * typename(Factory)(Const,69,70,const);

        explicit Factory(69) * typename(Factory)(Control,68,69,);
      explicit Const(69) * typename(Factory)(Const,68,69,const);

        explicit Factory(68) * typename(Factory)(Control,67,68,);
      explicit Const(68) * typename(Factory)(Const,67,68,const);

        explicit Factory(67) * typename(Factory)(Control,66,67,);
      explicit Const(67) * typename(Factory)(Const,66,67,const);

        explicit Factory(66) * typename(Factory)(Control,65,66,);
      explicit Const(66) * typename(Factory)(Const,65,66,const);

        explicit Factory(65) * typename(Factory)(Control,64,65,);
      explicit Const(65) * typename(Factory)(Const,64,65,const);

        explicit Factory(64) * typename(Factory)(Control,63,64,);
      explicit Const(64) * typename(Factory)(Const,63,64,const);

        explicit Factory(63) * typename(Factory)(Control,62,63,);
      explicit Const(63) * typename(Factory)(Const,62,63,const);

        explicit Factory(62) * typename(Factory)(Control,61,62,);
      explicit Const(62) * typename(Factory)(Const,61,62,const);

        explicit Factory(61) * typename(Factory)(Control,60,61,);
      explicit Const(61) * typename(Factory)(Const,60,61,const);

        explicit Factory(60) * typename(Factory)(Control,59,60,);
      explicit Const(60) * typename(Factory)(Const,59,60,const);

        explicit Factory(59) * typename(Factory)(Control,58,59,);
      explicit Const(59) * typename(Factory)(Const,58,59,const);

        explicit Factory(58) * typename(Factory)(Control,57,58,);
      explicit Const(58) * typename(Factory)(Const,57,58,const);

        explicit Factory(57) * typename(Factory)(Control,56,57,);
      explicit Const(57) * typename(Factory)(Const,56,57,const);

        explicit Factory(56) * typename(Factory)(Control,55,56,);
      explicit Const(56) * typename(Factory)(Const,55,56,const);

        explicit Factory(55) * typename(Factory)(Control,54,55,);
      explicit Const(55) * typename(Factory)(Const,54,55,const);

        explicit Factory(54) * typename(Factory)(Control,53,54,);
      explicit Const(54) * typename(Factory)(Const,53,54,const);

        explicit Factory(53) * typename(Factory)(Control,52,53,);
      explicit Const(53) * typename(Factory)(Const,52,53,const);

        explicit Factory(52) * typename(Factory)(Control,51,52,);
      explicit Const(52) * typename(Factory)(Const,51,52,const);

        explicit Factory(51) * typename(Factory)(Control,50,51,);
      explicit Const(51) * typename(Factory)(Const,50,51,const);

        explicit Factory(50) * typename(Factory)(Control,49,50,);
      explicit Const(50) * typename(Factory)(Const,49,50,const);

        explicit Factory(49) * typename(Factory)(Control,48,49,);
      explicit Const(49) * typename(Factory)(Const,48,49,const);

        explicit Factory(48) * typename(Factory)(Control,47,48,);
      explicit Const(48) * typename(Factory)(Const,47,48,const);

        explicit Factory(47) * typename(Factory)(Control,46,47,);
      explicit Const(47) * typename(Factory)(Const,46,47,const);

        explicit Factory(46) * typename(Factory)(Control,45,46,);
      explicit Const(46) * typename(Factory)(Const,45,46,const);

        explicit Factory(45) * typename(Factory)(Control,44,45,);
      explicit Const(45) * typename(Factory)(Const,44,45,const);

        explicit Factory(44) * typename(Factory)(Control,43,44,);
      explicit Const(44) * typename(Factory)(Const,43,44,const);

        explicit Factory(43) * typename(Factory)(Control,42,43,);
      explicit Const(43) * typename(Factory)(Const,42,43,const);

        explicit Factory(42) * typename(Factory)(Control,41,42,);
      explicit Const(42) * typename(Factory)(Const,41,42,const);

        explicit Factory(41) * typename(Factory)(Control,40,41,);
      explicit Const(41) * typename(Factory)(Const,40,41,const);

        explicit Factory(40) * typename(Factory)(Control,39,40,);
      explicit Const(40) * typename(Factory)(Const,39,40,const);

        explicit Factory(39) * typename(Factory)(Control,38,39,);
      explicit Const(39) * typename(Factory)(Const,38,39,const);

        explicit Factory(38) * typename(Factory)(Control,37,38,);
      explicit Const(38) * typename(Factory)(Const,37,38,const);

        explicit Factory(37) * typename(Factory)(Control,36,37,);
      explicit Const(37) * typename(Factory)(Const,36,37,const);

        explicit Factory(36) * typename(Factory)(Control,35,36,);
      explicit Const(36) * typename(Factory)(Const,35,36,const);

        explicit Factory(35) * typename(Factory)(Control,34,35,);
      explicit Const(35) * typename(Factory)(Const,34,35,const);

        explicit Factory(34) * typename(Factory)(Control,33,34,);
      explicit Const(34) * typename(Factory)(Const,33,34,const);

        explicit Factory(33) * typename(Factory)(Control,32,33,);
      explicit Const(33) * typename(Factory)(Const,32,33,const);

        explicit Factory(32) * typename(Factory)(Control,31,32,);
      explicit Const(32) * typename(Factory)(Const,31,32,const);

        explicit Factory(31) * typename(Factory)(Control,30,31,);
      explicit Const(31) * typename(Factory)(Const,30,31,const);

        explicit Factory(30) * typename(Factory)(Control,29,30,);
      explicit Const(30) * typename(Factory)(Const,29,30,const);

        explicit Factory(29) * typename(Factory)(Control,28,29,);
      explicit Const(29) * typename(Factory)(Const,28,29,const);

        explicit Factory(28) * typename(Factory)(Control,27,28,);
      explicit Const(28) * typename(Factory)(Const,27,28,const);

        explicit Factory(27) * typename(Factory)(Control,26,27,);
      explicit Const(27) * typename(Factory)(Const,26,27,const);

        explicit Factory(26) * typename(Factory)(Control,25,26,);
      explicit Const(26) * typename(Factory)(Const,25,26,const);

        explicit Factory(25) * typename(Factory)(Control,24,25,);
      explicit Const(25) * typename(Factory)(Const,24,25,const);

        explicit Factory(24) * typename(Factory)(Control,23,24,);
      explicit Const(24) * typename(Factory)(Const,23,24,const);

        explicit Factory(23) * typename(Factory)(Control,22,23,);
      explicit Const(23) * typename(Factory)(Const,22,23,const);

        explicit Factory(22) * typename(Factory)(Control,21,22,);
      explicit Const(22) * typename(Factory)(Const,21,22,const);

        explicit Factory(21) * typename(Factory)(Control,20,21,);
      explicit Const(21) * typename(Factory)(Const,20,21,const);

        explicit Factory(20) * typename(Factory)(Control,19,20,);
      explicit Const(20) * typename(Factory)(Const,19,20,const);

        explicit Factory(19) * typename(Factory)(Control,18,19,);
      explicit Const(19) * typename(Factory)(Const,18,19,const);

        explicit Factory(18) * typename(Factory)(Control,17,18,);
      explicit Const(18) * typename(Factory)(Const,17,18,const);

        explicit Factory(17) * typename(Factory)(Control,16,17,);
      explicit Const(17) * typename(Factory)(Const,16,17,const);

        explicit Factory(16) * typename(Factory)(Control,15,16,);
      explicit Const(16) * typename(Factory)(Const,15,16,const);

        explicit Factory(15) * typename(Factory)(Control,14,15,);
      explicit Const(15) * typename(Factory)(Const,14,15,const);

        explicit Factory(14) * typename(Factory)(Control,13,14,);
      explicit Const(14) * typename(Factory)(Const,13,14,const);

        explicit Factory(13) * typename(Factory)(Control,12,13,);
      explicit Const(13) * typename(Factory)(Const,12,13,const);

        explicit Factory(12) * typename(Factory)(Control,11,12,);
      explicit Const(12) * typename(Factory)(Const,11,12,const);

        explicit Factory(11) * typename(Factory)(Control,10,11,);
      explicit Const(11) * typename(Factory)(Const,10,11,const);

        explicit Factory(10) * typename(Factory)(Control,09,10,);
      explicit Const(10) * typename(Factory)(Const,09,10,const);

        explicit Factory(09) * typename(Factory)(Control,08,09,);
      explicit Const(09) * typename(Factory)(Const,08,09,const);

        explicit Factory(08) * typename(Factory)(Control,07,08,);
      explicit Const(08) * typename(Factory)(Const,07,08,const);

        explicit Factory(07) * typename(Factory)(Control,06,07,);
      explicit Const(07) * typename(Factory)(Const,06,07,const);

        explicit Factory(06) * typename(Factory)(Control,05,06,);
      explicit Const(06) * typename(Factory)(Const,05,06,const);

        explicit Factory(05) * typename(Factory)(Control,04,05,);
      explicit Const(05) * typename(Factory)(Const,04,05,const);

        explicit Factory(04) * typename(Factory)(Control,03,04,);
      explicit Const(04) * typename(Factory)(Const,03,04,const);

        explicit Factory(03) * typename(Factory)(Control,02,03,);
      explicit Const(03) * typename(Factory)(Const,02,03,const);

        explicit Factory(02) * typename(Factory)(Control,01,02,);
      explicit Const(02) * typename(Factory)(Const,01,02,const);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    ///- - DEBUG VERSION - - DEBUG VERSION - - DEBUG VERSION - -///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0 // 1 DEBUG
        explicit Factory(01) *  ControlFactory(00) ( StackTop * p, ... )
        {StrategicCommand * self = 0;

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
            for(size_t i = 0; i < 200; i++)
            /*this is for a control factory inside*/
            {/*a control factory so pop and return next*/
               if( p == ControlFactory(Addresses)[i] )
               {Object * obj = cPop();deaccumulate(obj);
                return & ControlFactory01;} }
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
             /*ControlSlot[0]   =   & control;*/

               LvlName          =   "00";

               LvlAddr          =   & ControlFactory(00);
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

            self = cPop();

            if( !self ){ throw(new(NullStrategicCommand))
            (this, "NoVirtualTableObjectOnControlStack"); }

           /*default(0) = ((StrategicCommand*)self)->defaults[0];*/
             default(1) = ((StrategicCommand*)self)->defaults[1];
             default(2) = ((StrategicCommand*)self)->defaults[2];
             default(3) = ((StrategicCommand*)self)->defaults[3];
             default(4) = ((StrategicCommand*)self)->defaults[4];
             default(5) = ((StrategicCommand*)self)->defaults[5];
             default(6) = ((StrategicCommand*)self)->defaults[6];
             default(7) = ((StrategicCommand*)self)->defaults[7];

             Controller = ((StrategicCommand*)self)->controller;
             Skip = ((StrategicCommand*)self)->skip;

             Template = ((StrategicCommand*)self)->_template;

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    if(Skip){((StrategicCommand*)self)->skip=--Skip;

    Controller();((StrategicCommand*)self)->controller = Controller;

    cPush(self); return & ControlFactory(Case);}

                 cPush(self);

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      if ( TemplateFlag ){ ControlFlag = true; control = & ((p)) ;

                            Template ((p)) ; ControlFlag = false; }
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      if( TerminateFlag ){ return control; }
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

        if ( DefaultFlag )
          {
          /**  Default  **//*                                    */
          if ( FactoryFlag )
            {

            if ( InitialFlag )
              {

                    Stack * stack = & ((p));

                    stack = ((void**)stack) + 1;


                    Factory * iterator = &(((Factory*)Controller)[0]);


                    ((Function*)iterator)[0] = p;

                    ((Return*)iterator)[1] = arg(stack, Return*);

                  Controller += 2;
              }
            else
              {

                ControlFlag = true;

                if ( TerminateFlag && *control == ((Function*)Controller)

                    [0] )
             /**terminate factory control sequence with object return**/
                { control = & ((p)) ;

                  return (StackControl*)((Function*)Controller)

                    [0]((p)); }



                                        /*
                */control = & ((p)) ;/* /// ... ///
                                        /// ... ///
                                        /// ... ///

                *//*                    /// ... ///
                                        /// ... ///
                                        /// ... ///
                                                 */
                         /* if new(Class) passed in */
                /*if ( ((p)) == ((Function*)Controller)[0] )

                { TerminateFlag = true;  *//**<---**//*

                  return & ControlFactory(01);*//**ctor next return**//*
                }*/





                  if ( ! (((Function*)Controller)[0]) )
                  { throw ( new(AbortFactorySequence) )
                        (this, "FactoryAbort:00");/**abort**/
                  }





                  if( TerminateFlag )
                  { return ((Function*)Controller)[0]((p));/**Factory**/
                  }





                  if ( (((Return*)Controller))[1] )

                  {
                   if( StrategyFlag )
                   {
                    if ( !( ((Insert*)

                             ( (virtual( ((Return*)Controller)

                    [1], Container ) ) ))

                    [4]( this, ((Function*)Controller)[0]((p)) ) ) )

                        {throw(new(FactoryInsertFailure))
                         (this, "ControlFactory:" #Case);}

                        /**Factory Primary VirtualTable**/

                        /**try calling a template method here for ...**/
                   }
                   else
                   {
                    if ( !( ((Insert*)

                        ( (struct(bunker)(virtual)( ((Return*)Controller)

                    [1], Container ) ) ))

                    [4]( this, ((Function*)Controller)[0]((p)) ) ) )

                        {throw(new(FactoryInsertFailure))
                         (this, "ControlFactory:" #Case);}

                        /**Factory Secondary VirtualTable**/

                        /** ... **/
                   }

                  }

                  else

                  {
                    ((Function*)Controller)[0]((p));/**Factory**/
                  }




    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    for(unsigned short i = 0; i < 26; i++)

    {
        if(  ((  *JumpTable[i].key) == false   )
        &&   (   (JumpTable[i].val) == false  ))
        {

            JumpTable[i].val = true;          /**Control**/
        }


        if(  ((*JumpTable[i].key) == true   )
        &&   (( JumpTable[i].val) == true  ))
        {

            JumpTable[i].val = false;     /**Control**/
        }
    }
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * **/



                ControlFlag = false; /*<---*/

                /*Command-Style is where the iterator is halted*/

                Controller() ;/*<---*/




              }
            }
            else
              {
                /**CommandMode**/
           /*if ( !FactoryFlag )*/
              if ( InitialFlag )
                {
                    Stack * stack = & ((p));

                    stack = ((void**)stack) + 1;


                    Command * iterator = &(((Command*)Controller)[0]);


                    ((Class*)iterator)[0] = p;

                    ((Execute*)iterator)[1] = arg(stack, Object*);


                  /*((Execute*)&Controller)[1]

                    ((Class*)&Controller)[0] */

                    Controller += 2;
                }
              else
                {





                  Command * iterator = &(((Command*)Controller)

                  [   (Index)  ((p))   ]);/**Command**/





                    if ( !((Class*)iterator)[0] )
                    { throw ( new(AbortCommandSequence) )
                          (this, "CommandAbort:00");/**abort**/
                    }





                  ((Execute*)iterator)[1]( ((Class*)iterator)[0] );
                /**Command**/


                }

              }

            }

            self = cPop();

            if( !self ){ /*throw(new(NullStrategicCommand))
            (this, "NoVirtualTableObjectOnControlStack");*/ }

            else{

              ((StrategicCommand*)self)->controller = Controller ;
              ((StrategicCommand*)self)->skip = Skip;

              cPush(self);

            }

            return & ControlFactory(01);
        }

      explicit Const(01) * typename(Factory)(Const,00,01,const);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    ///- - DEBUG VERSION - - DEBUG VERSION - - DEBUG VERSION - -///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #else
        explicit Factory(01) * typename(Factory)(Control,00,01,);
      explicit Const(01) * typename(Factory)(Const,00,01,const);
  #endif // DEBUG

    #endif//TEMPLATE_ARRAYS____________FACTORY_CONTROL_SEQUENCE__01
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                     TERMINATE; COMMAND; SEQUENCE;              /// ___/\___/\___/\___
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C                                                 */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory quick-use operations             *
     ** * * * * * * * * * * * *  * * * * * * * * * * * * * * * ***/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* Factory C                                                 */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   control factory flags                            *
     *                                                           *
     *#0) (USED BY control()) (FACTORY FUNCTION FLAG)            *
     *                                                           *
     *#1) (DETERMINES WHETHER ITS A CommandArray or FactoryArray)*
     *                                                           *
     *#2) (DETERMINES WHETHER THE Controller MOVES OR NOT)       *
     *                                                           *
     *#3) (DETERMINES WHETHER ...(FREE SLOT))(CHOOSE VTABLE)     *
     *                                                           *
     *#4) (DETERMINES WHETHER OR NOT Command OR Factory IS       *
     *    INCLUDED USING THE TemplateFlag)                       *
     *                                                           *
     *#5) (DETERMINES WHETHER OR NOT TO CALL THE TEMPLATE METHOD *
     *    Template)                                              *
     *                                                           *
     *#6) (DETERMINES WHETHER OR NOT TO USE A CONTROLLED SEQUENCE*
     *    TERMINATION TO RETURN AN OBJECT                        *
     *                                                           *
     *#7) (FLAG USED TO EITHER INIT OR EXECUTE)(FOR COMM OR FACT)*
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * when the factory flag is raised, the command flag is raised*
     *                                                           *
     * or lowered to start or stop the iterator, when the factory*
     *                                                           *
     * flag is lowered, its in command array mode, as the command*
     *                                                           *
     * flag is nullified, also, there is a template flag for the *
     *                                                           *
     * template method, there is a flag that nullifies the first *
     *                                                           *
     * choice of factory or command for the template flag, the   *
     *                                                           *
     * factory setting (or template maybe) can use a controlled  *
     *                                                           *
     * return for an object (terminate). the initializer flag is *
     *                                                           *
     * for the array initializer (factory or command) and lowered*
     *                                                           *
     * when the control template does everything else.           *
     *                                                           *
     *                                                           *
     * UPDATE: strategy flag (default(3)) changed to swap between*
     *                                                           *
     * primary and secondary vtable.                             *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                      default array                        */
    explicit void  ControlFactory(Setup)  ( void )
    {   /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**#0**/       Flags[0] = & ControlFlag;       /**#0(false)**/

        /**#1**/       Flags[1] = & FactoryFlag;       /**#1(true)**/

        /**#2**/       Flags[2] = & CommandFlag;       /**#2(false)**/

        /**#3**/       Flags[3] = & StrategyFlag;      /**#3(false)**/

        /**#4**/       Flags[4] = & DefaultFlag;       /**#4(true)**///FALSE (for template method only)

        /**#5**/       Flags[5] = & TemplateFlag;      /**#5(false)**///TRUE (for template method)

        /**#6**/       Flags[6] = & TerminateFlag;     /**#6(false)**/

        /**#7**/       Flags[7] = & InitialFlag;       /**#7(true)**/
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**#8**/       Flags[8] = &Exception(Flag) ;   /**#8(true)**///FALSE FOR NO DING ('\a')

        /**#9**/       Flags[9] = &Assertion(Flag) ;   /**#9(false)**///true for normal assert

        /**#10**/      Flags[10] = &Subject(Flag) ;    /**#10(false)**/
    #if 1
        /**#11**/      Flags[11] = &Security(Restrict);/**#11(false)**///factory method keyset //UNUSED
    #endif // 0
        /**#12**/      Flags[12] = &Union(Flag);/**#12(false)**///
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**#13**/      Flags[13] = &PrintFlags[0];     /**#14**///object stack (vstk)

        /**#14**/      Flags[14] = &PrintFlags[1];     /**#15**///UNUSED

        /**#15**/      Flags[15] = &PrintFlags[2] ;    /**#16**///UNUSED

        /**#16**/      Flags[16] = &PrintFlags[3] ;    /**#17**///UNUSED

        /**#17**/      Flags[17] = &PrintFlags[4] ;    /**#13**///QProbe;

        /**#18**/      Flags[18] = &PrintFlags[5] ;    /**#18**///UNUSED

        /**#19**/      Flags[19] = &PrintFlags[6] ;    /**#19**///UNUSED

        /**#20**/      Flags[20] = &PrintFlags[7] ;    /**#20(false for all)**///UNUSED
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**#21**/      Flags[21] = &Map(PriFlag) ;    /**#21(false for all)**///UNUSED

        /**#22**/      Flags[22] = &Map(ClaFlag) ;    /**#22(false for all)**///UNUSED

        /**#23**/      Flags[23] = &Map(SubFlag) ;    /**#23(false for all)**///UNUSED

        /**#24**/      Flags[24] = &StandardFlag ;    /**#24(false)**/

        /**#25**/      Flags[25] = &String(Flag) ;    /**#25(false)**/

        /**#26**/      Flags[26] = &fTable(DtorFlag) ;/**#26(false)(debug print flag)**/

        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
                  StackControlSlot[0] = &Controller;

                       ControlSlot[0] = &control;

                          SetJumpStructs();


                     destroy = & cFactory(Destroy);

    }
    explicit void  SetJumpStructs( void )
    {
                JumpRow(A).key  =  &jumpControlFlag(A);

                JumpRow(B).key  =  &jumpControlFlag(B);

                JumpRow(C).key  =  &jumpControlFlag(C);

                JumpRow(D).key  =  &jumpControlFlag(D);

                JumpRow(E).key  =  &jumpControlFlag(E);

                JumpRow(F).key  =  &jumpControlFlag(F);

                JumpRow(G).key  =  &jumpControlFlag(G);

                JumpRow(H).key  =  &jumpControlFlag(H);

                JumpRow(I).key  =  &jumpControlFlag(I);

                JumpRow(J).key  =  &jumpControlFlag(J);

                JumpRow(K).key  =  &jumpControlFlag(K);

                JumpRow(L).key  =  &jumpControlFlag(L);

                JumpRow(M).key  =  &jumpControlFlag(M);

                JumpRow(N).key  =  &jumpControlFlag(N);

                JumpRow(O).key  =  &jumpControlFlag(O);

                JumpRow(P).key  =  &jumpControlFlag(P);

                JumpRow(Q).key  =  &jumpControlFlag(Q);

                JumpRow(R).key  =  &jumpControlFlag(R);

                JumpRow(S).key  =  &jumpControlFlag(S);

                JumpRow(T).key  =  &jumpControlFlag(T);

                JumpRow(U).key  =  &jumpControlFlag(U);

                JumpRow(V).key  =  &jumpControlFlag(V);

                JumpRow(W).key  =  &jumpControlFlag(W);

                JumpRow(X).key  =  &jumpControlFlag(X);

                JumpRow(Y).key  =  &jumpControlFlag(Y);

                JumpRow(Z).key  =  &jumpControlFlag(Z);

        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/

                     JumpTable[0]  =  JumpRow(A) ;

                     JumpTable[1]  =  JumpRow(B) ;

                     JumpTable[2]  =  JumpRow(C) ;

                     JumpTable[3]  =  JumpRow(D) ;

                     JumpTable[4]  =  JumpRow(E) ;

                     JumpTable[5]  =  JumpRow(F) ;

                     JumpTable[6]  =  JumpRow(G) ;

                     JumpTable[7]  =  JumpRow(H) ;

                     JumpTable[8]  =  JumpRow(I) ;

                     JumpTable[9]  =  JumpRow(J) ;

                     JumpTable[10] =  JumpRow(K) ;

                     JumpTable[11] =  JumpRow(L) ;

                     JumpTable[12] =  JumpRow(M) ;

                     JumpTable[13] =  JumpRow(N) ;

                     JumpTable[14] =  JumpRow(O) ;

                     JumpTable[15] =  JumpRow(P) ;

                     JumpTable[16] =  JumpRow(Q) ;

                     JumpTable[17] =  JumpRow(R) ;

                     JumpTable[18] =  JumpRow(S) ;

                     JumpTable[19] =  JumpRow(T) ;

                     JumpTable[20] =  JumpRow(U) ;

                     JumpTable[21] =  JumpRow(V) ;

                     JumpTable[22] =  JumpRow(W) ;

                     JumpTable[23] =  JumpRow(X) ;

                     JumpTable[24] =  JumpRow(Y) ;

                     JumpTable[25] =  JumpRow(Z) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    }
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
  #if 0
    explicit void  SetJumpBuffers( void )
    {   //SetJumpStructs();

        for( short i; i < 26; i++ )
        {
            *(JumpTable[i].key) = false;

              JumpTable[i].val  = false;
        }
    }//OBSOLETE_SINCE_CONTROL_FACTORY_HAS_AUTO_FLAG_RESET
  #endif // 0
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**X X X X X X X X X X X X X X X X X X X X X X X X X X X X X

                 CONTROL FACTORY QUICK-USE OPERATIONS

       X X X X X X X X X X X X X X X X X X X X X X X X X X X X X**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit ControlFactory newControlFactory()
        {
            if( cHeight() > 9 )
            {
            throw(new(ControlStackOverflow))
            (this, "StrategicCommandImplementationLimit"); }


            ControlFactory C = (StrategicCommand*)VirtualTable

                        (Interface).insert( ((struct(Bunker)*)

                        ((objtPtr*)multimap(false)("struct(Bunker)")

                         ("class(SingletonTable)"))[1])

                        ->stable, vstk, (StrategicCommand*)

                        allocate(sizeof(StrategicCommand)),

                        StrategicCommand(InterfaceArray)[cHeight()],

                        & StrategicCommand(Init) )(this) ;

            return C;   }

        /* note: i considered using,

           1) while(jTop()){jPop();}

           2) Object * obj = cPop(); delete(obj);

           inside this function (if( cHeight() > 9 )){...}, and,

           3) global exception flag that breaks the recursion.

        then realized that destroy should empty the control stack
         */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1)  assume its a string directive c-string if       *
     *           non-virtual table object passed.                *
     *                                                           *
     *       2)  access the class(ConsoleTable) from multimap    *
     *           if its a virtual table object.                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #include                    "cout.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1)  access the class(ConsoleTable) from multimap    *
     *           if its a virtual table object.                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #include                    "cin.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1)  include the class builder front-end             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #include             "../Factory/class.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                  destroy()                         *
     *- - destroy() can remove the jumpbufs and bools, destroy- -*
     *  - - and re-add them (nope)(goes into struct bunker)- -   *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void cFactory(Destroy)(void)

        {VirtualTable(Dtor)(vtable);

         VirtualTable(Init)(vtable, 0, default_prime);

         AdapterTable(Dtor)(atable);

         AdapterTable(Init)(atable, 0, 7);
    #if 1 // 1
         while( cTop() ){Object * obj = cPop();deaccumulate(obj);}
    #endif // WORKSPACE_CONSOLE_PROGRAM_FIX_RECURSION 1
    #if 0
         //while( cTop() ){cPop();}//good to go! cout ("...") cend;
         while( vTop() ){vPop();}
    #endif // 0
    #if 0
         Array(ConsoleOut)               =      nullptr;

         Array(ConsoleIn)                =      nullptr;

         ConsoleOut(Object)              =      nullptr;

         ConsoleIn(Object)               =      nullptr;
    #endif // 0
    #if 0
         String(Security)(Pass)          =      nullptr;

         FactoryTable(Security)(Pass)    =      nullptr;
    #endif // 1 PUT_INSIDE_STABLE___ACCUMULATOR___
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief template arrays initializer                        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define initializer_list(init) \
    \
            Template = & init ;\
    \
            default(4) = false;\
    \
            default(5) = true ;\
    \
            /*default(7) = true ;*/\
    \
            /**cbegin();**/\
    \
            using template\

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief Turn Command into Control & Factory into Builder   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void TemplateBuilder( Object * p ){ Controller += 1; }
    explicit void TemplateControl( Object * p ){ Controller += 1; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief Template Arrays                                    *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
        #define template(...) (TemplateArrays(...))
    #endif // TEMPLATE_H
    explicit Array TemplateArrays( Array * object )
    {
        if( !instance(object) && !struct(bunker)(instance)(object) )
        { Template = object;
          default(4) = false;//Default Off
          default(5) = true; //Template Method On
          return 0;//
        }else
    {if( instanceof( object, Array(Command) )
       || struct(bunker)(instanceof)( object, Array(Command) ) )
     {   default(1) = false;   } //
     if( instanceof( object, Array(Factory) )
       || struct(bunker)(instanceof)( object, Array(Factory) ) )
     {   default(1) = true;    } //

       return(((StartSet*)object)[Start]);}}//
        //


        explicit Object * StrategicCommandInit( Object * self )
        {
            ((StrategicCommand*)self)->defaults[0] = default(0);
            ((StrategicCommand*)self)->defaults[1] = default(1);
            ((StrategicCommand*)self)->defaults[2] = default(2);
            ((StrategicCommand*)self)->defaults[3] = default(3);
            ((StrategicCommand*)self)->defaults[4] = default(4);
            ((StrategicCommand*)self)->defaults[5] = default(5);
            ((StrategicCommand*)self)->defaults[6] = default(6);
            ((StrategicCommand*)self)->defaults[7] = default(7);

            ((StrategicCommand*)self)->controller = Controller;
            ((StrategicCommand*)self)->skip = Skip;

            ((StrategicCommand*)self)->_template = Template;

            return self;
        }


        explicit void StrategicCommandDtor( Object * self ){  }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if TEMPLATE_METHOD_TEMPORARY______IMPLEMENTATIONS______01
    explicit void TemplateInt( Object * p )
    {
        (((int*)Controller)[0]) = (int) ((p));

        Controller += 1;}

    explicit void TemplateTwin( Object * p, ... )
    {//NOT TESTED BUT SAME AS ABOVE (ControlFactory00-99)
        Stack * stack = ControlSlot[0][0];
        stack = ((void**)stack) + 1;

        (((Object**)Controller)[0]) = ((p)) ;
        (((Object**)Controller)[1]) = arg(stack, Object*);

        Controller += 2;}
  #endif //  TEMPLATE_METHOD_TEMPORARY______IMPLEMENTATIONS______01

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief Program Constructor/Destructor                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /* note: IMPORTANT ALLOCATION/INITIALIZATION ORDER
     */
    explicit void Factory(Constructor) (void)
    {
 /*void FactoryControl(01)(void)       {*/ ControlFactory(Setup)();//first for factory function (init)
 /*}*/
/// + full control of the function arguements stack for the factory function + overloads +

 /*void VirtualTable(Constructor)(void)//7
 {*/ VirtualTable(Allocator)(&vtable,101);///#1 (table) //important first table

      if( !vstk ){vstk = Class(Stk)(Init)(allocate(sizeof(Stk(Class))));}///#1 (stack)
      //if( !vstk ){throw(new(Exception))(this, "");}

      if( !estk ){estk = Except(Stk)(Init)(allocate(sizeof(Stk(Except))));}///#2 (stack)
      //if( !estk ){throw(new(Exception))(this, "");}

      if( !vtable ){throw(new(Exception))(this, "MemoryFailure");}//#1 table
      else{ /*new(Assertion)(this, assert( vtable ));*/ }

      if( !vstk ){throw(new(Exception))(this, "MemoryFailure");}//#1 stack
      else{ /*new(Assertion)(this, assert( vstk ));*/ } //(first stack) <--see this (vPop())

      if( !estk ){throw(new(Exception))(this, "MemoryFailure");}//#2 stack
      else{ /*new(Assertion)(this, assert( estk ));*/ } //Assertion Stack (Exception Certificate)


      if( !jstk ){jstk = Jump(Stk)(Init)(allocate(sizeof(Stk(Jump))));}///#3 (stack)
      if( !jstk ){throw(new(Exception))(this, "MemoryFailure");}
      else{ /*new(Assertion)(this, assert( jstk ));*/ } //Exception (for try/catch)

 /*}*/ /*101*///
  /// + memory management support + constructor support + destructor support +
/// + assign an interface to each object + type id foreign key at factory table
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///


 /*void AdapterTable(Constructor)(void)
 { */AdapterTable(Allocator)(&atable,7);///#2 (table)
      if( !atable ){throw(new(Exception))(this, "MemoryFailure");}
      else{ /*new(Assertion)(this, assert( atable ));*/ }


      if( !istk ){istk = Interface(Stk)(Init)(allocate(sizeof(Interface(Stk))));}///#4 (stack)
      if( !istk ){throw(new(Exception))(this, "MemoryFailure");}
      else{ /*new(Assertion)(this, assert( istk ));*/ }

 /*}*/ //
///       + support for extra interfaces per class implementation (adapters) +
/// + support for invisible object adapters + support for observers (many-to-one adapter) +
///      + support for decorators (recursive stackable adapter) +
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

 /*void StrategicCommand(01)(void)
 {*/
      if( !pstk ){pstk = Pass(Stk)(Init)(allocate(sizeof(Pass(Stk))));}///#5 (stack)
      if( !pstk ){throw(new(Exception))(this, "MemoryFailure");}
      else{ /*new(Assertion)(this, assert( pstk ));*/ } //Pass (break)


      if( !cstk ){cstk = ControlFactory(Stk)(Init)
        (allocate(sizeof(ControlFactory(Stk))));} ///#6 (stack)
      if( !cstk ){throw(new(Exception))(this, "MemoryFailure");}
      else{ /*new(Assertion)(this, assert( cstk ));*/ }
 /*}*/

/// + control pattern for commands + control pattern for control structures +
/// + control pattern for factory functions + control pattern for IO +
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

 /*void FactoryTable(Constructor)(void)

 {*/ FactoryTable(Allocator)(&ftable,123); ///#3 (table)

    if( !ftable ){throw(new(Exception))(this, "MemoryFailure");}
    else{ /*new(Assertion)(this, assert( ftable ));*/ } //


    if( !mstk ){mstk = Map(Stk)(Init)(allocate(sizeof(Map(Stk))));}///#7 (stack)
    if( !mstk ){throw(new(Exception))(this, "MemoryFailure");}
    else{ /*new(Assertion)(this, assert( mstk ));*/ } //


    if( !fstk ){fstk = Flag(Stk)(Init)(allocate(sizeof(Flag(Stk))));}///#8 (stack)
    if( !fstk ){throw(new(Exception))(this, "MemoryFailure");}
    else{ /*new(Assertion)(this, assert( fstk ));*/ } //


    if( !tstk ){tstk = Type(Stk)(Init)(allocate(sizeof(Type(Stk))));}///#9 (stack)
    if( !tstk ){throw(new(Exception))(this, "MemoryFailure");}
    else{ /*new(Assertion)(this, assert( tstk ));*/ } //


    if( !hstk ){hstk = Heap(Stk)(Init)(allocate(sizeof(Heap(Stk))));}///#10 (stack)
    if( !hstk ){throw(new(Exception))(this, "MemoryFailure");}
    else{ /*new(Assertion)(this, assert( hstk ));*/ } //


    register(FactoryTable); ///#1 to-get-registered (lvl.2 object/factory object)(factory table)

    register(VirtualTable);

    register(AdapterTable);        /* PRIMARY TABLES + 3 */



    FactoryTable(Interface).insert( ftable,

            "class", & _(class)(Method), & _(class)(Setup) );//register(_(class));

    register(Object);

    FactoryTable(Interface).insert( ftable,

            "Iterator", & IteratorMethod, & IteratorSetup );//register(Iterator);

     register(Container) ;  /* (INTERFACE TYPES) +5 = 8 */

     register(String); // register(Vector(char)); register(Iterator(char)) ;  +3 = 11
    /*
    register(HashSet(ClassClassVirtualTablePair,32));//vtable
    register(HashSet(ClassNameClassFactoryMethodPair,));//ftable
    register(HashSet(ClassClassPair,32));//atable


    register(Vector(ClassClassVirtualTablePair));
    register(Vector(ClassNameClassFactoryMethodPair));
    register(Vector(ClassClassPair));


    register(Iterator(ClassClassVirtualTablePair));
    register(Iterator(ClassNameClassFactoryMethodPair));
    register(Iterator(ClassClassPair));
     */



    /* note: add the datatypes used by the complex object
     */
    register(Heap(Interface)); ///#X

    register(Heap(Strategy));  ///#1
    register(Heap(Polymorph)); ///#2
    register(Heap(Virtual));   ///#3
    register(Heap(Complex));   ///#4
    register(Heap(Control));   ///#5
    register(Heap(Builder));   ///#6
    register(Heap(Security));  ///#7
    register(Heap(Adapter));   ///#8


    register(Iter(pHeapNode(Interface))); ///#X

    register(Iter(pHeapNode(Strategy)));  ///#1
    register(Iter(pHeapNode(Polymorph))); ///#2
    register(Iter(pHeapNode(Virtual)));   ///#3
    register(Iter(pHeapNode(Complex)));   ///#4
    register(Iter(pHeapNode(Control)));   ///#5
    register(Iter(pHeapNode(Builder)));   ///#6
    register(Iter(pHeapNode(Security)));  ///#7
    register(Iter(pHeapNode(Adapter)));   ///#8


    register(Stk(pHeapNode(Interface))); ///#X

    register(Stk(pHeapNode(Strategy)));  ///#1
    register(Stk(pHeapNode(Polymorph))); ///#2
    register(Stk(pHeapNode(Virtual)));   ///#3
    register(Stk(pHeapNode(Complex)));   ///#4
    register(Stk(pHeapNode(Control)));   ///#5
    register(Stk(pHeapNode(Builder)));   ///#6
    register(Stk(pHeapNode(Security)));  ///#7
    register(Stk(pHeapNode(Adapter)));   ///#8   +   27 + 11 = 38
    /*    register(Heap(FactoryMethod));  #9 X (not used)  */

    /*
    consider adding Container/Iterator with virtual heaps,
    factory heaps, just no factory table *//**register(Container);

                                              register(Iterator);**//*

    consider this including the stacks, so implement them as factory
    table classes (minimal ones) starting with class(FactoryTable)

    */
          /*    +7    */
               /*       +3 = 10  */
    /* note: add the data types (stacks) that use singletons from the
             struct bunker
     */
    register(Stk(Class));               register(Iter(Class));
    register(Stk(Jump));                register(Iter(Jump));
    register(Stk(Map));                 register(Iter(Map));
    register(Stk(Flag));                register(Iter(Flag));
    register(Stk(Interface));           register(Iter(Interface));
    register(Stk(Pass));                register(Iter(Pass));
    register(Stk(ControlFactory));      register(Iter(ControlFactory)) ; /*    +7    */

    register(Stk(Type));                register(Iter(Type));
    register(Stk(Heap));                register(Iter(Heap));
    register(Stk(Except));              register(Iter(Except));/*       +3 = 10 *//** + 20 + 38 = 58 **/
    /*
    if you get the time you can do this, ...

    all the Exceptions/Assertions/Certificates

                                    +10 or more */
    register(Exception);           register(Assertion) ;
    register(OutOfMemory);         register(InputMismatch);
    register(EmptyString);         register(NotFound) ;
    register(OutOfBounds);
    register(NullPointer);




    /* Complex C like Exception classes
     */
    register(IllegalOperation);
    register(PassNumber);            register(RestrictedAccess);
    register(InformationSecurity);   register(Override);// + 13 + 58 = 71

    /*register(TypeInfo);          register(IsPolymorphic)*/

                                    /*


    Factory/Command array            +2  */register(Command);/*      = 72



    StrategicCommand                 +1

    string                           +1

    File                             +1 (of course)   */register(File);/*  = 73

    hash table bases, vector bases,  +6 or more +Iterators +6

    all the Heaps                    +8

    (all the Heap types)             +8 NO . . . (yes?) +1 Adapter +1 Interface

    Heap Array Types (YES)   ACTUAL ARRAY DATATYPE TABLE +10-1(Command)-1(Factory)
                                    ____
                                     +36 (estimate)(still)(or 44)

    jumpBuf                          +45
     */


    register(intmax_t);  //register(intmax_t);//DOES NOTHING 2ND TIME               = 74
                            ///(check for return true or false also if desired)


register(int8_t);   register(int16_t);  register(int32_t);  register(int64_t);

register(uint8_t);  register(uint16_t); register(uint32_t); register(uint64_t);// +8 + 74 = 82


    register(size_t);                                                          // +1      83


    register(int);

    register(char);     register(bool);

    register(short);    register(long);

    register(unsigned); register(signed);

    register(float);    register(double);                                     // +9   = 92


    register(uintmax_t);

    register(wctype_t); register(wchar_t) ;






    register(intptr_t); register(uintptr_t);                                 // +5   = 97



    register(clock_t); register(time_t);                                     // +2 (missing string, File...)  = 99

/*
 register(atomic_ulong);    register(atomic_llong);   register(atomic_ullong);

 register(atomic_wchar_t);  register(atomic_long);    register(atomic_uint);

 register(atomic_uintptr_t);register(atomic_size_t);  register(atomic_ptrdiff_t);

 register(atomic_char16_t); register(atomic_intmax_t);register(atomic_uintmax_t);

 register(atomic_intptr_t); register(atomic_bool);    register(atomic_char32_t);

 register(atomic_int);      register(atomic_char);    register(atomic_short);

 register(atomic_schar);    register(atomic_uchar);   register(atomic_ushort); //+3 x +7 = +21  = 116
 *//// 101 data types (including multimap)

        //register(Display);//same as Command just display() not execute()

        ///register(Command) if u want it
 /*}*/
/// + fully-dynamic instances support + central overload functions support +
/// + central override method support + multiple inheritance support +
/// + dynamic IO support + assign a factory method with interface heap to a class +
/// + complex object (class builder) support + fully dynamic programming +


   }/* note: IMPORTANT DEALLOCATION ORDER
     */
    explicit void Factory(Destructor)(void)
    {
      //nothrow(NotFound) ;

      struct(Bunker) ** struct(bunker);

      class(Builder) ** class(builder);
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       destroy();//OBJECT DESTRUCTORS
        /* note: pull out the two singletons and deallocate last,
         *       this way, every class gets aborted and can call
         *       multimap, etc. ... inside class abort. also, class
         *       builder classes will each be removed from the
         *       btable properly inside the factory table destructor
         *
         *       this decoupling of the two inner singletons
         *       might be necessary.
         */
        struct(bunker) = &((objtPtr*)multimap(false)
        ( "struct(Bunker)" )//struct(Bunker)(ID)()
        ("class(SingletonTable)"))[1];

        class(builder) = &((objtPtr*)multimap(false)
        ( "class(Builder)" )//class(Builder)(ID)()
        ("class(SingletonTable)"))[1];

 /*void FactoryTable(Destructor)(void) {*/
        FactoryTable(Deallocator)(&ftable);//CLASS ABORT

        class(Builder)(Dtor)( (*class(builder)) );
        deallocate( (*class(builder)) ) ;
        (*class(builder)) = nullptr;

        struct(Bunker)(Dtor)( (*struct(bunker)) );
        deallocate( (*struct(bunker)) ) ;
        (*struct(bunker)) = nullptr;
 /*}*///
 /*void VirtualTable(Destructor)(void) {*/
        VirtualTable(Deallocator)(&vtable);//NOTHING
 /*}*///
 /*void AdapterTable(Destructor)(void) {*/
        AdapterTable(Deallocator)(&atable);//NOTHING
 /*}*/ //
 /*void StrategicCommand(02)(void) {*///DEALLOCATE STACKS AFTER (GOOD)
        if( vstk ){Class(Stk)(Dtor)(vstk);deallocate(vstk);vstk=0;}//#1

        if( jstk ){Jump(Stk)(Dtor)(jstk);deallocate(jstk);jstk=0;}//#2

        if( estk ){Except(Stk)(Dtor)(estk);deallocate(estk);estk=0;}//#3

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

       if( istk ){Interface(Stk)(Dtor)(istk);deallocate(istk);istk=0;}//#4

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

       if( pstk ){Pass(Stk)(Dtor)(pstk);deallocate(pstk);pstk=0;}//#5

       if( cstk ){ControlFactory(Stk)(Dtor)(cstk);deallocate(cstk);cstk=0;}//#6

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

       if( mstk ){Map(Stk)(Dtor)(mstk);deallocate(mstk);mstk=0;}//#7

       if( fstk ){Flag(Stk)(Dtor)(fstk);deallocate(fstk);fstk=0;}//#8

       if( tstk ){Type(Stk)(Dtor)(tstk);deallocate(tstk);tstk=0;}//#9

       if( hstk ){Heap(Stk)(Dtor)(hstk);deallocate(hstk);hstk=0;}//#10
        /* note: this order of deallocation should guarantee that
         *       inside any object destructor, and inside any class
         *       abort, any of the factory helper methods are available
         *       for use since they are still set up (like multimap).
         */
 /*}*/

    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

        - - maybe add a "C" to the end of ControlFactory:00-99C
            including Init, so make it a parameter to the macro(s)
            as needed (takes updating every typename/prototype).

        - -

        - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1)                                                  *
     *                                                           *
     *       2)                                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                template(array)                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

        - - before any personal note (as the final implementation)
            i believe any inspiration or vision of Factory C as
            either a C project, library, compiler, ... it comes
            from the idea of implementing a program in a single
            statement as the true "factory c" inspiration using
            many function(s) called from one another like a
            constructor style function call (versus method style)
            and so u might understand why the extensiveness of
            a control factory, if there was a flaw in the control
            factory is that it is not object oriented and does
            not go onto a stack (a control factory object for
            every time using template() is part of a statement and
            and a control factory object popped for every break())
            or something at the end of a statement (or set of
            statements) since a control factory is not easily placed
            inside of a control factory like everything else is
            easily placed inside itself, new()(), virtual()->method()
            multimap, etc... and that is the reason why. (DONE)
                - - StrategicCommand is a virtual table object (updated).

        - - this (Factory C) project, the OOC subfolder of the
            Factory project folder is my personal accumulation
            of definitions/implementations for an object-oriented
            program in C that will guarantee lifelong employment
            as a software engineer, also given the area of
            expertise, should come with the responsibility of
            educational practice to promote ... healthy ... learning... mmm
            ... zzz ... proactive lifestyle . . z .z ...

            ... so sleep on it alot and ...

            make sure what you end with here is something fully
            defined, fully declared, fully implemented. this way
            you will then be ready to move on with/from it. lets say that
            as soon as the OOC folder stays closed your ready to
            consider submitting your library (programming language)
            so try to lean towards the design patterns folder...
            c project ... c library ... c compiler ... (should all 3)


        - - register your Factory C project as free software at fsf.org

        - - email programming instructors at end-of-semester (interval).

        - - offer assistance as programming tutor at college.

        - - try to email bucky (thenewboston) for him to do a tutorial(s)
            (he would like that).

        - - email head first design patterns (if u can)

        - - $$$ (after) (dues are paid)

        - - set up a good email arrangement that forewards email
            so u can have an email that has junk for job offers
            and a good email that uses your proper name and is where
            you get important emails. set up a skype or whatever the
            job interviews ask for.

        - - if you get hired by a video game company, get your brother
            a job as a tester who plays games.
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
        Array(Factory) * array = new (Array(Factory))(this,4);

        size_type  i  =  0 ;

        using template(array)

            (&ControlStart(I), 0)(&ControlCheck(I), new(Stk(bool))(this))

            (&ControlBlock(I), new(Stk(int))(this))(&ControlProbe(I), 0)cend;

        default(7) = false;


        try{using template(array) (& i) (i < 100) (& func) (++i)cend;
        }
        catch(  Exception * e  )
        {
            printStackTrace(e);
        }
    #endif // DISPLAY
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
        Array(Command) * array = new(Array(Command))(this,4);

        Fan * fan = new(Fan)(this, nullptr);

        using template(array)

            (fan, &fanHigh)(fan, &fanMed)

            (fan, &fanLow)(fan, &fanOff)cend;

        default(1) = false;
        default(7) = false;

        try
        {
            using template(array) (3) (1) (2) (0) (3)cend ;

            continue(+)(3)(2)(1)cend;

            continue(-)(0)cend;

        }
        catch(  Exception * e  )
        {
            printStackTrace(e);
        }
    #endif // DISPLAY
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
        Array(Factory) * array = new (Array(Factory))(this,1);

        Stk(double) * stk = new(Stk(double))(this);

        using template(array)
            (&double(Init), stk)cend;

        default(2) = true;
        default(7) = false;

        new(double); new(double); new(double); new(double);

        try
        {
            using template(array)

                (this, .99)       (this, .79)
                (this, 1.29)      (this, 1.99)cend;

            stk->

        }
        catch(  Exception * e  )
        {
            printStackTrace(e);
        }
    #endif // DISPLAY
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
 _______                  __                               _______
/\  ____\                /\ \__                           /\  ____\
\ \ \___/  ___      ___ /\__  _\    ___   ____   __  __   \ \ \___/
 \ \  _\  / __`\   / ___\/_/\ \/   / __`\/\  _`\/\ \/\ \   \ \ \
  \ \ \/ /\ \/\.\_/\ \__/_ \ \ \/\/\ \/\ \ \ \_/\ \ \_\ \   \ \ \____
   \ \_\ \ \___/\_\ \_____\ \ \__/\ \____/\ \_\  \ \____ \   \ \______\
    \/_/  \/__/\/_/\/_____/  \/_/  \/___/  \/_/   \/___/\ \   \/______/
                                                    /\ \_\ \
                                                    \ \____/
                                                     \/___/
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    # define FACTORY_C 1                                  //DEFINED

    # define ___CONTROL_FACTORY___ 1         //COMPILER NOT DEFINED

    //      ASSEMBLER == C == FACTORY C == CONTROL FACTORY       //
    //    CONSTRUCTOR == C == FACTORY C == FACTORY CONSTRUCTOR   //
    //#endif // TEMPLATEFUNCTIONSET
//#endif // TEMPLATE_H_INCLUDED                                 //CWP
    #endif // TEMPLATEARRAYS
#endif // USING_H_INCLUDED
