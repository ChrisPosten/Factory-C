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

    #ifndef BUNKER_H_INCLUDED
    #define BUNKER_H_INCLUDED

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 1
   # define Bunker(Member)Bunker ## Member //struct(Bunker)
    #define  BunkerBunker(Member)BunkerBunker ## Member
  #endif // 0

    #define sTable(Member)sTable ## Member

    #define  BunkerBunkerSecurity(Member)\
    \
        BunkerBunkerSecurity##Member

    #define _struct(Member)_struct ## Member
    #define _structBunker(Member)_structBunker ## Member

    #define defineT(x)volatile x##Table*volatile*volatile x##table

    #define defineS(x)volatile x##Stk*volatile*volatile x##stk

    #undef  private
    #define private
    #define privateprivate

    #undef  protected
    #define protected

    #undef  struct(Class)
    #define struct(struct)          struct##struct

   # define bunkerbunker(member)bunkerbunker ## member

    #define printStructBunker struct(Bunker)(ConsoleOut)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
    /* note:

        if this pointer is used, it would be for the singleton
        primary virtual table, while the pointer vtable in
        Virtual/vTable.h would be used procedurally as an
        iterator pointer from the struct bunker for the table
        used behind new(Class) and delete(obj) and others.
        this pointer may be inside or outside the struct bunker,
        just this is any extended thoughts or feelings about
        implementing an operating system, as the primary virtual
        table (vtable) is accessed from outside the struct
        bunker mostly. anyways, this table, ptable would be
        filled primarily with other vtables or: new(VirtualTable)
        and each table would represent a program's worth of
        variables/objects run by the user also (all for now).
     */
    volatile static vTable * volatile ptable; //primary table
    #endif // IF_OPERATING_SYSTEM
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #define               ___STRUCT_BUNKER___
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  +Information hiding                 +Information hiding  */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||THE FACTORY C STRUCT BUNKER(OPERATING SYSTEMS BUNKER)|| *
     *                                                           *
     *              by Willy (??/??/2022)(04/20/2022)            *
     *                       (10/22/2022)(10/23/2022)            *
     * ||                    (11/06/2022)                     ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  +Information hiding                 +Information hiding  */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Reason(s) to use:                                 *
     *                                                           *
     *   1)  this is an indirect extension of the factory table, *
     *       implemented to be an operating systems control      *
     *       bunker that centralizes access to every important   *
     *       non-virtual table object, as in every singleton,    *
     *       which, they may all be reassigned new instances     *
     *       from the atomic/volatile double pointers stored     *
     *       in the struct bunker.                               *
     *                                                           *
     *   2)  a separate secondary virtual table labeled as the   *
     *       stable is stored by the struct bunker, so with      *
     *       using a primary virtual table in conjunction with a *
     *       secondary virtual table, this secondary table would *
     *       represent any process not run by the user or        *
     *       sensitive information like pass numbers. this table *
     *       can also represent an operating systems accumulator *
     *       table of variables for side processes.              *
     *                                                           *
     *   3)  the struct bunker uses the interface method         *
     *       override, used to override any interface method     *
     *       data field position to the address of any other     *
     *       interface method, unless of course, one of the      *
     *       the struct bunker security heaps restricts it.      *
     *       (NOT IMPLEMENTED IN FACTORY C)(COMPLEX C).          *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 1/*                virtual table object                    */
    private static private cstring private struct(Bunker)(Type)();
    private explicit private cstring struct(Bunker)(Type)()

                  {return"___STRUCT_BUNKER___";}///(Factory C)

    private volatile private struct private struct (Bunker);
    private typedef private struct struct (Bunker)  struct  (Bunker);
    private volatile private struct private struct (Bunker)
    {   struct class base;
/**restrict yes/no? also: atomic? volatile? hazardous? (volatile x2 x3 ...)**/
        protected atomic bool * flags  ;   //default(0-255)          [0]
        protected atomic typename(T) ( v );//Virtual Table (Object)  [1]
                  atomic typename(T) ( f );//Factory Table (Class)   [2]
                  atomic typename(T) ( a );//Adapter Table (Adapter) [3]
                                                                               //1    3    5    7    9
        protected atomic typename(S) ( v );//Object Stack            [4]   [1]<--+ <--+ <--+ <--+ <--+
                  atomic typename(S) ( j );//Jump Stack              [5]   [2]   | <--+ <--+ <--+ <--+
                  atomic typename(S) ( f );//Flag Stack              [6]   [3]   |    | <--+ <--+ <--+
                  atomic typename(S) ( m );//Map Stack               [7]   [4]   |    | <--+ <--+ <--+
                  atomic typename(S) ( i );//Interface Stack         [8]   [5]   |    |    |    | <--+
                  atomic typename(S) ( p );//Pass Stack              [9]   [6]   |    |    |    |    |
                  atomic typename(S) ( c );//Control Stack           [10]  [7]   |    |    |    | <--+
                  atomic typename(S) ( t );//TypeID Stack            [11]  [8]   |    |    | <--+ <--+
                  atomic typename(S) ( h );//Heap Stack              [12]  [9]   |    |    | <--+ <--+
                  atomic typename(S) ( e );//Exception Stack         [13]  [10]  | <--+ <--+ <--+ <--+
                                                                               //A    B    C    D    E
                    /* legend:
                        A = constructor, interface (vto)
                        B = try{},throw()(),catch(){}
                        C = multimap()()()() (factory object)
                        D = multimap()()()() (complex object)
                        E = class(builder)(multimap)()()()()()

                        note: things like union()()(), override()()(), ...
                              use one or two stacks like the
                              interface stack, ... (the other two flag based multi-methods)
                     */
/**THIS SIDE VTABLE IS THE ACCUMULATOR TABLE FOR accumulate(Class)(...)**/
        protected atomic vTable * volatile stable;//Side Table  [14]
                                                    //stable;/*side table*/
    } ;
    static struct(Bunker) struct(private) struct(private) class(Bunker) =
      {{}, Flags, &vtable ,&ftable, &atable, &vstk, &jstk, &fstk,
      &mstk, &istk, &pstk, &cstk, &tstk, &hstk, &estk, nullptr } ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
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
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CENTRAL;               OVERRIDE;                METHOD;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    typedef private struct private struct (Bunker)   (VirtualTable)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
             {private struct private class (VirtualTable);//[0-2]
             /*******************************************/

void(*(*(*override)(bool))(const Object*,cstring))(const Object*,cstring);//[3]

             /*******************************************/
             }private struct(Bunker)(VirtualTable);
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    private struct( private ) struct( private ) struct( private ) ;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CENTRAL;               OVERRIDE;                METHOD;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    private static private struct private struct(Bunker)
   *struct(Bunker)(Init)(private struct private
    struct(Bunker)*,...); private static private void
    struct(Bunker)(Dtor)(struct struct(Bunker)*);
    static Overstructor struct(Bunker)(Override)(bool);

    private static private struct private struct (Bunker)
    (VirtualTable)struct(Bunker)(Interface)={{&struct(Bunker)
    (Type),&struct(Bunker)(Init),&struct(Bunker)(Dtor)},
    &struct(Bunker)(Override)};

    private inline private static private struct
    private struct(Bunker)*struct(Bunker)(Init)
        (struct struct(Bunker)*self,...)
    {if(!self){return nullptr;}
       (*self)=class(Bunker); /*  */

        if( !VirtualTable(Allocator)

        ( & self->stable , 21 ) )

        {throw(new(NullPointer))(this, "NullTable");}

    return self;};

    static ctorPtr struct(Bunker)(Ctor)();
    private volatile private static private struct
    private struct(Bunker)*class(p)=&class(Bunker);
    private static private struct private struct
    (Bunker)(VirtualTable)*struct(struct)=&struct
    (Bunker)(Interface);private inline private static
    void struct (Bunker)(Dtor)

    (private struct private struct(Bunker)*self)
            //
        {/*vtable=*self->vtable;destroy();*/

         VirtualTable(Deallocator)
            //
         ( & self->stable ); }

    explicit Overstructor struct(Bunker)(Override)(bool flag) {}

    static cstring struct(Bunker)(ID)();
    #if 0
    static int struct(Bunker)(Print)();
    #endif // 0
    static void TypeID(PassNumber)(string * *, void *);//allocator

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       # define Bunker(Member)Bunker ## Member //struct(Bunker)
        volatile static string * volatile Bunker(Pass) = nullptr;

        explicit cstring struct(Bunker)(ID)()
        {
            if( !(Bunker(Pass)) )
            {   Bunker(Pass) = new(string)(this, 11);
                ItoaHex( *Bunker(Pass), &Bunker(Pass) );
            }return (*Bunker(Pass)) ; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    factory table class                    */
    static Virtual

        struct(Bunker)(VirtualHeap)[four] =
    /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
    {{"dtor",     2, &struct(Bunker)(Dtor), ""},
     {"init",     1, &struct(Bunker)(Init), ""},
     {"override", 3, &struct(Bunker)(Override), ""},
     {"type",     0, &struct(Bunker)(Type), ""},{"",0,0,""}};
    static Virtual *
    typename(SubFactoryMethod)(struct(Bunker),Virtual,Virtual,0,3);


    static struct class(VirtualHeap)//#1

        _(struct)(Bunker)(Virtual) =

    {&class(VirtualHeap)(Type),
     &struct(Bunker)(VirtualSearch),
     struct(Bunker)(VirtualHeap)};




    static Complex
        struct(Bunker)(ComplexHeap)[fifteen] =
    /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
    {{"atable",       3, sizeof(aTable**), "AdapterTable**"},
     {"cstk",        10, sizeof(cStk**),   "Stk(ControlFactory)**"},
     {"estk",        13, sizeof(eStk**),   "Stk(Except)**"},
     {"flags",        0, sizeof(bool*),    "bool[]"},
     {"fstk",         6, sizeof(fStk**),   "Stk(Flag)**"},
     {"ftable",       2, sizeof(fTable**), "FactoryTable**"},
     {"hstk",        12, sizeof(hStk**),   "Stk(Heap)**"},
     {"istk",         8, sizeof(iStk**),   "Stk(Interface)**"},
     {"jstk",         5, sizeof(jStk**),   "Stk(Jump)**"},
     {"mstk",         7, sizeof(mStk**),   "Stk(Map)**"},
     {"pstk",         9, sizeof(pStk**),   "Stk(Pass)**"},
     {"stable",      14, sizeof(vTable*),  "VirtualTable*"},
     {"tstk",        11, sizeof(tStk**),   "Stk(Type)**"},
     {"vstk",         4, sizeof(vStk**),   "Stk(Class)**"},
     {"vtable",       1, sizeof(vTable**), "VirtualTable**"},{"",0,0,""} } ;;
    static Complex *
    typename(SubFactoryMethod)(struct(Bunker),Complex,Complex,0,14);


    static struct class(ComplexHeap)//#2

        struct(Bunker)(Complex) =

    {&class(ComplexHeap)(Type), &struct(Bunker)(ComplexSearch),
    struct(Bunker)(ComplexHeap)};


    static Polymorph *

        struct(Bunker)(PolymorphHeap)[one] =

    { {"class", 0, 0, ""},{"",0,0,""} };;
    static Polymorph *
    typename(SubFactoryMethod)(struct(Bunker),Polymorph,Polymorph,0,0);


    static struct class(PolymorphHeap)//#3

        struct(Bunker)(Polymorph) =

    { &class(PolymorphHeap)(Type), &struct(Bunker)(PolymorphSearch),
      struct(Bunker)(PolymorphHeap)};


    explicit ctorPtr struct(Bunker)
    (Ctor)(){return new(struct(Bunker));}

    static struct class(FactoryTable)//#4
        struct(Bunker)(Factory) =

    {&class(FactoryTable)(Type),&struct(Bunker)(Ctor),0};


    static int struct(Bunker)(ConsoleOut)
    ( struct struct(Bunker) *, ... );

    static struct class(ConsoleTable)//#5
        struct(Bunker)(Console) =

    { &class(ConsoleTable)(Type), 0, &printStructBunker } ;

    #if 0
    explicit int struct(Bunker)(Print)()
    {
        return struct(Bunker)(ConsoleOut)
        ( ((struct(Bunker)*)((objtPtr*)multimap(false)
        ( "struct(Bunker)" )
        ("class(SingletonTable)"))[1]) );
    }
    #endif // 0 NOOB 1

    explicit int struct(Bunker)
    (ConsoleOut)( struct struct(Bunker) * self, ... )
    { return VirtualTable(ConsoleOut)(self->stable); }


    static int struct(Bunker)(StandardOut)
    ( struct struct(Bunker) *, ... );

    static struct class(StandardTable)//#6
        struct(Bunker)(Standard) =

    { &class(StandardTable)(Type), 0, & struct(Bunker)(StandardOut) } ;

    explicit int struct(Bunker)

    (StandardOut)( struct struct(Bunker) * self, ... )
    { if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        int var = VirtualTable(StandardOut)(self->stable);

      (*Flags[0]) = false;
      return var; }


    static int struct(Bunker)(FileOut)
    ( struct struct(Bunker) *, ... );

    static struct class(FileTable)//#7
        struct(Bunker)(File) =

    { &class(FileTable)(Type), 0, & struct(Bunker)(FileOut) } ;

    explicit int struct(Bunker)

    (FileOut)( struct struct(Bunker) * self, ... )
    { if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        int var = VirtualTable(FileOut)(self->stable);

      (*Flags[0]) = false;
      return var; }


    static Strategy

        struct(Bunker)(OverloadHeap)[three] =

    {{"VirtualTable(ConsoleOut)",&VirtualTable(ConsoleOut)},
     {"VirtualTable(FileOut)",&VirtualTable(FileOut)},
     {"VirtualTable(StandardOut)",&VirtualTable(StandardOut)},{"",0}};
    static Strategy *
    typename(SubFactoryMethod)(struct(Bunker),Strategy,Overload,0,2) ;


    static struct class(StrategyHeap)//#8

        struct(Bunker)(Overload) =

    { &class(OverloadHeap)(Type), &struct(Bunker)(OverloadSearch),
      struct(Bunker)(OverloadHeap) };


    volatile static class(SingletonTable) //#9

        struct(Bunker)(Singleton) =

    { &class(SingletonTable)(Type), 0,//&class(Bunker)

    &struct(Bunker)(Interface) };


    static cstring typename(PassNumber)(struct(Bunker), Security);

    static struct pass(SecurityHeap)

        struct(Bunker)(Security) = { {&pass(SecurityHeap)(Type),

    0, 0/*struct(Bunker)(InterfaceHeap)*/}, &struct(Bunker)(Security)(ID), 0 };


    static Interface struct(Bunker)(InterfaceHeap)[eleven] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &struct(Bunker)(Interface), // ___STRUCT_BUNKER___ #11

        &struct(Bunker)(Complex),

        &struct(Bunker)(Console),

        &struct(Bunker)(Factory),

        &struct(Bunker)(File),

        &struct(Bunker)(Overload),

        &struct(Bunker)(Polymorph),

        &struct(Bunker)(Singleton),

        &struct(Bunker)(Standard),

        &_(struct)(Bunker)(Virtual),

        &struct(Bunker)(Security),  // 0x

        nullptr

    } ;
    static Interface typename(ClassFactoryMethod)(struct(Bunker),0,10);

  #endif // 1
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  clipboard:

    - - everything should be good to go (12/09/2022).

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       STRUCT;BUNKER;      CENTRAL; COMPLEX;      STRUCT;BUNKER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                            new                            */
    #define accumulate(Class)(Class*)VirtualTable(Interface).insert(\
    \
        ((struct(Bunker)*)((objtPtr*)multimap(false)( "struct(Bunker)" )\
    \
        ("class(SingletonTable)"))[1])->stable, vstk, \
    \
        allocate(sizeof(Class)), & Class(Interface), & Class(Init) )//

    #define bunkerbunkernew accumulate
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          delete                           */
    #define deaccumulate(object)VirtualTable(Interface).remove(\
    \
    ((struct(Bunker)*)((objtPtr*)multimap(false)( "struct(Bunker)" )\
    \
    ("class(SingletonTable)"))[1])->stable, vstk, & object )

    #define bunkerbunkerdelete deaccumulate
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        PASS; ALLOCATOR;    PASS; ALLOCATOR;    PASS; ALLOCATOR;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define allocator( pass ) TypeID(PassNumber)( & pass, & pass )

    explicit void TypeID(PassNumber)(string * * pself, void * ptr)
    {
        if( !(*pself) )
        {
            (*pself) = accumulate(string)(this, 11);

            ItoaHex( (**pself), ptr );
        } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        PASS; ALLOCATOR;    PASS; ALLOCATOR;    PASS; ALLOCATOR;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          virtual                          */
    #define bunkerbunkervirtual(object, Class)/*virtual*/\
    \
        ((Class(VirtualTable)*) * VirtualTable(Interface).search(\
    \
    ((struct(Bunker)*)((objtPtr*)multimap(false)("struct(Bunker)")\
    \
    ("class(SingletonTable)"))[1])->stable, vstk, object ))

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         instance                          */
   #define bunkerbunkeris_object sTable(Instance)
   #define bunkerbunkerinstance sTable(Instance)
    static Class(VirtualTable) *
    sTable(Instance)( const Object * );

    noexcept explicit Class(VirtualTable) *
    typename(Instance)(s, ((struct(Bunker)*)((objtPtr*)multimap(false)

        ( "struct(Bunker)" )("class(SingletonTable)"))[1])

        ->stable );

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                        typeid                             */
   # define bunkerbunkertypeid sTable(TypeID)
    static cstring sTable(TypeID)( const Object * ) ;

    noexcept explicit cstring typename(TypeID)(struct(bunker)(instance),s);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                      instanceof                           */
    #define bunkerbunkerinstanceof(object, Class)\
    \
          string(equal)( struct(bunker)(typeid)(object), # Class )

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
             string * id = accumulate(string)(this, ...) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                           deaccumulate(id);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 struct(bunker)(virtual)(id, class) ->
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                     struct(bunker)(typeid)(id);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                    !struct(bunker)(is_object)(id);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
               !struct(bunker)(instanceof)(id, string);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note: these are the final definitions for Factory C,

             that includes the definitions inside Factory/builder.h
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
      #undef  private
      #define private FactoryTable(Private)()

      #undef  protected
      #define protected FactoryTable(Protected)()

      //#undef struct(struct)
      //#define  struct(Class) Class (HeapSearch)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // STRUCT_H_INCLUDED

//#endif // FACTORYTABLESINGLETON

