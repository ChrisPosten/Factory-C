//#ifdef FACTORYTABLESINGLETON
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
[ 2 ]diploma;
#endif // TAG

    #ifndef BUILDER_H_INCLUDED
    #define BUILDER_H_INCLUDED
    /**
    ... SINCE ITS THAT WAY,

    ITS EASIER TO CREATE A NON-ADAPTER COPY OF THE ORIGINAL OBJECT

    WHEN THE ORIGINAL OBJECT IS AN ADAPTER. SO WHEN THAT HAPPENS

    THATS WHEN AN ADAPTER WOULD BE CONSIDERED TO HAVE LIVED ITS

    LIFE AND SUCCEEDED BY PURPOSE. THERE WILL BE NO NEED TO BRANCH

    AWAY FROM (IMPLEMENTED) STRUCTURED DATATYPES TOWARDS ANYTHING

    LIKE A COMPLEX DATATYPE GIVEN THE SUCCESS OF THE ADAPTER PATTERN.


    THERE WILL BE ROOM FOR A SMALL CLASS BUILDER ANYWAYS, FOR A

    COMPLEX RUNTIME DATATYPE...
    **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*          C BUILDER (FACTORY TABLE CLASS BUILDER)          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**|| THE FACTORY C CLASS BUILDER (INTERFACE HEAP BUILDER)|| *
     *                                                           *
     *             by Willy (09/11/2022)(10/16/2022)             *
     *                      (10/24/2022)(10/30/2022)             *
     *                      (11/12/2022)(12/14/2022)             *
     *                      (12/20/2022)(12/26/2022)             *
     * ||                   (12/28/2022)(01/12/2023)          || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*          C BUILDER (FACTORY TABLE CLASS BUILDER)          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Reason(s) to use:                                 *
     *                                                           *
     *   1)  this is an indirect extension of the factory table, *
     *       implemented to be the part of the factory table     *
     *       thats used to add new data types to the factory     *
     *       table at runtime as an interface heap builder.      *
     *                                                           *
     *   2)  because of extrenuating circumstances, a class      *
     *       can be aborted from the factory table after being   *
     *       used to copy a builder heap for a runtime complex   *
     *       that does not use its compile-time structs.         *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          builder                          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                   builder                          *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          builder                          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
      #if 1
        #define _class(Member)_class ## Member
        #define _classBuilder(Member)_classBuilder ## Member

        # define Builder(Member)Builder ## Member
        # define classBuilder(Member)classBuilder ## Member

        # define classbuilder(member)classbuilder ## member

       # define passTable(Member)passTable ## Member
            # define passTable(Member)passTable ## Member

       # define classTable(Member)classTable ## Member
            # define classTable(Member)classTable ## Member

       # define builderTable(Member)builderTable ## Member
        # define builderHeap(Member)builderHeap ## Member

      #endif // 0
        /* note: use extreme caution when handling the builder
         */
    # define FactoryTableBuilder(Member)FactoryTableBuilder##Member
        static cstring          class(Builder)(ID)();
        static cstring  FactoryTable (Builder)(Type)();
        volatile typedef struct class(Builder)
        {   struct class type;/*FactoryTable(Builder)*/
                /// /// /// /// /// /// /// /// /// ///
                volatile fTable * volatile self       ;//[0]
                /// /// /// /// /// /// /// /// /// ///
                volatile aTable * volatile btable;     //[1]
                /// /// /// /// /// /// /// /// /// ///
        }FactoryTable(Builder), class(Builder);
    explicit cstring FactoryTable(Builder)(Type)()
        {return          "___CLASS_BUILDER___";}///(Factory C)
        volatile static string * volatile Builder(Pass) = nullptr;
        explicit cstring class(Builder)(ID)()//
        { if( !(Builder(Pass)) ){Builder(Pass) = new(string)(this, 11);
          ItoaHex( *Builder(Pass), &Builder(Pass) ); }
            return (*Builder(Pass)) ; }//

    #define               ___CLASS_BUILDER___
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT; ABORT; METHOD;             STRUCT; ABORT; METHOD;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        typedef struct class(Builder)(VirtualTable)
        {   struct class(VirtualTable) type;          //[0-2]
            void/// /// /// /// /// /// /// /// /// ///
                (*abort)(FactoryTable(Builder)*,/*case, */...);//[3]//+
                /// /// /// /// /// /// /// /// /// ///
        }FactoryTable(Builder)(VirtualTable),
            class(Builder)(VirtualTable);
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT; ABORT; METHOD;             STRUCT; ABORT; METHOD;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static FactoryTable(Builder) * class(Builder)//
        (Init)(FactoryTable(Builder) *, ...);//

        static void class(Builder)
        (Dtor)(FactoryTable(Builder) *);//


        static int printHeap( const Interface * );

        static int printBuilderHeap( const Container * );

    #if 0
        static int class(Builder)(Print)();
    #endif // 0
    #if 1 // 0 NO
       # define Map(Member)Map ## Member
        static Security * Map(KeySearch)( cstring );

        static Security *
        (*Map(Keys)) (cstring) = & Map(KeySearch) ;
    #endif // MULTIMAP_H_REQUIRES 1

        static Interface () (*class(Builder)(Build)
            (cstring))(size_t, ...);

          static Interface () class(Table)(Init)(size_t, ...);

          static Interface () pass(Table)(Init)(size_t, ...);

          static Interface () builder(Heap)(Init)(size_t, ...);


        static void class(Builder)(Demolish)(Interface) ;


        static cstring class(Builder)(Helper)
            (cstring, size_t *);


        static size_t class(Builder)(Bytes)(cstring);

    static Iterator * class(Builder)(Iterator)(Interface) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                  central area (singleton)                 */
        static Interface () (*(*build)(cstring))(size_t, ...)
            = class(Builder)(Build);

        static void (*demolish)(Interface) = class(Builder)(Demolish);

    #define           int_id(reg) \
    \
        ( ((typePtr*)reg)[0]()[0] != '0' ? \
         ((typePtr*)reg)[0]() : ((typePtr*)reg)[3]() )

    #define           bytes(typeid) \
    \
        class(Builder)(Bytes)(typeid) //size_t bytes = bytes(typeid) ;
    /*
                    - build(int_id(reg))(reg)

                    - demolish(reg)

                    - int_id(reg)

                    - bytes(obj)

                    - volatile(class)

                    - class(builder)(insert)(...)

                    - class(builder)(search)(...)

                    - class(builder)(remove)(...)

                    - class(builder)(is_builder)(...)

                    - class(builder)(typeid)(...)

                    these are the builder helpers used
                    in class.h (by the class builder multimap)
     */
        noexcept static cstring class(builder)
        (is_builder)(const Interface);

        noexcept static cstring class(builder)
        (typeid)( const Object * );

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                virtual table object complex               */
        static Object * volatile(Init)(Object *, ...);

        static void volatile(Dtor)(Object *);
    #if 0
        static cstring volatile(Type)();
    #endif // DEFINED_IN_STRUCTCLASS_H
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*               factory table class complex                 */
        static Interface volatile(ClassFactoryMethod) ( cstring );

        static factPtr class(Builder)(TemplateOverload)( cstring );

        static Info * volatile(SubFactoryMethod) ( cstring );

        static ctorPtr volatile(Ctor)();//instance allocator

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                   for complex/builder                     */
        static cstring volatile(PassType)();
        /* note: this method is to flag for reg[4]
         *///UNUSED
        explicit cstring volatile(PassType)(){return"pass";}//at reg[4]

        static cstring volatile(BuilderType)();
        /* note: this method is to flag for the btable
         *///UNUSED
        explicit cstring volatile(BuilderType)(){return"complex";}

    /* note: this string is used to assign a class to the
             volatile ctor function below. this is for a
             fully dynamic instance of an object, including
             byte size amount allocated being dynamic.

             if this string is used for more than 1 thing like
             it is, then it might need to be replaced by a stack,
             it currently does not need to be replaced.
     */
    volatile static cstring volatile volatile(class) = "";//stack? no

        /* note: this string, like the one found inside Adapter/union.h
                 is just used for copying from.
         */
        static const char class(Builder)(Array)[] = "builder";

        /* note: this is a jimmy rig for a class information
                 table row, meant to substitute for there being
                 another overload or something for template types.
                 (all 9 or so).
         */
    typedef struct class(Rig){void*key,*val,*col,*end;}class(Rig);

        /* note: this will be for when the class builder multimap
                 uses the build ctor.
         */
        volatile static bool class(Builder)(Flag) = false;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static FactoryTable(Builder)(VirtualTable)
               class(Builder)(Interface) =

        {  {
                & FactoryTable(Builder)(Type),
                & class(Builder)(Init),
                & class(Builder)(Dtor)
           },
           0  } ;

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief the builder heaps                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #include "../Template/defineHeap.h"//for the builder heaps
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*              builder templates pt.I (start)               */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Interface                                         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
#if 1/*                        Interface                         */
   # define InterfaceHeap(Member)InterfaceHeap ## Member
    #define InterfaceHeapNode(Member)InterfaceHeapNode ## Member

   # define pInterfaceHeapNode(Member)pInterfaceHeapNode ## Member

   # define pInterfaceHeapNodeN(Member)\
        pInterfaceHeapNodeN ## Member

    #define pInterfaceHeapNodeIter(Member)\
        pInterfaceHeapNodeIter ## Member

    #define pInterfaceHeapNodeStk(Member)\
        pInterfaceHeapNodeStk ## Member

    typename(Heap)///Class Interface Heap
    (Interface,
        /// /// /// ///
        string(equal)( ((typePtr*)(*pnode)->info)[0](),
                    ((typePtr*)info)[0]() ),
        /// /// /// ///
        string(greater)( ((typePtr*)(*pnode)->info)[0](),
                    ((typePtr*)info)[0]() ),
        /// /// /// ///
        typename(HeapNode)(Interface) ;
    ) ;
    #if 1
        explicit int Heap(Interface)(ConsoleIn)
        (Heap(Interface) * self, ...)           {}
        explicit int Heap(Interface)(ConsoleOut)
        (const Heap(Interface) * self, ...)     {}

        explicit int Heap(Interface)(StandardIn)
        (Heap(Interface) * self, ...)           {}
        explicit int Heap(Interface)(StandardOut)
        (const Heap(Interface) * self, ...)     {}

        explicit int Heap(Interface)(FileIn)
        (Heap(Interface) * self, ...)           {}
        explicit int Heap(Interface)(FileOut)
        (const Heap(Interface) * self, ...)     {}


        explicit int Iter(pHeapNode(Interface))(ConsoleOut)
        (const Iter(pHeapNode(Interface)) * self, ...)     {}

        explicit int Iter(pHeapNode(Interface))(StandardOut)
        (const Iter(pHeapNode(Interface)) * self, ...)     {}

        explicit int Iter(pHeapNode(Interface))(FileOut)
        (const Iter(pHeapNode(Interface)) * self, ...)     {}


        explicit int Stk(pHeapNode(Interface))(ConsoleIn)
        (Stk(pHeapNode(Interface)) * self, ...)           {}
        explicit int Stk(pHeapNode(Interface))(ConsoleOut)
        (const Stk(pHeapNode(Interface)) * self, ...)     {}

        explicit int Stk(pHeapNode(Interface))(StandardIn)
        (Stk(pHeapNode(Interface)) * self, ...)           {}
        explicit int Stk(pHeapNode(Interface))(StandardOut)
        (const Stk(pHeapNode(Interface)) * self, ...)     {}

        explicit int Stk(pHeapNode(Interface))(FileIn)
        (Stk(pHeapNode(Interface)) * self, ...)           {}
        explicit int Stk(pHeapNode(Interface))(FileOut)
        (const Stk(pHeapNode(Interface)) * self, ...)     {}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Interface)
    (CopyFromArray)( Heap(Interface) *, Interface * );

    static void HeapNode(Interface)
    (InterfaceDestroy)( HeapNode(Interface) * * );

    static void Heap(Interface)
    (InterfaceDtor)( Heap(Interface) * );

    #define InterfaceHeapIterator(Member)\
        InterfaceHeapIterator ## Member
    typename(HeapIterator)(Interface, );

    # define InterfaceArrayIterator(Member)\
        InterfaceArrayIterator ## Member
    typename(ArrayIterator)(Interface,
        typename(ArrayIteratorInterface)(Interface));
#endif // 0 DEBUG_INSIDE_DEFINEHEAP_H
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Strategy                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         Strategy                          */
   # define StrategyHeap(Member)StrategyHeap ## Member
    #define StrategyHeapNode(Member)StrategyHeapNode ## Member

   # define pStrategyHeapNode(Member)pStrategyHeapNode ## Member

   # define pStrategyHeapNodeN(Member)\
        pStrategyHeapNodeN ## Member

    #define pStrategyHeapNodeIter(Member)\
        pStrategyHeapNodeIter ## Member

    #define pStrategyHeapNodeStk(Member)\
        pStrategyHeapNodeStk ## Member

    typename(Heap)///Class Interface Heap Sub Heaps              #1
    (Strategy,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Strategy
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),
                      (info.key) ),
        /// /// /// ///
        typename(HeapNode)(Strategy);///Overload Heap
    ) ;
    #if 1
        explicit int Heap(Strategy)(ConsoleIn)
        (Heap(Strategy) * self, ...)            {}
        explicit int Heap(Strategy)(ConsoleOut)
        (const Heap(Strategy) * self, ...)      {}

        explicit int Heap(Strategy)(StandardIn)
        (Heap(Strategy) * self, ...){}
        explicit int Heap(Strategy)(StandardOut)
        (const Heap(Strategy) * self, ...){}

        explicit int Heap(Strategy)(FileIn)
        (Heap(Strategy) * self, ...){}
        explicit int Heap(Strategy)(FileOut)
        (const Heap(Strategy) * self, ...){}


        explicit int Iter(pHeapNode(Strategy))(ConsoleOut)
        (const Iter(pHeapNode(Strategy)) * self, ...){}

        explicit int Iter(pHeapNode(Strategy))(StandardOut)
        (const Iter(pHeapNode(Strategy)) * self, ...){}

        explicit int Iter(pHeapNode(Strategy))(FileOut)
        (const Iter(pHeapNode(Strategy)) * self, ...){}


        explicit int Stk(pHeapNode(Strategy))(ConsoleIn)
        (Stk(pHeapNode(Strategy)) * self, ...){}
        explicit int Stk(pHeapNode(Strategy))(ConsoleOut)
        (const Stk(pHeapNode(Strategy)) * self, ...){}

        explicit int Stk(pHeapNode(Strategy))(StandardIn)
        (Stk(pHeapNode(Strategy)) * self, ...){}
        explicit int Stk(pHeapNode(Strategy))(StandardOut)
        (const Stk(pHeapNode(Strategy)) * self, ...){}

        explicit int Stk(pHeapNode(Strategy))(FileIn)
        (Stk(pHeapNode(Strategy)) * self, ...){}
        explicit int Stk(pHeapNode(Strategy))(FileOut)
        (const Stk(pHeapNode(Strategy)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Strategy)
    (CopyFromArray)( Heap(Strategy) *, Strategy * );

    static void HeapNode(Strategy)
    (StrategyDestroy)( HeapNode(Strategy) * * );

    static void Heap(Strategy)
    (StrategyDtor)( Heap(Strategy) * );

    #define StrategyHeapIterator(Member)\
        StrategyHeapIterator ## Member
    typename(HeapIterator)(Strategy, &);

    # define StrategyArrayIterator(Member)\
        StrategyArrayIterator ## Member
    typename(ArrayIterator)(Strategy,
        typename(ArrayIteratorInfo)(Strategy));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Polymorph                                         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         Polymorph                         */
   # define PolymorphHeap(Member)PolymorphHeap ## Member
    #define PolymorphHeapNode(Member)PolymorphHeapNode ## Member

   # define pPolymorphHeapNode(Member)pPolymorphHeapNode ## Member

   # define pPolymorphHeapNodeN(Member)\
        pPolymorphHeapNodeN ## Member

    #define pPolymorphHeapNodeIter(Member)\
        pPolymorphHeapNodeIter ## Member

    #define pPolymorphHeapNodeStk(Member)\
        pPolymorphHeapNodeStk ## Member

    typename(Heap)                                ///            #2
    (Polymorph,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Polymorph
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),
                     (info.key) ),
        /// /// /// ///
        typename(HeapNode)(Polymorph);///Inheritance Heap
    ) ;
    #if 1
        explicit int Heap(Polymorph)(ConsoleIn)
        (Heap(Polymorph) * self, ...){}
        explicit int Heap(Polymorph)(ConsoleOut)
        (const Heap(Polymorph) * self, ...){}

        explicit int Heap(Polymorph)(StandardIn)
        (Heap(Polymorph) * self, ...){}
        explicit int Heap(Polymorph)(StandardOut)
        (const Heap(Polymorph) * self, ...){}

        explicit int Heap(Polymorph)(FileIn)
        (Heap(Polymorph) * self, ...){}
        explicit int Heap(Polymorph)(FileOut)
        (const Heap(Polymorph) * self, ...){}


        explicit int Iter(pHeapNode(Polymorph))(ConsoleOut)
        (const Iter(pHeapNode(Polymorph)) * self, ...){}

        explicit int Iter(pHeapNode(Polymorph))(StandardOut)
        (const Iter(pHeapNode(Polymorph)) * self, ...){}

        explicit int Iter(pHeapNode(Polymorph))(FileOut)
        (const Iter(pHeapNode(Polymorph)) * self, ...){}


        explicit int Stk(pHeapNode(Polymorph))(ConsoleIn)
        (Stk(pHeapNode(Polymorph)) * self, ...){}
        explicit int Stk(pHeapNode(Polymorph))(ConsoleOut)
        (const Stk(pHeapNode(Polymorph)) * self, ...){}

        explicit int Stk(pHeapNode(Polymorph))(StandardIn)
        (Stk(pHeapNode(Polymorph)) * self, ...){}
        explicit int Stk(pHeapNode(Polymorph))(StandardOut)
        (const Stk(pHeapNode(Polymorph)) * self, ...){}

        explicit int Stk(pHeapNode(Polymorph))(FileIn)
        (Stk(pHeapNode(Polymorph)) * self, ...){}
        explicit int Stk(pHeapNode(Polymorph))(FileOut)
        (const Stk(pHeapNode(Polymorph)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Polymorph)
    (CopyFromArray)( Heap(Polymorph) *, Polymorph * );

    static void HeapNode(Polymorph)
    (PolymorphDestroy)( HeapNode(Polymorph) * * );

    static void Heap(Polymorph)
    (PolymorphDtor)( Heap(Polymorph) * );

    #define PolymorphHeapIterator(Member)\
        PolymorphHeapIterator ## Member
    typename(HeapIterator)(Polymorph,&);

    # define PolymorphArrayIterator(Member)\
        PolymorphArrayIterator ## Member
    typename(ArrayIterator)(Polymorph,
        typename(ArrayIteratorInfo)(Polymorph));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Virtual                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         Virtual                           */
   # define VirtualHeap(Member)VirtualHeap ## Member
    #define VirtualHeapNode(Member)VirtualHeapNode ## Member

   # define pVirtualHeapNode(Member)pVirtualHeapNode ## Member

   # define pVirtualHeapNodeN(Member)\
        pVirtualHeapNodeN ## Member

    #define pVirtualHeapNodeIter(Member)\
        pVirtualHeapNodeIter ## Member

    #define pVirtualHeapNodeStk(Member)\
        pVirtualHeapNodeStk ## Member

    typename(Heap)                               ///             #3
    (Virtual,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Virtual
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),
                     (info.key) ),
        /// /// /// ///
        typename(HeapNode)(Virtual);///Interface Method Heap
    ) ;
    #if 1
        explicit int Heap(Virtual)(ConsoleIn)
        (Heap(Virtual) * self, ...){}
        explicit int Heap(Virtual)(ConsoleOut)
        (const Heap(Virtual) * self, ...){}

        explicit int Heap(Virtual)(StandardIn)
        (Heap(Virtual) * self, ...){}
        explicit int Heap(Virtual)(StandardOut)
        (const Heap(Virtual) * self, ...){}

        explicit int Heap(Virtual)(FileIn)
        (Heap(Virtual) * self, ...){}
        explicit int Heap(Virtual)(FileOut)
        (const Heap(Virtual) * self, ...){}


        explicit int Iter(pHeapNode(Virtual))(ConsoleOut)
        (const Iter(pHeapNode(Virtual)) * self, ...){}

        explicit int Iter(pHeapNode(Virtual))(StandardOut)
        (const Iter(pHeapNode(Virtual)) * self, ...){}

        explicit int Iter(pHeapNode(Virtual))(FileOut)
        (const Iter(pHeapNode(Virtual)) * self, ...){}


        explicit int Stk(pHeapNode(Virtual))(ConsoleIn)
        (Stk(pHeapNode(Virtual)) * self, ...){}
        explicit int Stk(pHeapNode(Virtual))(ConsoleOut)
        (const Stk(pHeapNode(Virtual)) * self, ...){}

        explicit int Stk(pHeapNode(Virtual))(StandardIn)
        (Stk(pHeapNode(Virtual)) * self, ...){}
        explicit int Stk(pHeapNode(Virtual))(StandardOut)
        (const Stk(pHeapNode(Virtual)) * self, ...){}

        explicit int Stk(pHeapNode(Virtual))(FileIn)
        (Stk(pHeapNode(Virtual)) * self, ...){}
        explicit int Stk(pHeapNode(Virtual))(FileOut)
        (const Stk(pHeapNode(Virtual)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Virtual)
    (CopyFromArray)( Heap(Virtual) *, Virtual * );

    static void HeapNode(Virtual)
    (VirtualDestroy)( HeapNode(Virtual) * * );

    static void Heap(Virtual)
    (VirtualDtor)( Heap(Virtual) * );

    #define VirtualHeapIterator(Member)\
        VirtualHeapIterator ## Member
    typename(HeapIterator)(Virtual,  &);

    # define VirtualArrayIterator(Member)\
        VirtualArrayIterator ## Member
    typename(ArrayIterator)(Virtual,
        typename(ArrayIteratorInfo)(Virtual));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Complex                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         Complex                           */
   # define ComplexHeap(Member)ComplexHeap ## Member
    #define ComplexHeapNode(Member)ComplexHeapNode ## Member

   # define pComplexHeapNode(Member)pComplexHeapNode ## Member

   # define pComplexHeapNodeN(Member)\
        pComplexHeapNodeN ## Member

    #define pComplexHeapNodeIter(Member)\
        pComplexHeapNodeIter ## Member

    #define pComplexHeapNodeStk(Member)\
        pComplexHeapNodeStk ## Member

    typename(Heap)                               ///             #4
    (Complex,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Complex
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),
                     (info.key) ),
        /// /// /// ///
        typename(HeapNode)(Complex);///DataMember Heap
    ) ;
    #if 1
        explicit int Heap(Complex)(ConsoleIn)
        (Heap(Complex) * self, ...){}
        explicit int Heap(Complex)(ConsoleOut)
        (const Heap(Complex) * self, ...){}

        explicit int Heap(Complex)(StandardIn)
        (Heap(Complex) * self, ...){}
        explicit int Heap(Complex)(StandardOut)
        (const Heap(Complex) * self, ...){}

        explicit int Heap(Complex)(FileIn)
        (Heap(Complex) * self, ...){}
        explicit int Heap(Complex)(FileOut)
        (const Heap(Complex) * self, ...){}


        explicit int Iter(pHeapNode(Complex))(ConsoleOut)
        (const Iter(pHeapNode(Complex)) * self, ...){}

        explicit int Iter(pHeapNode(Complex))(StandardOut)
        (const Iter(pHeapNode(Complex)) * self, ...){}

        explicit int Iter(pHeapNode(Complex))(FileOut)
        (const Iter(pHeapNode(Complex)) * self, ...){}


        explicit int Stk(pHeapNode(Complex))(ConsoleIn)
        (Stk(pHeapNode(Complex)) * self, ...){}
        explicit int Stk(pHeapNode(Complex))(ConsoleOut)
        (const Stk(pHeapNode(Complex)) * self, ...){}

        explicit int Stk(pHeapNode(Complex))(StandardIn)
        (Stk(pHeapNode(Complex)) * self, ...){}
        explicit int Stk(pHeapNode(Complex))(StandardOut)
        (const Stk(pHeapNode(Complex)) * self, ...){}

        explicit int Stk(pHeapNode(Complex))(FileIn)
        (Stk(pHeapNode(Complex)) * self, ...){}
        explicit int Stk(pHeapNode(Complex))(FileOut)
        (const Stk(pHeapNode(Complex)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Complex)
    (CopyFromArray)( Heap(Complex) *, Complex * );

    static void HeapNode(Complex)
    (ComplexDestroy)( HeapNode(Complex) * * );

    static void Heap(Complex)
    (ComplexDtor)( Heap(Complex) * );

    #define ComplexHeapIterator(Member)\
        ComplexHeapIterator ## Member
    typename(HeapIterator)(Complex,  &);

    # define ComplexArrayIterator(Member)\
        ComplexArrayIterator ## Member
    typename(ArrayIterator)(Complex,
        typename(ArrayIteratorInfo)(Complex));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Control                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          Control                          */
   # define ControlHeap(Member)ControlHeap ## Member
    #define ControlHeapNode(Member)ControlHeapNode ## Member

   # define pControlHeapNode(Member)pControlHeapNode ## Member

   # define pControlHeapNodeN(Member)\
        pControlHeapNodeN ## Member

    #define pControlHeapNodeIter(Member)\
        pControlHeapNodeIter ## Member

    #define pControlHeapNodeStk(Member)\
        pControlHeapNodeStk ## Member

    typename(Heap)                               ///             #5
    (Control,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Control
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),
                     (info.key) ),
        /// /// /// ///
        typename(HeapNode)(Control);///Command Heap
    ) ;
    #if 1
        explicit int Heap(Control)(ConsoleIn)
        (Heap(Control) * self, ...){}
        explicit int Heap(Control)(ConsoleOut)
        (const Heap(Control) * self, ...){}

        explicit int Heap(Control)(StandardIn)
        (Heap(Control) * self, ...){}
        explicit int Heap(Control)(StandardOut)
        (const Heap(Control) * self, ...){}

        explicit int Heap(Control)(FileIn)
        (Heap(Control) * self, ...){}
        explicit int Heap(Control)(FileOut)
        (const Heap(Control) * self, ...){}


        explicit int Iter(pHeapNode(Control))(ConsoleOut)
        (const Iter(pHeapNode(Control)) * self, ...){}

        explicit int Iter(pHeapNode(Control))(StandardOut)
        (const Iter(pHeapNode(Control)) * self, ...){}

        explicit int Iter(pHeapNode(Control))(FileOut)
        (const Iter(pHeapNode(Control)) * self, ...){}


        explicit int Stk(pHeapNode(Control))(ConsoleIn)
        (Stk(pHeapNode(Control)) * self, ...){}
        explicit int Stk(pHeapNode(Control))(ConsoleOut)
        (const Stk(pHeapNode(Control)) * self, ...){}

        explicit int Stk(pHeapNode(Control))(StandardIn)
        (Stk(pHeapNode(Control)) * self, ...){}
        explicit int Stk(pHeapNode(Control))(StandardOut)
        (const Stk(pHeapNode(Control)) * self, ...){}

        explicit int Stk(pHeapNode(Control))(FileIn)
        (Stk(pHeapNode(Control)) * self, ...){}
        explicit int Stk(pHeapNode(Control))(FileOut)
        (const Stk(pHeapNode(Control)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Control)
    (CopyFromArray)( Heap(Control) *, Control * );

    static void HeapNode(Control)
    (ControlDestroy)( HeapNode(Control) * * );

    static void Heap(Control)
    (ControlDtor)( Heap(Control) * );

    #define ControlHeapIterator(Member)\
        ControlHeapIterator ## Member
    typename(HeapIterator)(Control,  &);

    # define ControlArrayIterator(Member)\
        ControlArrayIterator ## Member
    typename(ArrayIterator)(Control,
        typename(ArrayIteratorInfo)(Control));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Builder                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          Builder                          */
   # define BuilderHeap(Member)BuilderHeap ## Member
    #define BuilderHeapNode(Member)BuilderHeapNode ## Member

   # define pBuilderHeapNode(Member)pBuilderHeapNode ## Member

   # define pBuilderHeapNodeN(Member)\
        pBuilderHeapNodeN ## Member

    #define pBuilderHeapNodeIter(Member)\
        pBuilderHeapNodeIter ## Member

    #define pBuilderHeapNodeStk(Member)\
        pBuilderHeapNodeStk ## Member

    typename(Heap)                               ///             #6
    (Builder,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Builder
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),
                     (info.key) ),
        /// /// /// ///
        typename(HeapNode)(Builder);///FactoryFunction Heap
    ) ;
    #if 1
        explicit int Heap(Builder)(ConsoleIn)
        (Heap(Builder) * self, ...){}
        explicit int Heap(Builder)(ConsoleOut)
        (const Heap(Builder) * self, ...){}

        explicit int Heap(Builder)(StandardIn)
        (Heap(Builder) * self, ...){}
        explicit int Heap(Builder)(StandardOut)
        (const Heap(Builder) * self, ...){}

        explicit int Heap(Builder)(FileIn)
        (Heap(Builder) * self, ...){}
        explicit int Heap(Builder)(FileOut)
        (const Heap(Builder) * self, ...){}


        explicit int Iter(pHeapNode(Builder))(ConsoleOut)
        (const Iter(pHeapNode(Builder)) * self, ...){}

        explicit int Iter(pHeapNode(Builder))(StandardOut)
        (const Iter(pHeapNode(Builder)) * self, ...){}

        explicit int Iter(pHeapNode(Builder))(FileOut)
        (const Iter(pHeapNode(Builder)) * self, ...){}


        explicit int Stk(pHeapNode(Builder))(ConsoleIn)
        (Stk(pHeapNode(Builder)) * self, ...){}
        explicit int Stk(pHeapNode(Builder))(ConsoleOut)
        (const Stk(pHeapNode(Builder)) * self, ...){}

        explicit int Stk(pHeapNode(Builder))(StandardIn)
        (Stk(pHeapNode(Builder)) * self, ...){}
        explicit int Stk(pHeapNode(Builder))(StandardOut)
        (const Stk(pHeapNode(Builder)) * self, ...){}

        explicit int Stk(pHeapNode(Builder))(FileIn)
        (Stk(pHeapNode(Builder)) * self, ...){}
        explicit int Stk(pHeapNode(Builder))(FileOut)
        (const Stk(pHeapNode(Builder)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Builder)
    (CopyFromArray)( Heap(Builder) *, Builder * );

    static void HeapNode(Builder)
    (BuilderDestroy)( HeapNode(Builder) * * );

    static void Heap(Builder)
    (BuilderDtor)( Heap(Builder) * );

    #define BuilderHeapIterator(Member)\
        BuilderHeapIterator ## Member
    typename(HeapIterator)(Builder,  &);

    # define BuilderArrayIterator(Member)\
        BuilderArrayIterator ## Member
    typename(ArrayIterator)(Builder,
        typename(ArrayIteratorInfo)(Builder));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Security                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         Security                          */
   # define SecurityHeap(Member)SecurityHeap ## Member
    #define SecurityHeapNode(Member)SecurityHeapNode ## Member

   # define pSecurityHeapNode(Member)pSecurityHeapNode ## Member

   # define pSecurityHeapNodeN(Member)\
        pSecurityHeapNodeN ## Member

    #define pSecurityHeapNodeIter(Member)\
        pSecurityHeapNodeIter ## Member

    #define pSecurityHeapNodeStk(Member)\
        pSecurityHeapNodeStk ## Member

    typename(Heap)                               ///             #7
    (Security,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Security
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),//+Restrict Dynamic
                     (info.key) ),//+Conditional Statements
        /// /// /// ///
        typename(HeapNode)(Security);/// Key Set Heap
    ) ;
    #if 1
        explicit int Heap(Security)(ConsoleIn)
        (Heap(Security) * self, ...){}
        explicit int Heap(Security)(ConsoleOut)
        (const Heap(Security) * self, ...){}

        explicit int Heap(Security)(StandardIn)
        (Heap(Security) * self, ...){}
        explicit int Heap(Security)(StandardOut)
        (const Heap(Security) * self, ...){}

        explicit int Heap(Security)(FileIn)
        (Heap(Security) * self, ...){}
        explicit int Heap(Security)(FileOut)
        (const Heap(Security) * self, ...){}


        explicit int Iter(pHeapNode(Security))(ConsoleOut)
        (const Iter(pHeapNode(Security)) * self, ...){}

        explicit int Iter(pHeapNode(Security))(StandardOut)
        (const Iter(pHeapNode(Security)) * self, ...){}

        explicit int Iter(pHeapNode(Security))(FileOut)
        (const Iter(pHeapNode(Security)) * self, ...){}


        explicit int Stk(pHeapNode(Security))(ConsoleIn)
        (Stk(pHeapNode(Security)) * self, ...){}
        explicit int Stk(pHeapNode(Security))(ConsoleOut)
        (const Stk(pHeapNode(Security)) * self, ...){}

        explicit int Stk(pHeapNode(Security))(StandardIn)
        (Stk(pHeapNode(Security)) * self, ...){}
        explicit int Stk(pHeapNode(Security))(StandardOut)
        (const Stk(pHeapNode(Security)) * self, ...){}

        explicit int Stk(pHeapNode(Security))(FileIn)
        (Stk(pHeapNode(Security)) * self, ...){}
        explicit int Stk(pHeapNode(Security))(FileOut)
        (const Stk(pHeapNode(Security)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Security)
    (CopyFromArray)( Heap(Security) *, Security * );

    static void HeapNode(Security)
    (SecurityDestroy)( HeapNode(Security) * * );

    static void Heap(Security)
    (SecurityDtor)( Heap(Security) * );

    #define SecurityHeapIterator(Member)\
        SecurityHeapIterator ## Member
    typename(HeapIterator)(Security, &);

    # define SecurityArrayIterator(Member)\
        SecurityArrayIterator ## Member
    typename(ArrayIterator)(Security,
        typename(ArrayIteratorInfo)(Security));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Adapter                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          Adapter                          */
   # define AdapterHeap(Member)AdapterHeap ## Member
    #define AdapterHeapNode(Member)AdapterHeapNode ## Member

   # define pAdapterHeapNode(Member)pAdapterHeapNode ## Member

   # define pAdapterHeapNodeN(Member)\
        pAdapterHeapNodeN ## Member

    #define pAdapterHeapNodeIter(Member)\
        pAdapterHeapNodeIter ## Member

    #define pAdapterHeapNodeStk(Member)\
        pAdapterHeapNodeStk ## Member

    typename(Heap)                               ///             #8
    (Adapter,
        /// /// /// ///
        string(equal)( ((*pnode)->info.key),///Adapter
                     (info.key) ),
        /// /// /// ///
        string(greater)( ((*pnode)->info.key),
                     (info.key) ),
        /// /// /// ///
        typename(HeapNode)(Adapter);///Type Info Table
    ) ;//
    #if 1
        explicit int Heap(Adapter)(ConsoleIn)
        (Heap(Adapter) * self, ...){}
        explicit int Heap(Adapter)(ConsoleOut)
        (const Heap(Adapter) * self, ...){}

        explicit int Heap(Adapter)(StandardIn)
        (Heap(Adapter) * self, ...){}
        explicit int Heap(Adapter)(StandardOut)
        (const Heap(Adapter) * self, ...){}

        explicit int Heap(Adapter)(FileIn)
        (Heap(Adapter) * self, ...){}
        explicit int Heap(Adapter)(FileOut)
        (const Heap(Adapter) * self, ...){}


        explicit int Iter(pHeapNode(Adapter))(ConsoleOut)
        (const Iter(pHeapNode(Adapter)) * self, ...){}

        explicit int Iter(pHeapNode(Adapter))(StandardOut)
        (const Iter(pHeapNode(Adapter)) * self, ...){}

        explicit int Iter(pHeapNode(Adapter))(FileOut)
        (const Iter(pHeapNode(Adapter)) * self, ...){}


        explicit int Stk(pHeapNode(Adapter))(ConsoleIn)
        (Stk(pHeapNode(Adapter)) * self, ...){}
        explicit int Stk(pHeapNode(Adapter))(ConsoleOut)
        (const Stk(pHeapNode(Adapter)) * self, ...){}

        explicit int Stk(pHeapNode(Adapter))(StandardIn)
        (Stk(pHeapNode(Adapter)) * self, ...){}
        explicit int Stk(pHeapNode(Adapter))(StandardOut)
        (const Stk(pHeapNode(Adapter)) * self, ...){}

        explicit int Stk(pHeapNode(Adapter))(FileIn)
        (Stk(pHeapNode(Adapter)) * self, ...){}
        explicit int Stk(pHeapNode(Adapter))(FileOut)
        (const Stk(pHeapNode(Adapter)) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    static void Heap(Adapter)
    (CopyFromArray)( Heap(Adapter) *, Adapter * );

    static void HeapNode(Adapter)
    (AdapterDestroy)( HeapNode(Adapter) * * );

    static void Heap(Adapter)
    (AdapterDtor)( Heap(Adapter) * );

    #define AdapterHeapIterator(Member)\
        AdapterHeapIterator ## Member
    typename(HeapIterator)(Adapter,  &);

    # define AdapterArrayIterator(Member)\
        AdapterArrayIterator ## Member
    typename(ArrayIterator)(Adapter,
        typename(ArrayIteratorInfo)(Adapter));

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*               builder templates pt.I (end)                */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                factory table class complex                */
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*     volatile search goes in factory table slot    */
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         * @brief    volatile class factory method           *
         *                                                   *
         * i cant remember what this was for but i knew that *
         * there was room for it and so i implemented it. it *
         * was meant for where the factory table needs one   *
         * class factory method for all of them or something *
         * that was anyways volatile. so here is the volatile*
         * class factory method. if i find a reason to use   *
         * this i can remember, then i will make a note of   *
         * it here.                                          *
         *                                                   *
         * (fits in the same place as class factory method,  *
         * only 100% dynamic and volatile).                  *
         *                                                   *
         * this might be required by the builder and if it   *
         * is, then so is/are volatile sub-factory method(s).*
         *                                                   *
         * just load the volatile class factory method up    *
         * with a container and let it rip (gets a stack).   *
         *                                                   *
         * this has been reimplemented and uses two new stacks*
         * holding all the responsibility of a builder complex*
         * for multimap()()()().                             *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /* note:

            volatile class factory method comes with volatile
            sub factory method, you cannot have builder sub heaps
            without a builder class factory method this way,
            so its implemented, ...

            "(pass)" wont suffice as the
            typeid for an interface, neither will a volatile
            object. there could still be arrays of those hook
            functions ready to be assigned as pass number hooks
            for typeids for interfaces, etc, but there will be
            an implementation limit. maybe another table a
            miracle table like the btable can be allocated.

            so my conclusion is, only a struct class can have
            passnumbers, or you still have to implement the
            pass number hooks for your classes at compile time.
            until another level of using passnumbers is used
            this level of using them for the interface typeids
            has an implementation limit.

            use the passnumber from the structclass, the
            builder heaps will just have to forfeit their
            information hiding when it comes to using a
            securitytable for their registration list. using
            the proper typeid then. pass(SecurityHeap)

            come to think of it, i could probably implement
            multimap to do everything anyways, just use the
            sub heaps for loads of pass numbers, using runtime
            objects for strings that are what is searched
            with... use strategy heaps for that many pass numbers

            the builder(FactoryMethod) does have a pointer to
            its container in it, so the pass number table is
            not needed anymore.

            i think i just decided that multimap is where
            or what has the responsibility of at least pushing
            things, with pops for heap and sub factory interface
            type (heap and type) inside the volatile factory
            methods, the pushes inside multimap, so:



            multimap:



            - - checks to see if (reg) is a part of the multimap
                heap set, and if its class or builder.

            - - search with map("") for... only if builder
                factory method, i think it might create more
                problems to move everything,... the multimap
                needs to use both class or builder and not
                look for builder when you want class.

            - - i think that using the class factory method
                to support the sub-factory method catches just
                the right case for when we do want builder(Heaps)
                to be searched for instead of class(Heaps)

            - - so we have a multi-responsibility sub/class factory
                method(s) that are volatile, they take the builder
                responsibility with them, so when not used, we
                can use our compile-time struct classes with their
                singleton class factory methods for them (us) (good).

            - - good to go (12/12/2022).
         */
        explicit Interface volatile(ClassFactoryMethod)( cstring key )

        {if( !key ){ throw(new(NullPointer))
            (this, "NullInterfaceTypeID"); }

            Object * heap = hPop();
            if( heap == 0 ){throw(new(NullPointer))
            (this, "NullMapContainer");}

            cstring str = tPop();
                if( !str ){throw(new(NullPointer))
                (this, "NullTypeID");}

         Interface volatile(iterator)[3]={&volatile(Type),0,0};

         Interface * p ; // heap

         cstring type = key;

            /* note: skip past class,pass,builder
             */
            while(type[0]!='(' && type[0]!='\0'){type++;}
            /* * * * * * * * * * * * * * * * * * */
            class(FactoryMethod) * method1 = primary("multimap");

            Interface p1 = method1->search
            ("class(SecurityHeap)");

            if(!p1){throw(new(NullPointer))
                (this, "SecuritySetNotFound");}
            /* * * * * * * * * * * * * * * * * * */
            Security * security = nullptr;

            if( type[0]!='\0' )
            {
                security = ((methPtr*)p1)[1]( type );
            }
              /* note:

                see if in heapset and "class(Heap)" because if true
                then change to builder(Heap) that you are looking
                for because we want dynamic and non-dynamic to
                blend together. this will search for the interface
                as a builder(Heap) interface and push the heap
                container and type for the template only if you
                have asked for a sub-factory method. otherwise
                that and the next map wont get pushed either while
                the flag gets popped and deaccumulated. i think i
                like this way, it will work i believe, so i don't
                want to move more into multimap, just that if...
                maybe it should be moved, i will observe everything
                until i decide what to do, to push both in here
                or move its responsibility to multimap... (its good)
               */
              if( security && key[0] == 'c' && key[1] == 'l'
                && key[2] == 'a' && key[3] == 's' && key[4] == 's' )
              {

                size_t size = string(size)(type) + 7;

                /* * * * * * * * * * * * * * * * * * */
                class(FactoryMethod) * method2 = primary("struct(Bunker)");

                void ** p2 = method2->search
                ("class(SingletonTable)");

                if(!p2){throw(new(NullPointer))
                (this, "StructBunkerNotFound");}

                struct(Bunker) **
                struct(bunker) = &((objtPtr*)(p2))[1] ;
                /* * * * * * * * * * * * * * * * * * */
                string * strg = (string*)VirtualTable(Interface).insert(
                           (*struct(bunker))->stable, vstk,
                           allocate(sizeof(string)), & string(Interface),
                           & string(Init) )(this, size);
                /* * * * * * * * * * * * * * * * * * */

                size_t i ;
                for( i = 0 ; i < 7 ; i ++ )
                {
                    (*strg)[i] = class(Builder)(Array)[i];
                }
                size_t k = 0;
                for( ; i < size ; i ++ )
                {
                    (*strg)[i] = type[k]; k++;
                }
                volatile(type) = (*strg);//

                /* note: look for builder(Heap) if it was class(Heap)
                 *       entered.
                 */
                p = Heap(Interface)(Search)
                ( heap, volatile(iterator) );

                deaccumulate(strg);
              }
              else
              {
                /* note: this pop and check are for if
                 *       the vto interface is a utility
                 *       in the interface heap.
                 *
                 *       if you entered "class" into the
                 *       class factory method it will
                 *       retrieve the vto interface anyways
                 *       (so you can enter the typeid
                 *       like with a struct class or both)
                 *       (for builder classes).
                 */
                /*cstring str = tPop();
                if( !str ){throw(new(NullPointer))
                    (this, "NullTypeID");}*/

                if( string(equal)( str, key ) )
                {
                    volatile(type) = "class";//builder default type
                }
                else
                {
                    volatile(type) = key;// "class" or typeid(obj) good
                }

                /* note: we were looking for builder anyways so
                 *       just use the key entered into the sub
                 *       factory method.
                 *
                 *       this also catches the case of a/the vto
                 *       interface and class(Tables) that arent
                 *       found inside the multimap security set
                 *       for sub factory methods.
                 */
                p = Heap(Interface)(Search)
                ( heap, volatile(iterator) );
              }
                           /*(if true for multimap)*/
            if( p ){ if( fTop() ){if( *fTop() ){if( **fTop() ){

              if(security)
              { if( (*p)[1] != & volatile(SubFactoryMethod) )
                { throw(new(IllegalOperation))
                (this, "NotConfiguredFor:BuilderComplex\n"
              "need:\t\t volatile(SubFactoryMethod)"); }
              }


              if( !hPush( ((objtPtr*)(*p))[2] ) )//<-- push container
                { throw( new(OutOfMemory) )
                (this, "HeapStackFailure"); }

              if( !tPush( ((typePtr*)(*p))[0]() ) )///<-- push interface typeid
                { throw( new(OutOfMemory) )
                (this, "TypeIDStackFailure"); }


              }}} return ((*p)) ; } else { return 0; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief   overload for the volatile sub factory method.    *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static Strategy
            class(Builder)(TemplateHeap)[thirteen] =
       /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        {{"(AdapterHeap)",        &Heap(Adapter)(Interface)},
         {"(BasicsHeap)",         &Heap(Strategy)(Interface)},//#v
         {"(BuilderHeap)",        &Heap(Builder)(Interface)},
         {"(ComplexHeap)",        &Heap(Complex)(Interface)},
         {"(ControlHeap)",        &Heap(Control)(Interface)},
         {"(FactoryHeap)",        &Heap(Security)(Interface)},///#v
         {"(LibraryHeap)",        &Heap(Strategy)(Interface)},//#v
         {"(OverloadHeap)",       &Heap(Strategy)(Interface)},//#v
         {"(PolymorphHeap)",      &Heap(Polymorph)(Interface)},
         {"(SecurityHeap)",       &Heap(Security)(Interface)},///#1
         {"(StrategyHeap)",       &Heap(Strategy)(Interface)},//#1
         {"(TemplateHeap)",       &Heap(Strategy)(Interface)},//#v
         {"(VirtualHeap)",        &Heap(Virtual)(Interface)},
         {"",0}} ;//builder legend: v = variant
        static Strategy *
        typename(SubFactoryMethod)(class(Builder),Strategy,Template,0,12);

        static struct class(TemplateHeap)
            class(Builder)(Template) =

            { &class(TemplateHeap)(Type),
            & class(Builder)(TemplateSearch),
            class(Builder)(TemplateHeap) } ;

        static Strategy *
            (*class(Builder)(Templates))(cstring) =
            & class(Builder)(TemplateSearch) ;

        explicit factPtr class(Builder)(TemplateOverload)( cstring type )

        {
        /* * * * * * * * * * * * * * * * * * */
        class(FactoryMethod) * method1 = primary("class(Builder)");

        Interface p1 = method1->search
            ("class(TemplateHeap)");

        if(!p1){throw(new(NullPointer))
        (this, "TemplateHeapNotFound");}
        /* * * * * * * * * * * * * * * * * * */
            Strategy * strategy = ((methPtr*)p1)[1](type);
            if( !strategy ){ throw(new(NotFound))
                          (this, "NotImplemented", type); }
            else { return ((Interface*)strategy)[1][6]; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         * @brief    volatile sub factory method             *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit Info * volatile(SubFactoryMethod)( cstring key )

        {if( !key ){ throw(new(NullPointer))
            (this, "NullInfoTypeID"); }

            Object * heap = hPop();
            if( heap == 0 ){throw(new(NullPointer))
            (this, "NullMapContainer");}//<--pop container

         cstring type = tPop();///<---pop interface typeid
            if( type == 0 ){throw(new(NullPointer))
            (this, "NullInterfaceTypeID");}

            /* note: bump it ahead, don't forget this the same as
             *       the multimap security set by keys
             */
            while(type[0]!='(' && type[0]!='\0'){type++;}
            if(type[0]=='\0'){throw(new(EmptyString))
            (this, "NotAParenthesizedRegistrationType");}

          class(Rig) slot = {key,0,0,0};//jimmy rig

            Info * p = class(Builder)(TemplateOverload)
            ( type )( heap, slot );/*this*/
            if( p ){ return ((p)) ; } else { return 0; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

    - - UNDER CONSTRUCTION (10/31/2022).

    - - THE CLASS BUILDER IS UP AND RUNNING (12/22/2022).

    - - SEE: class.h


    - - MULTIMAP IS CONFIGURED PROPERLY TO WORK WITH A STRUCT CLASS
        THE SAME WAY AS A BUILDER CLASS, AND SO IS TYPEID. CHEERS.

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                       build strategy                      */
        static Interface () class(Table)(Init)(size_t, ...);

        static Interface () pass(Table)(Init)(size_t, ...);

        static Interface () builder(Heap)(Init)(size_t, ...);

        static Strategy

            class(Builder)(BasicsHeap)[three] =
        {
            {"builder(Heap)",   &builder(Heap)(Init)},
            {"class(Table)",    &class(Table)(Init)},
            {"pass(Table)",     &pass(Table)(Init)},

            {"",0}
        };
        static Strategy *
        typename(SubFactoryMethod)(class(Builder),Strategy,Basics,0,2);


        static struct class(BasicsHeap)
            class(Builder)(Basics) =

        { &class(BasicsHeap)(Type),
          &class(Builder)(BasicsSearch),
           class(Builder)(BasicsHeap)};

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief   overload for the class interface heap regs.      *
     *                                                           *
     *       these will be where there is an overload for        *
     *       the io needed for the interfaces themselves.        *
     *                                                           *
     *       if the interfaces have anything like their own      *
     *       classes it will be right here, as every interface   *
     *       registration has a key here.                        *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
       # define classTableClass(Member)classTableClass ## Member
        static cstring class   (Table)(Class)(Type)(void);
        typedef struct class   (Table)(Class)
        { struct class          type;// = {}
            /// /// /// /// /// /// ///
            class(VirtualTable) virt;//[0] = type, init, dtor
            /// /// /// /// /// /// ///
            class(ConsoleTable) cons;//[3] = ... (free)
            /// /// /// /// /// /// ///
            class(StandardTable)stnd;//[6] = new(String)(...)
            /// /// /// /// /// /// ///
            class(FileTable)    file;//[9] = new(File)(...)
            /// /// /// /// /// /// ///
        }class(Table) (Class);
      explicit/*THE REGISTRATION CLASS*/
        cstring class (Table)(Class)(Type)(void)
        { return "class(Table)(Class)"; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note: it makes a redefinition error to not use
             static here when trying to include another .c file.
     */
    static struct class(Table)(Class) class(Table)///#1
    (VirtualTable) = { {},{&class(VirtualTable)(Type),0,0},
    {0,0,0},{0,0,0} };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**               class(Table)(FactoryTable)                **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Interface class(FactoryTable)(Init)(Interface);

    explicit Interface class(FactoryTable)(Init)(Interface obj)
    {
    /* note: remember this needed is for allocating
     *       a complex object... this one too shows
     *       that cases like this should be made more
     *       extensible and open-closed by having
     *       separate constructors... i think i can have
     *       the best of both worlds right now and thats
     *       by (just guess) another static info heap.
     *       that is very strategic, actually i think
     *       im gonna do some planning for what i am
     *       going to further implement... (update)
     *
     *       now this is in the right place.
     */
        if( string(equal)(  ((typePtr*)obj)[0]() ,
            "class(FactoryTable)") )
        {
            obj[1] = & volatile(Ctor);//complex object
            obj[2] = 0;//& class(Helper);
        }else{throw(new(IllegalOperation))
        (this, "UnsupportedOperation");}
        return obj;
    }

    static struct class(Table)(Class) class(Table)///#2
    (FactoryTable) = { {},{&class(FactoryTable)(Type),
    &class(FactoryTable)(Init),0},
    {0,0,0},{0,0,0},{0,0,0} };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**               class(Table)(FactoryTable)                **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static struct class(Table)(Class) class(Table)///#3
    (AdapterTable) = { {},{&class(AdapterTable)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#4
    (CompareTable) = { {},{&class(CompareTable)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#5
    (ConsoleTable) = { {},{&class(ConsoleTable)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#6
    (StandardTable) = { {},{&class(StandardTable)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#7
    (FileTable) = { {},{&class(FileTable)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#8
    (StrategyHeap) = { {},{&class(StrategyHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#9
    (PolymorphHeap) = { {},{&class(PolymorphHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#10
    (VirtualHeap) = { {},{&class(VirtualHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#11
    (ComplexHeap) = { {},{&class(ComplexHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#12
    (ControlHeap) = { {},{&class(ControlHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#13
    (BuilderHeap) = { {},{&class(BuilderHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#14
    (SecurityHeap) = { {},{&class(SecurityHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#15
    (SingletonTable) = { {},{&class(SingletonTable)(Type),0,0},
    {0,0,0},{0,0,0} };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**               class(Table)(SubjectTable)                **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Interface class(SubjectTable)(Init)(Interface);

    static void class(SubjectTable)(Dtor)(Interface);

    explicit Interface class(SubjectTable)(Init)(Interface obj)
    {
    /* note: some thought about specific cases
     *       like this is that the registration
     *       interfaces should possibly be a little
     *       more object-oriented in a way that
     *       each one would have an overload case
     *       for its constructor... well... (update)
     *
     *       now this is in the right place.
     */
        if( string(equal)( ((typePtr*)obj)[0]() ,
            "class(SubjectTable)") )
        {
            if(obj[1])
            {
                ((dtorPtr*)obj[2])[2](obj[1]);
            }
            else
            {
                obj[1] = allocate(sizeof(Stk(Class)));
                if( !obj[1] ){deallocate(obj);
                throw(new(OutOfMemory))
                (this, "SubjectStackFailure");}
            }
            Stk(Class)(Interface).base.base.init(obj[1]);
            obj[2] = & Stk(Class)(Interface) ;

        }else{throw(new(IllegalOperation))
        (this, "UnsupportedOperation");}
        return obj;
    }

    explicit void class(SubjectTable)(Dtor)(Interface obj)
    {
        if( string(equal)(  ((typePtr*)obj)[0]() ,
            "class(SubjectTable)") )
        {
            ((class(VirtualTable)*)obj[2])->dtor(obj[1]);

            deallocate(obj[1]);
        }else{throw(new(IllegalOperation))
        (this, "UnsupportedOperation");}
    }

    static struct class(Table)(Class) class(Table)///#16
    (SubjectTable) = { {},{&class(SubjectTable)(Type),
    &class(SubjectTable)(Init),&class(SubjectTable)(Dtor)},
    {0,0,0},{0,0,0},{0,0,0} };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**               class(Table)(SubjectTable)                **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static struct class(Table)(Class) class(Table)///#17
    (BasicsHeap) = { {},{&class(BasicsHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#18
    (LibraryHeap) = { {},{&class(LibraryHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#19
    (FactoryHeap) = { {},{&class(FactoryHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#20
    (OverloadHeap) = { {},{&class(OverloadHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#21
    (CommandArray) = { {},{&class(CommandArray)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#22
    (FactoryArray) = { {},{&class(FactoryArray)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#23
    (TemplateHeap) = { {},{&class(TemplateHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) class(Table)///#24
    (AdapterHeap) = { {},{&class(AdapterHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) pass(Table)///#25
    (SecurityHeap) = { {},{&pass(SecurityHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#26
    (StrategyHeap) = { {},{&builder(StrategyHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#27
    (PolymorphHeap) = { {},{&builder(PolymorphHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#28
    (VirtualHeap) = { {},{&builder(VirtualHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#29
    (ComplexHeap) = { {},{&builder(ComplexHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#30
    (ControlHeap) = { {},{&builder(ControlHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#31
    (BuilderHeap) = { {},{&builder(BuilderHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#32
    (SecurityHeap) = { {},{&builder(SecurityHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#33
    (BasicsHeap) = { {},{&builder(BasicsHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#34
    (LibraryHeap) = { {},{&builder(LibraryHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#35
    (FactoryHeap) = { {},{&builder(FactoryHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#36
    (OverloadHeap) = { {},{&builder(OverloadHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#37
    (CommandArray) = { {},{&builder(CommandArray)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#38
    (FactoryArray) = { {},{&builder(FactoryArray)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#39
    (TemplateHeap) = { {},{&builder(TemplateHeap)(Type),0,0},
    {0,0,0},{0,0,0} };

    static struct class(Table)(Class) builder(Table)///#40
    (AdapterHeap) = { {},{&builder(AdapterHeap)(Type),0,0},
    {0,0,0},{0,0,0} } ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Strategy

        class(Builder)(OverloadHeap)[fourty] = // 40 - 15 = 25 built by builder
    /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/// 40 used in total
    {
      {"builder(AdapterHeap)",  &builder(Table)(AdapterHeap)},//  #9      type_info
      {"builder(BasicsHeap)",   &builder(Table)(BasicsHeap)},//         X (variants X)
      {"builder(BuilderHeap)",  &builder(Table)(BuilderHeap)},//  #6
      {"builder(CommandArray)", &builder(Table)(CommandArray)},//         (unused)
      {"builder(ComplexHeap)",  &builder(Table)(ComplexHeap)},//  #4      complex
      {"builder(ControlHeap)",  &builder(Table)(ControlHeap)},//  #5
      {"builder(FactoryArray)", &builder(Table)(FactoryArray)},//         (unused)
      {"builder(FactoryHeap)",  &builder(Table)(FactoryHeap)},//  #8      (unused)
      {"builder(LibraryHeap)",  &builder(Table)(LibraryHeap)},//        X
      {"builder(OverloadHeap)", &builder(Table)(OverloadHeap)},//       X
      {"builder(PolymorphHeap)",&builder(Table)(PolymorphHeap)},//#2      is_polymorphic
      {"builder(SecurityHeap)", &builder(Table)(SecurityHeap)},// #7
      {"builder(StrategyHeap)", &builder(Table)(StrategyHeap)},// #1
      {"builder(TemplateHeap)", &builder(Table)(TemplateHeap)},//       X
      {"builder(VirtualHeap)",  &builder(Table)(VirtualHeap)},//  #3      function, override
      {"class(AdapterHeap)",    &class(Table)(AdapterHeap)}, // builder 1
      {"class(AdapterTable)",   &class(Table)(AdapterTable)},  ///1 union
      {"class(BasicsHeap)",     &class(Table)(BasicsHeap)},//   builder 2
      {"class(BuilderHeap)",    &class(Table)(BuilderHeap)},//  builder 3
      {"class(CommandArray)",   &class(Table)(CommandArray)},// builder 4 (unused)
      {"class(CompareTable)",   &class(Table)(CompareTable)},  ///2 equal,greater
      {"class(ComplexHeap)",    &class(Table)(ComplexHeap)},//  builder 5
      {"class(ConsoleTable)",   &class(Table)(ConsoleTable)},  ///3 cin, cout
      {"class(ControlHeap)",    &class(Table)(ControlHeap)},//  builder 6
      {"class(FactoryArray)",   &class(Table)(FactoryArray)},// builder 7 (unused)
      {"class(FactoryHeap)",    &class(Table)(FactoryHeap)},//  builder 8 (unused)
      {"class(FactoryTable)",   &class(Table)(FactoryTable)},  ///4 factory
      {"class(FileTable)",      &class(Table)(FileTable)},     ///5 cin, cout
      {"class(LibraryHeap)",    &class(Table)(LibraryHeap)},//  builder 9
      {"class(OverloadHeap)",   &class(Table)(OverloadHeap)},// builder 10
      {"class(PolymorphHeap)",  &class(Table)(PolymorphHeap)},//builder 11
      {"class(SecurityHeap)",   &class(Table)(SecurityHeap)},// builder 12
      {"class(SingletonTable)", &class(Table)(SingletonTable)},///6 singleton
      {"class(StandardTable)",  &class(Table)(StandardTable)}, ///7 cin, cout
      {"class(StrategyHeap)",   &class(Table)(StrategyHeap)},// builder 13
      {"class(SubjectTable)",   &class(Table)(SubjectTable)},  ///8 auto
      {"class(TemplateHeap)",   &class(Table)(TemplateHeap)},// builder 14
      {"class(VirtualHeap)",    &class(Table)(VirtualHeap)},//  builder 15
      {"class(VirtualTable)",   &class(Table)(VirtualTable)},  ///9 def
      {"pass(SecurityHeap)",    &pass(Table)(SecurityHeap)},//  "0xf12345"
      {"",0}//15 + 25 - 1 + 1 = 40
      //builder?
    };
    static Strategy *
    typename(SubFactoryMethod)(class(Builder),Strategy,Overload,0,39);

    static struct class(OverloadHeap)
        class(Builder)(Overload) =

        { &class(OverloadHeap)(Type),
        & class(Builder)(OverloadSearch),
        class(Builder)(OverloadHeap) } ;

    static Strategy *
    (*class(Builder)(Types)) (cstring) = & class(Builder)(OverloadSearch);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Strategy
        class(Builder)(HeapIteratorHeap)[thirteen] =
    /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
    {{"(AdapterHeap)",       &HeapIterator(Adapter)(Ctor)},
    {"(BasicsHeap)",         &HeapIterator(Strategy)(Ctor)},//#v
    {"(BuilderHeap)",        &HeapIterator(Builder)(Ctor)},
    {"(ComplexHeap)",        &HeapIterator(Complex)(Ctor)},
    {"(ControlHeap)",        &HeapIterator(Control)(Ctor)},
    {"(FactoryHeap)",        &HeapIterator(Security)(Ctor)},//#v
    {"(LibraryHeap)",        &HeapIterator(Strategy)(Ctor)},//#v
    {"(OverloadHeap)",       &HeapIterator(Strategy)(Ctor)},//#v
    {"(PolymorphHeap)",      &HeapIterator(Polymorph)(Ctor)},
    {"(SecurityHeap)",       &HeapIterator(Security)(Ctor)},
    {"(StrategyHeap)",       &HeapIterator(Strategy)(Ctor)},//#1
    {"(TemplateHeap)",       &HeapIterator(Strategy)(Ctor)},//#v
    {"(VirtualHeap)",        &HeapIterator(Virtual)(Ctor)},
    {"",0}} ;//builder legend: v = variant
    static Strategy *
    typename(SubFactoryMethod)(class(Builder),Strategy,HeapIterator,0,12);

    static Strategy
        class(Builder)(ArrayIteratorHeap)[thirteen] =
    /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
    {{"(AdapterHeap)",       &ArrayIterator(Adapter)(Ctor)},
    {"(BasicsHeap)",         &ArrayIterator(Strategy)(Ctor)},//#v
    {"(BuilderHeap)",        &ArrayIterator(Builder)(Ctor)},
    {"(ComplexHeap)",        &ArrayIterator(Complex)(Ctor)},
    {"(ControlHeap)",        &ArrayIterator(Control)(Ctor)},
    {"(FactoryHeap)",        &ArrayIterator(Security)(Ctor)},//#v
    {"(LibraryHeap)",        &ArrayIterator(Strategy)(Ctor)},//#v
    {"(OverloadHeap)",       &ArrayIterator(Strategy)(Ctor)},//#v
    {"(PolymorphHeap)",      &ArrayIterator(Polymorph)(Ctor)},
    {"(SecurityHeap)",       &ArrayIterator(Security)(Ctor)},
    {"(StrategyHeap)",       &ArrayIterator(Strategy)(Ctor)},//#1
    {"(TemplateHeap)",       &ArrayIterator(Strategy)(Ctor)},//#v
    {"(VirtualHeap)",        &ArrayIterator(Virtual)(Ctor)},
    {"",0}} ;//builder legend: v = variant
    static Strategy *
    typename(SubFactoryMethod)(class(Builder),Strategy,ArrayIterator,0,12);

    static Strategy
        class(Builder)(FactoryHeap)[two] =
    {
        {"builder", &class(Builder)(HeapIteratorSearch)},
        {"class", &class(Builder)(ArrayIteratorSearch)},{"",0}
    };
    static Strategy *
    typename(SubFactoryMethod)(class(Builder),Strategy,Factory,0,1);

    static struct class(FactoryHeap)
        class(Builder)(Iterators) =

    { &class(FactoryHeap)(Type),
    & class(Builder)(FactorySearch),
     class(Builder)(FactoryHeap) } ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

    - - any new interface registrations like variants to existing
        heaps can be added here for the builder to use them. also
        there is security set and template overload for sub heaps
        that must be added for the builder or multimap to use. any
        new interface registrations can go into structclass.h using
        Object.h components (datatype casts). prototype interface
        registrations also go into Object.h

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    factory table class                    */
    static Virtual
        class(Builder)(VirtualHeap)[four] =
    /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
    {{"dtor",     2, &class(Builder)(Dtor), ""},
     {"init",     1, &class(Builder)(Init), ""},
     {"abort",    3, null, ""},
     {"type",     0, &FactoryTable(Builder)(Type), ""},{"",0,0,""}};
    static Virtual *
    typename(SubFactoryMethod)(class(Builder),Virtual,Virtual,0,3) ;


    static struct class(VirtualHeap)//#1
        class(Builder)(Virtual) =

    {&class(VirtualHeap)(Type),
     &class(Builder)(VirtualSearch),
     class(Builder)(VirtualHeap)};


    static Complex
        class(Builder)(ComplexHeap)[two] =
    /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
    {{"btable", 1, sizeof(aTable*), "aTable*"},
     {"self",   0, sizeof(fTable*), "fTable*"},{"",0,0,""} } ;;
    static Complex *
    typename(SubFactoryMethod)(class(Builder),Complex,Complex,0,1);


    static struct class(ComplexHeap)//#2
        _(class)(Builder)(Complex) =

    {&class(ComplexHeap)(Type),
    &class(Builder)(ComplexSearch),
    class(Builder)(ComplexHeap)};


    static Polymorph *
        class(Builder)(PolymorphHeap)[one] =

    { {"class", 0, 0, ""},{"",0,0,""} };;
    static Polymorph *
    typename(SubFactoryMethod)(class(Builder),Polymorph,Polymorph,0,0);


    static struct class(PolymorphHeap)//#3
        class(Builder)(Polymorph) =

    { &class(PolymorphHeap)(Type),
    &class(Builder)(PolymorphSearch),
      class(Builder)(PolymorphHeap)};


    explicit ctorPtr class(Builder)
    (Ctor)(){return new(class(Builder));}

    static struct class(FactoryTable)//#4
        class(Builder)(Factory) =
    {&class(FactoryTable)(Type),&class(Builder)(Ctor),0};


    static int class(Builder)(ConsoleOut)
    ( struct class(Builder) *, ... );

   # define printClassBuilder class(Builder)(ConsoleOut)
    static struct class(ConsoleTable)//#5
        class(Builder)(Console) =

    { &class(ConsoleTable)(Type), 0, &printClassBuilder } ;


    static int class(Builder)(StandardOut)
    ( struct class(Builder) *, ... );

    static struct class(StandardTable)//#6
        class(Builder)(Standard) =

    { &class(StandardTable)(Type), 0, & class(Builder)(StandardOut) } ;


    static int class(Builder)(FileOut)
    ( struct class(Builder) *, ... );

    static struct class(FileTable)//#7

        class(Builder)(File) =
    { &class(FileTable)(Type), 0, & class(Builder)(FileOut) } ;


    volatile static class(SingletonTable) //#8
        class(Builder)(Singleton) =

    { &class(SingletonTable)(Type), 0,
    &class(Builder)(Interface) };

   # define classBuilderSecurity(Member) classBuilderSecurity ## Member
    static cstring typename(PassNumber)(class(Builder), Security);

    /* note: when using extern it was a compile error since the
             external definition or portion was not in a .c file
             meaning there could never be another .c without it
             being redefined. on that note, ...
     */
    static struct pass(SecurityHeap)
        class(Builder)(Security) =
    { { &pass(SecurityHeap)(Type),
    0, 0/*class(Builder)(InterfaceHeap)*/},
    &class(Builder)(Security)(ID), 0 };


    static Interface class(Builder)

        (InterfaceHeap)[fourteen] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &class(Builder)(Interface), // ___CLASS_BUILDER___ #

        &class(Builder)(Basics),

        &_(class)(Builder)(Complex),

        &class(Builder)(Console),

        &class(Builder)(Iterators),

        &class(Builder)(Factory),

        &class(Builder)(File),

        &class(Builder)(Overload), ///#1) AVAILABLE REGISTRATIONS (STRATEGY TABLE)

        &class(Builder)(Polymorph),
                      //
      /*&class(Builder)(Security), ///#2) MULTIMAP SUB-FACTORY METHODS (SET)*/

        &class(Builder)(Singleton),

        &class(Builder)(Standard),
                      //
        &class(Builder)(Template), ///#3) BUILDER HEAP TEMPLATES (STRATEGY TABLE)

        &class(Builder)(Virtual),

        &class(Builder)(Security),   // pass(...)0x

        nullptr

    } ;
    static Interface
    typename(ClassFactoryMethod)(class(Builder),0,13);
    /* note: #2 and #3 both use the same set of keys

             another good compile-time heap would be a heap
             for struct classes capable of calling the struct
             abort method, so the abort table has the key to
             the builder that has the strategy heap for the
             abort codes by typeid (reglist passnumbers). good
             security-like exchange that a new compiler could
             become fortified with (when it can hide variables).

             class(AbortHeap)  -  for builder (strategy variant)

             class(AbortTable) -  for struct class
     */

    #if 0
    explicit int class(Builder)(Print)()
    {
        return class(Builder)(ConsoleOut)
        ( ((class(Builder)*)((objtPtr*)multimap(false)
        ( "class(Builder)" )
        ("class(SingletonTable)"))[1]) ); }
    #endif // 0 NOOB 1

    explicit int class(Builder)
    (ConsoleOut)( struct class(Builder) * self, ... )
    { return AdapterTable(ConsoleOut)(self->btable) ; }


    explicit int class(Builder)
    (StandardOut)( struct class(Builder) * self, ... )
    { if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        int var = AdapterTable(StandardOut)(self->btable);

      (*Flags[0]) = false;
      return var; }


    explicit int class(Builder)
    (FileOut)( struct class(Builder) * self, ... )
    { if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        int var = AdapterTable(StandardOut)(self->btable);

      (*Flags[0]) = false;
      return var; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief   functions needed for copying and destroying      *
     *                                                           *
     * - - these are last minute template implementations - -    *
     *- -only because not every Heap(type) Container needs as- - *
     *        - -a template (copying from array mostly)- -       *
     *                                                           *
     *  - - a macro can be used to substitute for all these - -  *
     *  - - implementations but not, because more than just - -  *
     * - - a data type name needs to become a parameter so - -   *
     * - - it is not as desirable as being able to see proper - -*
     *   - - code, some work could be put into developing a - -  *
     *- - syntax-based macro configuration for the definition - -*
     *- - of an implementation that saves space, controls the - -*
     * - - amount of code seen by the compiler, and makes for- - *
     * - - a more easily maintainable implementation that is - - *
     *        - - cured of things like code duplication - -      *
     * - -(a new typename macro like those in OOC/Templates)- -  *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*             builder templates pt.II (start)               */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
        static void class(Builder)(InterfaceInfo)
        ( Interface *, ... );
        explicit void class(Builder)
        (InterfaceInfo)( Interface * self, ... )
        {Stack * stack = ControlSlot[0][0] ;
            ... = stack(arg)(Address);
        }
    #endif // 0 INFO_CONSTRUCTOR_FOR_REG 0 SO NO I THINK

        explicit void Heap(Interface)
        (CopyFromArray)( Heap(Interface) * self, Interface * p )///MAIN
        {while( *p )
         {
                    /* note: assume its the vto if its not-in-heap
                     */
                    /* * * * * * * * * * * * * * * * * * */
                    class(FactoryMethod) * method1 = primary("class(Builder)");

                    Interface p1 = method1->search
                    ("class(OverloadHeap)");

                    if(!p1){throw(new(NullPointer))
                    (this, "OverloadHeapNotFound");}
                    /* * * * * * * * * * * * * * * * * * */

                    Strategy * row = ((methPtr*)p1)[1]( int_id(*p) );
                    if( !row )
                    {
                        /* note: as of right now it assumes that
                                 the interface is the def int or
                                 vto int since its not found inside
                                 the overload heap. try to full-proof
                                 this procedure with some typeid check
                                 or something... (done)(good work)
                         */
                        cstring name = tPop();
                        if( !name ){throw(new(NullPointer))
                        (this, "NullTypeID");}

                        if( !string(equal)( int_id(*p), name ) )
                        { throw(new(NotFound))
                        (this,"NotTheVTOInterface\n"
                         "also:\t\t NotARegistrationType", int_id(*p));}

                        Interface * temp_iter = p;

                        bool found = false;

                        while( *temp_iter )
                        {
                            /* note: lol this is funny this could be
                             *       placed in an overload function
                             *       like the pure registrations but
                             *       since its the vto int or def int
                             *       i think i will let it slide cuz
                             *       where are u going to go with that
                             *       being any more dynamic or reusable
                             *       or something.
                             */
                            if( string(equal)( int_id(*temp_iter),
                            "class(VirtualHeap)" ) )
                            {
                                found = true;

                                size_type bytes = 0;

                                virtual * virt = (virtual*)((tblePtr*)
                                                *temp_iter)[2] ;

                                while( !string(equal)( virt->key, "" ) )
                                {
                                    bytes += sizeof(void*);

                                    virt++;
                                }
                                Interface def = allocate(bytes);
                                if(!def){throw(new(OutOfMemory))
                                    (this, "VTOInterfaceFailure");}

                                virt = (virtual*)((tblePtr*)
                                        *temp_iter)[2] ;

                                while( !string(equal)( virt->key, "" ) )
                                {
                                    def[virt->val] = virt->col;

                                    virt++;
                                }

                                /* note: our def interface (vto) is added but
                                 *       still needs to be re-configured...
                                 *
                                 *       this is the trouble i ask for with
                                 *       aborting a struct and my answer would
                                 *       probably have to be, do the full copy
                                 *       into builder mode that includes the
                                 *       vto being added to the builder table.
                                 *
                                 *       so from here it actually looks not bad,
                                 *       just this lower-level function won't
                                 *       fully convert, that is for the class
                                 *       builder methods themselves like class
                                 *       builder register.
                                 */
                                if( !Heap(Interface)(Insert)(self, def) )
                                {throw(new(Exception))
                                (this, "HeapInsertFailure");}

                                break;
                            }
                            temp_iter++;
                        }
                        if(!found){throw(new(IllegalOperation))
                            (this, "NoVirtualHeapForVTOInterface");}

                    }else
                    {
                        Interface reg = build( int_id(*p) )(1, *p);//build

                        if( !Heap(Interface)(Insert)(self, reg) )
                        {throw(new(Exception))
                        (this, "HeapInsertFailure");}
                    }
                    p++;
         }
         if(!found){tPop();}
        }

        explicit void HeapNode(Interface)
        (InterfaceDestroy)( HeapNode(Interface) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Interface)(InterfaceDestroy)(&(*pnode)->left);
            HeapNode(Interface)(InterfaceDestroy)(&(*pnode)->right);

                    demolish( (*pnode)->info );//demolish

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Interface)
        (InterfaceDtor)( Heap(Interface) * self )
        {
            HeapNode(Interface)(InterfaceDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /* note: info ctor (class builder multimap)
         *
         * also: this used for a jimmy rig override on the unused
         *       imbalance variable inside the Heap(type) interface.
         *       (just so its a part of my template overload)
         *       but thats the biggest-last-minute mickey mouse
         *       (jimmy rig) that i do.
         */
        static void class(Builder)(StrategyInfo)///#1(SUB)
        ( Strategy *, ... );
        explicit void class(Builder)
        (StrategyInfo)( Strategy * self, ... )
        {Stack * stack = ControlSlot[0][0] ;
        Address val = stack(arg)(Address);
        self->val = val;}

        /* note: copy builder heap from array (struct abort)
         *
         * also: this is used to override Container->copy()
         */
        explicit void Heap(Strategy)
        (CopyFromArray)( Heap(Strategy) * self, Strategy * p )
        {while( !string(equal)( p->key, "" ) )
         {
                    string str = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !str ){throw(new(OutOfMemory))
                        (this, "StrategyKeyFailure");}
                    string(fill)(str, p->key);

                    Strategy slot = { str, p->val };

                    if( !Heap(Strategy)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;
         }
        }

        /* note: destructor override for the info heaps
         */
        explicit void HeapNode(Strategy)
        (StrategyDestroy)( HeapNode(Strategy) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Strategy)(StrategyDestroy)(&(*pnode)->left);
            HeapNode(Strategy)(StrategyDestroy)(&(*pnode)->right);

            deallocate( (*pnode)->info.key );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Strategy)
        (StrategyDtor)( Heap(Strategy) * self )
        {
            HeapNode(Strategy)(StrategyDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void class(Builder)(PolymorphInfo)///#2(SUB)
        ( Polymorph *, ... );
        explicit void class(Builder)
        (PolymorphInfo)( Polymorph * self, ... )
        {Stack * stack = ControlSlot[0][0] ;
        Offset val = stack(arg)(Offset);
        Offset col = stack(arg)(Offset);
        cstring end = stack(arg)(cstring);

        if( self->end ){deallocate(self->end);}
        string _end = (string)allocate(string(size)
                                        (end)) ;
        if( !_end ){throw(new(OutOfMemory))
            (this, "PolymorphEndFailure");}
        string(fill)(_end, end);

        self->val = val;
        self->col = col;
        self->end = _end;}

        explicit void Heap(Polymorph)
        (CopyFromArray)( Heap(Polymorph) * self, Polymorph * p )
        {while( !string(equal)( p->key, "" ) )
         {
                    string key = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !key ){throw(new(OutOfMemory))
                        (this, "PolymorphKeyFailure");}
                    string(fill)(key, p->key);

                    string _end = (string)allocate(string(size)
                                                   (p->end)) ;
                    if( !_end ){throw(new(OutOfMemory))
                        (this, "PolymorphEndFailure");}
                    string(fill)(_end, p->end);

                    Polymorph slot = { key, p->val, p->col, _end };

                    if( !Heap(Polymorph)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;
         }
        }

        explicit void HeapNode(Polymorph)
        (PolymorphDestroy)( HeapNode(Polymorph) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Polymorph)(PolymorphDestroy)(&(*pnode)->left);
            HeapNode(Polymorph)(PolymorphDestroy)(&(*pnode)->right);

                    deallocate( (*pnode)->info.key );
                    deallocate( (*pnode)->info.end );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Polymorph)
        (PolymorphDtor)( Heap(Polymorph) * self )
        {
            HeapNode(Polymorph)(PolymorphDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void class(Builder)(VirtualInfo)///#3(SUB)
        ( Virtual *, ... );
        explicit void class(Builder)
        (VirtualInfo)( Virtual * self, ... )
        {Stack * stack = ControlSlot[0][0] ;
        size_t val = stack(arg)(size_t);
        Address col = stack(arg)(Address);
        cstring end = stack(arg)(cstring);

        if( self->end ){deallocate(self->end);}
        string _end = (string)allocate(string(size)
                                        (end)) ;
        if( !_end ){throw(new(OutOfMemory))
            (this, "VirtualEndFailure");}
        string(fill)(_end, end);

        self->val = val;
        self->col = col;
        self->end = _end;}

        explicit void Heap(Virtual)
        (CopyFromArray)( Heap(Virtual) * self, Virtual * p )
        {while( !string(equal)( p->key, "" ) )
         {
                    string str = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !str ){throw(new(OutOfMemory))
                        (this, "VirtualKeyFailure");}
                    string(fill)(str, p->key);

                    string _end = (string)allocate(string(size)
                                                   (p->end)) ;
                    if( !_end ){throw(new(OutOfMemory))
                        (this, "VirtualEndFailure");}
                    string(fill)(_end, p->end);

                    Virtual slot = { str, p->val, p->col, _end };

                    if( !Heap(Virtual)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;}}

        explicit void HeapNode(Virtual)
        (VirtualDestroy)( HeapNode(Virtual) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Virtual)(VirtualDestroy)(&(*pnode)->left);
            HeapNode(Virtual)(VirtualDestroy)(&(*pnode)->right);

            deallocate( (*pnode)->info.key );
            deallocate( (*pnode)->info.end );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Virtual)
        (VirtualDtor)( Heap(Virtual) * self )
        {
            HeapNode(Virtual)(VirtualDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void class(Builder)(ComplexInfo)///#4(SUB)
        ( Complex *, ... );
        explicit void class(Builder)
        (ComplexInfo)( Complex * self, ... )
        {Stack * stack = ControlSlot[0][0] ;
        size_t val = stack(arg)(size_t);
        size_t col = stack(arg)(size_t);
        cstring end = stack(arg)(cstring);

        if( self->end ){deallocate(self->end);}
        string _end = (string)allocate(string(size)
                                        (end)) ;
        if( !_end ){throw(new(OutOfMemory))
            (this, "ComplexEndFailure");}
        string(fill)(_end, end);

        self->val = val;
        self->col = col;
        self->end = _end;}

        explicit void Heap(Complex)
        (CopyFromArray)( Heap(Complex) * self, Complex * p )
        {while( !string(equal)( p->key, "" ) )
         {
                    string str = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !str ){throw(new(OutOfMemory))
                        (this, "ComplexKeyFailure");}
                    string(fill)(str, p->key);

                    string _end = (string)allocate(string(size)
                                                   (p->end)) ;
                    if( !_end ){throw(new(OutOfMemory))
                        (this, "ComplexEndFailure");}
                    string(fill)(_end, p->end);

                    Complex slot = { str, p->val, p->col, _end };

                    if( !Heap(Complex)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;}}

        explicit void HeapNode(Complex)
        (ComplexDestroy)( HeapNode(Complex) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Complex)(ComplexDestroy)(&(*pnode)->left);
            HeapNode(Complex)(ComplexDestroy)(&(*pnode)->right);

            deallocate( (*pnode)->info.key );
            deallocate( (*pnode)->info.end );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Complex)
        (ComplexDtor)( Heap(Complex) * self )
        {
            HeapNode(Complex)(ComplexDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void class(Builder)(ControlInfo)///#5(SUB)
        ( Control *, ... );
        explicit void class(Builder)
        (ControlInfo)( Control * self, ... )
        {Stack * stack = ControlSlot[0][0] ;
        Command comm = stack(arg)(Command);
        self->val = comm;}

        explicit void Heap(Control)
        (CopyFromArray)( Heap(Control) * self, Control * p )///#5
        {while( !string(equal)( p->key, "" ) )
         {
                    string str = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !str ){throw(new(OutOfMemory))
                        (this, "ControlKeyFailure");}
                    string(fill)(str, p->key);

                    Control slot = { str, p->val };

                    if( !Heap(Control)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;}}

        explicit void HeapNode(Control)
        (ControlDestroy)( HeapNode(Control) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Control)(ControlDestroy)(&(*pnode)->left);
            HeapNode(Control)(ControlDestroy)(&(*pnode)->right);

            deallocate( (*pnode)->info.key );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Control)
        (ControlDtor)( Heap(Control) * self )
        {
            HeapNode(Control)(ControlDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void class(Builder)(BuilderInfo)///#6(SUB)
        ( Builder *, ... );
        explicit void class(Builder)
        (BuilderInfo)( Builder * self, ... )
        {Stack * stack = ControlSlot[0][0] ;
        Address val = stack(arg)(Address);
        Address end = stack(arg)(Address);
        self->val = val;
        self->end = end;}

        explicit void Heap(Builder)
        (CopyFromArray)( Heap(Builder) * self, Builder * p )///#6
        {while( !string(equal)( p->key, "" ) )
         {
                    string str = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !str ){throw(new(OutOfMemory))
                        (this, "BuilderKeyFailure");}
                    string(fill)(str, p->key);

                    Builder slot = { str, p->val, p->end };

                    if( !Heap(Builder)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;}}

        explicit void HeapNode(Builder)
        (BuilderDestroy)( HeapNode(Builder) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Builder)(BuilderDestroy)(&(*pnode)->left);
            HeapNode(Builder)(BuilderDestroy)(&(*pnode)->right);

            deallocate( (*pnode)->info.key );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Builder)
        (BuilderDtor)( Heap(Builder) * self )
        {
            HeapNode(Builder)(BuilderDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void class(Builder)(SecurityInfo)///#7(SUB)
        ( Security *, ... );
        explicit void class(Builder)
        (SecurityInfo)( Security * self, ... ) // put 0
        {}

        explicit void Heap(Security)
        (CopyFromArray)( Heap(Security) * self, Security * p )///#7
        {while( !string(equal)( p->key, "" ) )
         {
                    string str = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !str ){throw(new(OutOfMemory))
                        (this, "SecurityKeyFailure");}
                    string(fill)(str, p->key);

                    Security slot = { str };

                    if( !Heap(Security)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;}}

        explicit void HeapNode(Security)
        (SecurityDestroy)( HeapNode(Security) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Security)(SecurityDestroy)(&(*pnode)->left);
            HeapNode(Security)(SecurityDestroy)(&(*pnode)->right);

            deallocate( (*pnode)->info.key );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Security)
        (SecurityDtor)( Heap(Security) * self )
        {
            HeapNode(Security)(SecurityDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void class(Builder)(AdapterInfo)///#8(SUB)
        ( Adapter *, ... );
        explicit void class(Builder)
        (AdapterInfo)( Adapter * self, ... )
        { Stack * stack = ControlSlot[0][0] ;
        cstring val = stack(arg)(cstring);

        if( self->val ){deallocate(self->val);}
        string _val = (string)allocate(string(size)
                                        (val)) ;
        if( !_val ){throw(new(OutOfMemory))
            (this, "AdapterValFailure");}
        string(fill)(_val, val);

        self->val = _val;}

        explicit void Heap(Adapter)
        (CopyFromArray)( Heap(Adapter) * self, Adapter * p )///#9
        {while( !string(equal)( p->key, "" ) )
         {
                    string key = (string)allocate(string(size)
                                                  (p->key)) ;
                    if( !key ){throw(new(OutOfMemory))
                        (this, "AdapterKeyFailure");}
                    string(fill)(key, p->key);

                    string val = (string)allocate(string(size)
                                                  (p->val)) ;
                    if( !val ){throw(new(OutOfMemory))
                        (this, "AdapterValFailure");}
                    string(fill)(val, p->val);

                    Adapter slot = { key, val };

                    if( !Heap(Adapter)(Insert)(self, slot) )
                    {throw(new(Exception))
                    (this, "HeapInsertFailure");}

                    p++;}}

        explicit void HeapNode(Adapter)
        (AdapterDestroy)( HeapNode(Adapter) * * pnode )
        {if( (*pnode) == nullptr )
         {
            return;
         }
            HeapNode(Adapter)(AdapterDestroy)(&(*pnode)->left);
            HeapNode(Adapter)(AdapterDestroy)(&(*pnode)->right);

            deallocate( (*pnode)->info.key );
            deallocate( (*pnode)->info.val );

            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }
        explicit void Heap(Adapter)
        (AdapterDtor)( Heap(Adapter) * self )
        {
            HeapNode(Adapter)(AdapterDestroy)
            (&self->top); self->length = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*               builder templates pt.II (end)               */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*               virtual table object complex                */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief  volatile (singleton) components for the builder   *
     *      - - first up is the constructor/initializer - -      *
     *                                                           *
     * - -an initializer called from the constructor pointer - - *
     *- -is/would be dynamic-at-compile time and so is obsolete- -*
     *                                                           *
     *- - a method that uses a single parameter for a single - - *
     *- -complex data member(the complex method)is/can be used- -*
     *                                                           *
     *  - - this may be where a switch of data types might  - -  *
     *  - - need to be used. that or figure out how to have - -  *
     *   - - casts for every amount of bytes from 1 - 999 - -    *
     *    - - possibly, with typedefs for that, using...   - -   *
     *     - - (thoughts and feelings before making every) - -   *
     *     - - (datafield position a virtual table object) - -   *
     *                                                           *
     * - - this will let you assign datamembers alphabetically- -*
     *  - - in a constructor at least if they are all vto's - -  *
     *                                                           *
     * - - this can use new for every datamember, with only - -  *
     *    - - factory table classes as datamembers (yes). - -    *
     *                                                           *
     *-this implementation may be where a polymorph heap is used.-*
     *                                                           *
     * - is_polymorphic(a,b) may be a helper needed for case 1 - *
     *                                                           *
     *   - - if this function used a switch for case 0,1,2 - -   *
     *  - - then it can include such things, maybe consider - -  *
     *- - since you wanted every constructor to have a case 1 - -*
     *                     - - for copying - -                   *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 1
        /**
         * @brief volatile constructor/initializer (demo)
         */
        explicit Object * volatile(Init)(Object * self, ...)
      #if 1 // 0 FOR BOTTOM
        {
            stack(control)();


            Heap(Complex) * heap = ((objtPtr*)multimap(false)
            (typeid(self))("builder(ComplexHeap)"))[2] ;

            Stk(pHeapNode(Complex)) stk;
            Stk(pHeapNode(Complex))(Init)(& stk);
            HeapNode(Complex)(InOrder)( heap->top, & stk );

            /* note: initialize in alphabetical order
             */
            Stk(pHeapNode(Complex))(Reverse)(& stk);

            pHeapNode(Complex) p;


            Object * * obj;//datamember

                while( Stk(pHeapNode(Complex))(Top)(& stk) )
                {
                  p = Stk(pHeapNode(Complex))(Pop)(& stk);

                  obj = self + p->info.val * p->info.col;


                  Object * param = stack(arg)(Object*);


                  *obj = param;
                }

            return self;
        }
      #else
        {
            /* note: this is where a polymorphic complex can be
                     developed, so if two objects are polymorphic
                     by polymorph heap, then as much as what matches
                     in each heap is used for copying, leading me to
                     the thought or possibility of multiple
                     inheritance, even tho multiple inheritance
                     was not required as a part of the solution to
                     factory c because of the class interface heap
                     "registration" or "utility" interface(s).
                     not saying it wont be needed ever, because
                     it may come up as a part of something very
                     large and very polymorphic for a solution that
                     is dynamic-at-runtime if anything.

                     all that was needed for this to be working
                     was that the primitive types need ctors that
                     are factory functions, so i got to open up
                     and change everything for those definitions
                     (just add 1 to ctor or whatever).

                     case 0: (default)

                     case 1: (copy)

                     case 2: (assign)

             */
            stack(control)();

            size_t c = stack(arg)(size_t);

            //size_t c = stack(arg)(size_t);

            Heap(Complex) * heap = ((objtPtr*)multimap(false)
            (typeid(self))("builder(ComplexHeap)"))[2] ;

            Stk(pHeapNode(Complex)) stk;
            Stk(pHeapNode(Complex))(Init)(& stk);
            HeapNode(Complex)(InOrder)( heap->top, & stk );

            /* note: initialize in alphabetical order
             */
            Stk(pHeapNode(Interface))(Reverse)(& stk);

            pHeapNode(Complex) p;


            Object * * obj;//datamember

            switch(c)
            {
                case 0:
                /* note: init to 0 for each datamember
                 */
                while( Stk(pHeapNode(Complex))(Top)(& stk) )
                {
                  p = Stk(pHeapNode(Complex))(Pop)(& stk);

                  obj = self + p->info.val * p->info.col;


                  *obj = 0;
                }

                case 1:     ;

                Object * * cmplx = stack(arg)(Object*);

            #if 0 // 1 FOR TOP
                /* note: this is something to take into consideration
                         as an immense amount of time can be spent on
                         just this polymorph heap or even require revising
                         or structuring with/beside the complex heap
                         or virtual heap, if the polymorph heap played
                         another role with the other two like if they
                         was dependent on the polymorph heap for structure

                         ...any ideas for polymorph and i should make my way
                         back to this case. ideas of multi-virtual-heap
                         accesses using the polymorph heap come to mind...

                 */
                if( !is_polymorphic(self,cmplx) )
                    {throw(new(IllegalOperation))
                    (this, "NotPolymorphic");}
            #else
                if( !string(equal)( typeid(self), typeid(cmplx) ) )
                {throw(new(IllegalOperation))(this, "NotAMatch");}
            #endif // COMPLEX_POLYMORPHIC_CONSTRUCTOR 0
                /* note: init each datamember
                 */

                while( Stk(pHeapNode(Complex))(Top)(& stk) )
                {
                  p = Stk(pHeapNode(Complex))(Pop)(& stk);

                  obj = self + p->info.val * p->info.col;

                  /* note: what makes this possible is that every ctor have
                           a switch with case 1 as the copy ctor (including ints)

                           or: use a security set for primitive types that don't
                           use a case number
                   */
                  *obj = factory(typeid( *( cmplx + p->info.val * p->info.col ) ))
                          (this, 1, *( cmplx + p->info.val * p->info.col )) ;
                }

                case 2:    ;
                /* note: initialize every datamember as a
                 *       pointer so new(Class) is passed into
                 *       the constructor for each datamember
                 */

                while( Stk(pHeapNode(Complex))(Top)(& stk) )
                {
                  p = Stk(pHeapNode(Complex))(Pop)(& stk);

                  obj = self + p->info.val * p->info.col;


                  Object * param = stack(arg)(Object*);

                  *obj = param;
                }
            }
            return self;
        }
      #endif // COMPLEX_OBJECT_DEVELOPMENT_COMPLEX_POLYMORPH 0
    #endif // (demo)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief  volatile (singleton) components for the builder   *
     *            - - second up is the destructor - -            *
     *                                                           *
     * - -                                                   - - *
     *                                                           *
     * - -this can use delete for every datamember, with only- - *
     *   - - factory table classes as datamembers (yes). - -     *
     *                                                           *
     *- -this is where the ctable will be needed, if its needed- -*
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 1
        /**
         * @brief volatile destructor (demo)
         */
        explicit void volatile(Dtor)(Object * self)
        {
            Heap(Complex) * heap = ((objtPtr*)multimap(false)
            (typeid(self))("builder(ComplexHeap)"))[2] ;

            Stk(pHeapNode(Complex)) stk;
            Stk(pHeapNode(Complex))(Init)(& stk);
            HeapNode(Complex)(InOrder)( heap->top, & stk );

            pHeapNode(Complex) p;

            /* note: delete every datamember because
             *       every data member is a virtual
             *       table object (at least for class
             *       builder complex).
             */
            Object * * obj;//datamember

            while( Stk(pHeapNode(Complex))(Top)(& stk) )
            {
              p = Stk(pHeapNode(Complex))(Pop)(& stk);

              obj = self + p->info.val * p->info.col;//datamember pos

              delete(*obj);//delete datamember +   = 0
            }
        }
    #endif // 1 (demo)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief  volatile (singleton) components for the builder   *
     *- -third up is the function that returns the constructor- -*
     *                                                           *
     * @brief volatile insert into vtable (ctor) (demo)          *
     *                                                           *
     * this needs an extra initialization inside either          *
     * multimap()()()() or factory()() for volatile(type) (class)*
     *                                                           *
     * - - volatile(class) needs to be initialized, and does - - *
     *                - - by multimap()()()() - -                *
     *                                                           *
     *    - - there will be no wasted space, or improper - -     *
     *- - configurations just as long as every data member is - -*
     *- - a virtual table object (makes deleting possible too)- -*
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 1
        /**
         * @brief volatile allocator (demo)
         */
        explicit ctorPtr volatile(Ctor)()
        {
            size_t bytes = bytes(volatile(class));
            ///N O  W A S T E D  S P A C E  A L L O W E D///
            return VirtualTable(Interface).insert(
            vtable, vstk, (Class*)allocate(bytes),
            multimap(false)(volatile(class))("class"),
            & volatile(Init) ) ;
            ///N O  W A S T E D  S P A C E  A L L O W E D///
        }
        explicit size_t class(Builder)(Bytes)(cstring key)
        {
            ///N O  W A S T E D  S P A C E  A L L O W E D///
            Heap(Complex) * heap = ((tblePtr*)multimap(false)
            (key)("builder(ComplexHeap)"))[2];
            ///N O  W A S T E D  S P A C E  A L L O W E D///
            Stk(pHeapNode(Complex)) stk;
            Stk(pHeapNode(Complex))(Init)(& stk);
            HeapNode(Complex)(InOrder)( heap->top, & stk );

            pHeapNode(Complex) p;

            /* note: add byte amounts together for data members
             */
            size_t bytes = 0;
            ///N O  W A S T E D  S P A C E  A L L O W E D///

            while( Stk(pHeapNode(Complex))(Top)(& stk) )
            {
              p = Stk(pHeapNode(Complex))(Pop)(& stk);

              bytes += p->info.col;
            }

            if( bytes % sizeof(void*) )
            {throw(new(IllegalOperation))
            (this, "NotConfiguredFor:BuilderComplex"
             "\nneed:\t\t VirtualTableObjectsOnly");}

            return bytes;
        }   ///N O  W A S T E D  S P A C E  A L L O W E D///

        /* note: volatile(class) may need a stack and its
                 wide between here and multimap(...)(here)
                 but a stack maybe. or:

                ((new*)multimap(true)(multimap(true)("Class")
                ("class(Interface)")("info"))
                 ("class(Interface)")("info"))[1]()(this, ...)

            gives the wrong classname, but where can there
            be balance between popping and pushing? my
            conclusion is that it does not stack tightly
            enough to ba a problem with this method.

            wrong. it gives the right class name. (just doesn't
            stack). not stacked tightly enough to need a stack
            object (would be hard to resolve too).
         */
    #endif // UNDER_CONSTRUCTION (demo)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           *
     * this is an interesting one, think i might have already,   *
     *                                                           *
     * volatile(Type) in structclass.h, then again, that is just *
     *                                                           *
     * the one for an iterator.                                  *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
        /**
         * @brief volatile type (demo)
         */
        explicit cstring volatile(Type)(){return volatile(type);}
    #endif // STRUCTCLASS_H
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief              build & demolish                      *
     *                                                           *
     *  build should possibly have a constructor for all the     *
     *                                                           *
     *  data field positions of an interface. multi purpose      *
     *                                                           *
     *  things are better but don't forget what build is for,    *
     *                                                           *
     *  possibly just that it is for turning compile-time regs   *
     *                                                           *
     *  into runtime regs is about it, ... so if it gets an      *
     *                                                           *
     *  int_id with: "class(...Heap)" then it converts it into a *
     *                                                           *
     *  "builder(...)" heap.                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  build                                             *
     *                      (constructor)                        *
     * @param                                                    *
     *      case 0:                                              *
     * Interface obj = build("class(FactoryTable)")(0);          *
     *      case 1:                                              *
     * Interface obj = build("class(FactoryTable)")(1, reg);     *
     *      case n:                                              *
     * Interface obj = build("class(FactoryTable)")(2, &f1, &f2);*
     *                                                           *
     * @return  interface registration as runtime object         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                     build & demolish                      */
        explicit Interface () (*class(Builder)(Build)
            (cstring key))(size_t, ...)
        {
            Interface obj ;

            size_t n;

            cstring iter = key;

            cstring str = class(Builder)(Helper)(key, &n);

            Strategy * strategy;

            /* note: if a sub-factory method, then
                     convert to builder
             */
            /* * * * * * * * * * * * * * * * * * */
            class(FactoryMethod) * method1 = primary("multimap");

            Interface p1 = method1->search
            ("class(SecurityHeap)");

            if(!p1){throw(new(NullPointer))
                (this, "SecuritySetNotFound");}
            /* * * * * * * * * * * * * * * * * * */

            while( iter[0]!='(' && iter[0]!='\0' ){iter++;}

            if( iter[0]!='\0' && ((methPtr*)p1)[1](iter)

               && !string(equal)( key, "pass(SecurityHeap)" ) )
            {
              n=4;str="builder(Heap)";


              size_t size = string(size)(iter) + 7;

              /* * * * * * * * * * * * * * * * * * */
              string * type = accumulate(string)(this, size);
              /* * * * * * * * * * * * * * * * * * */

              (*type)[0] = 'b' ;
              (*type)[1] = 'u' ;
              (*type)[2] = 'i' ;
              (*type)[3] = 'l' ;
              (*type)[4] = 'd' ;
              (*type)[5] = 'e' ;
              (*type)[6] = 'r' ;

              size_t index, count = 0;;
              for(index = 7; index < size; index++ )
              {(*type)[index] = iter[count]; count++;
              }(*type)[index] = '\0';

              /* note: converts class(...) to builder(...)
               */
              /* * * * * * * * * * * * * * * * * * */
              class(FactoryMethod) * method3 = primary("class(Builder)");

              Interface p3 = method3->search
                    ("class(OverloadHeap)");

              if(!p3){throw(new(NullPointer))
              (this, "OverloadHeapNotFound");}
              /* * * * * * * * * * * * * * * * * * */

              strategy = ((methPtr*)p3)[1]( (*type) );//

              deaccumulate(type);
            }
            else
            {
              /* * * * * * * * * * * * * * * * * * */
              class(FactoryMethod) * method3 = primary("class(Builder)");

              Interface p3 = method3->search
                    ("class(OverloadHeap)");

              if(!p3){throw(new(NullPointer))
              (this, "OverloadHeapNotFound");}
              /* * * * * * * * * * * * * * * * * * */

              strategy = ((methPtr*)p3)[1](key);//
            }
              if(!strategy){throw(new(NotFound))
                (this, "NotAnInterface", key);}


            obj = allocate(sizeof(void*) * n);
            if(!obj){throw(new(OutOfMemory))
            (this, "InterfaceMemoryError");}


            /* note: this assigns the type() method.
             */
            obj[0] = ((typePtr*)strategy->val)[0] ;


            for(size_t i = 1; i < n; i++)
            {
                obj[i] = 0; }

            //obj[1] = (size_t)n;

            if( !iPush(obj) )
            {deallocate(obj);
            throw(new(OutOfMemory))
            (this, "InterfaceStackError");}


            if(!class(Builder)(Flag))
            {
                /* note: this is for the interface "class".
                 */
              /* * * * * * * * * * * * * * * * * * */
              class(FactoryMethod) * method4 = primary("class(Builder)");

              Interface p4 = method4->search
                    ("class(BasicsHeap)");

              if(!p4){throw(new(NullPointer))
              (this, "BasicsHeapNotFound");}
              /* * * * * * * * * * * * * * * * * * */

                Strategy * p = ((methPtr*)p4)[1](str);
                if( !p ){deallocate(obj);
                    throw(new(NotFound))
                    (this, "NotAnInterfaceClass", str);}

                return p->val;
            }
            else
            {   class(Builder)(Flag) = false;
                if( !tPush(str) )
                    {deallocate(obj);
                    throw(new(OutOfMemory))
                    (this, "TypeIDStackFailure");}

                return 0; //called inside class builder multimap
            }            //and it calls the constructor/initializer
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  initializer for class table                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit Interface () class(Table)(Init)(size_t c, ...)
        {
            Interface obj = iPop();

            if(!obj){throw(new(NullPointer))
                     (this,"NullInterface");}

            Stack * stack = (*Flags[0]?ControlSlot[0][0]:&c);
                          stack=((void**)stack)+1;

            switch(c)
            {
                case 0:     ;

                      /* * * * * * * * * * * * * * * * * * */
                      class(FactoryMethod) * method1 = primary("class(Builder)");

                      Interface p1 = method1->search
                            ("class(OverloadHeap)");

                      if(!p1){throw(new(NullPointer))
                      (this, "OverloadHeapNotFound");}
                      /* * * * * * * * * * * * * * * * * * */
                    Strategy * strategy =  ((methPtr*)p1)[1](int_id(obj)) ;
                    if( !strategy ){throw(new(Exception))
                        (this, "NotABuilderHeap");}

                    class(Table)(Class) * table = strategy->val;

                    if( table->virt.init ){ table->virt.init(obj); }
                    else
                    {
                        for( size_t index = 1; index < 3; index ++ )
                        { obj[index] = 0; }
                    }

                break;
                case 1:    ;

                    Interface reg = stack(arg)(Interface);

                    if(!reg){deallocate(obj);
                        throw(new(NullPointer))
                        (this, "NullInterfaceParameter");}

                    for( size_t index = 1; index < 3; index ++ )
                    { obj[index] = reg[index]; }

                break;
                case 2:    ;

                    Method * pri = stack(arg)(Method*),
                           * sec = stack(arg)(Method*);

                    obj[1] = pri;//method 1
                    obj[2] = sec;//method 2
                break;
            }
            return obj;
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  initializer for pass table                        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note:

            this one was an extra to the already composite
            sub-factory method table (heap) to a non-sub-
            factory method table (table). the pass table
            is not fully developed and won't be until the
            compiler learns to hide variables and we learn
            to store pass numbers in something like a vault
            so they can be used, distributed, etc... anyways
            it is just used for a struct class to return its
            interface heap in the form of a registration list
            for copying, printing, etc... the builder class
            wont need as much but still will be copied from
            a structclass so a builder class that is from
            a copied struct class (struct(abort)("...")) will
            still have a pass(SecurityHeap) as a remnant of
            its struct class lineage (or something).
            it was almost an idea to have any reg use a pass
            which that could still be something, just not in
            the short run and im not getting rid of what i
            have developed for pass numbers even tho im not
            in any big rush for using more, just depends on
            what i get hired for.
     */
        explicit Interface () pass(Table)(Init)(size_t c, ...)
        {
            Interface obj = iPop();

            if(!obj){throw(new(NullPointer))
                     (this,"NullInterface");}

            size_t n;

            Stack * stack = (*Flags[0]?ControlSlot[0][0]:&c);
                          stack=((void**)stack)+1;

            switch(c)
            {
                case 0:

                    if( default(0) ){ default(0) = false; }

                    obj[3] = obj[0];//type method (for proper type)


                           //& volatile(PassType);//return "(pass)"
                    obj[1] = 0;//method 1
                    obj[2] = 0;//method 2


                    if(obj[4])
                    {
                        deaccumulate(obj[4]) ;
                    }
                    obj[4] = accumulate(string)(this, 11);
                    ItoaHex( *(string*)obj[4], &obj[4] );
                    /* note: the pass number is the address of
                             the pass number
                     */
                break;
                case 1:        ;

                    Interface reg = stack(arg)(Interface);

                    if( default(0) ){ default(0) = false; }

                        if(!reg){throw(new(NullPointer))
                            (this, "NullInterfaceParameter");}

                      obj[1] = reg[1];//method 1 (0)
                      obj[2] = reg[2];//method 2 (reg list)

                      /* when a builder class, swap these two,
                         since it can just hold the pass number,
                         the pass(SecurityHeap) is going to give
                         its int_id as that.

                         this is the implemented method that can't
                         easily be replicated by the builder or
                         there is an implementation limit on them.

                         so [3] and [0] get reversed in this case.
                       */
                      obj[3] = & volatile(PassType) ;

                      /* note: i would allocate another string here
                       *       but this case is generally used to
                       *       copy a builder class from a struct
                       *       class. this may just be an initialization
                       *       to 0, depends if you remember to update
                       *       your files for this (put the string *
                       *       there). oh that and the implementation
                       *       limit.
                       */
                      obj[4] = reg[4];//pass number string *

                break;
                case 2:     ;

                   Object * pri = stack(arg)(Object*),
                          * sec = stack(arg)(Object*);

                    if( default(0) ){ default(0) = false; }

                    obj[1] = pri;//method 1
                    obj[2] = sec;//method 2

                    obj[3] = obj[0];//type method (for proper type)

                    obj[4] = accumulate(string)(this, 11);
                    ItoaHex( *(string*)obj[4], &obj[4] );
                    /* note: the pass number is the address of
                             the pass number
                     */
                break;
            }
            return obj;
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  initializer for builder heap                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit Interface () builder(Heap)(Init)(size_t c, ...)
        {
            Interface obj = iPop();

            if(!obj){throw(new(NullPointer))
                     (this,"NullInterface");}

            size_t n;

            Stack * stack = (*Flags[0]?ControlSlot[0][0]:&c);
                          stack=((void**)stack)+1;


            cstring type = ((typePtr*)obj)[0]();

            while( type[0] != '(' && type[0] != '\0' ){type++;}
            if( type[0] == '\0' )
                {throw(new(EmptyString))
                (this, "NotAParenthesizedRegistrationType");}

            /* - - - - - - - - - - - - - - - - - - - - - - - - - */
              /* * * * * * * * * * * * * * * * * * */
              class(FactoryMethod) * method1 = primary("class(Builder)");

              Interface p1 = method1->search
                    ("class(TemplateHeap)");

              if(!p1){throw(new(NullPointer))
              (this, "TemplateHeapNotFound");}
              /* * * * * * * * * * * * * * * * * * */

            Strategy * strategy = ((methPtr*)p1)[1](type);
            class(VirtualTable) * i = 0;

            if( !strategy ){deallocate(obj);
                    throw(new(NotFound))
                    (this, "NotABuilderHeap", type);}
            else{ i = strategy->val; }
            /* - - - - - - - - - - - - - - - - - - - - - - - - - */

            /* note: init or re-init, either way it needs this
             */
            obj[1] = & volatile(SubFactoryMethod);

            switch(c)
            {
                case 0:

                    if( default(0) ){ default(0) = false; }

                    if( obj[2] )
                    {   /*
                        ((dtorPtr*)i)
                        [2](obj[2]);
                        ((ctorPtr*)i)
                        [1](obj[2], 0);*/ //make extra calls harmless
                    }
                    else
                    {
                        Object * container = allocate(sizeof(Heap(Interface)));//
                        if(!container){ deallocate(obj);
                            throw(new(OutOfMemory))
                            (this, "HeapContainerFailure");}

                        obj[2] = ((ctorPtr*)i)
                        [1](container, 0);
                        obj[3] = i;
                    }

                break;
                case 1:        ;

                    Interface reg = stack(arg)(Interface);

                    if( default(0) ){ default(0) = false; }

                    if(!reg){ deallocate(obj);
                        throw(new(NullPointer))
                        (this, "NullInterfaceParameter");}

                    if( obj[2] )
                    {   /*
                        ((dtorPtr*)i)
                        [2](obj[2]);
                        ((ctorPtr*)i)
                        [1](obj[2], 0); */
                    }
                    else
                    {
                          /* note: if its a builder interface being copied,

                           then allocate and initialize, these need

                           to be properly datatyped (as in matching)

                           and there may not...
                           */
                        void * container = allocate(sizeof(Heap(Interface)));//
                        if(!container){ deallocate(obj);
                            throw(new(OutOfMemory))
                            (this, "HeapContainerFailure");}

                        obj[2] = container;

                        cstring str = class(Builder)(Helper)
                        ( ((typePtr*)reg)[0](), &n);

                      if(i)//a sub-factory method (same as multimap) (always true)
                      {
                          /* note: again, builder copying into builder
                           */
                        if( n == 4 )//builder(Heap)
                        {
                          obj[2] = ((factPtr*)i)
                          [1](obj[2], 1, reg[2]);
                          obj[3] = reg[3];
                        }
                          /* note: if its an info heap but not builder, then
                                   it needs to be copied into a builder, if it
                                   is an interface that supports builder, as in
                                   an interface with sub-factory method
                           */
                        /* * * * * * * * * * * * * * * * * * */
                        class(FactoryMethod) * method2 = primary("multimap");

                        Interface p2 = method2->search
                        ("class(SecurityHeap)");

                        if(!p2){throw(new(NullPointer))
                            (this, "SecuritySetNotFound");}
                        /* * * * * * * * * * * * * * * * * * */
                        if ( ((methPtr*)p2)[1]( type )//class(Table)    (Heap)

                          && ( n == 3 ) ) //turns into builder(Heap)

                        {
                          obj[2] = ((factPtr*)i)
                          [1](obj[2], 0);
                          obj[3] = i;
                          ((copyPtr*)i)[3](obj[2], reg[2]);
                        }
                      }
                    }

                break;
                case 2:      ;

                    Object * container = stack(arg)(Object*);

                    if( default(0) ){ default(0) = false; }

                    if( obj[2] )
                    {   /*
                        ((dtorPtr*)i)
                        [2](obj[2]);
                        ((ctorPtr*)i)
                        [1](obj[2], 0);*/

                        /* note: this is the trifecta of
                                 attempts to deallocate, so
                                 with this, it doesn't matter
                                 where the container is.
                         *//*
                        delete(obj[2]) ;

                        deaccumulate(obj[2]) ;

                        deallocate(obj[2]) ;

                        obj[2] = 0;*/
                    }

                    if(!container){ deallocate(obj);
                        throw(new(OutOfMemory))
                        (this, "HeapContainerFailure");}

                    obj[2] = container;
                    obj[3] = i;
                break;
            }
            return obj;
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  demolish                                          *
     *                       (destructor)                        *
     * @param  demolish(reg) (registration from build)           *
     *                                                           *
     * @return void                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit void class(Builder)(Demolish)(Interface reg)
        {
            cstring type = ((typePtr*)reg)[0]();
            if( type[0] == '0' /*|| string(equal)(type, "pass")*/ )
            {type = ((typePtr*)reg)[3]();}
            else{}

            size_t n;

            cstring str = class(Builder)(Helper)(type, &n);


            if( n == 3 && !string(equal)(int_id(reg),"class") )
            {
                /* note: interface registration destructor
                 */
                      /* * * * * * * * * * * * * * * * * * */
                      class(FactoryMethod) * method1 = primary("class(Builder)");

                      Interface p1 = method1->search
                            ("class(OverloadHeap)");

                      if(!p1){throw(new(NullPointer))
                      (this, "OverloadHeapNotFound");}
                      /* * * * * * * * * * * * * * * * * * */
                    Strategy * strategy = ((methPtr*)p1)[1](int_id(reg)) ;
                    if( !strategy ){throw(new(NotFound))
                        (this, "NotABuilderHeap", int_id(reg));}

                    class(Table)(Class) * table = strategy->val;

                if( table->virt.dtor ){ table->virt.dtor(reg); }
            }
            else
            if( n == 4 )
            {
                Interface i = reg[3];

                if(!i){throw(new(NullPointer))
                    (this, "NoContainerInterface");}

                ((dtorPtr*)i)[2](reg[2]);//call dtor


                delete(reg[2]);                          //A

                deaccumulate(reg[2]);                    //B

                deallocate(reg[2]);//what if its a vto?  //C
                /* note: if the object is passed as a constructor
                 *       parameter then it may as well be a vto
                 *       i think, so delete it and deaccumulate it?
                 *
                 * also: if A or B succeed, pointer is set to 0 so
                 *       that passed into deallocate (C) is harmless.
                 */

            }
            else
            if( n == 5 )
            {
                deaccumulate(reg[4]);
            }
            deallocate(reg);//def also (class extended)
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        /* note: n is for number of data field positions,
                 str is for type
         */
        explicit cstring class(Builder)(Helper)
            ( cstring type, size_t * n )
        {
            if(type[0]=='c'&&type[1]=='l'&&type[2]=='a'
             &&type[3]=='s'&&type[4]=='s'){*n=3;
                return"class(Table)";}
            else
            if(type[0]=='p'&&type[1]=='a'
             &&type[2]=='s'&&type[3]=='s'){*n=5;
                return"pass(Table)";}
            else
            if(type[0]=='b'&&type[1]=='u'&&type[2]=='i'
             &&type[3]=='l'&&type[4]=='d'&&type[5]=='e'
             &&type[6]=='r'){*n=4;
                return"builder(Heap)";}
            return "(!interface)"; }

        /* note: UNUSED
         */
        static Security
            class(Builder)(RegsHeap)[seven] = //(0-6)
        /* a b c d e f g h i j k l m n o p q r s t u v w x y z */
        {/*(FYI THEY ARE ALL TABLES)*/
            {"builder(Heap)"}, {"class(Array)"},
            {"class(Heap)"},{"class(Table)"},
            {"pass(Array)"},{"pass(Heap)"},
            {"pass(Table)"},{""}
        };
        static Security *                              //(0-6)(seven)
        typename(SubFactoryMethod)(class(Builder),Security,Regs,0,6);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class(Builder)(PrintHeap)                          *
     *                                                           *
     * note: this only works for a struct class interface heap   *
     *       (array). ask if its a "builder(FactoryMethod)"      *
     *       first and call this function as a part of an overload
     *       if its not.                                         *
     *                                                           *
     * also: these low-level functions could use an overload     *
     *       function implemented that takes a class(FactoryMethod)* *
     *       and checks its typeid by type() method at meth[0]   *
     *       to determine which version of the function to call. *
     *       (look for "pass(SecurityHeap)" with base)           *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit int printHeap( const Interface * p )
        {
            while( *p )
            {
                printf( "%s\n", ((typePtr*)(*p))[0]() );


                ((p))++;  //PHAT FARM

            }
            printf("\n");
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit int printBuilderHeap( const Container * c )
        {
            Stk(pHeapNode(Interface)) stk;
            Stk(pHeapNode(Interface))(Init)(& stk);
            HeapNode(Interface)(InOrder)
            ( ((Heap(Interface)*)c)->top, & stk );
            Stk(pHeapNode(Interface))(Reverse)(& stk);


            pHeapNode(Interface) p = nullptr;


            while( Stk(pHeapNode(Interface))(Top)(& stk) )
            {
              p = Stk(pHeapNode(Complex))(Pop)(& stk);

              printf( "%s\n", ((typePtr*)p->info)[0]() );
            }

            //


            printf("\n");
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
    BUILDER MODE FOR A FACTORY TABLE CLASS MUST INCLUDE A REASSIGNMENT

    OF THE CTOR METHOD INTO A BUILDER VERSION, SAME FOR INTERFACE AS A

    RUNTIME OBJECT, CONSTRUCTOR/INITIALIZER, DESTRUCTOR ALL GET REASSIGNED

    TO THE VOLATILE ONES (BUILDER ONES) (COMPLEX ONES) (DONE).
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        builder constructor/destructor              *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                      implementations                      */
    explicit FactoryTable(Builder) * class(Builder)
    (Init)(FactoryTable(Builder) * self, ...)

        {Stack * stack = control();

            Object * s = arg(stack, volatile fTable* volatile),
                   * b = arg(stack, volatile aTable* volatile);

            self->self = s;
            self->btable = b;

            if( self->btable == nullptr )
            { if( !AdapterTable(Allocator)
                ( & self->btable, 7 ) )
                {throw(new(OutOfMemory))
                (this, "BuilderTableFailure");} }

            return self; }


    static void class(Builder)
    (Dtor)(FactoryTable(Builder) * self)
    {
        AdapterTable(Deallocator)( & self->btable ); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  TODO: write an iterator                                  *
     *- -this is an allocator/initializer (like a constructor)- -*
     *    - - it is also used in place of a next() method - -    *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 1
    #define iterator(Interface) class(Builder)(Iterator)(Interface)

    #define ref(self)((Object**)struct(bunker)(virtual)(self, Iterator)->get(this))

    explicit Iterator * class(Builder)(Iterator)(Interface reg)
    {
        if( struct(bunker)(is_object)(reg) )
        {
            return struct(bunker)(virtual)
            (reg, Iterator)->next(this);
        }
        if( string(equal)( int_id(reg), "class(FactoryMethod)" ) )
        {
            return ArrayIterator(Interface)(Ctor)()(this, reg[4]);
        }else
        if( string(equal)( int_id(reg), "builder(FactoryMethod)" ) )
        {
            return HeapIterator(Interface)(Ctor)()(this, reg[4]);
        }
        size_t n;
        cstring str = class(Builder)(Helper)(int_id(reg), &n);
        Strategy * strategy;

        if( string(equal)( str, "builder(Heap)" ) )
        {
            strategy = multimap(true)("class(Builder)")
            ("class(FactoryHeap)")("builder");
        }else
        if( string(equal)( str, "class(Table)" ) )
        {
            strategy = multimap(true)("class(Builder)")
            ("class(FactoryHeap)")("class");
        }else
        {throw(new(IllegalOperation))
        (this, "NotBuilderCompatible");}

        cstring type = int_id(reg);

        while(type[0]!='(' && type[0]!='\0'){type++;}
        if(type[0]=='\0'){throw(new(EmptyString))
        (this, "NotAParenthesizedRegistrationType");}

        Strategy * _strategy = ((methPtr)strategy->val)(type);
        if( !_strategy ){throw(new(NotFound))
        (this, "NoIterator", type);}

        return ((whatPtr)_strategy->val)()(this, reg[2]);
    }
    #endif // 0

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
        ...should have only virtual table objects
        for data members and delete every one
        that will get rid of that problem you were having.

        ...at the same time only a complex created by
        class(builder)(new) would be vto only? yes? yes.
        if its a complex object, then vto datamembers only.

        class(builder)(complex)(int, "var") ;\
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

    - - there needs to be a constructor for the info heaps
        accessed from class(builder)(multimap)(true) so the
        control factory should be used also, im wondering
        if ... (good call) (done) (good job)

    - - everything is being deallocated, when the dtor
        gets called for a heap, it deallocates every string
        runtime object for a data field position, perfect.

    - - there needs to be a throw for improper datatype cast
        for the class builder complex method, for when there
        is already that datamember there (maybe).

    - - there also needs to be a volatile(Update) that updates
        the interface or even every object after an entry gets
        added to either the complex heap or the virtual heap.
        there is, class(builder)(subject)()()

    - - i think everything with the builder has been developed,
        and everything from this file is used inside class.h


     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    noexcept explicit cstring class(builder)
    (is_builder)(const Interface self)

    {Pair(Class, Class) pair = { self, 0 }, * p = AdapterTable
        (Interface).base.search( ((class(Builder)*)

        ((objtPtr*)multimap(false)("class(Builder)")//class(Builder)(ID)()

        ("class(SingletonTable)"))[1])->btable, pair );

        if( !p || !p->key )//
        {return 0;
        }
        else{return p->val;}}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    noexcept explicit cstring class(builder)(typeid)

    ( const Object * self )

        { if( !self ){ return "(null)"; }

          class(VirtualTable) * i = instance(self);
          if( !i ){ return "(!instance)"; }

          if( ((typePtr*)i)[0] )
          { if ( string(equal)( ((typePtr*)i)[0](), "class" ) )
            {
                /* -- -- -- -- -- -- -- -- -- -- -- -- -- -- */
                cstring type = class(builder)(is_builder)(i);
                if(type){return type;}else{throw(new(NullPointer))
                    (this, "NoBuilderTypeID");}
                /* -- -- -- -- -- -- -- -- -- -- -- -- -- -- */
            }else{ return ((typePtr*)i)[0](); }
          }
          else
          { return ""; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define classbuilderinsert(interface, typeid)\
    \
        AdapterTable(Interface).insert( ((class(Builder)*)\
    \
        ((objtPtr*)multimap(false)( "class(Builder)" )\
    \
        ("class(SingletonTable)"))[1])->btable, interface, typeid )

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define classbuildersearch(interface)\
    \
        *AdapterTable(Interface).search( ((class(Builder)*)\
    \
        ((objtPtr*)multimap(false)( "class(Builder)" )\
    \
        ("class(SingletonTable)"))[1])->btable, interface )

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define classbuilderremove(interface)\
    \
        AdapterTable(Interface).remove( ((class(Builder)*)\
    \
        ((objtPtr*)multimap(false)( "class(Builder)" )\
    \
        ("class(SingletonTable)"))[1])->btable, interface )

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * TO ACCESS THE COMPLEX DATAMEMBERS, THE COMPLEX METHOD IS  *
     *                                                           *
     * USED. TO ACCESS THE COMPLEX INTERFACE METHODS, THE        *
     *                                                           *
     * FUNCTION METHOD IS USED. BOTH ARE USED WITHIN THE COMPLEX *
     *                                                           *
     * FOR A COMPLEX PORTABLE METHOD USED BY ANTHOER COMPLEX.    *
     *                                                           *
     * THE FACTORY METHOD IS USED TO RETURN THE CONSTRUCTOR FOR  *
     *                                                           *
     * A NEW COMPLEX OBJECT TO USE WITH THE COMPLEX METHODS AND  *
     *                                                           *
     * OF COURSE, THE FACTORY TABLE MULTIMAP. SEE: everything    *
     *                                                           *
     * inside OOC/Factory/... and OOC/Control/break.h (Complex C)*
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
            Interface reg = build("class(ComplexHeap)")(0);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                            demolish(reg) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                             int_id(reg) ;
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 size_type bytes = bytes(typeid(obj));
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note: new class is for a new factory table class plus new

             class/complex object? yes/no?

             if it can be done. (yes in its file class.h).

             these are the final definitions for Factory C,

             that includes the definitions inside Control/Bunker.h
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // FACTORY_H_INCLUDED
                                            //CWP
//#endif
