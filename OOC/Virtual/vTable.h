#ifndef VTABLE_H_INCLUDED
#define VTABLE_H_INCLUDED
#define VTABLESINGLETON 1  //true
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
    /*-OBJECT TABLE - OBJECT TABLE - OBJECT TABLE - OBJECT TABLE-*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||    C VIRTUAL TABLE  (STRUCTCLASS OBJECT FACTORY)    || *
     *                                                           *
     *             by Willy (11/06/2018)(01/13/2021)             *
     *                      (12/01/2021)(12/15/2021)             *
     *                      (01/04/2022)(02/05/2022)             *
     *                      (02/07/2022)(02/09/2022)             *
     *                      (02/16/2022)(03/31/2022)             *
     * ||                   (09/11/2022)                      ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*-OBJECT TABLE - OBJECT TABLE - OBJECT TABLE - OBJECT TABLE-*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Reason(s) to use:                                 *
     *                                                           *
     *   1)  keep an extra pointer to each location where non-   *
     *       automatic memory for an object is located, this way *
     *       memory leaks won't occur as easy.                   *
     *                                                           *
     *   2)  all objects come fully initialized using the        *
     *       constructor.                                        *
     *                                                           *
     *   3)  assign an interface to each object, retrieving it   *
     *       when necessary.                                     *
     *                                                           *
     *   4)  with a fully object-based approach, anything not an *
     *       object that is off-the-stack and not on-the-stack   *
     *       can be deallocated through a pointer inside an      *
     *       object's destructor as non-automatic memory (heap). *
     *                                                           *
     *   5)  when the object is assigned its interface, one      *
     *       should note that the first datafield position of    *
     *       every interface is reserved for the type method,    *
     *       used to give (its) description, otherwise the       *
     *       objects description as a runtime string, the        *
     *       objects type id. this is the class key to the       *
     *       map-multimap assigned to it at the factory table.   *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
  #define DEBUG_HASH_TABLE 0

    //#include "../Template/defineBasicHashTable.h"
    #include "../Template/defineHashTable.h"
  #if 0
    #define  define(macro)  define##macro

    #define  typename  define

    #undef   control
    #define                                  control()\
    \
        (*Flags[0]?ControlSlot[0][0]:&self);stack=((void**)stack)+1
  #endif // 0
    #undef   size_type
    #define  size_type        unsigned int//pick measurement type here

    #define  default_prime    101       //... prime
    #undef   default_prime

    volatile static size_type default_prime = 101; // 23 // 7

    #define  vTable(Member)                          vTable##Member
    #define  VirtualTable(Member)              VirtualTable##Member

    //everywhere 32 is seen in this file can be replaced with 64
    //for a system with 64-bit pointers, anything else and new hash
    //functions will need to be written inside hash.h and should
    //be prototyped inside the basic define hash set file

    //every occurrence of the amount of bits defined
    //has been parenthesized using these macros below. seemingly
    //a numeric value (to replace with anything like a variable),
    //however they cannot be replaced by one macro defined as 32,

    //or anything, just the text 64, ... at each occurrence of 32
    //(and only in this file too, but dont forget aTable hashes
    //pointers also)
    #define ClassClassVirtualTablePairHashSet32(Member)\
    \
        ClassClassVirtualTablePairHashSet32(Member)

    #define ClassClassVirtualTablePairHashSetType(Bits)\
    \
        ClassClassVirtualTablePairHashSet##Bits##Type

    #define ClassClassVirtualTablePairHashSetSizeType(Bits)\
    \
        ClassClassVirtualTablePairHashSet##Bits##SizeType

    #define ClassClassVirtualTablePairHashSetVirtualTable(Bits)\
    \
        ClassClassVirtualTablePairHashSet##Bits##VirtualTable

    #define ClassClassVirtualTablePairHashSetInit(Bits)\
    \
        ClassClassVirtualTablePairHashSet##Bits##Init

    #define ClassClassVirtualTablePairQuadraticProbeInsert(Bits)\
    \
        ClassClassVirtualTablePairQuadraticProbe##Bits##Insert

    #define ClassClassVirtualTablePairQuadraticProbeRemove(Bits)\
    \
        ClassClassVirtualTablePairQuadraticProbe##Bits##Remove

    #define ClassClassVirtualTablePairHashSetResize(Bits)\
    \
        ClassClassVirtualTablePairHashSet##Bits##Resize

    #define ClassClassVirtualTablePairHashSetInitArray(Bits)\
    \
        ClassClassVirtualTablePairHashSet##Bits##InitArray

    #define ClassClassVirtualTablePairQuadraticProbeQProbe(Bits)\
    \
        ClassClassVirtualTablePairQuadraticProbe##Bits##QProbe

    #define ClassClassVirtualTable(Member)\
    \
        ClassClassVirtualTable##Member ///Pair

    #define ClassClassVirtualTablePair(Member)\
    \
        ClassClassVirtualTablePair##Member

    #define ClassClassVirtualTablePairIterator(Member)\
    \
        ClassClassVirtualTablePairIterator##Member

    #define ClassClassVirtualTablePairVector(Member)\
    \
        ClassClassVirtualTablePairVector##Member

    #define ClassClassVirtualTablePairHashSet32(Member)\
    \
        ClassClassVirtualTablePairHashSet32##Member

    #define findPrime(Bits)\
        findPrime##Bits##Bit

    #define printVirtualTable\
        VirtualTable(ConsoleOut)

    #define vTableTesting\
        VirtualTable(ConsoleIn)

   # define TypeID(Member)TypeID ## Member

   # define Exception(Member)Exception ## Member

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    implement base type                    */
  #if DEBUG_HASH_TABLE == 0
    volatile typename(Iterator)(ClassClassVirtualTablePair);

    volatile typename(BasicVector)(ClassClassVirtualTablePair, );

    volatile typename(BasicHashTable)(Class, ClassVirtualTable, 32, );
  #endif // DEBUG_HASH_TABLE

    typedef HashTable(Class,ClassVirtualTable,SizeType)(32)vSizeType;


    noexcept static cstring vTable(TypeID)( const Object * );

    except static cstring TypeID(Except)( const Object * );


    noexcept static class(VirtualTable) * vTable(Instance)
        ( const Object * );


    static Object * vTable(This)(void);

    static Jump Exception(Jump)(void);

    static Object * Exception(Exception)(void);

    static void vTable(Destroy)(void);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                 central area (singleton)                  */
    #ifndef VIRTUALTABLESINGLETON
    #define VIRTUALTABLESINGLETON 1 //

        volatile static struct vTable * volatile vtable = 0; //singleton

        volatile static Object * volatile vstk = 0; //object stack
        #define                  this     vTable(This)()
        #include                "new.h"     ///
        #include                "delete.h"  ///
        #include                "virtual.h"

        static cstring () (*typeid)(Object *)
            = & vTable(TypeID);//& TypeID(Except);//
        static class(VirtualTable) * (*instance)(Object *)
            = & vTable(Instance);///+instanceof(object, Class)

        static void (*destroy)(void) = &vTable(Destroy);

        static bool              vPush(Object *);
        static Object *          vPop(void);              ///
        static const Object * *  vTop(void);
        static size_type        vHeight(void);
        static int              vPrint(void);

    #endif // VIRTUALTABLESINGLETON
    //         OOP in C or OOC is now 33% defined here           //
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         implement                         */
    volatile volatile volatile typedef struct vTable ///(Virtual C)
    {   HashTable(Class,ClassVirtualTable,32)base;//
    }VirtualTable, vTable;

    /**+---------------------------------+
     * @brief vTable interface           |
     * +---------------------------------+
     *///PRIMARY (SINGLETON) INTERFACE (FACTORY C)
    volatile volatile typedef struct vTable (VirtualTable)
    {   HashTable(Class,ClassVirtualTable,32VirtualTable)base;

        noexcept Constructor (*insert)( volatile vTable * volatile,
            volatile Object * volatile, Class, Class(VirtualTable),
            Constructor );

        except Class(VirtualTable) * (*search)( volatile vTable *
            volatile, volatile Object * volatile, Class );

        bool () (*remove)( volatile vTable * volatile,
            volatile Object * volatile, Class * );

    }VirtualTable (VirtualTable), vTable (VirtualTable);


    volatile typedef struct vTable (FactoryTable)
    {   struct class (FactoryTable)base;// = {0,0,0}
    #if 0
        VirtualTable(Helper) (*operator [])( vTable *, vSizeType );
    #endif // 0
    }VirtualTable (FactoryTable), vTable (FactoryTable);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                      prototypes                           */
    static volatile vTable * volatile VirtualTable(Init)

        ( volatile vTable * volatile, ... ) ;


    static volatile void VirtualTable(Dtor)

        ( volatile vTable * volatile ) ;


    static cstring typename(Type) (VirtualTable) ;


    noexcept static Constructor VirtualTable(Insert)

        ( volatile vTable * volatile, volatile Object * volatile,

          Class, Class(VirtualTable), Constructor );


    except static Class(VirtualTable) * VirtualTable(Search)

        ( volatile vTable * volatile,

          volatile Object * volatile, Class );


    static bool VirtualTable(Remove)

        ( volatile vTable * volatile,

          volatile Object * volatile, Class * );


    void VirtualTable(Constructor)(void)attribute((constructor));

    void VirtualTable(Destructor)(void)attribute((destructor));


    static volatile vTable * volatile VirtualTable(Allocator)

        ( volatile vTable * volatile * volatile, vSizeType );


    static void VirtualTable(Deallocator)

        ( volatile vTable * volatile * volatile );


    static int printVirtualTable(VirtualTable *);

    static int vTableTesting(VirtualTable *) ;



    static int VirtualTable(StandardOut)(VirtualTable *);

    static int VirtualTable(FileOut)(VirtualTable *);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*            declare/initialize static interface            */
    static VirtualTable(VirtualTable)

        VirtualTable(Interface) =
    {
      {
        {
          {
            {
              &VirtualTable(Type),/*class namespace*/

              &VirtualTable(Init),

              &VirtualTable(Dtor)
            },
            &Pair(Class, ClassVirtualTable)(Vector)(Copy),

            &ClassClassVirtualTablePairQuadraticProbeInsert(32),

            &ClassClassVirtualTablePairQuadraticProbeRemove(32),

            &ClassClassVirtualTablePairQuadraticProbeQProbe(32),

            &Pair(Class, ClassVirtualTable)(Vector)(Size),

            &Pair(Class, ClassVirtualTable)(Vector)(Begin)
          },
          &HashSet(ClassClassVirtualTablePair,32)(Resize),/*(32),*/

          &Pair(Class, ClassVirtualTable)(Vector)(Replace),

          &Pair(Class, ClassVirtualTable)(Vector)(Clear),

          &Pair(Class, ClassVirtualTable)(Vector)(Front),

          &Pair(Class, ClassVirtualTable)(Vector)(Back),

          &Pair(Class, ClassVirtualTable)(Vector)(Max),

          &Pair(Class, ClassVirtualTable)(Vector)(End)
        },
        &ClassClassVirtualTablePairQuadraticProbeQProbe(32),

        &findPrime(32) /*standard non-class (namespace) identifier (friend)*/
      },
      &VirtualTable(Insert),

      &VirtualTable(Search),

      &VirtualTable(Remove)
    };
    static Constructor typename(Ctor)(VirtualTable) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                 implement error handling                  */
    #include     "instance.h" //+instance
    #include     "instanceof.h"
    #include     "typeid.h" //-instance

    #include     "../Exception/Exception.h" //+jStk.h +eStk.h

    #include     "vStk.h"
    //#include     "../Control/cStk.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                     this                           *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Object * vTable(This)(void)
    {
        if( vTop() )
        { Object * o = vPop();
          if(!o){ throw( new(NullPointer) )
          (vPop(), "NullObject") ; } return o; }
        else{ throw( new(NullPointer) )
        (vPop(), "EmptyObjectStack"); }   }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                     jump                           *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Jump Exception(Jump)(void)
    {
        if( jTop() )
        { Jump j = jPop();
          if(!j.key){ throw( new(NullPointer) )
          (this, "NullJump"); } return j; }
        else{ throw( new(NullPointer) )
        (this, "EmptyJumpStack"); }   }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                  exception                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Object * Exception(Exception)(void)
    {
        if( eTop() )
        { Exception * e = ePop();
          if(!e){ throw( new(NullPointer) )
          (this, "NullException") ; } return e; }
        else{ throw( new(NullPointer) )
        (this, "EmptyExceptionStack"); }   }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief                   destroy                          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void vTable(Destroy)(void)
        {VirtualTable(Dtor)(vtable);
         VirtualTable(Init)(vtable, 0, default_prime);}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*         finish implementing base type from earlier        */
    //#include "../Template/defineHashTable.h"

    typename(VectorInit)(ClassClassVirtualTablePair, );

    typename(HashTableInit)(Class, ClassVirtualTable, 32, );

    #if 0
    typename(FactoryIterator)(ClassClassVirtualTablePair, );

    explicit int Iterator(ClassClassVirtualTablePair)(ConsoleOut)
    (const Iterator(ClassClassVirtualTablePair) * self, ...){}

    explicit int Iterator(ClassClassVirtualTablePair)(StandardOut)
    (const Iterator(ClassClassVirtualTablePair) * self, ...){}

    explicit int Iterator(ClassClassVirtualTablePair)(FileOut)
    (const Iterator(ClassClassVirtualTablePair) * self, ...){}


    typename(FactoryVector)(ClassClassVirtualTablePair, );

    explicit int Vector(ClassClassVirtualTablePair)(ConsoleIn)
    (Vector(ClassClassVirtualTablePair) * self, ...){}

    explicit int Vector(ClassClassVirtualTablePair)(ConsoleOut)
    (const Vector(ClassClassVirtualTablePair) * self, ...){}


    explicit int Vector(ClassClassVirtualTablePair)(StandardIn)
    (Vector(ClassClassVirtualTablePair) * self, ...){}

    explicit int Vector(ClassClassVirtualTablePair)(StandardOut)
    (const Vector(ClassClassVirtualTablePair) * self, ...){}


    explicit int Vector(ClassClassVirtualTablePair)(FileIn)
    (Vector(ClassClassVirtualTablePair) * self, ...){}

    explicit int Vector(ClassClassVirtualTablePair)(FileOut)
    (const Vector(ClassClassVirtualTablePair) * self, ...){}


    typename(FactoryHashTable)(Class, ClassVirtualTable, 32, );

    explicit int HashSet(ClassClassVirtualTablePair,32)(ConsoleIn)
    (HashSet(ClassClassVirtualTablePair,32) * self, ...)          {}

    explicit int HashSet(ClassClassVirtualTablePair,32)(ConsoleOut)
    (const HashSet(ClassClassVirtualTablePair,32) * self, ...)    {}


    explicit int HashSet(ClassClassVirtualTablePair,32)(StandardIn)
    (HashSet(ClassClassVirtualTablePair,32) * self, ...)          {}

    explicit int HashSet(ClassClassVirtualTablePair,32)(StandardOut)
    (const HashSet(ClassClassVirtualTablePair,32) * self, ...)    {}


    explicit int HashSet(ClassClassVirtualTablePair,32)(FileIn)
    (HashSet(ClassClassVirtualTablePair,32) * self, ...)          {}

    explicit int HashSet(ClassClassVirtualTablePair,32)(FileOut)
    (const HashSet(ClassClassVirtualTablePair,32) * self, ...)    {}
    #endif // 0 CLASS_NAMES_TOO_LONG_FOR_ME
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief            virtual table initializer               *
     *        same as Vector or HashSet initializer cases        *
     *                                                           *
     *   - - allocates a vStk instance to the pointer vstk - -   *
     *                   - -  if vstk == 0 - -                   *
     *               - -   (singleton pattern)   - -             *
     *                                                           *
     * @return               virtual table                       *
     *                                                          **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                     implement functions                   */
    explicit volatile vTable * volatile VirtualTable(Init)

        ( volatile vTable * volatile self, ... )

    { /*if( !self ){ return 0; }*/

    if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        self = HashTable(Class,ClassVirtualTable,Init)(32)(self);

      (*Flags[0]) = false;

      return self; }  //

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief               vTable destructor                    *
     *          call destructor to every object if dtor != 0     *
     *             and delete all objects in vTable.             *
     *                                                           *
     * - -Stk(Class)(Dtor)(vstk); deallocate(vstk); vstk = 0;- - *
     *                                                           *
     * @param                    vTable                          *
     * @return                    void                           *
     *                                                          **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*            call base (vector) destructor here             */
    explicit volatile void VirtualTable(Dtor)

        ( volatile vTable * volatile self )

    { Pair( Class, ClassVirtualTable )
        *  iter  =  ((Vector(ClassClassVirtualTablePair)*)self)->array,
        *  back  =  ((Vector(ClassClassVirtualTablePair)*)self)->array
        + ((Vector(ClassClassVirtualTablePair)*)self)->maxsize ;
      while( iter != back )
      { if( (*iter).key != 0 )
        { if( ((class(VirtualTable)*)(*iter).val)->dtor )
          { ((class(VirtualTable)*)(*iter).val)->dtor( (*iter).key );}
          deallocate((*iter).key);(*iter).key = 0;(*iter).val = 0;}
          iter++; } Vector(ClassClassVirtualTablePair)(Dtor)( self ); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief    add object to the vTable, assign interface      *
     *       - - no automatic memory passed into vTable - -      *
     *     - - container/factory for off-the-stack memory - -    *
     *   - - check for self being 0 in initializer if error - -  *
     *                 - - and return 0 there - -                *
     *  - - otherwise return self in initializer if no error - - *
     * @param               vTable (self)                        *
     * @param   error stack (vstk) solution for: new()(new()())  *
     * @param   memory for new object: allocate(sizeof(Class))   *
     * @param   address of: global initializer function          *
     * @param   address of: global static interface              *
     * @return                constructor                        *
     *                                                          **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    noexcept explicit Constructor VirtualTable(Insert)

        ( volatile vTable * volatile self,

          volatile Object * volatile the,

          Class object, Class(VirtualTable) interface, Constructor ctor )

    { if( object != 0 )
      { Pair( Class, ClassVirtualTable )
        pair = { object, interface };
        if( !((Container(VirtualTable)*) &VirtualTable(Interface))
        ->insert(self, pair) )
        { deallocate(object);  // new(Class)(this, ...)
          object = 0; }
          else
                        // load a pointer onto the stack
          { if( the ) { if( !vPush(object) )//Stk(Class)(Push)
            { if( !(&VirtualTable(Interface))///this = object
                ->remove( self, the, object ) ) {  } }
            else

            {  } }}}
            return ctor; }//this throws an exception

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief  ask the vtable what interface is assigned         *
     *                      to the object                        *
     * @param                  vtable                            *
     * @param                   vstk                             *
     * @param                  object                            *
     * @return           Class(VirtualTable)                     *
     *                                                          **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    except explicit Class(VirtualTable) * VirtualTable(Search)

        ( volatile vTable * volatile self,

          volatile Object * volatile the, Class object )

    { if( !object ) { if( true ){ throw( new(NullPointer) )
                        ( this, "NullObject"); } }

      Pair(Class, ClassVirtualTable) pair = { object, 0 },
      * p = ((HashTable(Class,ClassVirtualTable,VirtualTable)(32)*)
            &VirtualTable(Interface))->search(self, pair);

        if( !p )
        { if( true ){ throw( new(NotFound) )
            ( this, "NotAVirtualTableObject", "");}
        }
        else

        if ( true )  //reload the object for this to be used
        { if( the ){ if( !vPush(object) ){  }///this = object
        } return & p->val; } }//Stk(Class)(Push)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief        remove an object from vTable                *
     *      - - no automatic memory passed into vTable - -       *
     *    - - container/factory for off-the-stack memory - -     *
     * @param                 vTable                             *
     * @param    X      this from constructor                    *
     * @param            address of object                       *
     * @return    true if removed from data structure            *
     *                                                          **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note: this is for the similarity or the dependency of the
     *       atable on the vtable for its removal, so after a stack
     *       of removals, it downsizes by one.
     */
    #if 1
    static Object * _(atable)();//

    typedef struct ClassClassPairHashSet32
        ClassClassPairHashSet32;

    static void ClassClassPairQuadraticProbe32ResizeHelper
        ( ClassClassPairHashSet32 * );
    #endif // 1 ATABLE_DEFINITION 1
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    volatile static bool vStackFlag = false;

    volatile static bool aStackFlag = false;

    explicit bool VirtualTable(Remove)

      ( volatile vTable * volatile self,

        volatile Object * volatile the, Class * object )

    { const Object * mark = nullptr;

        if( !vStackFlag )
      {
        vStackFlag = true;

        if( vTop() ){mark = vTop();}
      }

      {
        if( (*object) == 0 )
        { return false; }

        vPush(  (*object)  );

          Pair( Class, ClassVirtualTable ) pair = { (*object), 0 };
          Pair( Class, ClassVirtualTable ) * p =
            ((HashTable(Class,ClassVirtualTable,VirtualTable)(32)*)
            &VirtualTable(Interface))->search(self, pair);
            if( p == 0 )
            { vStackFlag = false; return false; }
              else

              if( (*p).key == (*object) )
              { if( ((class(VirtualTable)*)(*p).val)->dtor != 0 )
              { ((class(VirtualTable)*)(*p).val)->dtor( (*p).key ); }
              deallocate( (*p).key );
              (*p).key = 0; (*p).val = 0; (*object) = nullptr;
              ((Vector(ClassClassVirtualTablePair)*)self)->length--;

                vPop();

              if( vTop() == mark ){

    ClassClassVirtualTablePairQuadraticProbe32ResizeHelper( self );

    #if 1
    if( aStackFlag )
    {ClassClassPairQuadraticProbe32ResizeHelper( _atable() );

                aStackFlag = false;
    }
    #endif // 1 ATABLE_INCLUDED 1
                vStackFlag = false; }

              return true; } return false; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief            get instance of vTable                  *
     * X *redefine macro default_prime for choice of table size* *
     *    - - (for __attribute__((constructor)) function) - -    *
     * @param             address of vtable                      *
     * @return      new vTable if no existing one                *
     * - - consider vtable as the only pointer passed here - -   *
     *                  - - for singleton - -                    *
     * - - if another pointer is declared and used for this - -  *
     *    - - function then it will cease being a singleton - -  *
     *- - but the pointer vtable will still be of significance- -*
     *- - as what pointer is used for its singleton operations- -*
     *                - - and as an iterator - -                 *
     *            - - (see: central area in file) - -            *
     *                                                          **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*      redefine default prime to alter starting size        */
    explicit volatile vTable * volatile VirtualTable(Allocator)

        ( volatile vTable * volatile * volatile pself, vSizeType size )//...

    { if( *pself != 0 )
      { return *pself; }

        *pself = (vTable*)allocate(sizeof(vTable));
        if( *pself == 0 )
        { return 0; }

          *pself = VirtualTable(Init)(*pself, 0, size);//default_prime
          if( *pself == 0 )
          { return 0; }
            return *pself; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief      destroy/destruct instance of vTable           *
     *      - - ( for __attribute__((destructor)) function) - -  *
     * @param             address of vtable                      *
     * @return     void                                          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit volatile void VirtualTable(Deallocator)

        ( volatile vTable * volatile * volatile pself )

    { if(*pself == 0){return;}

      VirtualTable(Dtor)(*pself); deallocate(*pself); *pself = 0; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief             print vTable (x-macro)                 *
     *      - - easy function to check what is allocated - -     *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineVirtualTablePrint(Type, Print, End, Object)\
    \
     static int VirtualTable(Type##Out) ( VirtualTable * );\
    \
     explicit int VirtualTable(Type##Out) ( VirtualTable * self )\
    \
     { if( default(0) ){ default(0) = false; }\
    \
        Object ;\
        default(24) = true;\
        register size_t retval = 0;\
        retval += Print "\n" End;\
    \
         size_t i = 0, i2 = 0, i3 = 0, count = 0, colCount = 0;\
         for(i2 = 0; i2 < ((Vector(ClassClassVirtualTablePair)*)\
            self)->maxsize; i2++)\
        {if(((Vector(ClassClassVirtualTablePair)*)\
                self)->array[i2].key != nullptr)\
            {count++;retval += Print "0x%x     ", ((Vector\
                    (ClassClassVirtualTablePair)*)\
                    self)->array[i2].key End;\
    \
    \
                    if( ((Vector\
                    (ClassClassVirtualTablePair)*)\
                    self)->array[i2].key <= 0xff ) \
                    {retval += Print " " End ;}\
                    if( ((Vector\
                    (ClassClassVirtualTablePair)*)\
                    self)->array[i2].key <= 0xfff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassVirtualTablePair)*)\
                    self)->array[i2].key <= 0xffff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassVirtualTablePair)*)\
                    self)->array[i2].key <= 0xfffff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassVirtualTablePair)*)\
                    self)->array[i2].key <= 0xffffff ) \
                    {retval += Print " " End;}\
                    if( ((Vector\
                    (ClassClassVirtualTablePair)*)\
                    self)->array[i2].key <= 0xfffffff ) \
                    {retval += Print " " End;}\
    \
    \
            }else{retval += Print "0x0            " End;\
            }colCount++;\
            if(colCount == 5){ retval += Print "\n" End; colCount = 0; }\
        }retval += Print "\n\n\n" End; colCount = 0;\
        for(i2 = 0; i2 < ((Vector(ClassClassVirtualTablePair)*)\
            self)->maxsize; i2++)\
        {if(((Vector(ClassClassVirtualTablePair)*)\
                self)->array[i2].val != nullptr)\
            {count++;\
                retval += Print "%s", ((classVirtualTable*)((Vector\
                (ClassClassVirtualTablePair)*)self)->array[i2].val)->type() End;\
    \
    \
                size_type var = string(size)\
                (((classVirtualTable*)((Vector\
                (ClassClassVirtualTablePair)*)self)\
                  ->array[i2].val)->type()) ;\
    \
                for(int x = 0; x < 31 - var; ++x )\
                {if ( var > 30 ){ retval += Print "\n" End; break; }\
                retval += Print " " End;}\
    \
                colCount++;\
                if(colCount == 3){ retval += Print "\n" End; colCount = 0; } \
    \
        }}retval += Print "\n\n" End;\
    \
        retval += Print "maxsize:  %u\n",\
               ((Vector(ClassClassVirtualTablePair)*)\
            self)->maxsize End;\
        retval += Print "length:   %u\n\n",\
               ((Vector(ClassClassVirtualTablePair)*)\
            self)->length End;\
        default(24) = false;\
        return retval;}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief             print vTable (console)                 *
     *                        - - ... - -                        *
     *      - - easy function to check what is allocated - -     *
     *                                                           *
     *  note: this is the debuggable version just swap 0 for 1   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0 // 1 DEBUG
    explicit int printVirtualTable(VirtualTable * self)

     { if( default(0) ){ default(0) = false; }
       register size_type retval = 0;

       retval += printf("\n");
         size_t i = 0, i2 = 0, i3 = 0, count = 0, colCount = 0;
         for(i2 = 0; i2 < ((Vector(ClassClassVirtualTablePair)*)
            self)->maxsize; i2++) //
        {if(((Vector(ClassClassVirtualTablePair)*)
                self)->array[i2].key != nullptr)
            { count++; retval += printf("0x%x     ", ((Vector
                    (ClassClassVirtualTablePair)*)
                    self)->array[i2].key);


                    if( ((Vector
                    (ClassClassVirtualTablePair)*)
                    self)->array[i2].key <= 0xff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassVirtualTablePair)*)
                    self)->array[i2].key <= 0xfff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassVirtualTablePair)*)
                    self)->array[i2].key <= 0xffff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassVirtualTablePair)*)
                    self)->array[i2].key <= 0xfffff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassVirtualTablePair)*)
                    self)->array[i2].key <= 0xffffff )
                    {retval += printf(" ");}
                    if( ((Vector
                    (ClassClassVirtualTablePair)*)
                    self)->array[i2].key <= 0xfffffff )
                    {retval += printf(" ");}


            }else{printf("0x0            ");}//\t
            colCount++;
            if(colCount == 5){ printf("\n"); colCount = 0; }
        }retval += printf("\n\n\n");
        for(i2 = 0; i2 < ((Vector(ClassClassVirtualTablePair)*)
            self)->maxsize; i2++) //
        {if(((Vector(ClassClassVirtualTablePair)*)
                self)->array[i2].val != nullptr)
            {count++; retval += printf("%s", ((class(VirtualTable)*)((Vector
                (ClassClassVirtualTablePair)*)self)->array[i2].val)->type() );


            size_type var = string(size)
                (((classVirtualTable*)((Vector
                (ClassClassVirtualTablePair)*)self)
                  ->array[i2].val)->type()) ;

            for(int x = 0; x < 31 - var; ++x )
            {if ( var > 30 ){ retval += printf( "\n" ); break; }
             retval += printf(" ");}

            colCount++;
            if(colCount == 3){ retval += printf( "\n" ); colCount = 0; }


            }}retval += printf("\n\n");

        retval += printf("maxsize:  %u\n",
               ((Vector(ClassClassVirtualTablePair)*)
            self)->maxsize); //
        retval += printf("length:   %u\n\n",
               ((Vector(ClassClassVirtualTablePair)*)
            self)->length);   //
        return retval;
    }
    #else

     typename(VirtualTablePrint)
     (Console,
         _cPrint(), cEnd(),
     ) ;
    #endif // DEBUG

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief           print vTable (standard)                  *
     *                        - - ... - -                        *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 1
     typename(VirtualTablePrint)
     (Standard,
         _sPrint(str), sEnd(),

         string str = ConsoleOut(String) ;
     ) ;
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief              print vTable (file)                   *
     *                        - - ... - -                        *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

     typename(VirtualTablePrint)
     (File,
         _fPrint(file), fEnd(),

         File * file = ConsoleOut(Object) ;
     ) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

    - - everything should be good to go (03/31/2022).

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    ///* warning:                                              *///
    ///*                                                       *///
    ///*   misuse of the stack shared by insert(), remove(),   *///
    ///*   and search() will be the cause of any pointer or    *///
    ///*   runtime malfunction in certain small cases where    *///
    ///*   the proper order of objects on the stack is lost    *///
    ///*   like when search() is used inside a constructor     *///
    ///*   after insert() but (this) or vPop() is not used     *///
    ///*   after search() when there is a recursive amount     *///
    ///*   of function calls being passed into function calls  *///
    ///*   like when new()(new()(new()())) is run, thats the   *///
    ///*   same as insert()(insert()(insert()())).             *///
    ///*                                                       *///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
# include  "vTable.h"
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/*                        Program Entry Point                        */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
# define  intVector(Member)intVector ## Member
# define  intIterator(Member)intIterator ## Member
typename (Vector) (int, typename (Iterator) (int));

void typename (constructor)({});

int main(void)
{
    Vector(int) * vector = new (Vector(int)) (this, ...);

        virtual (vector, Container) -> insert(this, ...);

    delete (vector);

    return 0;
}
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
void typename (destructor)({  }) ;
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #endif
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                       \ /
             ________        __      __              __      - * -
            /\___  __\      /\ \    /\ \            /\ \      / \
         __ \/__/\ \_/  ___ \ \ \___\ \ \    ___    \ \ \___
        /\ \/\ \\ \ \  / __`\\ \  __`\ \ \  / __`\   \ \  __`\
        \ \ \/ / \ \ \/\ \/\.\_ \ \/\ \ \ \/\  __/_  _\ \ \/\ \
         \ \__/   \ \_\ \___/\_\ \____/\ \_\ \_____\/\_\ \_\ \_\
          \/_/     \/_/\/__/\/_/\/___/  \/_/\/_____/\/_/\/_/\/_/

                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //final version (2021 - 12 - 23)                         //CWP
#endif // VTABLE_H_INCLUDED
