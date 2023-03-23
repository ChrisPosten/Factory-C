#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED
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
[ 1 ]primary;
#endif // TAG
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    #include "../Library/clibrary.h" //kindergarden (this grade 1)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                     include typenames                     */
    #include "../Template/definePair.h"  // 2 col


    #include "../Template/defineTable.h" // 3 col


    #include "../Template/defineGrid.h"  // 4 col


    #include "../Template/defineSearch.h"


    #include "../Template/defineQSort.h"
     /// these aren't used intil Array.h but included here (early)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||  THE FACTORY C OBJECT DEFINITION AND DECLARATIONS   || *
     *      OF THE INTERFACE BASES FOR THE FACTORY OBJECT        *
     *                                                           *
     *             by Willy (??/??/2017)(04/16/2022)             *
     *                      (04/20/2022)(02/10/2023)             *
     * ||                                                     ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                       //(PROGRAM TO THE INTERFACE HEAP)(Factory C)
    /**+---------------------------------+
     * @brief abstract Object            |
     * +---------------------------------+
     *///(no implementation so abstract) (Factory C)
   # define size_type size_t
    typedef void         Object;  //
    ///{
        struct class ; // base = {}

          struct class (VirtualTable);//(basic) default:    (volatile ?)
        ///{
            typedef Object *(*ctorPtr)( Object *, ... );//(constructor)
            typedef void (*dtorPtr)( Object * ); // {}
            typedef cstring () (*typePtr)(void);//{ return "Class"; }

            struct vArray;   //(demo)

            struct Container;//primary
              struct Iterator;//secondary
            ///{
                struct String;//


                hazardous struct vTable;///VirtualTable  (Object)         #1

                hazardous struct fTable;///FactoryTable  (Class)          #2

                hazardous struct aTable;///AdapterTable  (Adapter)        #3


                hazardous struct vStk;///ObjectStack     (Object)         #1

                hazardous struct jStk;///JumpStack       (Jump)           #2

                hazardous struct fStk;///FlagStack       (Flag)           #3

                hazardous struct mStk;///MapStack        (Map)            #4

                hazardous struct iStk;///InterfaceStack  (Interface)      #5

                hazardous struct pStk;///PassStack       (Pass)           #6

                hazardous struct cStk;///ControlStack    (ControlFactory) #7


                hazardous struct tStk;///TypeStack       (TypeID)         #8

                hazardous struct hStk;///HeapStack       (Heap)           #9

                hazardous struct eStk;///ExceptionStack  (Certificate)    #10

            ///}

            struct Exception  ; // Certificate                                #1
            ///{
                struct OutOfBounds;//                                         #2

                struct OutOfMemory;//                                         #3

                struct NullPointer;//               +1                        #4

                struct EmptyString;//                                         #5

                struct IllegalOperation;//                                    #6

                struct InputMismatch;//                                       #7
                                        //+ throw for private factory method
                struct RestrictedAccess;/*/ /// Restricted Area /// /*///     #8
                                        //+ throw with failed pass assert
                struct Assertion ;      // 0xffffffff != 0xffffffff           #9
                ///{
                    struct TypeInfo;//type_info//assert is an adapter also    #10

                    struct IsPolymorphic;      //assert is_polymorphic        #11
                ///}
                struct Override;        //pure certificate                    #12

                    struct InformationSecurity;//assert() PassNumber(s)       #13
                                               //0xffffffff == 0xffffffff
                struct PassNumber;//{} //pure                                 #14

            ///}

            struct Subject;  //primary
              struct Observer;//secondary

            struct Command;  //

            struct Factory;  //

            struct File;     //

        ///}
          struct class (FactoryTable);//(advanced) primary:
        ///{
            typedef struct {} Helper;

                        typedef struct {} BHelper;//STRUCT 10,11,14,12,13

                            //(dex registructor)
            typedef Object *(*(*(*regiPtr)(cstring))(cstring))(cstring);

                          //(overstructor)
            typedef void (*(*overPtr)(cstring, cstring))(cstring, cstring);


            typedef struct class (VirtualTable) * (*virtPtr)( Object * );
            typedef ctorPtr (*whatPtr)(void);//{ return new(Class); }
            typedef Object *(*(*hlprPtr)( Object * ))( void );


            struct class(FactoryMethod);// ; = {} (just ;)
                    builder(FactoryMethod);
            # undef builder()


            typedef void (*rgstPtr)(void); // { register(Base); }

            typedef void (*dropPtr)(void); // { drop(Base); }


            typedef volatile Object * volatile objtPtr;//hlpr

            typedef Object * (*factPtr)( Object *, ... );//(factory function)
            typedef Object * (*commPtr)( const size_type );//comm/fact
            typedef size_t   sizeTyp;

            typedef Object * (*methPtr)( cstring );//(factory method)
            typedef Object * (*hookPtr)(void);
            typedef char * * strgPtr;

            typedef size_t * sizePtr;

            /**+---------------------------------+
             * @brief [] operator helper         |
             * +---------------------------------+
             */// (compiler submersible)
            # define operator(member)class ## member
            hazardous struct class (FactoryHelper)
            {   Helper  base;// = {  }
                /// /// /// ///
                objtPtr self;//[0]
                /// /// /// ///
                factPtr prmr;//[1]
                /// /// /// ///
                hookPtr sndr;//[2] (good to go now)
                /// /// /// ///
            } hazardous static operator (Helper) =
          { {}, nullptr, nullptr, nullptr, } ; /// (Factory C)
            # undef operator ()
        ///}
          struct class (AdapterTable); // (advanced)   #3
        ///{
            typedef struct class (VirtualTable) * intrPtr; //(adapter)

            typedef void (*(*uniPtr)(cstring, ...))(Object *, ...);
        ///}
          struct class (CompareTable); // (advanced)   #4

          struct class (ConsoleTable); // (advanced)   #5

          struct class (ControlTable); // (advanced)   #6

          struct class (CommandTable); // (advanced)   #7

          struct class (BooleanTable); // (advanced)   #8

          struct class (DefaultTable); // (advanced)   #9

          struct class (BuilderTable); // (advanced)   #10

          struct class (StandardTable);//(advanced)    #11

          struct class (ObserverTable);//(advanced)    #12

          struct class (StrategyTable);//(advanced)    #13

          struct class (TemplateTable);//(advanced)    #14

          struct class (CommandArrayTable);//(advanced)#15 (array)

          struct class (FactoryArrayTable);//(advanced)#16 (array)

          struct class (OperatorTable);//(advanced)    #17

          struct class (SecurityTable);//(advanced)    #18

          struct class (DecoratorTable);//(advanced)   #19

          struct class (PolymorphTable);//(advanced)   #20

          struct class (SingletonHeap);//(advanced)    #21

          struct class (VirtualTableTable);//(advanced)#22 (heap)

          struct class (InterfaceTable);   //(advanced)#23 (heap)

          struct class (ConstructTable);//(advanced)   #24

          struct class (DestructTable) ;//(advanced)   #XX

          struct class (NamespaceTable);//(advanced)   #25

          struct class (CompositeTable);//(advanced)   #26 ?

          struct class (OverrideTable);//(advanced)    #27

          struct class (ObjectTable);//(advanced)      #28

          struct class (ClassTable);//(advanced)       #29

          struct class (Table);//(advanced)            #30

          struct class (HelperTable);//(advanced)      #31

          struct class (ProxyTable); //(advanced)      #32

          struct class (InfoTable);//(advanced)        #33

          struct class (FileTable);//(advanced)        #34
        //(sub-factory method tables are "heaps")
          struct class (StrategyHeap);//(advanced)     #35

          struct class (PolymorphHeap);//(advanced)    #36

          struct class (VirtualHeap);  //(advanced)    #37

          struct class (FactoryHeap);  //(advanced)    #38

          struct class (CommandHeap);  //(advanced)    #39

          struct class (SecurityHeap);//(advanced)     #40

               builder (SecurityHeap);//(advanced)     #41 -UNUSED

          struct class (ComplexHeap); //(ADVANCED)     #42

          union pass(Method);//(SECURITY ADVANCED)     #43 -UNUSED

          struct pass(Object);//(SECURITY ADVANCED)    #44 -UNUSED

          struct pass(Member);//(SECURITY ADVANCED)    #45 -UNUSED

          struct pass(Class);//(SECURITY ADVANCED)     #46 -UNUSED

          struct pass(Table);//(SECURITY ADVANCED)     #47 -UNUSED

          struct pass(Stack);//(SECURITY ADVANCED)     #48 -UNUSED

          struct class    (PassNumber) ;//(ADVANCED)   #49 -UNUSED

          struct class    (PassTable) ;//(implies many)#50 -UNUSED

          struct class    (FactoryHeap)    ;

          struct class    (ObjectHeap)  ;


          struct class    (VirtualTable)         ;   ///#1

          struct class    (FactoryTable)          ;  ///#2

          struct class    (AdapterTable)   ;         ///#3 (for Observer)

          struct class    (CompareTable);            ///#4

          struct class    (ConsoleTable);            ///#5

          struct class    (StandardTable);           ///#6

          struct class    (FileTable);               ///#7

          struct class    (StrategyHeap);      /*1*/ ///#8

          struct class    (PolymorphHeap);     /*2*/ ///#9

          struct class    (VirtualHeap);       /*3*/ ///#10

          struct class    (ComplexHeap);       /*4*/ ///#11

          struct class    (ControlHeap);       /*5*/ ///#12

          struct class    (BuilderHeap);       /*6*/ ///#13

          struct class    (SecurityHeap);      /*7*/ ///#14

          struct class    (SingletonTable);          ///#15

          struct class    (SubjectTable);            ///#16

          struct class    (BasicsHeap);              ///#17  v

          struct class    (LibraryHeap);             ///#18  v

          struct class    (FactoryHeap);       /*8*/ ///#19

          struct class    (OverloadHeap);            ///#20  v

          struct class    (CommandArray);            ///#21

          struct class    (FactoryArray);            ///#22

          struct class    (TemplateHeap);            ///#23  v

          struct class    (AdapterHeap);       /*9*/ ///#24

          struct class    (AbortTable);              ///#25

          struct  pass    (SecurityHeap);            ///#X



          struct class    (PassNumber) ;


          struct class    (SecurityTable);//(pass)        #16


          struct class    (TemplateTable);//(template array
                                       //initializer case)#14
                                       //+exec method
          struct class    (DefaultTable);  //(bunker)     #9

          struct class    (PassTable) ; //(bunker)

          struct class    (AbortHeap) ;   //(bunker)

          struct class    (OverrideHeap); //(bunker)


          struct class    (CommandTable);            ///#16 (demo)


          struct class (CommandArray);//(advanced)#14 (heap)

          struct class (FactoryArray);//(advanced)#14 (heap)

            /// ... (open for extension)

        typedef Object * * * listPtr; //registration list A.K.A.
        typedef Object * * * heapPtr; //class interface heap
        typedef Object * * * reglPtr; //

        typedef Object * tblePtr;     //info heap
        typedef void (*execPtr)( Object * );
        typedef void (*swapPtr)( Object *, Object * );

        typedef bool (*copyPtr)( Object *, const Object * );


        typedef bool (*boolPtr)( Object *, ... );//(insert,remove)
        typedef Object * (*atPtr)( const Object *, ... );
        //typedef Object * (*sizePtr)( const Object * );//(size/begin)


        typedef Object * (*getPtr)( Object * );
        typedef bool (*equlPtr)( const Object *, const Object * );
        typedef bool (*nextPtr)( Object * );

        typedef bool (*compPtr)( const Object *, const Object * ) ;

    ///}

    typedef void         Method;
    ///{
        /// ...                                      ?
        /// The Function Method returns Method * * ...  (Factory C)
    ///}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief for programming to the interface heap, Object.h    *
     *                                                           *
     * on the left, structclass.h (Interface) in the center,     *
     *                                                           *
     * Array.h on the right. to program to the interface heap,   *
     *                                                           *
     * remember that Object.h is meant for the definition of     *
     *                                                           *
     * the object. components to engineer struct class tables    *
     *                                                           *
     * are placed here. there is a struct class virtual table    *
     *                                                           *
     * that is the basic object assigned interface base for the  *
     *                                                           *
     * virtual table object, this is the default interface used  *
     *                                                           *
     * for basic object oriented programming here. then there is *
     *                                                           *
     * a class assigned interface heap for the factory table     *
     *                                                           *
     * class. there is a struct class factory table that is the  *
     *                                                           *
     * primary interface used for advanced object oriented       *
     *                                                           *
     * programming there. there are other interface base(s) each *
     *                                                           *
     * with its own single responsibility or purpose. the        *
     *                                                           *
     * original base struct class is used for basic memory       *
     *                                                           *
     * management, the struct class virtual table. this one is   *
     *                                                           *
     * extended to have the single class responsibility added    *
     *                                                           *
     * to it (program to the interface). there are ideas, but    *
     *                                                           *
     * there is nothing as concrete in the class construction    *
     *                                                           *
     * as this interface being extended, the only one by default *
     *                                                           *
     * (virtual table object interface). the class factory method*
     *                                                           *
     * is a bit of a latecomer by definition (fTable.h) but is a *
     *                                                           *
     * special version of a sub-heap interface that displays     *
     *                                                           *
     * information hiding by not containing the pointer to the   *
     *                                                           *
     * list (heap). the factory table class uses a class factory *
     *                                                           *
     * method for the class interface heap that may contain      *
     *                                                           *
     * interface(s) with their own sub-factory methods for the   *
     *                                                           *
     * class info heap(s). the class factory method gets extended*
     *                                                           *
     * into builder factory method for objects without compile-  *
     *                                                           *
     * time class descriptions. for programming to the interface,*
     *                                                           *
     * this file is where an interface base is engineered from the*
     *                                                           *
     * components above and placed in structclass.h. the interface*
     *                                                           *
     * heap has a number of sub-factory methods, each one is     *
     *                                                           *
     * for its own info heap. Array.h is the third file and the  *
     *                                                           *
     * info heap components file, that would be the file open    *
     *                                                           *
     * farthest to the right. an interface of the class interface*
     *                                                           *
     * heap is a class assigned interface not an object assigned *
     *                                                           *
     * interface. i say this but what it looks like in another   *
     *                                                           *
     * sense, a good sense is that the virtual table assigns an  *
     *                                                           *
     * interface to an object and the factory table assigns a    *
     *                                                           *
     * composite map/multimap in a similar way as we use typeid. *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - -

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* ||                                                     || *
     *  note: this struct class essentials kit is the model      *
     *        to use for all implementations of derived          *
     *        struct class Objects:                              *
     *                                                           *
     *             [x]Init,          (ctorPtr data type)         *
     *                                                           *
     *             [x]Dtor,          (dtorPtr data type)         *
     *                                                           *
     *             [x]Type,          (typePtr data type)         *
     *                                                           *
     *  update:    [x]Ctor           (whatPtr data type)         *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* ||                                                     || *
     *         ctorPtr           (constructor pointer)           *
     *                                                           *
     *         dtorPtr           (destructor pointer)            *
     *                                                           *
     *         typePtr           (like a basic toString())       *
     *                                                           *
     *         whatPtr           (factory table pointer)         *
     *                                                           *
     *         copyPtr           (copy pointer)                  *
     *                                                           *
     *         compPtr           (compare pointer)               *
     *                                                           *
     *         factPtr    : )    (factory function pointer)      *
     *                                                           *
     *         methPtr           (factory method pointer)        *
     *                                                           *
     *         virtPtr           (factory table return)          *
     *                                                           *
     *         hlprPtr           (factory helper initializer)    *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** Factory C:                                               *
     *                           OOC                             *
     *                            |                              *
     *                  Library Object Standard                  *
     *                            |                              *
     *                        Template                           *
     *                            |                              *
     *                         Virtual                           *
     *                        /      |                           *
     *                 Exception  Factory                        *
     *                           /   |   \                       *
     *                       Adapter | Builder                   *
     *                               |                           *
     *                            Control                        *
     *                                                           *
     * THIS IS WHAT IT WOULD LOOK LIKE IF DEPENDANT FILE FOLDERS *
     *                                                           *
     * (WITH FILES) WERE INSIDE THE FOLDERS THAT THEY ARE        *
     *                                                           *
     * DEPENDANT OF (INSTEAD OF ADJACENT) (MOSTLY).              *
     *                                                          **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                     **OBJECT**                      ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
      @date (12/21/2021):

      @brief Object MUST remain abstract completely to allow
      for Objects without class definitions (also see class.h).
      Object will remain as a class name only (NOT AN INTERFACE).

      Object MUST also remain abstract completely so when
      Containers get implemented, they can be implemented
      as Containers of either structured or primitive types.

      struct class gets declared as a class of object is declared.
      struct classes take the form of two separate structs
      and MUST implement all 3 data typed functions by prototype,
      MUST have properly named functions for all of the above
      like the concept of a constructor not being a constructor
      until its name-spaced properly (for the level of class
      construction involved), but also including proper
      data typing. to be specific (1), the constructor must be
      implemented, and must check the object self pointer for being
      null, and must return self. to be specific (2), the destructor
      may or may not be implemented, since its an interface method
      checked for being null (0) and usually implemented as a
      hook ({}) if its not a hook anyways. to be specific (3), the
      type function for typeid(object) may or may not be
      implemented, it is only a hook anyways and the factory c
      standard. trust that without that hook for a virtual table
      object class implementation, the key to dynamic programming
      is gone, the class key to the class factory method
      (for a factory table class).

      A key principle of OOP programming is to program to the
      interface, not the implementation. Object.h is an exception
      to this rule, DON'T program to the interface (yet)
      (i wonder why).

      program to the idea of an object (here in Object.h), not the
      interface (because what interface?) (as of now, none have
      been engineered yet).

            -program to the un-implemented structured data type as in
            declare interfaces in Object.h without implementing them,
            giving datatype(s) to function(s) for a style of interface
            that is used as an improper array (complex object).

            -program to the abstract data type (void*).

            -declare data types for function pointers by typedef.

      program to the interface, not the implementation (by the book).

      program to the (implemented struct as the) interface (type),
      not the (function) implementation(s) (after) (good) (Factory C).
      (fine print).


        (program to the interfaces(s))

        (PROGRAM TO THE INTERFACE HEAP)    (Factory C)

        (program to the class extended interface)  (original OOP)


            -program to the interface components in Object.h and place
            the fully engineered struct class (TypeTable) inside the
            file structclass.h.

            -program to the interface heap in structclass.h as
            (key point) each interface base is a single responsibility
            interface and may possibly be extended as soon as there is
            a real reason. (also) the interface heap is given part of
            its definition as to have a number of sub-factory methods.

            -program to the info heaps in Array.h as mostly non-object
            oriented components for arrays.


        Object, Container, and Iterator. --->           struct class

                Object                        struct class
               /      \                        (is) \
          Iterator   Container                       vTable

                                --or actually--

                Object                             VirtualTable
                   \                    (contains)  /      \  (and)
              struct class                struct class    struct class(VirtualTable)
                   / \
            Iterator  Container


                 Object (UNIMPLEMENTED so ABSTRACT)
                  \
                   struct class {}
                    \
                     Container (INTERFACE TYPE)(PRIMARY)(Factory C)
                      \
                       Vector (any amount of implementations) TEMPLATE MACRO (typename)
                        \
                         HashSet32-64 (set of Pairs) KeyValuePairHashSet32-64 TEMPLATE MACRO (typename)
                          \
                           vTable (singleton) SINGLETON (after vTable: fTable then aTable)
                            \
                             X

                               class (CONCRETE)
                                \
                                 vArray (OO array)

        recommendations:

            bool (*equal)(const struct Object* a,

                          const struct Object* b);  //Comparable


            bool (*copy)( Object * a, const Object * b );

            cstring (*toString)( const Object * ); //what()


                    -- equal(), greater() used in class(CompareTable) --

        note:

            assign(a, b) in Iterator, (not anymore)

            copy(a, b) is currently found in Container


        -toString() would only include self pointer parameter if
        return included the address of the object with ClassName
                                           |
        separated by an @ ...              |
                                          \ /
                                           *
        ClassClassVirtualTablePairHashSet32@2feb16bf
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief Control Factory Flags & (unused) Jump Buffers      *
     *                                                           *
     * @note (bytes stored by Jump Buffers) = 26 * 16 * 4        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        volatile static uint32_t PrintFlagCounter = 0;

        static void setPrintFlags(void);

        volatile static bool PrintFlags[8]

        =

            { false, /**PrintFlag (instance stack)**/  /*[0]*/

              false, /**PrintNamesFlag**/              /*[1]*/

              false, /**OutOfMemoryFlag**/             /*[2]*/

              false, /**print string(equal) flag**/    /*[3]*/

              false, /**QProbe**/                      /*[4]*/

              false, /**Vector Cases**/                /*[5]*/

              false, /****/                            /*[6]*/

              false }; /****/                          /*[7]*/


    inline static void setPrintFlags(void)
    {
        for( uint8_t i = 0; i < 8; i++ )
        {
             if( PrintFlags[i] == false ){ PrintFlags[i] = true;  }

            else

             if( PrintFlags[i] == true  ){ PrintFlags[i] = false; }
        }
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  /*UNUSED JmpBuf UNUSED JmpBuf UNUSED JmpBuf UNUSED JmpBuf UNUSED */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    # define JumpRow(Index)JumpRow ## Index
    typedef  jmp_buf            jumpBuf;//
    ///{
        typedef  bool   Marker;
        typedef  jumpBuf      JmpBuf;
        typedef  bool * JFlags;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #define COMMAND_CONTROL_FACTORY_TEMPLATE____INDEX_BUFFERS____ 0//0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if COMMAND_CONTROL_FACTORY_TEMPLATE____INDEX_BUFFERS____
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        typename(Table)(JFlags, Marker, JmpBuf);
        static   Table (JFlags, Marker, JmpBuf)  JumpTable[26] = {0};
        static   Table (JFlags, Marker, JmpBuf)
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #else
        typename(Pair) (JFlags, Marker);
        static   Pair  (JFlags, Marker)  JumpTable[26] = {0};
        static   Pair  (JFlags, Marker)
    #endif // COMMAND_CONTROL_FACTORY_TEMPLATE____INDEX_BUFFERS____
            /// /// /// /// /// /// /// /// /// /// /// ///
            /**@brief  struct variables for struct assign
             */
            /// /// /// /// /// /// /// /// /// /// /// ///
    #if COMMAND_CONTROL_FACTORY_TEMPLATE____INDEX_BUFFERS____

        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/

        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/

             JumpRow(A)     =     { nullptr, false, {0} },

             JumpRow(B)     =     { nullptr, false, {0} },

             JumpRow(C)     =     { nullptr, false, {0} },

             JumpRow(D)     =     { nullptr, false, {0} },

             JumpRow(E)     =     { nullptr, false, {0} },

             JumpRow(F)     =     { nullptr, false, {0} },

             JumpRow(G)     =     { nullptr, false, {0} },

             JumpRow(H)     =     { nullptr, false, {0} },

             JumpRow(I)     =     { nullptr, false, {0} },

             JumpRow(J)     =     { nullptr, false, {0} },

             JumpRow(K)     =     { nullptr, false, {0} },

             JumpRow(L)     =     { nullptr, false, {0} },

             JumpRow(M)     =     { nullptr, false, {0} },

             JumpRow(N)     =     { nullptr, false, {0} },

             JumpRow(O)     =     { nullptr, false, {0} },

             JumpRow(P)     =     { nullptr, false, {0} },

             JumpRow(Q)     =     { nullptr, false, {0} },

             JumpRow(R)     =     { nullptr, false, {0} },

             JumpRow(S)     =     { nullptr, false, {0} },

             JumpRow(T)     =     { nullptr, false, {0} },

             JumpRow(U)     =     { nullptr, false, {0} },

             JumpRow(V)     =     { nullptr, false, {0} },

             JumpRow(W)     =     { nullptr, false, {0} },

             JumpRow(X)     =     { nullptr, false, {0} },

             JumpRow(Y)     =     { nullptr, false, {0} },

             JumpRow(Z)     =     { nullptr, false, {0} };

        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/

        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /* UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED UNUSED  */
        /*/ /// /// /// /// /// /// /// /// /// /// /// /// /*/

    #else
                JumpRow(A)     =     { nullptr, false },

                JumpRow(B)     =     { nullptr, false },

                JumpRow(C)     =     { nullptr, false },

                JumpRow(D)     =     { nullptr, false },

                JumpRow(E)     =     { nullptr, false },

                JumpRow(F)     =     { nullptr, false },

                JumpRow(G)     =     { nullptr, false },

                JumpRow(H)     =     { nullptr, false },

                JumpRow(I)     =     { nullptr, false },

                JumpRow(J)     =     { nullptr, false },

                JumpRow(K)     =     { nullptr, false },

                JumpRow(L)     =     { nullptr, false },

                JumpRow(M)     =     { nullptr, false },

                JumpRow(N)     =     { nullptr, false },

                JumpRow(O)     =     { nullptr, false },

                JumpRow(P)     =     { nullptr, false },

                JumpRow(Q)     =     { nullptr, false },

                JumpRow(R)     =     { nullptr, false },

                JumpRow(S)     =     { nullptr, false },

                JumpRow(T)     =     { nullptr, false },

                JumpRow(U)     =     { nullptr, false },

                JumpRow(V)     =     { nullptr, false },

                JumpRow(W)     =     { nullptr, false },

                JumpRow(X)     =     { nullptr, false },

                JumpRow(Y)     =     { nullptr, false },

                JumpRow(Z)     =     { nullptr, false };

    #endif // COMMAND_CONTROL_FACTORY_TEMPLATE____INDEX_BUFFERS____
    ///}
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  /*UNUSED JmpBuf UNUSED JmpBuf UNUSED JmpBuf UNUSED JmpBuf UNUSED */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
        [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES]

            THERE ARE 8-10 TYPES (STYLES) OF MACRO I KNOW :


          [UNDEFINED]/[GUARD]/[LABEL]/[CONSTANT]/[IDENTIFIER]

        [FUNCTION]/[CONSTRUCTION]/[TEMPLATE]/[2 PART]/[UNKNOWN]


    #X) UNDEFINED () () ()

        - AN UNDEFINED MACRO (ASSUMING ITS A MACRO) IS A MACRO
          (OR SOMETHING LIKE ONE) THAT MAY BE USED OUTSIDE A
          FUNCTION AND MAY OR MAY NOT INCLUDE PARENTHESIS
          AND WILL BE UNDEFINED, AND MUST BE TERMINATED BY THE ;
          (SYMBOL).

    #1) GUARD (NO ARGS) (NON-DYNAMIC)

        - A GUARD IS A MACRO DEFINED TO HAVE NO VALUE AND USED
          WITH AN #ifdef OR #ifndef (HEADERS USE GUARDS). A GUARD
          WILL BE USED TO DETERMINE WHETHER TO IMPLEMENT SOMETHING
          OR NOT (MOSTLY I THINK).

    #2) LABEL (NO ARGS) (NON-DYNAMIC)

        - A LABEL IS IDENTICAL TO A GUARD OR A CONSTANT BUT
          TYPICALLY NOT UPPERCASE (LOWERCASE) AND USED TO
          LABEL THINGS OUTSIDE FUNCTIONS. (LIKE friend HERE).

        - A LABEL MAY ALSO SUBSTITUTE FOR AN OPENING/CLOSING
          BRACE/BRACKET (POSSIBLY BLOCK SEPARATOR SYMBOL(S)).

    #3) CONSTANT (NON-DYNAMIC)(VALUE/IDENTIFIER/OPERATOR)(NO ARGS)

        - A MACRO CONSTANT OR LABEL MAY BE USED LIKE A
          GUARD IF IT IS A VALUE CONSTANT WITH #if ... == ... ETC.

        - CONSTANTS OR LABEL MAY ALSO FIT IN THE PLACE OF A
          KEYWORD IF ITS DEFINITION AS A CONSTANT INCLUDES
          A KEYWORD (LIKE).

    #4) IDENTIFIER (NO ARGS)(NON-DYNAMIC)

        - THERE MAY BE A MACRO THAT LOOKS LIKE A VARIABLE
          BUT SUBSTITUTES FOR (INSERTING A COMPILER STRING)
          EITHER A CALL OR A CASE THAT RETURNS A VALUE.

        - SINCE IM MOSTLY TRYING TO NARROW IT DOWN TO LESS THAN
          10 TYPES OF MACROS, I SHOULD ADD THAT THIS TYPE OF
          MACRO MAY BE FOR IMPLEMENTING A BLOCK OR A SERIES OF
          STATEMENTS INSIDE A FUNCTION WHERE TOKEN CONCAT IS
          UNNECCESARY.

    #5) FUNCTION (0 OR MORE ARGS)(DYNAMIC PARAMETER(S))

        - THIS MACRO IS OPPOSITE TO THE LAST ONE BUT SAME, SAME
          THING BY PURPOSE BUT INCLUDES A SET (POSSIBLY EMPTY)
          SET OF PARENTHESIS AND (PROBABLY) SUBSTITUTES FOR EITHER
          A FUNCTION OR A CASE.

        - CALL/CASE OR SYNTAX DECORATION FOR CLASSNAME AFTER
          CLASSNAME GETS ITS DECLARATION/NAMESPACE MACRO.

        - A MACRO LIKE THIS MAY EVEN USE HIDDEN PARAMETER(S) LIKE
          A SINGLETON, OR IF THERE IS A POINTER LIKE self THAT IS
          ALWAYS NAMED self.

    #6) TEMPLATE          (1 OR MORE ARGS)(NON-DYNAMIC PARAMETER(S))

        - THIS MACRO, LIKE THE CONSTRUCTION MACRO, IS A MACRO THAT
          USES THE TOKEN CONCAT OPERATOR ## TO CONCATENATE ITS
          PARAMETER(S) TO EVERY GLOBAL DECLARATION/NAMESPACE, ADDING
          THE TEXT IDENTIFIER TOKEN (PARAMETER) TO THE DECLARATION/
          NAMESPACE (ALWAYS A typedef OF A POINTER TO THE Class TYPE
          IN OOC) ASSURES THAT NEW IDENTIFIERS ARE GENERATED.

    #7) CONSTRUCTION      (1 OR MORE ARGS)(NON-DYNAMIC PARAMETER(S))

        - THIS VERY SPECIAL TYPE OF MACRO MAY SUBSTITUTE FOR A
          FUNCTION CALL OR SOMETHING... POSSIBLY SOMEONE ELSES
          DEFINITION OF A FUNCTION MACRO BUT I WANT TO SAY THAT
          IT IS SPECIFICALLY NOT. A CONSTRUCTION MACRO DOES A
          TOKEN CONCAT LIKE A TEMPLATE MACRO BUT WITHIN A FUNCTION
          INSTEAD OF A GLOBAL POINT (LIKE FOR TEMPLATE IMPLEMENTATIONS).
          THEY MAY BE MISTAKEN FOR FUNCTION MACROS BUT ARE NOT,
          BECAUSE THEY CANNOT BE A FUNCTION. (LIKE new(Class)).

        - THIS MACRO WILL BE USED TO RESERVE SPECIAL USE OF THE
          DECLARATION/NAMESPACE OF CERTAIN STRUCTURES/MECHANISMS.

        - SO SOMETHING LIKE AN INITIALIZER/CONSTRUCTOR CAN BE USED
          BECAUSE OF A CONSTRUCTION MACRO WHEN Class##Init CONCATS
          TO ClassInit SO & ClassInit GETS PASSED INTO A FUNCTION
          AND RETURNED FROM THAT FUNCTION AS ITS DATATYPED PROPERLY
          TO BE CALLED FROM THERE.

        - REMEMBER THAT THIS MACRO TYPE NEEDS THINGS LIKE 2 PART
          NAMESPACES WHERE EVERY STRUCTURE/MECHANISM THAT BELONGS
          TO A CLASS OR A TYPE HAS THE TYPENAME OR CLASSNAME
          (DATATYPE) AT THE FRONT/END OF THE DECLARATION/NAMESPACE.

        - OBJECT-ORIENTED PROGRAMMING IS DEFINED BY CONSTRUCTION.
          WITH PROPERLY INCLUDED IDENTIFIERS FOR THE PROPERLY
          INCLUDED MECHANISM(S) (DECLARATIONS/IMPLEMENTATIONS)
          A STRUCT CLASS CAN EASILY PRODUCE AN OBJECT, ETC...

    #8) 2 PART            (ANYTHING)

        - A 2 PART MACRO DOES SOMETHING LIKE SUBSTITUTE A MACRO NAME
          INTO THE CODE SO THE PARENTHESIS OF THE SECOND MACRO MAY
          BE USED AFTER WHERE THE FIRST MACRO IS USED. A 2 PART MACRO
          MAY ALSO HAVE 1 MACRO SUBSTITUTE (INSERTING A COMPILER
          STRING) FOR A FUNCTION NAME WITH THE MACRO USED AFTERWARDS
          BEING A SUBSTITUTE FOR A PROCEDURE THAT HAS AN EXTRA SET OF
          PARENTHESIS WRAPPED AROUND IT SO THAT MAKES IT AN UNUSED SET
          OF PARENTHESIS AT SOME POINT, WHEREAS AT THE TIME WHEN ITS
          USED WITH THE FIRST PART OF THE 2 PART MACRO, THE SAME
          PARENTHESIS IS USED AS THE PARENTHESIS FOR A FUNCTION CALL
          (IF NOT THAT THEN ALSO THE FIRST THING).

        - THIS IS ECSPECIALLY THE KIND OF MACRO(S) TO BE CREATIVE
          WITH, OR JUST A TYPE OF MACRO THAT IM SURE THERE ARE OTHER
          POSSIBILITIES FOR.

    #?) UNKNOWN ()()()

        - AN UNKNOWN TYPE OF MACRO OR SOMETHING I HAVE NOT PUT MUCH
          TIME OR THOUGHT INTO MAY BE ONE THAT USES AN EXTRA
          PARENTHESIS INSIDE THE FIRST PARENTHESIS (FOR A MACRO THAT
          USES A PARAMETER). I CAN SEE THAT MAYBE BEING USED FOR
          SOMETHING GOOD, BUT NOT SURE IF ITS EVER NEEDED,
          (THAT IS LIKE __attribute__).

        - MACROS THAT USE AN ELLIPSIS AND __VA_ARGS__ ARE MOSTLY
          UNKONWN BY PURPOSE TO ME, I DO KNOW THAT YOU CAN HAVE
          PARAMTERS THAT ARE OMITTED VALUES OR ANYTHING IN ITS
          PLACE AS A PARAMETER, WHERE THE COMMA MUST BE EXPLICIT.

        - DEFINE DIRECTIVE MACROS MAY POSSIBLY BE DEFINED BY THE
          COMPILER TO MAKE NEW KEYWORDS (AND CANNOT BE UNDEFINED THEN).

     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*
         [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES]

       THERE ARE 13-21 TYPES (STYLES) OF MACRO I (MAY NEVER) KNOW:


          [UNDEFINED]/[GUARD]/[LABEL]/[CONSTANT]/[IDENTIFIER]

        [FUNCTION]/[CONSTRUCTION]/[TEMPLATE]/[2 PART]/[UNKNOWN]

                                   +

                   [DISPLAY-TAG]/[FACTORY]/[SPECIAL]


     */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
            MACRO TYPES:   [UNDEFINED]/[TAG/DISPLAY]/[GUARD]/[LABEL]/[CONSTANT]/[IDENTIFIER]/[FUNCTION]/[TEMPLATE]/[CONSTRUCTION]/[2 PART]/[UNKNOWN]

    +---------------------------------------------------------------------------------------------------------------------------------------------------------+
    |[MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES]|
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | # |      type      |   parameter(s)   | dynamic parameter(s) |                                      description                                         |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 1 |     GUARD      |        NO        |          N/A         | A GUARD (HEADER GUARD) WILL BE USED TO DETERMINE WHETHER TO IMPLEMENT SOMETHING OR NOT.  |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 2 |     LABEL      |        NO        |          N/A         | IDENTICAL TO GUARD BUT USED AS A LABEL INVISIBLE TO COMPILER (OUTSIDE OF STRUCTURES).    |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 3 |    CONSTANT    |        NO        |          N/A         | MACRO USED THE SAME WAY AS FIRST TWO BUT DOES INSERT SOMETHING.                          |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 4 |   IDENTIFIER   |        NO        |          N/A         | SPECIAL MACRO THAT LOOKS LIKE VARIABLE IDENTIFIER BUT INSERTS A CASE/CALL.               |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 5 |    FUNCTION    |    0 OR MORE     |          YES         | MACRO WITH DYNAMIC PARAMETER(S), IF ANY, INSERTS CALL/CASE.                              |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 6 |    TEMPLATE    |    1 OR MORE     |    NO/NOT USUALLY    | MACRO WITH NON-DYNAMIC PARAMETERS(S), USED TO IMPLEMENT DATASTRUCTURES.                  |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 7 |  CONSTRUCTION  |    1 OR MORE     |    NO/NOT USUALLY    | SPECIAL MACRO USED LIKE FUNCTION MACRO BUT WITH NON-DYNAMIC PARAMETERS(S).               |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    | 8 |     2 PART     |     ANYTHING     |       ANYTHING       | MACRO USED IN CONJUNCTION WITH ANOTHER TO ACHIEVE MULTIPLE PURPOSES.                     |
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    |[MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES] [MACRO TYPES]|
    +---+----------------+------------------+----------------------+------------------------------------------------------------------------------------------+
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

    +---------------------------------------------------------------------------------------------------------------------------------------------------------+
    |[OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |     type     |     name     |                          syntax                          |                           definition                           |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]   |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |    virtual   |       virtual(object, Class) -> method(this, ...)  ;     | CALL AN INTERFACE METHOD USING this.                           |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |     new      |         Class * object = new(Class)(this, ...)   ;       | CREATE AN INSTANCE USING this AND THE CONSTRUCTOR.             |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |    typeid    |           cstring type = typeid(object)    ;             | RETURN THE OO DATATYPE NAME (CLASSNAME) AS cstring.(ftable KEY)|
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |    delete    |                 delete(object)         ;                 | DELETE AN INSTANCE.                                            |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |   adapter    | Class * object = adapter(Class, Adapter)(this, ...)  ;   | CREATE AN INSTANCE USING this AND THE CONSTRUCTOR (SPECIAL).   |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |   template   |                 template(array)                          | (FOR OBJECT-ARRAY)   INITIALIZE TEMPLATE METHOD (OVERLOAD)     |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |    using     |            using template(array)  ()()()()()()() cend;   | (FOR OBJECT-ARRAY)  PUSH CONTROL FACTORY + INITIALIZE + RETURN |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  IDENTIFIER  |     this     |                          this                            | ALWAYS USED FOR CONSTRUCTOR, INTERFACE METHOD, AFTER virtual,..|
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |CONSTANT/LABEL|    static    |               static void f();                           | LABEL FOR OTHERWISE static LABELED FUNCTIONS/PROTOTYPES        |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |CONSTANT/LABEL|   hazardous  |               hazardous type val;                        | LABEL FOR volatile x3 (NEEDS RESEARCH)                         |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |CONSTANT/LABEL|   explicit   |               explicit void f(){}                        | LABEL FOR IMPLEMENTING FUNCTIONS INSIDE .h FILES               |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |     LABEL    |    except    |               except void f();                           | PURE LABEL FOR FUNCTIONS THAT throw EXCEPTIONS                 |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |     LABEL    |   noexcept   |               noexcept void f();                         | PURE LABEL FOR FUNCTIONS THAT DON'T throw EXCEPTIONS           |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |   allocate   |              void * p = allocate(sizeof(type)) ;         | SIMPLE MEMORY HANDLING (WITHOUT VIRTUAL)                       |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |  deallocate  |             void * p = deallocate(p)  ;                  | SIMPLE MEMORY HANDLING (WITHOUT VIRTUAL)                       |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |  reallocate  |            void * p = reallocate(p, sizeof(type))  ;     | SIMPLE MEMORY HANDLING (WITHOUT VIRTUAL)                       |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |CONSTANT/LABEL|    atomic    |                    atomic type val;                      | THE ATOMIC QUALIFIER FROM C                                    |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   CONSTANT   |    nullptr   |                  void * p = nullptr;                     | CONSTANT 0 TO INITIALIZE POINTERS, ALSO: null, NULL, NIL,...   |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |   try/catch  |try{f();*//*(throw in function)*//**}catch(Exception *e){}| ERROR HANDLING (OPERATION ABORT)                               |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |    2 PART    |    throw     |      throw( new(Exception) )(this, "message");           | 2 PART MACRO USED IN CONJUNCTION WITH MACRO CONSTRUCTOR        |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |     set      |               void * p = set( jumpBufVar )  ;            | SIMPLE ERROR HANDLING (SET p TO 0)                             |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   |     jump     |                   jump( jumpBufVar, p ) ;                | SIMPLE ERROR HANDLING (JUMP BACK TO RE-INIT p)                 |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |CONSTANT/LABEL|  attribute   |    void FactoryTableEnd(void)attribute((destructor));    | USED FOR C ATTRIBUTE FUNCTION LABELS (constructor + destructor)|
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |   typemax    |               type val = typemax(type)  ;                | USED WITH SIMPLE DATATYPE PARAMETER FOR MAXIMUM ALLOWED VALUE  |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  SINGLETON   |    vtable    |               vtable ->                                  | ALSO: VirtualTable(Interface) STRUCT VARIABLE SO .             |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  SINGLETON   |    ftable    |               ftable ->                                  | ALSO: FactoryTable(Interface) STRUCT VARIABLE SO .             |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  SINGLETON   |    atable    |               atable ->                                  | ALSO: AdapterTable(Interface) STRUCT VARIABLE SO .             |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  IDENTIFIER  |   default    |                     default(0-255)                       | CONTROL FACTORY DEFAULTS (0-7) (8-255) EXTRA                   |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |   factory    |       Object * obj = factory("Class")(this, ...) ;       | FULLY-DYNAMIC INSTANCE TYPE USING this AND CONSTRUCTOR (SPECIAL)|
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |   multimap   |          multimap(true)(typeid(obj))("")("")             | GENERAL PURPOSE OVERLOAD SEARCH (MAIN FACTORY C HELPER)        |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |   function   |    ((factPtr)*function(object, "method"))(this, ...) ;   | ACCESS/CALL ANY FUNCTION THATS AN INTERFACE METHOD STRATEGICALLY|
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |   complex    |            (*(int*)complex(obj, "var"))   ;              | ACCESS ANY CLASS DATA MEMBER STRATEGICALLY                     |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |   register   |                    register(Class)  ;                    | SUBMIT A TYPE/CLASS/... TO THE FACTORY TABLE                   |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION |     drop     |                      drop(Class)  ;                      | WITHDRAW A TYPE/CLASS/... FROM THE FACTORY TABLE               |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |   override   |          override(true-false)( obj, "" )( obj, "" );     | OVERRIDE ANY INTERFACE METHOD (OVERLOAD)                       |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |  namespace   |               namespace(obj, "", "", "")                 | FACTORY C CONNECT                                              |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  SINGLETON   |     cin      |                 cin (...) (...) cend;                    | CONSOLE INPUT                                                  |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  SINGLETON   |     cout     |                 cout (...) (...) cend;                   | CONSOLE OUTPUT                                                 |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |    LABEL     |     endl     |                 cout endl cend;                          | CONSOLE NEW LINE                                               |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |    LABEL     |     cend     |                cout ("...") cend;                        | POP CONTROL FACTORY                                            |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |class(builder)|class(builder)(multimap)(false)("")(class(FactoryTable))(0);| CLASS BUILDER FOR THE COMPLEX OBJECT                         |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |    build     |     Interface reg = build("class(FactoryTable)")(0) ;    | CLASS BUILDER HELPER(S)                                        |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | NOT A MACRO  |   demolish   |                     demolish(obj)                        | CLASS BUILDER HELPER(S)                                        |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CONSTRUCTION | accumulate   |       string * id = accumulate(String)(this, 11) ;       | STRUCT BUNKER NEW OBJECT                                       |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |   FUNCTION   | deaccumulate |                 deaccumulate(obj)                        | STRUCT BUNKER DELETE OBJECT                                    |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |    2 PART    |struct(bunker)|struct(bunker)(virtual)->meth();struct(bunker)(typeid)(obj)| STRUCT BUNKER TOOLKIT                                         |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |              |              |                                                          |                                                                |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    +---------------------------------------------------------------------------------------------------------------------------------------------------------+
    |[OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] [OOC DEFINTIONS] |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    |  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]  [FACTORY C DEFINITIONS]   |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+


    +--------------+--------------+----------------------------------------------------------+---------------------------------------------------------------------+
     - MAJOR - RUNTIME - STRUCTURES - FOR USER DEFINED TYPES - BY TYPEDEF - MAJOR - RUNTIME - STRUCTURES - FOR USER DEFINED TYPES - BY TYPEDEF - (FACTORY C) -
    +--------------+--------------+----------------------------------------------------------+---------------------------------------------------------------------+
    | Constructor                 |                                                               |                                                                |
    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+

        typedef Object * (*Constructor) (Object *, ...);

            - controlled by a function that returns [Constructor] and has loaded a pointer onto the stack for (this, ...) to be passed into it.

    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+
    | Registructor                |                                                               |                                                                |
    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+

        typedef Object * (*(*(*Registructor)(cstring))(cstring))(cstring);

            - controlled by multimap(true - false) that returns [Registructor]. true if multimap.

    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+
    | Overstructor                |                                                               |                                                                |
    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+

        typedef void (*(*Overstructor)(cstring, cstring))(cstring, cstring);

            - controlled by override(true - false) that returns [Overstructor]. true if override.

    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+
    | Unistructor                 |                                                               |                                                                |
    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+

        typedef void (*(*Unistructor)(cstring, ...))(Object *, ...);

            - controlled by union(true - false) that returns [Unistructor]. true if want a union.

    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+
    | Control Factory             | compile-time factory using typename #00-99 or ... ? 9999 easy |                                                                |
    +--------------+--------------+---------------------------------------------------------------+----------------------------------------------------------------+

        typedef Object * n ... (*(*(*(*(*(* f ) (Object *, ...))(Object *, ...))(Object *, ...))(Object *, ...))(Object *, ...))(Object *, ...) ... n

            - controlled by an array (100% strategically-assigned function pointers (method(s)))
                    * 100% for Command Array maybe not Factory Array

    +--------------+--------------+----------------------------------------------------------+---------------------------------------------------------------------+
     - MAJOR - RUNTIME - STRUCTURES - FOR USER DEFINED TYPES - BY TYPEDEF - MAJOR - RUNTIME - STRUCTURES - FOR USER DEFINED TYPES - BY TYPEDEF - (FACTORY C) -
    +--------------+--------------+----------------------------------------------------------+---------------------------------------------------------------------+


    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CLASS FORTIFICATIONS - CLASS FORTIFICATIONS - THE 3 PRIMARY SINGLETON TABLES - CLASS FORTIFICATIONS - CLASS FORTIFICATIONS - PROVIDED BY SINGLETON -    |
    +--------------+--------------+-------------------------------------+--------------------+----------------------------------------------------------------+
    /**+---------------------------------+                              | this is the default OOC (Factory C) table for basic OOC programming                 |
     * @brief vTable interface           |   TABLE OF OBJECTS           |                                                                                     |
     * +---------------------------------+                              | this is a permanently fortified table in Factory C                                  |
     * ///                                                              |                                                                                     |
    volatile volatile typedef struct vTable (VirtualTable)              | this is a table of object/interface pairings (vtable of vtables)                    |
    {   HashSet(ClassClassVirtualTablePair,32VirtualTable)base;         +--------------------+----------------------------------------------------------------+
                                                                        |                                                                                     |
        noexcept Constructor (*insert)( volatile vTable * volatile,     | a) insert - FORTIFIED BY - new, adapter, factory, accumulate                        |
            volatile Object * volatile, Class, Class(VirtualTable),     |                                                                                     |
            Constructor );                                              |                                                                                     |
                                                                        |                                                                                     |
        except Class(VirtualTable) * (*search)( volatile vTable *       | b) search - FORTIFIED BY - virtual, typeid, function, override,                     |
            volatile, volatile Object * volatile, Class );              |                            struct(bunker)(virtual), ...                             |
                                                                        |                                                                                     |
        bool () (*remove)( volatile vTable * volatile,                  | c) remove - FORTIFIED BY - delete, deaccumulate                                     |
            volatile Object * volatile, Class );                        |                                                                                     |
                                                                        |                                                                                     |
    }VirtualTable (VirtualTable), vTable (VirtualTable);                |                                                                                     |
    +--------------+--------------+-------------------------------------+--------------------+----------------------------------------------------------------+
    /**+---------------------------------+                              | this is the table used for fully-dynamic programming in Factory C                   |
     * @brief fTable interface           |   TABLE OF CLASSES           |                                                                                     |
     * +---------------------------------+                              | this is a permanently fortified table in Factory C (after vtable)                   |
     * ///                                                              |                                                                                     |
    volatile volatile typedef struct fTable (VirtualTable)              | this is a table or map of composite map/multimap(s)                                 |
    {   HashSet(Pair(ClassName,ClassFactoryMethod),)(VirtualTable)base; +--------------------+----------------------------------------------------------------+
                                                                        |                                                                                     |
        bool () (*insert)( volatile fTable * volatile,                  | a) insert - FORTIFIED BY - register                                                 |
            cstring, class(FactoryMethod) *, Object * );                |                                                                                     |
                                                                        |                                                                                     |
                                                                        |                                                                                     |
        except Class(FactoryMethod) * (*search)( volatile fTable *      | b) search - FORTIFIED BY - #1 multimap(true-false), ...function, complex, factory,  |
            volatile, cstring );                                        |                            override, ...                                            |
                                                                        |                                                                                     |
        bool () (*remove)( volatile fTable * volatile,                  | c) remove - FORTIFIED BY - drop                                                     |
            volatile Object * volatile, cstring );                      |                                                                                     |
                                                                        |                                                                                     |
    }FactoryTable (VirtualTable), fTable (VirtualTable);                |                                                                                     |
    +--------------+--------------+-------------------------------------+--------------------+----------------------------------------------------------------+
    /**+---------------------------------+                              | this is an accessory table used for help with assigning interfaces to objects       |
     * @brief aTable interface           |   TABLE OF ADAPTERS          |                                                                                     |
     * +---------------------------------+                              | this is a permanently fortified table in Factory C (after vtable)                   |
     * ///                                                              |                                                                                     |
    volatile volatile typedef struct aTable (VirtualTable)              | this is a table of self pointer data members.                                       |
    {   HashSet(Pair(Adapter,Class),VirtualTable)(32)base;              +--------------------+----------------------------------------------------------------+
                                                                        |                                                                                     |
        bool () (*insert)( volatile aTable * volatile,                  | a) insert - FORTIFIED BY - union(true)                                              |
            Adapter, Class );                                           |                                                                                     |
                                                                        |                                                                                     |
        except Class () * (*search)( volatile aTable * volatile,        | b) search - FORTIFIED BY - friend                                                   |
            Adapter );                                                  |                                                                                     |
                                                                        |                                                                                     |
        bool () (*remove)( volatile aTable * volatile,                  | c) remove - FORITIFED BY - union(false)                                             |
            Adapter );                                                  |                                                                                     |
                                                                        |                                                                                     |
    }AdapterTable (VirtualTable), aTable (VirtualTable);                |                                                                                     |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+
    | CLASS FORTIFICATIONS - CLASS FORTIFICATIONS - THE 3 PRIMARY SINGLETON TABLES - CLASS FORTIFICATIONS - CLASS FORTIFICATIONS - PROVIDED BY SINGLETON -    |
    +--------------+--------------+----------------------------------------------------------+----------------------------------------------------------------+

    /**

        these are the 3 types of level 1 struct classes (registrations):

                    class(Table)

                    class(Heap)

                    class(Array)  UNUSED (JUST A GESTURE)


        these are the 3 types used by the builder (registration types):

                    class(Table)

                    pass(Table)

                    builder(Heap)


        these are the four corners of Factory C: (by implementation)

                    VIRTUAL TABLE   -   hash table singleton

                    FACTORY TABLE   -   hash table singleton

                    ADAPTER TABLE   -   hash table singleton

                    CONTROL FACTORY -   constructor sequence (like syntax sugar)

                    also there is an Exception and an Assertion used
                    as tools alongside the Compiler/Debugger.

    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |    these are the three levels of object oriented programming defined by Factory C:     |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                       *****     VIRTUAL OBJECT (LOW)     *****                     # 1 |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                - virtual table object (VTO)                                            |
    |                    - implemented struct class                                          |
    |                    - single class extended interface                                   |
    |                        *- simple inheritance possible                                  |
    |                        *- multiple inheritance issues                                  |
    |                    - destructor method                                                 |
    |                    - constructor/initializer method                                    |
    |                    - type hook method (for typeid)                                     |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                       *****     FACTORY OBJECT (MID)     *****                     # 2 |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                - not only a virtual table object but an object                         |
    |                  of a factory table class (FTC)                                        |
    |                    - everything from virtual object                                    |
    |                    - constructor/allocator hook method  {return new(Class);}           |
    |                    - singleton factory method(s)                                       |
    |                        *- class interface heap                                         |
    |                            = vto interface utility                                     |
    |                            = multiple inheritance substitution/solution                |
    |                            *- class info sub heaps                                     |
    |                            = overloads/interface overload #1,                          |
    |                              IO overload, compare overload, ...                        |
    |                            = fully dynamic programming                                 |
    |                                                                                        |
    |                    - typeid() used for strategy/overloads                              |
    |                      in conjunction with multimap()()()()                              |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                      *****     COMPLEX OBJECT (HIGH)     *****                     # 3 |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                - factory object that uses runtime objects                              |
    |                  for its interface, info heaps, typeid, ...                            |
    |                    - everything from factory object                                    |
    |                    - unimplemented builder class "complex"                             |
    |                                                                                        |
    |                    - more dynamic in more ways, overloads                              |
    |                      being dynamic, now dynamic for amount                             |
    |                      of functions being overloaded per                                 |
    |                      overload (dynamic-at-runtime)                                     |
    |                      (more fully dynamic programming)                                  |
    |                                                                                        |
    |                    - complex methods get implemented those                             |
    |                      are methods that use multimap and look                            |
    |                      for the complex heap so the amount of                             |
    |                      datamembers declared inside the complex                           |
    |                      heap determine things like how many                               |
    |                      parameters the constructor takes (and                             |
    |                      in alphabetical alphabetical                                      |
    |                      order). these can be known as                                     |
    |                      "complex methods".                                                |
    |                                                                                        |
    |                    - interface methods like complex methods                            |
    |                      can take it into their own responsibility                         |
    |                      that since a function is called on a                              |
    |                      class object it can be up to the function                         |
    |                      (probably added as an interface method(s))                        |
    |                      to add datamembers to the complex heap or                         |
    |                      add interface methods to the virtual heap                         |
    |                      or as a set of strategic methods through                          |
    |                      a strategy/overload heap or anything. so                          |
    |                      after the datamembers are added, they can                         |
    |                      be used to execute to function then. these                        |
    |                      can be known as "builder methods".                                |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                      *****  CONCLUSION/UNDEFINED AREAS   *****                         |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
    |                                                                                        |
    |                    - using a class builder class is to execute                         |
    |                      the/parts of the builder complex operation.                       |
    |                    - there are still undefined areas of object-                        |
    |                      oriented programming or areas that could use                      |
    |                      more solid structure, but this will suffice                       |
    |                      for the implementation of Factory C because                       |
    |                      any further development in certain areas like                     |
    |                      how to override a method would only be needed                     |
    |                      for an operating system (or something). so                        |
    |                      since the class builder is implemented,                           |
    |                      Factory C is considered to be fully implemented.                  |
    |                                                                                        |
    +--------------+--------------+----------------------------------------------------------+
     */

    /**
        MACRO TOOLKIT:


        #  (prefix unary operator) (begin macro directive)

            - - BEGIN MACRO DIRECTIVE.

        ## (binary operator)

            - - TOKEN CONCAT.

        #  (prefix unary operator) (inside macro)

            - - STRINGIZE.

        \  (binary operator or postfix unary operator)

            - - LINE SEPARATOR.

        ## (prefix unary operator)

            - - NOT SURE EXACTLY WHAT ITS DEFINITION IS
                BUT ITS USED TO SWALLOW THE PRECEEDING
                COMMA IN EXAMPLE BELOW.

       ... (inside parenthesis)

            - - VARIABLE ARGUMENTS.


        _  (that or Shift/Caps)

            - - I EVEN CONSIDER THIS A MACRO TOOL FOR
                READABILITY WHEN PERFORMING TOKEN
                CONCATENATION.

     *//*

        __VA_ARGS__




    #define GET_MACRO(_1, _2, _3, NAME, ...) NAME

    #define FOO(...) GET_MACRO(__VA_ARGS__, FOO3, FOO2)(__VA_ARGS__)

    #define FOO ( format, ... ) printf ( format, ##__VA_ARGS__ )





           {"class(StrategyHeap)"},///ANOTHER SUB-HEAP LEVEL FOR OVERLOADS


                                   ///SINCE Complex AND Virtual ECSPECIALLY


                                   ///DON'T USE MULTIPLE TABLES

            ///                //big files to include:

        //#include "OOC/vTable.h"  ///  struct class object factory
        //#include "OOC/aTable.h"  ///  solution for Adapters
        //#include "OOC/fTable.h"  ///  the OO factory solution

        //#include "OOC/Control/template.h"


    */
    /* this needs to also update the object(s)
     *
     * how would you propose that it do that?
     *
     * (without being sarcastic there was a ctable idea u proposed)
     *
     * ... so ? (instance of aTable ctable)
     *
     *
     * this also means that a Complex will have its Subject Object
     *
     * that keeps a stack of every Complex Object of that Complex
     *
     * but there needs to be double pointers and not every pointer
     *
     * (ecspecially) not every pointer will be reset by this action
     *
     * that seems to be something that might go un-implemented...
     *
     * one thing that catches my attention for the first time
     *
     * is a reallocate function, this may prove useful considering
     *
     * if reallocate() reallocates the size while keeping the original
     *
     * address, i hope it would, or reallocate() is misleading to me.
     */
    #if 0
        class(builder)(complex)("Fan")(String, "location");

    #endif // 0

    #if 0
        class(builder)(complex)("Fan")(String, "location");


           (*(String**)complex(fan, "location"))
                = new(String)(this, 2, "bedroom");
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note: this does not reallocate to the same address
     *       instead, every object needs to be recycled when
     *       the complex heap is modified, every object needs
     *       its interface reassigned when the virtual heap
     *       is modified
     */
    #if 0
        Object * * o = allocate(8);

        o[0] = & class(Type);

        o[1] = & class(Init);


        printf( "before reallocate\n" );
        printf( "address: 0x%x\n", o );

        o = reallocate(o, 12);


        if( o[0] == & class(Type) ){printf("check\n");}

        if( o[1] == & class(Init) ){printf("check\n");}


        o[0] = & class(Type);

        o[1] = & class(Init);

        o[2] = & class(Dtor);

        printf( "after reallocate\n" );
        printf( "address: 0x%x\n", o );
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
        /* note:

        push flag, push heap, push typeid, push map, pop map,
        pop heap, pop typeid, push heap, push typeid, pop flag,
        push map, pop map, pop heap, pop typeid

                 ...lol still not right
                    completely...

        (still just multimap not class builder version)

        without volatile factory methods cla + sub:

        push flag, push map, pop map, pop flag, push map, pop map
        (done)


         */
        ((execPtr*)multimap(true)(typeid(fan))
         ("class(StrategyHeap)")("med"))[1](fan);
    #endif // 0

    #if 0
          /* note: this will not work unless the definition of
           *       Table(Key, Val, End) is removed (WHICH I WON'T DO)

                   oh well (all good).
           */
         #define Table(Type)  Type##Table/// Table(Virtual) == VirtualTable
    #endif // 0


                                                 //CWP
#endif // OBJECT_H_INCLUDED
