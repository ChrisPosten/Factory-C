#ifndef FTABLE_H_INCLUDED
#define FTABLE_H_INCLUDED
#define FTABLESINGLETON 1
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
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* - CLASS TABLE - CLASS TABLE - CLASS TABLE - CLASS TABLE - */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||   C FACTORY TABLE (STRUCTCLASS FACTORY SOLUTION)    || *
     *                                                           *
     *               by Willy (12/21/2021)(12/25/2021)           *
     *                        (12/27/2021)(02/12/2022)           *
     *                        (08/15/2022)(08/16/2022)           *
     * ||                     (09/11/2022)                    || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* - CLASS TABLE - CLASS TABLE - CLASS TABLE - CLASS TABLE - */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Reason(s) to use:                                 *
     *                                                           *
     *   1)  delegate with the virtual table in a way that       *
     *       creating instances of objects with it becomes       *
     *       fully dynamic using a string parameter not class    *
     *       name.                                               *
     *                                                           *
     *   2)  delegate for the constructor.                       *
     *                                                           *
     *   3)  assign a composite map/multimap to each class, as   *
     *       the class name that gets registered at the factory  *
     *       table uses a runtime string for dynamic access to   *
     *       the class factory method.                           *
     *                                                           *
     *   4)  the class factory method uses a runtime string for  *
     *       dynamic access to an interface (registration) of    *
     *       the class interface heap.                           *
     *                                                           *
     *   5)  an interface (registration) of the class interface  *
     *       heap may be an interface with its own sub-factory   *
     *       method that uses a runtime string for dynamic       *
     *       access to info from one of the class info heaps     *
     *       (composite).                                        *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    #include "../Virtual/vTable.h"                  //+VirtualTable

    //#include "../Template/defineStringHashTable.h"

    #include "../Exception/Exception.h"

    #undef  size_type
    #define size_type         unsigned int
  #if 0
    #define bTable(Member)                           bTable##Member
  #endif // 0
    #define fTable(Member)                           fTable##Member
    #define FactoryTable(Member)               FactoryTable##Member

    volatile static FactoryTable(PrimaryInitialized) = false;

    #define ClassNameClassFactoryMethodPair(Member)\
    \
        ClassNameClassFactoryMethodPair##Member

    #define ClassNameClassFactoryMethodPairIterator(Member)\
    \
        ClassNameClassFactoryMethodPairIterator##Member

    #define ClassNameClassFactoryMethodPairVector(Member)\
    \
        ClassNameClassFactoryMethodPairVector##Member

    #define ClassNameClassFactoryMethodPairHashSet(Member)\
    \
        ClassNameClassFactoryMethodPairHashSet##Member

    #define ClassNameClassFactoryMethodPairQuadraticProbe(Member)\
    \
        ClassNameClassFactoryMethodPairQuadraticProbe##Member

    #define ClassNameClassFactoryMethodPairVector(Member)\
    \
        ClassNameClassFactoryMethodPairVector##Member


    #define FactoryTableBuilder(Member)\
    \
        FactoryTableBuilder ## Member
  #if 0
    #define FactoryTableComplex(Member)\
    \
        FactoryTableComplex ## Member
  #endif // 0
   # define FactoryTableSecurity(Member)\
   \
        FactoryTableSecurity ## Member

   # define VirtualTableSecurity(Member)\
   \
        VirtualTableSecurity ## Member

    #if 0
      # define ClassNameClass(Member)ClassNameClass ## Member
    #endif // 0

    # define QuadraticProbe(type)type ## QuadraticProbe

    #define printFactoryTable FactoryTable(ConsoleOut)

    #define fTableTesting FactoryTable(ConsoleIn)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    volatile typename(Pair)(ClassName,ClassFactoryMethod);

    volatile typename(Iterator)(ClassNameClassFactoryMethodPair);

    volatile typename(Vector)(ClassNameClassFactoryMethodPair,);

    volatile typename(StringHashTable)(ClassName,ClassFactoryMethod,);

    #if 0
    typename(FactoryIterator)(ClassNameClassFactoryMethodPair, );

    explicit int Iterator(ClassNameClassFactoryMethodPair)(ConsoleOut)
    (const Iterator(ClassNameClassFactoryMethodPair) * self, ...){}
    explicit int Iterator(ClassNameClassFactoryMethodPair)(StandardOut)
    (const Iterator(ClassNameClassFactoryMethodPair) * self, ...){}
    explicit int Iterator(ClassNameClassFactoryMethodPair)(FileOut)
    (const Iterator(ClassNameClassFactoryMethodPair) * self, ...){}

    typename(FactoryVector)(ClassNameClassFactoryMethodPair, );

    explicit int Vector(ClassNameClassFactoryMethodPair)(ConsoleIn)
    (Vector(ClassNameClassFactoryMethodPair) * self, ...){}
    explicit int Vector(ClassNameClassFactoryMethodPair)(ConsoleOut)
    (const Vector(ClassNameClassFactoryMethodPair) * self, ...){}
    explicit int Vector(ClassNameClassFactoryMethodPair)(StandardIn)
    (Vector(ClassNameClassFactoryMethodPair) * self, ...){}
    explicit int Vector(ClassNameClassFactoryMethodPair)(StandardOut)
    (const Vector(ClassNameClassFactoryMethodPair) * self, ...){}
    explicit int Vector(ClassNameClassFactoryMethodPair)(FileIn)
    (Vector(ClassNameClassFactoryMethodPair) * self, ...){}
    explicit int Vector(ClassNameClassFactoryMethodPair)(FileOut)
    (const Vector(ClassNameClassFactoryMethodPair) * self, ...){}

    typename(FactoryHashTable)(ClassName, ClassFactoryMethod,, );

    explicit int HashSet(ClassNameClassFactoryMethodPair,)(ConsoleIn)
    (HashSet(ClassNameClassFactoryMethodPair,) * self, ...)          {}
    explicit int HashSet(ClassNameClassFactoryMethodPair,)(ConsoleOut)
    (const HashSet(ClassNameClassFactoryMethodPair,) * self, ...)    {}
    explicit int HashSet(ClassNameClassFactoryMethodPair,)(StandardIn)
    (HashSet(ClassNameClassFactoryMethodPair,) * self, ...)          {}
    explicit int HashSet(ClassNameClassFactoryMethodPair,)(StandardOut)
    (const HashSet(ClassNameClassFactoryMethodPair,) * self, ...)    {}
    explicit int HashSet(ClassNameClassFactoryMethodPair,)(FileIn)
    (HashSet(ClassNameClassFactoryMethodPair,) * self, ...)          {}
    explicit int HashSet(ClassNameClassFactoryMethodPair,)(FileOut)
    (const HashSet(ClassNameClassFactoryMethodPair,) * self, ...)    {}
    #endif // 0 CLASS_NAMES_TOO_LONG_FOR_ME > 28

    typedef HashTable(ClassName,ClassFactoryMethod,SizeType)fSizeType;


    except static Interface fTable(Primary)(cstring);

    except static Constructor fTable(Factory) (cstring);

    except static Method * * fTable(Function) (Object *, cstring);

    except static Object *  fTable(Complex) (Object *, cstring);

    noexcept static class(FactoryMethod) * fTable(IsClass)(cstring);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                             C                             */
    typedef void (*(*Overstructor)(const Object *, cstring))
        (const Object *, cstring);

    static Overstructor FactoryTable(Override)
        (size_t, char *, char *, char *, bool);


    typedef Interface () (*(*(*Registructor)(cstring))(cstring))
        (cstring);

    static Registructor FactoryTable(MultiMap)(bool);///MultiMap

    static Map fTable(Map)(void);

    static Flag fTable(Flag)(void);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*            central area (singleton interface)             */
    #ifndef FACTORYTABLESINGLETON
    #define FACTORYTABLESINGLETON 1

        volatile static struct fTable * volatile ftable = 0 ;//

        #include                      "register.h"
        #include                      "drop.h"
                      //"a+ operator material"//factory table index
        #define                        multimap/*(dex/multi-dex)*/\
          (Object*)FactoryTable(MultiMap)/**poke-dex**////map/multimap
      //#define override FactoryTable (Override)
        static Interface ()   (*primary)(cstring)
             = & fTable(Primary) ;
        static Constructor    (*factory)(cstring) ///
             = & fTable(Factory) ;
        static Method * *     (*function)(Object *, cstring)
             = & fTable(Function) ;
        static Object *       (*complex)(Object *, cstring)
             = & fTable(Complex) ;
        static class(FactoryMethod) * (*is_class)(cstring)
             = & fTable(IsClass);


        #define                 map     fTable(Map)()//
        static bool             mPush(Map);
        static Map              mPop(void);              ///
        static const Map *      mTop(void);
        static size_t           mHeight(void);
        static int              mPrint(void);

        #define                 flag()  fTable(Flag)()
        static bool             fPush(Flag);
        static Flag             fPop(void);              ///
        static const Flag *     fTop(void);
        static size_t           fHeight(void);
        static int              fPrint(void);

        static bool             tPush(Type);
        static Type             tPop(void);              ///Builder
        static const Type *     tTop(void);
        static size_t           tHeight(void);
        static int              tPrint(void);

        static bool             hPush(Heap);
        static Heap             hPop(void);              ///Builder
        static const Heap *     hTop(void);
        static size_t           hHeight(void);
        static int              hPrint(void);

    #endif // FACTORYTABLESINGLETON
    /*         OOP in C or OOC is now 66% defined here           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         implement                         */
    volatile volatile volatile typedef struct fTable ///(Factory C)
    {   HashTable(ClassName,ClassFactoryMethod,)base;//
    }FactoryTable, fTable;

    /**+---------------------------------+
     * @brief fTable interface           |
     * +---------------------------------+
     *///SECONDARY (SINGLETON) INTERFACE (FACTORY C)
    volatile volatile typedef struct fTable (VirtualTable)
    {   HashTable(ClassName,ClassFactoryMethod,)(VirtualTable)base;

        except bool () (*insert)( volatile fTable * volatile,
            cstring, Class(FactoryMethod), void(*)(void) );

        except Class(FactoryMethod) * (*search)( volatile fTable *
            volatile, cstring );

        bool () (*remove)( volatile fTable * volatile,
            cstring, void(*)(void) );

    }FactoryTable (VirtualTable), fTable (VirtualTable);


    volatile typedef struct fTable (FactoryTable)
    {   struct class (FactoryTable) base;// = {0,0,0}
    #if 0
        FactoryTable(Helper) (*operator [])( fTable *, cstring );
    #endif // 0
    }FactoryTable (FactoryTable), fTable (FactoryTable);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                        prototypes                         */
    static volatile fTable * volatile FactoryTable(Init)

        ( volatile fTable * volatile, ... );


    static volatile void FactoryTable(Dtor)

        ( volatile fTable * volatile ) ;


    static cstring FactoryTable(Type)() ;

    explicit cstring FactoryTable(Type)(){return"FactoryTable";}


    static bool FactoryTable(Insert)

        ( volatile fTable * volatile,

          cstring, class(FactoryMethod) *, void(*)(void) );


    except static Class(FactoryMethod) * FactoryTable(Search)

        ( volatile fTable * volatile, cstring ) ;


    static bool FactoryTable(Remove)

        ( volatile fTable * volatile, cstring, void(*)(void) ) ;


    void FactoryTable(Constructor)(void)attribute((constructor));

    void FactoryTable(Destructor)(void)attribute((destructor));


    static volatile fTable * FactoryTable (Allocator)

        ( volatile fTable * volatile * volatile, fSizeType );


    static volatile void FactoryTable (Deallocator)

        ( volatile fTable * volatile * volatile ) ;


    static void FactoryTable(Setup)(void);

    static void FactoryTable(Abort)(void);


    static int printFactoryTable(FactoryTable *) ;

    static int fTableTesting(FactoryTable *) ;


    static int FactoryTable(StandardOut)(FactoryTable *);//string *

    static int FactoryTable(FileOut)(FactoryTable *);//File *

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                      static interface                     */
    static FactoryTable(VirtualTable)

        FactoryTable(Interface) =
    {//
      {//
        {//
          {//
            {//
              &FactoryTable(Type),                               //#1  [0]

              &FactoryTable(Init),                               //#2  [1]

              &FactoryTable(Dtor)                                //#3  [2]
            },
            &Vector(ClassNameClassFactoryMethodPair)(Copy),      //#4  [3]

            &ClassNameClassFactoryMethodPairQuadraticProbeInsert,//#5  [4]

            &ClassNameClassFactoryMethodPairQuadraticProbeRemove,//#6  [5]

            &ClassNameClassFactoryMethodPairQuadraticProbeQProbe,//#7  [6]

            &Vector(ClassNameClassFactoryMethodPair)(Size),      //#8  [7]

            &Vector(ClassNameClassFactoryMethodPair)(Begin)      //#9  [8]
          },
          &HashSet(ClassNameClassFactoryMethodPair,Resize),      //#10 [9]

          &Vector(ClassNameClassFactoryMethodPair)(Replace),     //#11 [10]

          &Vector(ClassNameClassFactoryMethodPair)(Clear),       //#12 [11]

          &Vector(ClassNameClassFactoryMethodPair)(Front),       //#14 [12]

          &Vector(ClassNameClassFactoryMethodPair)(Back),        //#15 [13]

          &Vector(ClassNameClassFactoryMethodPair)(Max),         //#16 [14]

          &Vector(ClassNameClassFactoryMethodPair)(End)          //#17 [15]
        },
        &ClassNameClassFactoryMethodPairQuadraticProbeQProbe,    //#18 [16]

        &findPrime(32)                                           //#19 [17]
      },
      &FactoryTable(Insert),                                     //#20 [0]

      &FactoryTable(Search),                                     //#21 [1]

      &FactoryTable(Remove)                                      //#22 [2]
    };
    static Constructor typename(Ctor)(FactoryTable);
    /**
    IT WOULD BE A BASICS TABLE WITH A VIRTUAL ARRAY FOR A SINGLETON

    HERE THAT WOULD COVER THE REST OF THESE METHODS (ABOVE). [0]-[2]

    OR IT WOULD BE A class(SingletonHeap) NOT class(BasicsHeap) (SUPPOSE SO).
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;     ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                 implement error handling                  */
    #include     "mStk.h"
    #include     "fStk.h"
    #include     "tStk.h"
    #include     "hStk.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                   flag()                           *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Flag fTable(Flag)(void)
    {
        if( fTop() )
        { return fPop(); }
        else{ throw( new(NullPointer) )
        (this, "EmptyFlagStack"); }   }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                   map("")                          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Map fTable(Map)(void)
    {
        if( mTop() )
        { Map m = mPop();
          if(!m){ throw( new(NullPointer) )
          (this, "NullMap") ; } return m; }
        else{ throw( new(NullPointer) )
        (this, "EmptyMapStack"); }   }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                             B                             */
    #include     "../Adapter/aTable.h"
    #include     "../Control/pStk.h"//pass stack for break +pStk
    #include     "../Control/cStk.h"

    #include     "../Control/Bunker.h"//-aTable -pStk
    #include     "builder.h"//-aTable

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                             A                             */
    #include     "multimap.h" /// #1  singleton front-end(s)
    #include     "factory.h"  /// #2
    #include     "function.h" /// #3
    #include     "complex.h"  /// #4
    #include     "override.h" /// #5

    #include     "../Adapter/union.h" /// #X

    #include     "FactoryObject.h"
    #include     "Comparable.h"   ///similar to FactoryObject.h
    #include     "../Exception/Assertion.h"
    /*      declare additional interface regs and reg list       */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*   this is the basic configuration for a factory object    */
    static Virtual  /**Table( Name, Pos, Default, Type )**/

        FactoryTable(VirtualHeap)[eighteen] = /**CLASS VIRTUAL TABLE TABLE**/
    { /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "at",               6,      &ClassNameClassFactoryMethodPairQuadraticProbeQProbe,
        "Pair(ClassName,ClassFactoryMethod)*(*)(const HashSet(Pair(ClassName,ClassFactoryMethod),)*,...)"    },
        { "back",             13,     &Vector(ClassNameClassFactoryMethodPair)(Back),
        "Pair(ClassName,ClassFactoryMethod)*(*)(Vector(Pair(ClassName,ClassFactoryMethod))*)"                },
        { "begin",            8,      &Vector(ClassNameClassFactoryMethodPair)(Begin),
        "Iterator(Pair(ClassName,ClassFactoryMethod))*(*)(const Vector(Pair(ClassName,ClassFactoryMethod))*)"},
        { "clear",            11,     &Vector(ClassNameClassFactoryMethodPair)(Clear),
        "bool()(*)(Vector(Pair(ClassName,ClassFactoryMethod))*)"                                             },
        { "copy",             3,      &Vector(ClassNameClassFactoryMethodPair)(Copy),
        "bool()(*)(Vector(Pair(ClassName,ClassFactoryMethod))*,...)"                                         },
        { "dtor",             2,      &FactoryTable(Dtor)  ,
        "void(*)(FactoryTable*)"                                                                             },
        { "end",              15,     &Vector(ClassNameClassFactoryMethodPair)(End),
        "Iterator(Pair(ClassName,ClassFactoryMethod))*(*)(const Vector(Pair(ClassName,ClassFactoryMethod))*)"},
        { "findsize",         17,     &findPrime(32)   /*friend*/           ,
        "uint32_t()(*)(uint32_t)"                                                                            },
        { "front",            12,     &Vector(ClassNameClassFactoryMethodPair)(Front)  ,
        "Pair(ClassName,ClassFactoryMethod)*(*)(Vector(Pair(ClassName,ClassFactoryMethod))*)"                },
        { "init",             1,      &FactoryTable(Init)                          ,
        "FactoryTable*(*)(FactoryTable*,...)"                                                                },
        { "insert",           4,      &ClassNameClassFactoryMethodPairQuadraticProbeInsert,
        "bool()(*)(HashSet(Pair(ClassName,ClassFactoryMethod),)*,...)"                                       },
        { "max",              14,     &Vector(ClassNameClassFactoryMethodPair)(Max)        ,
        "fSizeType(*)(const Vector(Pair(ClassName,ClassFactoryMethod))*)"                                    },
        { "remove",           5,      &ClassNameClassFactoryMethodPairQuadraticProbeRemove ,
        "bool()(*)(HashSet(Pair(ClassName,ClassFactoryMethod),)*,...)"                                       },
        { "replace",          10,     &Vector(ClassNameClassFactoryMethodPair)(Replace)  ,
        "bool()(*)(Vector(Pair(ClassName,ClassFactoryMethod))*,fSizeType,...)"                               },
        { "resize",           9,      &HashSet(ClassNameClassFactoryMethodPair,Resize)    ,
        "bool()(*)(HashSet(Pair(ClassName,ClassFactoryMethod),)*,fSizeType)"                                 },
        { "search",           16,     &ClassNameClassFactoryMethodPairQuadraticProbeQProbe  ,
        "Pair(ClassName,ClassFactoryMethod) * (*)(const HashSet(Pair(ClassName,ClassFactoryMethod),)*,...)"  },
        { "size",             7,      &Vector(ClassNameClassFactoryMethodPair)(Size)    ,
        "fSizeType(*)(const Vector(Pair(ClassName,ClassFactoryMethod))*)"                                    },
        { "type",             0,      &FactoryTable(Type)                         ,
        "cstring(*)()"                                                                                       },

        { "", 0, 0, "" }
    };static Virtual *
    typename(SubFactoryMethod)(FactoryTable,Virtual,Virtual,0,17);


    static struct class(VirtualHeap)

        FactoryTable(Virtual) =

    { &class(VirtualHeap)(Type), &FactoryTable(VirtualSearch), FactoryTable(VirtualHeap) };


    /* note: this heap will malfunction if the size_type is any different from sizeof(void*)
     */
    static Complex  /**Table( Name, Offset, Offset, Type )**/

        FactoryTable(ComplexHeap)[four] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "array",       0,     sizeof(void*),      "Pair(ClassName,ClassFactoryMethod)*"    },
        { "hash",        3,     sizeof(void*),      "uint_t()(*)(uint_t, ...)"               },
        { "length",      1,     sizeof(fSizeType),  "fSizeType"                              },
        { "maxsize",     2,     sizeof(fSizeType),  "fSizeType"                              },

        { "", 0, 0, "" }
    };static Complex *
    typename(SubFactoryMethod)(FactoryTable,Complex,Complex,0,3);


    static struct class(ComplexHeap)

        FactoryTable(Complex) =

    { &class(ComplexHeap)(Type), &FactoryTable(ComplexSearch), FactoryTable(ComplexHeap) };


    static Polymorph  /**Table( Name, Offset, Offset, Type )**/

        FactoryTable(PolymorphHeap)[four] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "Container",                                            0,              0, "" },
        { "HashSet(Pair(ClassName,ClassFactoryMethod),)",         0,              0, "" },
        { "Vector(Pair(ClassName,ClassFactoryMethod))",           0,              0, "" },
        { "class",                                                0,              0, "" },
        /** THESE OFFSETS ARE IMPORTANT FOR WHEN THE
            OBJECT IS ADJACENT TO ANOTHER ON A STACK
               (TO SUPPORT MULTIPLE INHERITANCE)**/
        { "", 0, 0, "" }
    };static Polymorph *
    typename(SubFactoryMethod)(FactoryTable,Polymorph,Polymorph,0,3);


    static struct class(PolymorphHeap)

        FactoryTable(Polymorph) =

    { &class(PolymorphHeap)(Type),

      &FactoryTable(PolymorphSearch),

       FactoryTable(PolymorphHeap) };


    static FactoryTable(FactoryTable)

        FactoryTable(Factory) =

    { { &class(FactoryTable)(Type), &FactoryTable(Ctor), 0 } , };


    static int printFactoryTable(FactoryTable *);

    static struct class(ConsoleTable)

        FactoryTable(Console) =

    { &class(ConsoleTable)(Type), 0, &printFactoryTable };


    static int FactoryTable(StandardOut)(FactoryTable *);//char *

    static struct class(StandardTable)

        FactoryTable(Standard) =

    { &class(StandardTable)(Type), 0, &FactoryTable(StandardOut) };


    static int FactoryTable(FileOut)(FactoryTable *);//File *

    static struct class(FileTable)

        FactoryTable(File) =

    { &class(FileTable)(Type), 0, &FactoryTable(FileOut) };


    volatile static struct class(SingletonTable)

        FactoryTable(Singleton) =

    { &class(SingletonTable)(Type), 0, &FactoryTable(Interface) };


    static cstring typename(PassNumber)(FactoryTable, Security);


    static struct pass(SecurityHeap)

        FactoryTable(Security) =

    { { & pass(SecurityHeap)(Type), 0,/*note: 0 for factory method for set
                                             of available subfactory methods*/
          0 },

        & FactoryTable(Security)(ID), 0 };


    static Interface FactoryTable

        (InterfaceHeap)[nine] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &FactoryTable(Interface),

        &FactoryTable(Complex),   //+sub

        &FactoryTable(Console),

        &FactoryTable(Factory),

        &FactoryTable(File),

        &FactoryTable(Polymorph), //+sub (update +1 col for multi type)

      /*&FactoryTable(Singleton),*///+InformationHiding

        &FactoryTable(Standard),

        &FactoryTable(Virtual),   //+sub

        &FactoryTable(Security),  //-sub   //pass(...)0xffffffff (passnum)

        nullptr// hash strategy? yes plz +1 //pass for String interface heap +1
    } ;//factory heap +1 ... basics heap with virtual array +1
    static Interface
    typename(ClassFactoryMethod)(FactoryTable,0,8);//-1 abort heap

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief     program factory table startup (register)       *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static void typename(Setup)(FactoryTable)  //{}
    {if(!FactoryTable(PrimaryInitialized)){
        new(jumpBuf);_pair_.key = this;
        _pair_.val = new(bool)(this, false);
        jPush(_pair_); pJumpVal = (void*)set( _pair_.key );
        if( !((bool*)pJumpVal) || !(*(bool*)pJumpVal) ){


        FactoryTable(Interface).insert( ftable,
            "multimap", & Map(Method), & Map(Setup) );


        FactoryTable(Interface).insert( ftable,  //#1
            "struct(Bunker)"/*struct(Bunker)(ID)()*/,
            & struct(Bunker)(Method), & struct(Bunker)(Setup) ) ;


        FactoryTable(Interface).insert( ftable,  //#2
            "class(Builder)"/*class(Builder)(ID)()*/,
            & class(Builder)(Method), & class(Builder)(Setup) ) ;


        FactoryTable(Security)(ID) ();
        ((Interface)&FactoryTable(Security))
        [2] = FactoryTable(InterfaceHeap) ;


        struct(Bunker)(Security)(ID) ();//

        struct(Bunker) ** struct(bunker) =
        &((objtPtr*)multimap(false)
        ( "struct(Bunker)" )//struct(Bunker)(ID)()
        ("class(SingletonTable)"))[1] ;


        class(Builder)(Security)(ID) ();//

        class(Builder) ** class(builder) =
        &((objtPtr*)multimap(false)
        ( "class(Builder)" )//class(Builder)(ID)()
        ("class(SingletonTable)"))[1] ;


        /* note: move everything so far into the bunker
         */
        #if 1
        Pair(Class, ClassVirtualTable) * iterator =
            vtable->base.base.array;

        for(vSizeType i = 0; i < vtable->base.base.maxsize; i++)
        {if( iterator->key != nullptr )
         {VirtualTable(Interface).base.base
          .base.insert( (*struct(bunker))
                ->stable, *iterator );

            {iterator->key = 0;iterator->val = 0;
            vtable->base.base.length--;}
            }iterator++;}
        #else
        /* note: or just swap (leaves a few strings behind)
         */
        Object * temp = vtable; vtable =
        (*struct(bunker))->stable ;
        (*struct(bunker))->stable = temp;
        #endif // 0
        /* note: take Assertions off the stack so they are
         *       nested safely inside bunker (all 12).
         */
        #if 0
        while( vTop() ){vPop();}
        #endif // 0
        /* note: resize the vtable to smaller so it doesn't look
         *       like it had a bunch of stuff in it.
         */
        #if 0
        ClassClassVirtualTablePair //cut down a notch in size
        (QuadraticProbe32ResizeHelper)( vtable );
        #endif // 0
        /* note:
         */

    FactoryTable(PrimaryInitialized) = true;
        } catch(Exception * e)
     {printStackTrace(e);delete(e);} } }


    static void typename(Abort)(FactoryTable)
    {try{
        } catch(Exception * e)
     {printStackTrace(e);delete(e);}}

    //{register(HashSet(Pair(ClassName,ClassFactoryMethod),));}
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifdef ___STRUCT_BUNKER___
    static void typename(Setup)(struct(Bunker))
    {/*try{*/
            ((Interface)&struct(Bunker)(Security))
            [2] = struct(Bunker)(InterfaceHeap) ;

            /* * * * * * * * * * * * * * * * * * */
            void ** p = struct(Bunker)(HeapSearch)
            ("class(SingletonTable)");

            if(!p){throw(new(NullPointer))
                (this, "NotAHeapInterface")}

            struct(Bunker) **
            struct(bunker) = &((objtPtr*)(p))[1] ;
            /* * * * * * * * * * * * * * * * * * */

        (*struct(bunker)) = allocate(sizeof(struct(Bunker)));

       if( !(*struct(bunker)) ){throw(new(Exception))
            (this, "MemoryFailure");} else

        {/*new(Assertion)(this, assert( (*struct(bunker)) ));*/}


        if( (*struct(bunker)) )
        {
            struct(Bunker)(Init)( (*struct(bunker)) ); }

     /*} catch(Exception * e)
       {printStackTrace(e);delete(e);}*/ }


    static void typename(Abort)(struct(Bunker))
    {/*try{/*struct(Bunker) ** struct(bunker) =
        &((objtPtr*)multimap(false)
        ( "struct(Bunker)" )//struct(Bunker)(ID)()
        ("class(SingletonTable)"))[1];

        struct(Bunker)(Dtor)( (*struct(bunker)) );
        deallocate( (*struct(bunker)) ) ;
        (*struct(bunker)) = nullptr;* /

        /* note: this will be moved to outside
         *       factory table dtor for good reasons.
         *
         *       the class abort for any class can use
         *       all the factory c helper methods
         *       with or without dropping the class.
         * /

     } catch(Exception * e)
       { printStackTrace(e);delete(e); }*/ }
    #endif // ___STRUCT_BUNKER___
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifdef ___CLASS_BUILDER___
    static void typename(Setup)(class(Builder))
    {/*try{*/
        ((Interface)&class(Builder)(Security))
        [2] = class(Builder)(InterfaceHeap) ;

            /* * * * * * * * * * * * * * * * * * */
            void ** p = class(Builder)(HeapSearch)
            ("class(SingletonTable)");

            if(!p){throw(new(NullPointer))
                (this, "NotAHeapInterface")}

            class(Builder) **
            class(builder) = &((objtPtr*)(p))[1] ;
            /* * * * * * * * * * * * * * * * * * */

        (*class(builder)) = allocate(sizeof(class(Builder)));

        if( !(*class(builder)) ){throw(new(Exception))
            (this, "MemoryFailure");} else

        {/*new(Assertion)(this, assert( (*class(builder)) ));*/}

        if( (*class(builder)) )
        {
            class(Builder)(Init)
                ( (*class(builder)), ftable, nullptr ); }

    /* note: these are the overrides for the builder heaps:
     *       1 - destructor
     *       2 - copy from array
     *       3 - info constructor
     */
    #if 1
        Heap(Interface)(Interface).base.base.dtor
            = & Heap(Interface)(InterfaceDtor);

        Heap(Strategy)(Interface).base.base.dtor
            = & Heap(Strategy)(StrategyDtor);
        Heap(Polymorph)(Interface).base.base.dtor
            = & Heap(Polymorph)(PolymorphDtor);
        Heap(Virtual)(Interface).base.base.dtor
            = & Heap(Virtual)(VirtualDtor);
        Heap(Complex)(Interface).base.base.dtor
            = & Heap(Complex)(ComplexDtor);
        Heap(Control)(Interface).base.base.dtor
            = & Heap(Control)(ControlDtor);
        Heap(Builder)(Interface).base.base.dtor
            = & Heap(Builder)(BuilderDtor);
        Heap(Security)(Interface).base.base.dtor
            = & Heap(Security)(SecurityDtor);
        Heap(Adapter)(Interface).base.base.dtor
            = & Heap(Adapter)(AdapterDtor);


        Heap(Interface)(Interface).base.copy
            = & Heap(Interface)(CopyFromArray);

        Heap(Strategy)(Interface).base.copy
            = & Heap(Strategy)(CopyFromArray);
        Heap(Polymorph)(Interface).base.copy
            = & Heap(Polymorph)(CopyFromArray);
        Heap(Virtual)(Interface).base.copy
            = & Heap(Virtual)(CopyFromArray);
        Heap(Complex)(Interface).base.copy
            = & Heap(Complex)(CopyFromArray);
        Heap(Control)(Interface).base.copy
            = & Heap(Control)(CopyFromArray);
        Heap(Builder)(Interface).base.copy
            = & Heap(Builder)(CopyFromArray);
        Heap(Security)(Interface).base.copy
            = & Heap(Security)(CopyFromArray);
        Heap(Adapter)(Interface).base.copy
            = & Heap(Adapter)(CopyFromArray);

    #if 0
        Heap(Interface)(Interface).imbalance
            = & class(Builder)(InterfaceInfo);
    #endif // 0 NO_INFO_CTOR_FOR_INTERFACE

        Heap(Strategy)(Interface).imbalance
            = & class(Builder)(StrategyInfo);
        Heap(Polymorph)(Interface).imbalance
            = & class(Builder)(PolymorphInfo);
        Heap(Virtual)(Interface).imbalance
            = & class(Builder)(VirtualInfo);
        Heap(Complex)(Interface).imbalance
            = & class(Builder)(ComplexInfo);
        Heap(Control)(Interface).imbalance
            = & class(Builder)(ControlInfo);
        Heap(Builder)(Interface).imbalance
            = & class(Builder)(BuilderInfo);
        Heap(Security)(Interface).imbalance
            = & class(Builder)(SecurityInfo);
        Heap(Adapter)(Interface).imbalance
            = & class(Builder)(AdapterInfo);
    #endif // 0

        /* note: this will work with the btable
         *       if type() returns "(complex)"
         * update: "class" not "(complex)"
         */
        typeid = & class(builder)(typeid) ;

     /*} catch(Exception * e)
       {printStackTrace(e);delete(e);}*/ }


    static void typename(Abort)(class(Builder))
    {/*try{/*class(Builder) ** class(builder) =
        &((objtPtr*)multimap(false)
        ( "class(Builder)" )//class(Builder)(ID)()
        ("class(SingletonTable)"))[1];

        class(Builder)(Dtor)( (*class(builder)) );
        deallocate( (*class(builder)) ) ;
        (*class(builder)) = nullptr;* /

     } catch(Exception * e)
       { printStackTrace(e);delete(e); }*/ }
    #endif // ___CLASS_BUILDER___
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*   this is the basic configuration for a factory object    */
    #ifdef VIRTUALTABLESINGLETON

    static Virtual  /**Table(Name, Pos, Default)**/

        VirtualTable(VirtualHeap)[eighteen] = /**CLASS VIRTUAL TABLE TABLE**/
    { /**A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z**/
        { "at",               6,      &ClassClassVirtualTablePairQuadraticProbeQProbe(32),
        "Pair(Class,ClassVirtualTable)*(*)(const HashSet(Pair(Class,ClassVirtualTable),32)*,...)"   },
        { "back",             13,     &Vector(ClassClassVirtualTablePair)(Back),
        "Pair(Class,ClassVirtualTable)*(*)(Vector(Pair(Class,ClassVirtualTable))*)"                 },
        { "begin",            8,      &Vector(ClassClassVirtualTablePair)(Begin),
        "Iterator(Pair(Class,ClassVirtualTable))*(*)(const Vector(Pair(Class,ClassVirtualTable))*)" },
        { "clear",            11,     &Vector(ClassClassVirtualTablePair)(Clear),
        "bool()(*)(Vector(Pair(Class,ClassVirtualTable))*)"                                         },
        { "copy",             3,      &Vector(ClassClassVirtualTablePair)(Copy),
        "bool()(*)(Vector(Pair(Class,ClassVirtualTable))*,...)"                                     },
        { "dtor",             2,      &VirtualTable(Dtor),
        "void(*)(VirtualTable*)"                                                                    },
        { "end",              15,     &Vector(ClassClassVirtualTablePair)(End),
        "Iterator(Pair(Class,ClassVirtualTable))*(*)(const Vector(Pair(Class,ClassVirtualTable))*)" },
        { "findsize",         17,     &findPrime(32),
        "uint32_t()(*)(uint32_t)"                                                                   },
        { "front",            12,     &Vector(ClassClassVirtualTablePair)(Front),
        "Pair(Class,ClassVirtualTable)*(*)(Vector(Pair(Class,ClassVirtualTable))*)"                 },
        { "init",             1,      &VirtualTable(Init),
        "VirtualTable*(*)(VirtualTable*,...)"                                                       },
        { "insert",           4,      &ClassClassVirtualTablePairQuadraticProbeInsert(32),
        "bool()(*)(HashSet(Pair(Class,ClassVirtualTable),32)*,...)"                                 },
        { "max",              14,     &Vector(ClassClassVirtualTablePair)(Max),
        "vSizeType(*)(const Vector(Pair(Class,ClassVirtualTable))*)"                                },
        { "remove",           5,      &ClassClassVirtualTablePairQuadraticProbeRemove(32),
        "bool()(*)(HashSet(Pair(Class,ClassVirtualTable),32)*,...)"                                 },
        { "replace",          10,     &Vector(ClassClassVirtualTablePair)(Replace),
        "bool()(*)(Vector(Pair(Class,ClassVirtualTable))*,vSizeType,...)"                           },
        { "resize",           9,      &HashSet(ClassClassVirtualTablePair,32)(Resize),
        "bool()(*)(Vector(Pair(Class,ClassVirtualTable))*,vSizeType)"                               },
        { "search",           16,     &ClassClassVirtualTablePairQuadraticProbeQProbe(32),
        "Pair(Class,ClassVirtualTable)*(*)(const HashSet(Pair(Class,ClassVirtualTable),32)*,...)"   },
        { "size",             7,      &Vector(ClassClassVirtualTablePair)(Size),
        "vSizeType(*)(const Vector(Pair(Class,ClassVirtualTable))*)"                                },
        { "type",             0,      &VirtualTable(Type),
        "cstring(*)()"                                                                              },

        { "", 0, 0, "" }
    };static Virtual * /** SUB FACTORY METHOD **/
    typename(SubFactoryMethod)(VirtualTable,Virtual,Virtual,0,17);


    static struct class(VirtualHeap)

        VirtualTable(Virtual) =

    { &class(VirtualHeap)(Type), &VirtualTable(VirtualSearch), VirtualTable(VirtualHeap) };


    static Complex  /**Table( Name, Pos, Bytes, Type )**/

        VirtualTable(ComplexHeap)[four] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "array",       0,     sizeof(void*),      "Pair(Class,ClassVirtualTable)*"         },
        { "hash",        3,     sizeof(void*),      "uint32_t()(*)(uint32_t,...)"            },
        { "length",      1,     sizeof(vSizeType),  "vSizeType"                              },
        { "maxsize",     2,     sizeof(vSizeType),  "vSizeType"                              },

        { "", 0, 0, "" }
    };static Complex *
    typename(SubFactoryMethod)(VirtualTable,Complex,Complex,0,3);


    static struct class(ComplexHeap)

        VirtualTable(Complex) =

    { &class(ComplexHeap)(Type), &VirtualTable(ComplexSearch), VirtualTable(ComplexHeap) };


    static Polymorph  /**Table( Name, Offset, Offset )**/

        VirtualTable(PolymorphHeap)[four] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "Container",                                            0,              0, "" },
        { "HashSet(Pair(Class,ClassVirtualTable),32)",            0,              0, "" },
        { "Vector(Pair(Class,ClassVirtualTable))",                0,              0, "" },
        { "class",                                                0,              0, "" },
        /** THESE OFFSETS ARE IMPORTANT FOR WHEN THE
            OBJECT IS ADJACENT TO ANOTHER ON A STACK
               (TO SUPPORT MULTIPLE INHERITANCE)**/
        { "", 0, 0, "" }
    };static Polymorph *
    typename(SubFactoryMethod)(VirtualTable,Polymorph,Polymorph,0,3);


    static struct class(PolymorphHeap)

        VirtualTable(Polymorph) =

    { &class(PolymorphHeap)(Type),

      &VirtualTable(PolymorphSearch),

       VirtualTable(PolymorphHeap) };


    static VirtualTable(FactoryTable)

        VirtualTable(Factory) =

    { { &class(FactoryTable)(Type), &VirtualTable(Ctor), 0 } , };


    static int printVirtualTable(VirtualTable *);
    static struct class(ConsoleTable)

        VirtualTable(Console) =

    { &class(ConsoleTable)(Type), 0, &printVirtualTable };


    static int VirtualTable(StandardOut)(VirtualTable *);
    static struct class(StandardTable)

        VirtualTable(Standard) =

    { &class(StandardTable)(Type), 0, &VirtualTable(StandardOut) };


    static int VirtualTable(FileOut)(VirtualTable *);
    static struct class(FileTable)

        VirtualTable(File) =

    { &class(FileTable)(Type), 0, &VirtualTable(FileOut) };


    volatile static struct class(SingletonTable)

        VirtualTable(Singleton) =

    { &class(SingletonTable)(Type), 0, &VirtualTable(Interface) };


    static cstring typename(PassNumber)(VirtualTable, Security);

    /*extern struct pass(SecurityHeap)

        VirtualTable(Security);*/

    static struct pass(SecurityHeap)

        VirtualTable(Security) =

    { { & pass(SecurityHeap)(Type), 0,

          /*VirtualTable(InterfaceHeap)*/0 },

        & VirtualTable(Security)(ID) };


    static Interface

        VirtualTable(InterfaceHeap)[ten] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &VirtualTable(Interface), //VirtualTable

        &VirtualTable(Complex),

        &VirtualTable(Console),

        &VirtualTable(Factory),

        &VirtualTable(File),

        &VirtualTable(Polymorph),//class(...) (all)

        &VirtualTable(Singleton),///FACTORY TABLE ACCESS

        &VirtualTable(Standard),

        &VirtualTable(Virtual),

        &VirtualTable(Security),  // 0xffffffff

        nullptr

    } ;
    static Interface
    typename(ClassFactoryMethod)(VirtualTable,0,9);



    static void typename(Setup)(VirtualTable)// {}
    {try{VirtualTable(Security)(ID) () ;
        ((Interface)&VirtualTable(Security))
        [2] = VirtualTable(InterfaceHeap) ;

        ((objtPtr*)multimap(false)("VirtualTable")
        ("class(SingletonTable)"))[1] = vtable;

        }catch(Exception * e)
        {printStackTrace(e);delete(e);} }


    static void typename(Abort)(VirtualTable)
    {try{
        } catch(Exception * e)
     { printStackTrace(e); delete(e); } }

    //{register(HashSet(Pair(Class,ClassVirtualTable),32));}
    #endif // VIRTUALTABLESINGLETON
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #ifdef ADAPTERTABLESINGLETON
    static void typename(Setup)(AdapterTable)
    {try{AdapterTable(Security)(ID) () ;
        ((Interface)&AdapterTable(Security))
        [2] = AdapterTable(InterfaceHeap) ;

        ((objtPtr*)multimap(false)("AdapterTable")
        ("class(SingletonTable)"))[1] = atable;

        } catch( Exception * e )

     {printStackTrace(e);delete(e);} }


    static void typename(Abort)(AdapterTable)
    {try{
        } catch(Exception * e)
     {printStackTrace(e);delete(e);}}

    //{register(HashSet(Pair(Adapter,Class),32));}*/
    #endif // ADAPTERTABLESINGLETON
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief          factory table initializer                 *
     *        same as Vector or HashSet initializer cases        *
     *                                                           *
     * @return              factory table                        *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    implement functions                    */
    explicit volatile fTable * volatile FactoryTable(Init)

        ( volatile fTable * volatile self, ... )

    { /*if( !self ){ return 0; }*/

            /**CONTROL FACTORY CASE FOR STACK CONTROL**/

    if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        self = HashTable(ClassName,ClassFactoryMethod,Init)(self);

      (*Flags[0]) = false;

      return self; }  //

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief              fTable destructor                     *
     *   - - deallocate heaps allocated using the builder - -    *
     * deallocate the cstring ClassName for each registered Class*
     * @param                   fTable                           *
     * @return                   void                            *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*            call base (vector) destructor here             */
    static void fTable(Helper)(Heap(Interface) *);

    static void fTable(Auxillary)(Pair(ClassName, ClassFactoryMethod)*);

    volatile static bool fTable(DtorFlag) = false;

    explicit volatile void FactoryTable(Dtor)

        ( volatile fTable * volatile self )

    { Pair(ClassName, ClassFactoryMethod)
        * iter = ((Vector(ClassNameClassFactoryMethodPair)*)self)->array,
        * back = ((Vector(ClassNameClassFactoryMethodPair)*)self)->array
        + ((Vector(ClassNameClassFactoryMethodPair)*)self)->maxsize ,
          pair = { iter->key, 0 } ,

        * struct(bunker) = 0, * class(builder) = 0, * MultiMap = 0 ;

      while( iter != back )

      { if( (*iter).key != 0 )

        {
          if(  string(equal)( (*iter).key, "struct(Bunker)" )  )
          { struct(bunker) = iter; if(fTable(DtorFlag))
                        {printf("Store: %s\n", iter->key);}
          }
          if(  string(equal)( (*iter).key, "class(Builder)" )  )
          { class(builder) = iter;if(fTable(DtorFlag))
                        {printf("Store: %s\n", iter->key);}
          }
          if(  string(equal)( (*iter).key, "multimap" )  )
          { MultiMap = iter; if(fTable(DtorFlag))
                        {printf("Store: %s\n", iter->key);}
          }
          if( !string(equal)( (*iter).key, "struct(Bunker)" ) &&


              !string(equal)( (*iter).key, "class(Builder)" ) &&


              !string(equal)( (*iter).key, "multimap" ) )

          {if(fTable(DtorFlag)){printf("Class: %s\n", iter->key);}
            if( iter->val->abort )
            {
                iter->val->abort(); }

            /* note: deallocate builder heaps
             */
            if( string(equal)

                ( iter->val->typeid(), "builder(FactoryMethod)" ) )
            {
                /* note: i cannot stress enough that everything
                 *       that is not a virtual table object and
                 *       an interface or component of one must be
                 *       deallocated because a program is worth nothing
                 *       if it leaks that much memory (or any from
                 *       anywhere when functions are called at certain
                 *       repetitions over and over).
                 *
                 *       again, deallocate the builder classes typeid
                 *       string at the builder table, (still one after).
                 */
                /*****************************************************/
                fTable(Helper)(iter->val->registrations);
                deallocate( iter->val );
                /*****************************************************/
            }
          deallocate( (*iter).key ); (*iter).key = 0;
          (*iter).val = 0; } } iter++; }

            if(fTable(DtorFlag))
                {printf("Aux:   %s\n", struct(bunker)->key);}
          fTable(Auxillary)(struct(bunker));
            if(fTable(DtorFlag))
                {printf("Aux:   %s\n", class(builder)->key);}
          fTable(Auxillary)(class(builder));
            if(fTable(DtorFlag))
                {printf("Aux:   %s\n", MultiMap->key);}
          fTable(Auxillary)(MultiMap);

          Vector(ClassNameClassFactoryMethodPair)(Dtor)( self ); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    explicit void fTable(Auxillary)

        (Pair(ClassName, ClassFactoryMethod)* self)
    {   /* note: this case here: default(26) = true ; will make
                 it print where there was a problem deallocating
                 but the key to the class(Builder) class gets
                 set to null, I hope this doesn't come back to
                 haunt me.

                 this is one of the places where i have to draw
                 the line for the builder but we have these three
                 things that cant be struct aborted:
                 class(Builder), struct(Bunker), multimap

                 This is because multimap gets too recursive
                 when these three things are builder classes
                 and that is too impossible of a difficulty
                 for me. just as long as everything is hooked
                 up directly to the factory table (02/27/2023).
         */
        /*****************************************************/
        if( !self->key ){ return; }
        #if 0 // 1 NEEDS DEBUG
          if( string(equal)

                ( self->val->typeid(), "builder(FactoryMethod)" ) )
          {
            fTable(Helper)(self->val->registrations);
          }
        #endif // 0 CANNOT_STRUCT_ABORT_BUILDER_BUNKER_MULTIMAP_IF 0
          deallocate( self->key ); self->key = 0;
          self->val = 0;
        /*****************************************************/
    }
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief             add class to the ftable                *
     *        - - registrations are additional interfaces - -    *
     *                 - - see: structclass.h - -                *
     *      - - for list of available registration bases - -     *
     *      - - of the factory table class interface heap - -    *
     *                                                           *
     *                   - - see: Object.h - -                   *
     * - - for list of available interface registration data - - *
     * - - field position casts and registration prototypes - -  *
     *                                                           *
     *                   - - see: Array.h - -                    *
     * - -for data type cut-outs used for the info heap types- - *
     *                                                           *
     *    - - additional register statements are harmless, - -   *
     *    - - provides readability like an extra prototype - -   *
     *                                                           *
     * @param   fTable (self)                                    *
     * @param   X auxillary stack                                *
     * @param   cstring class name (for typeid key)              *
     * @param   class factory method                             *
     * @param   X bool for setup success/failure                 *
     *                                                           *
     * @return  true or false for operation success or failure   *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit bool FactoryTable

    (Insert)( volatile fTable * volatile self, cstring name,

        class(FactoryMethod) * meth, void(*_setup)(void) )
    {

      if( name == 0 ){ throw(new(NullPointer))
                            (this, "NullString") ; }

      if( string(equal)( name, "" ) )
        { throw(new(EmptyString))(this, "EmptyClassTypeID") ; }

      Pair( ClassName, ClassFactoryMethod )

            pair = { name, meth } ;

      if ( !FactoryTable(Interface).base.base.base.
            insert( self, pair ) ){ return false ; }


      else
      {
        if(_setup){ _setup(); } return true;
      } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief              search for a class                    *
     *                                                           *
     * @param  ftable self                                       *
     * @param  auxillary stack                                   *
     * @param  class name cstring                                *
     *                                                           *
     *                  (also registration list)                 *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    except explicit Class(FactoryMethod) * FactoryTable(Search)

        ( volatile fTable * volatile self, cstring name )///(Factory C)

    { if( name == 0 ){ throw(new(NullPointer))
                        (this, "NullString") ; }

        if( string(equal)( name, "" ) )
        { throw(new(EmptyString))(this, "EmptyClassTypeID") ; }

        Pair( ClassName, ClassFactoryMethod ) pair = { name, 0 },
      * p = FactoryTable(Interface).base.search( self, pair );
        if( !p || !p->key ) { throw( new(NotFound) )
                (this, "NotAFactoryTableClass",name); }
            else { return &p->val; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                remove a class                      *
     *           - - removal of classes from fTable - -          *
     *          - - will not be neccessary at runtime - -        *
     *       - - unless the builder object is used to - -        *
     *       - - create run-time objects with run-time - -       *
     *                - - factory table classes - -              *
     *                                                           *
     * - - make sure to check if a class factory method is a - - *
     *  - - builder factory method so it can be deallocated - -  *
     *                                                           *
     *   - - if build()() is used inside Class(Setup) then - -   *
     *         - - demolish() used inside Class(Abort) - -       *
     *                                                           *
     * @param  address of ftable self                            *
     * @param  address of auxillary stack                        *
     * @param  cstring for class name                            *
     *                                                           *
     * @return  true or false for operation success or failure   *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    volatile static bool fStackFlag = false;
    explicit bool FactoryTable

    (Remove)( volatile fTable * volatile self,

             cstring name, void(*_abort)(void) )

    { if( name == 0 ){ throw(new(NullPointer))
                        (this, "NullString") ; }

        if( string(equal)( name, "" ) )
        { throw(new(EmptyString))(this, "EmptyClassTypeID") ; }

        const Object * mark = nullptr;

        if( !fStackFlag )
      {
        fStackFlag = true;

        if( fTop() ){ mark = fTop(); }
      }

      {
        if( name == 0 )
        { return false; }

        fPush(nullptr);

        {  }

          Pair( ClassName, ClassFactoryMethod ) pair = { name, 0 };
          Pair( ClassName, ClassFactoryMethod ) * p =
            ((HashTable(ClassName,ClassFactoryMethod,VirtualTable)*)
            &FactoryTable(Interface))->search(self, pair);
            if( !p || !p->key )
            {  fStackFlag = false; return false; }
              else

              if( string(equal)( (*p).key, name ) )
              {
                  if( string(equal)( (*p).key, "struct(Bunker)" )

                   || string(equal)( (*p).key, "class(Builder)" )

                   || string(equal)( (*p).key, "multimap" ) )
                  { throw(new(IllegalOperation))
                    (this, "FactoryTableAuxiliaries:RemovalRestricted\n"
                 "info:\t\t struct(Bunker), class(Builder), multimap");
                  }

                  if( p->val->abort )
                  {
                      p->val->abort();}

                    /* note: deallocate builder heaps
                     */
                  if( string(equal)

                     ( p->val->typeid(), "builder(FactoryMethod)" ) )
                  { /*****************************************************/
                    fTable(Helper)(p->val->registrations);
                    deallocate( (*p).val );
                    /*****************************************************/
                  }
                  deallocate( (*p).key );
              (*p).key = 0; (*p).val = 0; ///

              ((Vector(ClassNameClassFactoryMethodPair)*)self)->length--;

                fPop();

              if( fTop() == mark ){

    ClassNameClassFactoryMethodPairQuadraticProbeResizeHelper( self );

                fStackFlag = false; }

              return true; } } }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    explicit void fTable(Helper)(Heap(Interface) * self)
    {//
        /*****************************************************/
        Heap(Interface) * heap = self;
        if( !heap ){throw(new(NullPointer))(this, "NullHeap");}

        Interface volatile(iterator)[3]={&volatile(Type),0,0};
                                        volatile(type) = "class";

        Interface * def = Heap(Interface)(Interface)
                        .base.at(heap, volatile(iterator));
        if( def )
        {
            cstring type = class(builder)(search)( *def );
            deallocate(type);

            class(builder)(remove)( *def );
        }
        Heap(Interface)(InterfaceDtor)( heap );
        deallocate( heap );
        /*****************************************************/
    }
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief           get instance of fTable                   *
     * X *redefine macro default_prime for choice of table size* *
     *   - - ( for __attribute__((constructor)) function) - -    *
     *                                                           *
     *              - -   (singleton pattern)   - -              *
     *                                                           *
     * @param             address of ftable                      *
     * @return       new fTable if no existing one               *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    explicit volatile fTable * volatile FactoryTable(Allocator)

        ( volatile fTable * volatile * volatile pself, fSizeType size )

    { if( *pself != 0 )
      { return *pself; }

        *pself = (fTable*)allocate(sizeof(fTable));
        if( *pself == 0 )
        { return 0; }

          *pself = FactoryTable(Init)(*pself, 0, size);//default_prime
          if( *pself == 0 )
          { return 0; }
            return *pself; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief      destroy/destruct instance of fTable           *
     *      - - ( for __attribute__((destructor)) function) - -  *
     *                                                           *
     *              - -   (singleton pattern)   - -              *
     *                                                           *
     * @param             address of ftable                      *
     * @return     void                                          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit volatile void FactoryTable(Deallocator)

        ( volatile fTable * volatile * volatile pself )

    { if(*pself == 0){return;}

      FactoryTable(Dtor)(*pself); deallocate(*pself); *pself = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief          print fTable (x-macro)                    *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineFactoryTablePrint(Type, Print, End, Object)\
    \
     static int FactoryTable(Type##Out)(FactoryTable *);\
    \
     explicit int FactoryTable(Type##Out)(FactoryTable * self)\
    \
     { if( default(0) ){ default(0) = false; }\
        Object;\
        default(24) = true;\
        register size_t retval = 0;\
    \
         size_t i = 0, i2 = 0, i3 = 0, count = 0, colCount = 0, length;\
         for(i2 = 0; i2 < ((Vector(ClassNameClassFactoryMethodPair)*)\
            self)->maxsize; i2++)\
        { if(((Vector(ClassNameClassFactoryMethodPair)*)\
                self)->array[i2].key != nullptr)\
            {count++; length = string(size)(((Vector\
                    (ClassNameClassFactoryMethodPair)*)\
                    self)->array[i2].key);\
                retval += Print "\"%s\"", ((Vector\
                    (ClassNameClassFactoryMethodPair)*)\
                    self)->array[i2].key End;\
                if(length > 28){ retval += Print "\n" End; }\
                for( size_t index = 0; index <= 30 - length - 2; index++ )\
                { retval += Print " " End; }\
            }else{Print "\"\"" End;\
                for( size_t index = 0; index <= 30 - 3; index++ )\
                { retval += Print " " End; }\
            } colCount++;\
            if(colCount == 4){ retval += Print "\n" End; colCount = 0; }\
        }retval += Print "\n\n\n" End;\
    \
        retval += Print "maxsize:  %d\n",\
               ((Vector(ClassNameClassFactoryMethodPair)*)\
            self)->maxsize End;/*//*/\
        retval += Print "length:   %d\n",\
               ((Vector(ClassNameClassFactoryMethodPair)*)\
            self)->length End;/*//*/\
        default(24) = false;\
        return retval;}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief           print fTable (console)                   *
     *                       - - ... - -                         *
     *  note: this is the debuggable version just swap 0 for 1   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0 // 1 DEBUG
     explicit int printFactoryTable(FactoryTable * self)

     { if( default(0) ){ default(0) = false; }

        register size_t retval = 0;

         size_t i = 0, i2 = 0, i3 = 0, count = 0, colCount = 0, length;
         for(i2 = 0; i2 < ((Vector(ClassNameClassFactoryMethodPair)*)
            self)->maxsize; i2++) //
        { if(((Vector(ClassNameClassFactoryMethodPair)*)
                self)->array[i2].key != nullptr)
            {count++; length = string(size)(((Vector
                    (ClassNameClassFactoryMethodPair)*)
                    self)->array[i2].key);
                retval += printf("\"%s\"", ((Vector
                    (ClassNameClassFactoryMethodPair)*)
                    self)->array[i2].key);
                if(length > 28){ retval += printf("\n"); }
                for( size_t index = 0; index <= 30 - length - 2; index++ )
                { retval += printf(" "); }
            }else{retval += printf("\"\"");
                for( size_t index = 0; index <= 30 - 3; index++ )
                { retval += printf(" "); }
            } colCount++;
            if(colCount == 4){ retval += printf("\n"); colCount = 0; }
        }retval += printf("\n\n\n");

        retval += printf("maxsize:  %d\n",
               ((Vector(ClassNameClassFactoryMethodPair)*)
            self)->maxsize); //
        retval += printf("length:   %d\n",
               ((Vector(ClassNameClassFactoryMethodPair)*)
            self)->length);   //
        return retval;}
    #else

     typename(FactoryTablePrint)
     (Console,
         _cPrint(), cEnd(),
     ) ;
    #endif // DEBUG

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief           print fTable (standard)                  *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

     typename(FactoryTablePrint)
     (Standard,
         _sPrint(str), sEnd(),

         string str = ConsoleOut(String)
     ) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief              print fTable (file)                   *
     *                       - - ... - -                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

     typename(FactoryTablePrint)
     (File,
         _fPrint(file), fEnd(),

         File * file = ConsoleOut(Object)
     ) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

    - - everything should be good to go (02/05/2023).

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    # if 0
# include  "vTable.h"

# include  "fTable.h"
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/*                        Program Entry Point                        */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
# define intVector(Member)intVector ## Member
# define intIterator(Member)intIterator ## Member
typename (Vector) (int, typename (Iterator) (int)) ;

void typename (constructor)({ register (Vector(int)); });
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

int main(void)
{
    Container * vector = factory ("Vector(int)") (this, ...);


        ((bool()(*)(Object*,...))((virtual*)multimap(true)(typeid(vector))

            ("class(VirtualHeap)")("insert"))->col)(vector, ...);


                                    insert(vector, ...);///...


    delete (vector) ;

    return 0;
}
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
void typename(destructor)({ drop (Vector(int)); }) ;
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # endif
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
        _____  ________        __      __              __
       /  ___\/\___  __\      /\ \    /\ \            /\ \
      /\ \___/\/__/\ \_/  ___ \ \ \___\ \ \    ___    \ \ \___
      \ \  _\     \ \ \  / __`\\ \  __`\ \ \  / __`\   \ \  __`\
       \ \ \/      \ \ \/\ \/\.\_ \ \/\ \ \ \/\  __/_  _\ \ \/\ \
        \ \_\       \ \_\ \___/\_\ \____/\ \_\ \_____\/\_\ \_\ \_\
         \/_/  \ /   \/_/\/__/\/_/\/___/  \/_/\/_____/\/_/\/_/\/_/
              - * -
               / \                                               */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                        //CWP
#endif // FTABLE_H_INCLUDED
