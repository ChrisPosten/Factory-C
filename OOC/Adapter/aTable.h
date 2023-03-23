#ifndef ATABLE_H_INCLUDED
#define ATABLE_H_INCLUDED
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
    /* - BONUS TABLE - BONUS TABLE - BONUS TABLE - BONUS TABLE - */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**|| C ADAPTER TABLE (TABLE OF SELF POINTER DATA MEMBERS)|| *
     *                                                           *
     *              by Willy (01/10/2022)(02/09/2022)            *
     * ||                    (09/13/2022)(11/06/2022)         || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* - BONUS TABLE - BONUS TABLE - BONUS TABLE - BONUS TABLE - */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Reason(s) to use:                                 *
     *                                                           *
     *   1)  assign an alternate adapter interface and adapter   *
     *       constructor to a virtual table object that is used  *
     *       as an object adapter to another virtual table object.*
     *                                                           *
     *   2)  store the class self pointer to the adapter.        *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    #include "../Virtual/vTable.h"                  //+VirtualTable

    #undef  size_type
    #define size_type         unsigned int  //pick measurement type

    #define aTable(Member)         /**/              aTable##Member
    #define AdapterTable(Member)               AdapterTable##Member

    // every occurrence of the amount of bits defined
    // has been parenthesized using these macros below. seemingly
    // a numeric value (to replace with anything like a variable),
    // however they cannot be replaced by one macro defined as 32,

    // or anything, just the text 64, ... at each occurrence of 32

    // (same as vTable.h ...)

    #define ClassClassPairHashSet32(Member)\
    \
        ClassClassPairHashSet32##Member

    #define ClassClassPairHashSetType(Bits)\
    \
        ClassClassPairHashSet##Bits##Type

    #define ClassClassPairHashSetSizeType(Bits)\
    \
        ClassClassPairHashSet##Bits##SizeType

    #define ClassClassPairHashSetVirtualTable(Bits)\
    \
        ClassClassPairHashSet##Bits##VirtualTable

    #define ClassClassPairHashSetInit(Bits)\
    \
        ClassClassPairHashSet##Bits##Init

    #define ClassClassPairQuadraticProbeInsert(Bits)\
    \
        ClassClassPairQuadraticProbe##Bits##Insert

    #define ClassClassPairQuadraticProbeRemove(Bits)\
    \
        ClassClassPairQuadraticProbe##Bits##Remove

    #define ClassClassPairHashSetResize(Bits)\
    \
        ClassClassPairHashSet##Bits##Resize

    #define ClassClassPairHashSetInitArray(Bits)\
    \
        ClassClassPairHashSet##Bits##InitArray

    #define ClassClassPairQuadraticProbeQProbe(Bits)\
    \
        ClassClassPairQuadraticProbe##Bits##QProbe

    #define ClassClassPairIterator(Member)\
    \
        ClassClassPairIterator##Member

    #define ClassClassPairVector(Member)\
    \
        ClassClassPairVector##Member

    #define ClassClassPair(Member)\
    \
        ClassClassPair##Member

    #define ClassClassPairHashSet32(Member)\
    \
        ClassClassPairHashSet32##Member

   # define AdapterTableSecurity(Member)\
   \
        AdapterTableSecurity ## Member

    #define printAdapterTable\
        AdapterTable(ConsoleOut)

    #define aTableTesting\
        AdapterTable(ConsoleIn)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    implement base type                    */
    volatile typename(Pair)(Class, Class);

    volatile typename(Iterator)(ClassClassPair);

    volatile typename(Vector)(ClassClassPair, );


    volatile typename(BasicHashTable)(Class, Class, 32, );

    volatile typename(HashTableInit)(Class, Class, 32, );

    #if 0
    typename(FactoryIterator)(ClassClassPair, );

    explicit int Iterator(ClassClassPair)(ConsoleOut)
    (const Iterator(ClassClassPair) * self, ...){}

    explicit int Iterator(ClassClassPair)(StandardOut)
    (const Iterator(ClassClassPair) * self, ...){}

    explicit int Iterator(ClassClassPair)(FileOut)
    (const Iterator(ClassClassPair) * self, ...){}


    typename(FactoryVector)(ClassClassPair, );

    explicit int Vector(ClassClassPair)(ConsoleIn)
    (Vector(ClassClassPair) * self, ...){}

    explicit int Vector(ClassClassPair)(ConsoleOut)
    (const Vector(ClassClassPair) * self, ...){}


    explicit int Vector(ClassClassPair)(StandardIn)
    (Vector(ClassClassPair) * self, ...){}

    explicit int Vector(ClassClassPair)(StandardOut)
    (const Vector(ClassClassPair) * self, ...){}


    explicit int Vector(ClassClassPair)(FileIn)
    (Vector(ClassClassPair) * self, ...){}

    explicit int Vector(ClassClassPair)(FileOut)
    (const Vector(ClassClassPair) * self, ...){}


    typename(FactoryHashTable)(Class, Class, 32, );


    explicit int HashSet(ClassClassPair,32)(ConsoleIn)
    (HashSet(ClassClassPair,32) * self, ...)          {}

    explicit int HashSet(ClassClassPair,32)(ConsoleOut)
    (const HashSet(ClassClassPair,32) * self, ...)    {}


    explicit int HashSet(ClassClassPair,32)(StandardIn)
    (HashSet(ClassClassPair,32) * self, ...)          {}

    explicit int HashSet(ClassClassPair,32)(StandardOut)
    (const HashSet(ClassClassPair,32) * self, ...)    {}


    explicit int HashSet(ClassClassPair,32)(FileIn)
    (HashSet(ClassClassPair,32) * self, ...)          {}

    explicit int HashSet(ClassClassPair,32)(FileOut)
    (const HashSet(ClassClassPair,32) * self, ...)    {}
    #endif // 0 CLASS_NAMES_TOO_LONG_FOR_ME

    typedef HashTable(Class,Class,SizeType)(32)aSizeType;


    noexcept static cstring aTable(TypeInfo)(const Object *);

    noexcept static bool aTable(IsUnion)(const Object *, const Object *);

    noexcept static Object * aTable(IsAdapter)(const Object *) ;


    static Interface aTable(Interface)(void);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*             central area (singleton interface)            */
    #ifndef ADAPTERTABLESINGLETON
    #define ADAPTERTABLESINGLETON 1 // true

    volatile static struct aTable * volatile atable = 0;//singleton

        #include                     "adapter.h"//

        static cstring () (*type_info)(const Object *)
            = & aTable(TypeInfo);
        static bool () (*is_union)(const Object *, const Object *)
            = & aTable(IsUnion);//in type_info.h
        static Object * (*is_adapter)(const Object *)
            = & aTable(IsAdapter);//in type_info.h

        #include                     "friend.h"//
        #define union(flag) AdapterTable(Union)(flag)

        static bool   iPush(Interface);
        static Interface  iPop(void);              /// is_union
        static const Interface * iTop(void);
        static size_t           iHeight(void);///is_adapter
        static int              iPrint(void);
        #include               "iStk.h"

    #endif//ADAPTERTABLESINGLETON
    /*         OOP in C or OOC is now 99% defined here          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         implement                         */
    volatile volatile volatile typedef struct aTable ///(Adapter C)
    {   HashTable(Class,Class,32)base; //
    }AdapterTable, aTable;

    /**+---------------------------------+
     * @brief aTable interface           |
     * +---------------------------------+
     *///TERTIARY (SINGLETON) INTERFACE (FACTORY C)
    volatile volatile typedef struct aTable (VirtualTable)
    {   HashTable(Class,Class,VirtualTable)(32)base;

        except bool () (*insert)( volatile aTable * volatile,
            Class, Class );

        except Class * (*search)( volatile aTable * volatile,
            Class );

        bool () (*remove)( volatile aTable * volatile, Class );

    }AdapterTable (VirtualTable), aTable (VirtualTable);


    volatile typedef struct aTable (FactoryTable)
    {   struct class (FactoryTable)base;// = {0,0,0}
    #if 0
        AdapterTable(Helper) (*operator [])( aTable *, aSizeType );// = 0
    #endif // 0
    }AdapterTable (FactoryTable), aTable (FactoryTable);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                      prototypes                           */
    static volatile aTable * volatile AdapterTable(Init)

        ( volatile aTable * volatile, ... );

    static void AdapterTable(Dtor)( volatile aTable * volatile );


    static cstring AdapterTable(Type)(void);

    explicit cstring AdapterTable(Type)(void){return"AdapterTable";}


    static bool AdapterTable(Insert)

        ( volatile aTable * volatile, Class, Class );


    static Class * AdapterTable(Search)

        ( volatile aTable * volatile, Class ) ;


    static bool AdapterTable(Remove)

        ( volatile aTable * volatile, Class ) ;


    void AdapterTable(Constructor)(void)attribute((constructor));

    void AdapterTable(Destructor)(void)attribute((destructor));


    static volatile aTable * volatile AdapterTable(Allocator)

        ( volatile aTable * volatile * volatile, aSizeType );


    static volatile void AdapterTable(Deallocator)

        ( volatile aTable * volatile * volatile ) ;


    static int printAdapterTable (AdapterTable *);

    static int aTableTesting(AdapterTable *) ;

                                                                //string
    static int AdapterTable(StandardOut)(AdapterTable *);//char *

    static int AdapterTable(FileOut)(AdapterTable *);//File *

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;     ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                  declare static interface                 */
    static AdapterTable(VirtualTable)

        AdapterTable(Interface) =
    {
      {
        {
          {
            {
              &AdapterTable(Type),//
                                                //
              &AdapterTable(Init),//initArray
                                                //
              &AdapterTable(Dtor)
            },
            &Pair(Class,Class)(Vector)(Copy),

            &ClassClassPairQuadraticProbeInsert(32),

            &ClassClassPairQuadraticProbeRemove(32),

            &ClassClassPairQuadraticProbeQProbe(32),

            &Pair(Class,Class)(Vector)(Size),

            &Pair(Class,Class)(Vector)(Begin)
          },
          &ClassClassPairHashSetResize(32),

          &Pair(Class,Class)(Vector)(Replace),

          &Pair(Class,Class)(Vector)(Clear),
            //
          &Pair(Class,Class)(Vector)(Front),

          &Pair(Class,Class)(Vector)(Back),

          &Pair(Class,Class)(Vector)(Max),

          &Pair(Class,Class)(Vector)(End)
        },
        &ClassClassPairQuadraticProbeQProbe(32),

        &findPrime(32)
      },
      &AdapterTable(Insert),

      &AdapterTable(Search),

      &AdapterTable(Remove)                     //#22
    };
    static Constructor typename(Ctor)(AdapterTable);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*              finish any previous definitions              */

    typedef void (*(*Unistructor)(cstring, ...))(Object *, ...);

        static Unistructor AdapterTable(Union)(bool);

    explicit Interface aTable(Interface)(void)
    {
        if( iTop() )
        { Interface i = iPop();
          if(!i){ throw( new(NullPointer) )
          (this, "NullInterface") ; } return i; }
        else{ throw( new(NullPointer) )
        (this, "EmptyInterfaceStack"); }   }

    #include     "type_info.h"
    #include     "Observer.h"
    #include     "Observable.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if FACTORYTABLESINGLETON

    static void AdapterTable(Setup) (void);

    static void AdapterTable(Abort) (void);


    static Virtual  /**Table(Name, Pos, Default)**/

        AdapterTable(VirtualHeap)[eighteen] = /**CLASS VIRTUAL TABLE TABLE**/
    {/**A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z**/
        { "at",               6,      &ClassClassPairQuadraticProbeQProbe(32) ,
        "Pair(Class,Class)*(*)(const HashSet(Pair(Class,Class),32)*,...)"       },
        { "back",             13,     &Vector(ClassClassPair)(Back)        ,
        "Pair(Class,Class)*(*)(Vector(Pair(Class,Class))*)"                     },
        { "begin",            8,      &Vector(ClassClassPair)(Begin)       ,
        "Iterator(Pair(Class,Class))*(*)(const Vector(Pair(Class,Class))*)"     },
        { "clear",            11,     &Vector(ClassClassPair)(Clear)       ,
        "bool()(*)(Vector(Pair(Class,Class))*)"                                 },
        { "copy",             3,      &Vector(ClassClassPair)(Copy)         ,
        "bool()(*)(Vector(Pair(Class,Class))*,...)"                             },
        { "dtor",             2,      &AdapterTable(Dtor)                    ,
        "void(*)(AdapterTable*)"                                                },
        { "end",              15,     &Vector(ClassClassPair)(End)           ,
        "Iterator(Pair(Class,Class))*(*)(const Vector(Pair(Class,Class))*)"     },
        { "findsize",         17,     &findPrime(32)                        ,
        "uint32_t()(*)(uint32_t)"                                               },
        { "front",            12,     &Vector(ClassClassPair)(Front)          ,
        "Pair(Class,Class)*(*)(Vector(Pair(Class,Class))*)"                     },
        { "init",             1,      &AdapterTable(Init)                     ,
        "AdapterTable*(*)(AdapterTable*,...)"                                   },
        { "insert",           4,      &ClassClassPairQuadraticProbeInsert(32) ,
        "bool()(*)(HashSet(Pair(Class,Class),32)*,...)"                         },
        { "max",              14,     &Vector(ClassClassPair)(Max)          ,
        "aSizeType(*)(const Vector(Pair(Class,Class))*)"                        },
        { "remove",           5,      &ClassClassPairQuadraticProbeRemove(32) ,
        "bool()(*)(HashSet(Pair(Class,Class),32)*,...)"                         },
        { "replace",          10,     &Vector(ClassClassPair)(Replace)        ,
        "bool()(*)(Vector(Pair(Class,Class))*,aSizeType,...)"                   },
        { "resize",           9,      &HashSet(ClassClassPair,32)(Resize)    ,
        "bool()(*)(Vector(Pair(Class,Class))*,aSizeType)"                       },
        { "search",           16,     &ClassClassPairQuadraticProbeQProbe(32) ,
        "Pair(Class,Class) * (*)(const HashSet(Pair(Class,Class),32)*,...)"     },
        { "size",             7,      &Vector(ClassClassPair)(Size)        ,
        "aSizeType(*)(const Vector(Pair(Class,Class))*)"                        },
        { "type",             0,      &AdapterTable(Type)                  ,
        "cstring(*)()"                                                          },

        { "", 0, 0, "" }
    };static Virtual *
    typename(SubFactoryMethod)(AdapterTable,Virtual,Virtual,0,17);


    static struct class(VirtualHeap)

        AdapterTable(Virtual) =

    { &class(VirtualHeap)(Type), &AdapterTable(VirtualSearch), AdapterTable(VirtualHeap) };


    static Complex  /**Table( Name, Pos, Bytes, Type )**/

        AdapterTable(ComplexHeap)[four] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "array",       0,     sizeof(void*),      "Pair(Class,Class)*"           },
        { "hash",        3,     sizeof(void*),      "uint32_t()(*)(uint32_t,...)"  },
        { "length",      1,     sizeof(aSizeType),  "aSizeType"                    },
        { "maxsize",     2,     sizeof(aSizeType),  "aSizeType"                    },

        { "", 0, 0, "" }
    };static Complex *
    typename(SubFactoryMethod)(AdapterTable,Complex,Complex,0,3);


    static struct class(ComplexHeap)

        AdapterTable(Complex) =

    { &class(ComplexHeap)(Type), &AdapterTable(ComplexSearch), AdapterTable(ComplexHeap) };


    static Polymorph  /**Table( Name, Offset, Offset )**/

        AdapterTable(PolymorphHeap)[four] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "Container",                                  0,              0, "" },
        { "HashSet(Pair(Class,Class),32)",              0,              0, "" },
        { "Vector(Pair(Class,Class))",                  0,              0, "" },
        { "class",                                      0,              0, "" },
        /** THESE OFFSETS ARE IMPORTANT FOR WHEN THE
            OBJECT IS ADJACENT TO ANOTHER ON A STACK
               (TO SUPPORT MULTIPLE INHERITANCE)**/
        { "", 0, 0, "" }
    };static Polymorph *
    typename(SubFactoryMethod)(AdapterTable,Polymorph,Polymorph,0,3);


    static struct class(PolymorphHeap)

        AdapterTable(Polymorph) =

    { &class(PolymorphHeap)(Type),

      &AdapterTable(PolymorphSearch),

       AdapterTable(PolymorphHeap) };


    static AdapterTable(FactoryTable)

        AdapterTable(Factory) =

    { { &class(FactoryTable)(Type), &AdapterTable(Ctor), 0 } , };


    static int printAdapterTable(AdapterTable *);

    static struct class(ConsoleTable)

        AdapterTable(Console) =

    { &class(ConsoleTable)(Type), 0, &printAdapterTable };


    static int AdapterTable(StandardOut)(AdapterTable *);//char *

    static struct class(StandardTable)

        AdapterTable(Standard) =

    { &class(StandardTable)(Type), 0, &AdapterTable(StandardOut) };


    static int AdapterTable(FileOut)(AdapterTable *);//File *

    static struct class(FileTable)

        AdapterTable(File) =

    { &class(FileTable)(Type), 0, &AdapterTable(FileOut) };


    volatile static struct class(SingletonTable)

        AdapterTable(Singleton) =

    { &class(SingletonTable)(Type), 0, &AdapterTable(Interface) };


    static cstring typename(PassNumber)(AdapterTable, Security);

    /*extern struct pass(SecurityHeap)

        AdapterTable(Security) ;*/

    static struct pass(SecurityHeap)

        AdapterTable(Security) =

    { { & pass(SecurityHeap)(Type), 0,

        0 /*AdapterTable(InterfaceHeap)*/ },

        & AdapterTable(Security)(ID), 0 } ;


    static Interface AdapterTable

        (InterfaceHeap)[ten] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &AdapterTable(Interface), //AdapterTable

        &AdapterTable(Complex),   //class(...)

        &AdapterTable(Console),   //class(...)   ...

        &AdapterTable(Factory),

        &AdapterTable(File),

        &AdapterTable(Polymorph),

        &AdapterTable(Singleton),///FACTORY TABLE ACCESS

        &AdapterTable(Standard),

        &AdapterTable(Virtual),  // ...

        &AdapterTable(Security),  //0x...

        nullptr

    } ;
    static Interface
    typename(ClassFactoryMethod)(AdapterTable,0,9);


    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // FACTORYTABLESINGLETON
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;     ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*      declare additional interface regs and regs list      */

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief           adapter table initializer                *
     *        same as Vector or HashSet initializer cases        *
     *                                                           *
     *               - -   (singleton pattern)   - -             *
     *                                                           *
     *   - - the implementations of these functions may be - -   *
     *   - - ruled out in favor of a function with a case - -    *
     * - - similar to a control() call but the FactoryObject - - *
     * - - version, one where the base initializer is called - - *
     *       - -  once, making a control call itself (DONE). - - *
     *                                                           *
     * @return                adapter table                      *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    implement functions                    */
    explicit volatile aTable * volatile AdapterTable(Init)

        ( volatile aTable * volatile self, ... )

    { /*if( !self ){ return 0; } */

      if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        self = ClassClassPairHashSetInit(32)(self);

      (*Flags[0]) = false ;

      return self; }  //

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief             aTable destructor                      *
     *  - - re-implement this to also remove from the vtable - - *
     *   - - otherwise coupling between adapter-and-object - -   *
     * - - is destroyed and no more working adapters (maybe) - - *
     * - - that would need to include the factory table for - -  *
     *  - - dynamic re-initialization of interfaces (also) - -   *
     *                                                           *
     * @param                  aTable                            *
     * @return                  void                             *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*            call base (vector) destructor here             */
    explicit volatile void AdapterTable(Dtor)

        ( volatile aTable * volatile self )

    { ClassClassPairVectorDtor( self ); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief add adapter to atable, assign self (friend) pointer.*
     *    - - container for anything that would consider  - -    *
     *   - - using a self pointer data member can have its - -   *
     *  - - self pointer data member stored here responsibly- -  *
     *                                                           *
     * @param               aTable (self)                        *
     *                                                           *
     * @param   address of: adapter object                       *
     *                                                           *
     * @param   address of: object adaptee                       *
     *                                                           *
     * @return  true or false for operation success/failure      *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit bool AdapterTable(Insert)

        ( volatile aTable * volatile self, Class adpt, Class objt )

    { if( !objt ){ throw(new(NullPointer))
                    (this, "NullObject"); }

      Pair(Class,Class) pair = { adpt, objt };

      return ((ContainerVirtualTable*) & AdapterTable(Interface))

        ->insert( self, pair ); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief   ask the atable what object is assigned           *
     *                      to the adapter                       *
     * @param                  aTable                            *
     * @param   address of: adapter object                       *
     * @return                 Class                             *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    except explicit Class * AdapterTable(Search)

        ( volatile aTable * volatile self, Class adpt )

    { Pair(Class, Class) pair = { adpt, 0 },

      * p = ((Container(VirtualTable)*) & AdapterTable(Interface))

        ->at( self, pair );

      if( p ){ return &p->val; } else { throw( new(NotFound) )
                        (this, "NotAnAdapter",typeid(adpt)); } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        remove an adapter from aTable               *
     *     - - container for anything that would consider - -    *
     *   - - using a self pointer data member can have its  - -  *
     *  - - self pointer data member stored here responsibly - - *
     * @param                 aTable                             *
     * @param   address of: adapter object                       *
     * @param   address of: object adaptee                       *
     * @return    true if removed from data structure            *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit bool AdapterTable(Remove)

        ( volatile aTable * volatile self, Class adpt )

    { Pair(Class, Class) pair = { adpt, 0 };

      if( !((Container(VirtualTable)*) & AdapterTable(Interface))

        ->remove( self, pair ) ) {}

      if( vStackFlag ){ aStackFlag = true; }
      else{ ClassClassPairQuadraticProbe32ResizeHelper( self ); }

        }

    /* note: helper as too not need to declare the atable in vTable.h
     */
    explicit Object * _(atable)(){return atable;}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief              get instance of aTable                *
     * X *redefine macro default_prime for choice of table size* *
     *   - - (for __attribute__((constructor)) function) - -     *
     * @param             address of atable                      *
     * @return      new aTable if no existing one                *
     * - - consider atable as the only pointer passed here - -   *
     *                  - - for singleton - -                    *
     * - - if another pointer is declared and used for this - -  *
     *   - - function then it will cease being a singleton - -   *
     *- - but the pointer atable will still be of significance- -*
     *- - as what pointer is used for its singleton operations- -*
     *            - - (see: central area in file) - -            *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*       redefine default prime to alter starting size       */
    explicit volatile aTable * volatile AdapterTable(Allocator)

        ( volatile aTable * volatile * volatile pself, aSizeType size )

    { if( *pself != 0 )
      { return *pself; }

        *pself = (aTable*)allocate(sizeof(aTable));
        if( *pself == 0 )
        { return 0; }

          *pself = AdapterTable(Init)(*pself, 0, size);//
          if( *pself == 0 )
          { return 0; }
            return *pself; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief      destroy/destruct instance of aTable           *
     *     - - ( for __attribute__((destructor)) function ) - -  *
     * @param             address of vtable                      *
     * @return     void                                          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void AdapterTable(Deallocator)

        ( volatile aTable * volatile * volatile pself )

    { if(*pself == 0){return;}

      AdapterTable(Dtor)(*pself); deallocate(*pself); *pself = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief             print aTable (x-macro)                 *
     *      - - easy function to check what is allocated - -     *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineAdapterTablePrint(Type, Print, End, Object)\
    \
     static int AdapterTable(Type##Out) ( AdapterTable * );\
    \
     explicit int AdapterTable(Type##Out) ( AdapterTable * self )\
    \
     { if( default(0) ){ default(0) = false; }\
    \
        Object ;\
        default(24) = true;\
        register size_t retval = 0;\
    \
         retval += Print "\n" End;\
         size_t i = 0, i2 = 0, i3 = 0, count = 0, colCount = 0;\
         for(i2 = 0; i2 < ((Vector(ClassClassPair)*)\
            self)->maxsize; i2++)\
        {if(((Vector(ClassClassPair)*)\
                self)->array[i2].key != nullptr)\
            {count++;retval += Print "0x%x     ", ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].key End;\
    \
    \
                    if( ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].key <= 0xff ) \
                    {retval += Print " " End ;}\
                    if( ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].key <= 0xfff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].key <= 0xffff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].key <= 0xfffff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].key <= 0xffffff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].key <= 0xfffffff ) \
                    {retval += Print " " End;}\
    \
    \
                    retval += Print "0x%x     ", ((Vector\
                    (ClassClassPair)*)\
                    self)->array[i2].val End;\
    \
    \
            }else{retval += Print "0x0            " End;}\
    \
            retval += Print "\n" End;\
    \
        }\
    \
        retval += Print "\n\n" End;\
    \
        retval += Print "maxsize:  %d\n",\
               ((Vector(ClassClassPair)*)\
            self)->maxsize End;/*//*/\
        retval += Print "length:   %d\n",\
               ((Vector(ClassClassPair)*)\
            self)->length End;/*//*/\
    \
        retval += Print "\n\n" End;\
        default(24) = false;\
        return retval;}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief             print aTable (console)                 *
     *                        - - ... - -                        *
     *      - - easy function to check what is allocated - -     *
     *                                                           *
     *  note: this is the debuggable version just swap 0 for 1   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0 // 1 DEBUG
    explicit int printAdapterTable( AdapterTable * self )

     { if( default(0) ){ default(0) = false; }
        register size_t retval = 0;

         retval += printf("\n");
         size_t i = 0, i2 = 0, i3 = 0, count = 0;
         for(i2 = 0; i2 < ((Vector(ClassClassPair)*)
            self)->maxsize; i2++) //
        {if(((Vector(ClassClassPair)*)
                self)->array[i2].key != nullptr)
            { count++; retval += printf("0x%x     ", ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].key);


                    if( ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].key <= 0xff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].key <= 0xfff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].key <= 0xffff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].key <= 0xfffff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].key <= 0xffffff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].key <= 0xfffffff )
                    {retval += printf(" ");}

                    printf("0x%x     ", ((Vector
                    (ClassClassPair)*)
                    self)->array[i2].val);


            }else{retval += printf("0x0            \n");}//\t

            retval += printf("\n");

        }

        retval += printf("\n\n");

        retval += printf( "maxsize:  %d\n",
               ((Vector(ClassClassPair)*)
            self)->maxsize );/*//*/
        retval += printf( "length:   %d\n",
               ((Vector(ClassClassPair)*)
            self)->length );/*//*/

        retval += printf("\n\n");

        return retval;
    }
    #else

     typename(AdapterTablePrint)
     (Console,
         _cPrint(), cEnd(),
     ) ;
    #endif // DEBUG

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief           print aTable (standard)                  *
     *                        - - ... - -                        *
     *      - - easy function to check what is allocated - -     *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

     typename(AdapterTablePrint)
     (Standard,
         _sPrint(str), sEnd(),

         string str = ConsoleOut(String) ;
     ) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief              print aTable (file)                   *
     *                        - - ... - -                        *
     *      - - easy function to check what is allocated - -     *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

     typename(AdapterTablePrint)
     (File,
         _fPrint(file), fEnd(),

         File * file = ConsoleOut(Object) ;
     ) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - - everything should be good to go (11/06/2022).

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                    \ /
             ________        __      __   - * -      __
            /\___  __\      /\ \    /\ \   / \      /\ \
         ___\/__/\ \_/  ___ \ \ \___\ \ \    ___    \ \ \___
        / __`\  \ \ \  / __`\\ \  __`\ \ \  / __`\   \ \  __`\
       /\ \/\.\_ \ \ \/\ \/\.\_ \ \/\ \ \ \/\  __/_  _\ \ \/\ \
       \ \___/\_\ \ \_\ \___/\_\ \____/\ \_\ \_____\/\_\ \_\ \_\
        \/__/\/_/  \/_/\/__/\/_/\/___/  \/_/\/_____/\/_/\/_/\/_/

                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                           //CWP
#endif // ATABLE_H_INCLUDED
