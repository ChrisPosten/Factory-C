#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
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
    /**
    THIS IS WHERE THE CLASS KEYWORD CAN REALLY BE USED, SO NOT ONLY

    WILL new(class)(this) ALLOCATE A VIRTUAL TABLE OBJECT, BUT IT

    WILL ALLOCATE A NEW BUILDER FACTORY METHOD FOR A NEW FACTORY

    TABLE CLASS ALSO... THIS CAN HAPPEN AS MANY TIMES AS U LIKE JUST

    class, class(2), class(3), class(4) WILL BE ADDED TO THE FACTORY

    TABLE, AND I WOULD PROBABLY PREFER, new(class)(this) DOES NOT

    INCLUDE AN EXTRA PARAMETER FOR BYTES BECAUSE WHY WHEN THE COMPLEX

    HEAP COUNTS THAT UP SO THE COMPLEX METHOD CAN BE USED AFTER

    (OR MORE LIKE ITS MACRO VERSION) CAN BE USED WITH A DATATYPE

    AND STRINGIZE ITS TYPE cmplx(obj, "var", int) WILL ADD THE DATA

    MEMBER AND ADD "int" TO IT FOR ANY KIND OF FACTORY SWITCH/IF-

    -ELSE-IF THAT WOULD NEED IT. factory("class")(this). ALSO THE COMPLEX

    METHOD ITSELF (*(int*)complex(obj, "var")) = ... ; WOULD PROVIDE

    ITS CASE FOR THE ABOVE cmplx MACRO AND POSSIBLY fnctn MACRO .


        +fnctn(obj, "func", funcPtr)(this, ...) CANT ADD BY ITSELF ?


            function(obj, "func", funcPtr)


    THERE NEEDS TO BE A RENAME FACTORY TABLE CLASS METHOD, POSSIBLY

    A BUILDER ABORT CASE MEANING THAT THE new(class) CLASSES ADDED CAN

    BE RENAMED THEN.


    THE DEFINITION HAS CHANGED, NO VTO V-T-O NO VIRTUAL TABLE OBJECT

    WILL BE ALLOCATED SINCE A REAL COMPLEX OBJECT SHOULD COME FROM

    THE FACTORY METHOD (USING THE FACTORY TABLE MULTIMAP).

    ALSO, INCLUDE A PARAMETER FOR THE TYPEID STRING.


    THE CLASS CONSTRUCTOR IS USED TO ALLOCATE A CLASS FACTORY METHOD.

     */

  #if 0
    #include "../Virtual/vTable.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||  CONCRETE CLASS TYPE  (CLASSNAME + IMPLEMENTATION)  || &
     &                                                           *
     *                   by Willy (12/15/2021)(01/04/2022)       &
     & ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    typedef struct //class( class )
    {   struct class base;
        dtorPtr dtor;   } class;


    public class * class(Init)( class *, ... );

    public void class(Dtor)( class * );

    public cstring class(Type)(void);

    public ctorPtr class(Ctor)(void);


    explicit cstring class(Type)(void) { return "class"; }


    static class(VirtualTable)

        class(Interface) =

    { &class(Type), &class(Init), &class(Dtor) };


    explicit ctorPtr class(Ctor)(void){ return new(class); }


    static class(FactoryTable)

        class(Factory) =

    { &class(FactoryTable)(Type), &class(Ctor), 0 };


    static Interface class(InterfaceHeap)[one] =

    { &class(Factory), nullptr };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                                                     || *
     & @brief         concrete class type constructor            &
     *      case 0:                                              *
     &         // initialize strategic destructor to nullptr     &
     *      case 1:                                              *
     &         // initialize pointer to strategic destructor     &
     *      case 2:                                              *
     &         // same as case 1 plus extra parameter for bytes  &
     *                                                           *
     & @return  new(class)(this, ...)                            &
     *                                                           *
     &  class * d = new(class)(this, 0);   (nullptr)             &
     *         or:                                               *
     &  class * d = new(class)(this, 1, &destructor);            &
     *         or:                                               *
     &  class * d = new(class)(this, 2, &destructor, bytes);     &
     *                                                           *
     &  note: bytes above is the amount of extra bytes to        &
     *        allocate(amount)                                   *
     &                                                           &
     *  note: uses vtable->add() to allocate extra memory        *
     &        after destructor for an array/object that          &
     *        stores the destructor inside it or objects         *
     &        without structure implementations.                 &
     *                                                           *
     &  also: class##Init concatenates to classInit with         &
     *        new(class)                                         *
     &                                                           &
     *        class##Interface concatenates to classInterface    *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    // /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///|
    //+--------------------------------------------------------+//|
    explicit class * class(Init)( class * self, ... )           //|
    { if( !self ){ return 0; }                                  //|
      Stack * stack = control();                                //|
                                                                //|
      size_t c = arg(stack, size_t);                            //|
      switch(c)                                                 //|
      {                                                         //|
        case 0:                                                 //|
            self->dtor = 0; //null                              //|
        break;                                                  //|
        case 1:                                                 //|
            self->dtor = arg(stack, size_t);//                  //|
        break;                                                  //|
        case 2:                //re-constructor//               //|
            self->dtor = 0;   //              //                //|
                                                                //|
            c = arg(stack, size_t);                             //|
                             //  //.remove   //                 //|
            VirtualTable(Interface).remove(vtable, vstk, self); //|
                                 //.add(with extra bytes)       //|
            VirtualTable(Interface).insert(vtable, vstk,        //|
                                                                //|
                allocate( sizeof(class) + arg(stack, size_t) ), //|
                                                                //|
                & class(Interface), 0 );/* (*/self = this;/*) *///|
                                                                //|
            if( !self ){ return 0; }                            //|
                                                                //|
            ((class*)self)->dtor = c       ;                    //|
        break;                                                  //|
      }                                                         //|
        return self; }                                          //|
                                                                //|
    explicit void class(Dtor)( class * self )                   //|
    { if(self->dtor)                                            //|
      { self->dtor( self ); } }                                 //|
    //+--------------------------------------------------------+//|
    // /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///|
  #if 0
    #define vObj(object, type)            ((type)((class*) obj)[1])
  #endif // 0
                           //looks right but not tested (vObj)
    ///vArr(object, type)[0]

    ///enum eObj { func = 0, var = 1, ptr = 2 };

    ///vObj(object, type)[func](...)

    ///vObj(object, type)[var] = 123    ///fully-dynamic Object
                                        //has no class definition
                                       //so not bound together by
                                      //a single interface
                                    ///indirect composition
                                    //using a pointer to another
                                   //structured data type's memory
                                  //inside an object of a structured
                                 //data type means that more memory
                                //for the object is allocated into
                               //another location in memory therefore
                              //fully-structured data types can still
                            ///be fully-dynamic objects

    ///this class type is extended into vArray(), an OO array (demo)
    ///with a strategic destructor and size variable...
    ///...as anything like an object or a stack-of-an-object(s)
    ///similar to an object with no further class description.

    ///thats why it felt important to implement this file, (vArray)
    ///even though it may (mostly) be a dead end (demo so got rid of).

    ///(going in the direction of objects without class
    ///descriptions is a dead end when we have struct variables
    ///and enough OO principles borrowed from developed OO
    ///programming languages that only use implemented structured
    ///datatypes A.K.A interfaces bound together as a single
    ///structured datatype, use for pointer only or not,
    ///im-plemented and structured nevertheless).

    ///thats all fine and everything, but now with a factory table,
    ///new(class) can return a new class factory method, inserted
    ///into the factory table not the virtual table, this extends from
    ///being able to include an extra parameter for bytes with a
    ///c++ constructor... (everything before was a thought/feeling
    ///about an unimplemented yet highly structured datatype before
    ///the implementation of the factory table)(Complex Object).

    //using a runtime string to access the named datamember(s) means
    //that an implemented-structured-datatype or its member access
    //operators . and -> are not required.
    /**the concrete class may also prove valuable for a singleton*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #else
    #include "../Factory/fTable.h" //important file

    #include "../Control/using.h"//(Factory C)(Builder Included)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  COMPLEX C              COMPLEX C              COMPLEX C  */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||    THE CONCRETE CLASS (NEW FACTORY TABLE CLASS)     || &
     &                                                           *
     *                   by Willy (11/14/2022)(12/18/2022)       &
     &                            (12/22/2022)(12/27/2022)       *
     & ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*  COMPLEX C              COMPLEX C              COMPLEX C  */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note:

        the class constructor will add a factory table
        class and take no extra parameters. that is all
        that is needed. maybe add a parameter for class name.

        this implementation is the Complex C un-implementation
        of the ordinary Factory C struct class implementation,
        meaning that a class can be "implemented" inside of
        the programs functions, not globally.
     */
    #if 0
    //  no struct name    //
    //  class name class  //
    //  not struct class  //
    //  (technically)     //
    typedef struct {struct class base;} class; // = {{}} ;
    #else
      # define class(member)class ## member
    typedef void * class; //preemo
    #endif // 0

    static bool () (*class(Register)(cstring))(size_t,...);


    static bool class(Init)( size_t, ... );

    static void typename(Dtor)(class)( class * self ){}

    static cstring typename(Type)(class);


    static struct class(VirtualTable)

        class(Interface) =

    { &class(Type), &volatile(Init), &volatile(Dtor) };/*volatile*/


    static struct class(FactoryTable)

        class(Factory) =

    { &class(FactoryTable)(Type), &volatile(Ctor), 0 };/*volatile*/

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

   # define _class(Member)_class ## Member
    static Virtual

        _(class)(VirtualHeap)[nine] =
    {/*A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
      { "dtor",            2,             &volatile(Dtor),
      "void(*)(Object*)"                                 },
      { "init",            1,             &volatile(Init),
      "Object*(*)(Object,...)"                           },
      { "type",            0,             &class(Type),
      "cstring(*)()"                                     },

      { "", 0, 0 }
    };static Virtual *
    typename(SubFactoryMethod)(_(class),Virtual,Virtual,0,8);


    static struct class(VirtualHeap)
        class(Virtual) =

    {   &class(VirtualHeap)(Type),
        &_(class)(VirtualSearch),
        _(class)(VirtualHeap)};


    static struct pass(SecurityHeap)
        class(Security) =
    { { & pass(SecurityHeap)(Type), 0, 0 }, 0, 0 };


    static Interface _(class)(InterfaceHeap)[four] =
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
        &class(Interface),

        &class(Factory),

        &class(Virtual),

        &class(Security),

        nullptr /*(null termination required)*/ };

    /**
     * @brief class factory method (Factory C)
     */
    static Interface
    typename(ClassFactoryMethod)(_(class),0,3);


    static void typename(Setup)(_(class))
    {((Interface)&class(Security))
    [2] = _(class)(InterfaceHeap) ;}

    static void typename(Abort)(_(class)) {}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

   # define Object(Member)Object ## Member
    # define ObjectVirtualTable(Member)ObjectVirtualTable ## Member
    static cstring Object (VirtualTable)(Type)(void);
  explicit
    cstring Object (VirtualTable)(Type)(void)
    { return "Object(VirtualTable)"; }

    static struct class(VirtualTable)

        Object(Interface) = { &Object (VirtualTable)(Type), 0, 0 };

    static Virtual
        Object(VirtualHeap)[nine] =
    {/*A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
      { "dtor",            2,             0,
      "void(*)(Object*)"                                 },
      { "init",            1,             0,
      "Object*(*)(Object,...)"                           },
      { "type",            0,             &Object (VirtualTable)(Type),
      "cstring(*)()"                                     },

      { "", 0, 0 }
    };static Virtual *
    typename(SubFactoryMethod)(Object,Virtual,Virtual,0,8);

    static struct class(VirtualHeap)
        Object(Virtual) =

    {   &class(VirtualHeap)(Type),
        &Object(VirtualSearch),
        Object(VirtualHeap)};

    static struct pass(SecurityHeap)
        Object(Security) =
    { { & pass(SecurityHeap)(Type), 0, 0 }, 0, 0 };

    static Interface Object(InterfaceHeap)[three] =
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
        &Object(Interface),

        &Object(Virtual),

        &Object(Security),

        nullptr /*(null termination required)*/ };

    static Interface
    typename(ClassFactoryMethod)(Object,0,2);

    static void typename(Setup)(Object)
    {((Interface)&Object(Security))
    [2] = Object(InterfaceHeap) ;}

    static void typename(Abort)(Object) {}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define classmultimap(flag) multimap(flag) map01

    #define map01(class) (class) map02

    #define map02(interface) (#interface)
    /* note: this is the class builder (multimap).
     *
     *       this is identical to multimap just uses a constructor
     *       after either 2 or 3 factory methods.
     */
     # define classbuilder(member)classbuilder ## member

    #define classbuildermultimap(flag)\
    \
        class(Builder)(MultiMap)(flag) classbuildermultimapinitprimary

    #define classbuildermultimapinitprimary(typeid) (typeid)\
    \
        classbuildermultimapinitclass

    #define classbuildermultimapinitclass(int_id) (#int_id)
    #if 0 // 0
      #define classbuildernew new(class) classbuilderinit

      #define classbuilderinit( Class ) ( this, Class )
    #else
      #define classbuilderregister(Class) class(Register)( Class )

      #define classbuilderdrop(Class) \
      \
        FactoryTable(Interface).remove( ftable, Class, 0 )

    #endif // NO_V_TABLE_HERE_PLEASE
    #if 0 // 0
      #define interfacebuilder(member) interfacebuilder##member

      #define interfacebuildernew new(interface) interfacebuilderinit

      #define interfacebuilderinit( Interface ) ( this, # Interface )
    #endif // ABSTRACT_WITH_NO_COMPLEX_HEAP_OR_CLASS_FACTORY_TABLE

    // INTERFACE_TYPE_SHOULD_INCLUDE_VIRTUAL_HEAP___INTERFACE___ ...

    static Factory(00) * class(Builder)(MultiMap)( bool );


    static void class(Builder)(03)( cstring );

    static void class(Builder)(02)( cstring );

    static void class(Builder)(01)( cstring );


    static void class(Builder)(InterfaceCtor)( Object *, ... );

    static void class(Builder)(InfoCtor)( Object *, ... );


    volatile static Array(Factory) * volatile class(Builder)(Object) = nullptr;

    /* note: this will be where there is a helper for the object.
     */
    #define classcomplex(self, type, name)\
    \
        (*(type**)complex(self, name))


    #define classbuildercomplex(key) \
        class(Builder)(ComplexCtor)(key) classbuildercomplexinit

    #define classbuildercomplexinit(type, name)        (# type "*", name)
    static void (*class(Builder)(ComplexCtor)(cstring))(cstring, cstring);

    static void class(Builder)(ComplexInit)(cstring, cstring);

    /* note: this will be where there is a helper for the interface.
     */
    #define classfunction(self, type, name)\
    \
        ((type)(*function(self, name)))


    #define classbuilderfunction(key) \
        class(Builder)(FunctionCtor)(key) classbuilderfunctioninit

    #define classbuilderfunctioninit(type, name, addr)\
        (# type, name, addr)
    static void (*class(Builder)(FunctionCtor)(cstring))
        (cstring, cstring, Method *);

    static void class(Builder)(FunctionInit)(cstring, cstring, Method *);

    /* note: this will be where a theres a subject object stack (auto)
     *       thats used for updating objects/interfaces in byte size
     *       this is used in conjunction with the class builder
     *       complex method and class builder function method.
     *
     * todo: re-implement this to use a heap, i could see this might
     *       need to use a virtual table even... then strategy with
     *       objects may be implemented, maybe just a strategy heap
     *       may suffice...
     */
    #define classbuilderauto(key) /*(auto)*/\
    \
        class(Builder)(SubjectCtor)(key)
    static void  (*class(Builder)(SubjectCtor)(cstring))(Object * *);

    static void class(Builder)(SubjectInit)(Object * *);


    #define abortabort AbortAbortMethod
   # define AbortAbort(Member)AbortAbort ## Member

    static void struct(Abort)(Method)(cstring);


    #define nothrow(key)  struct(NoThrow)(01)(#key) no_ctor
   # define no_ctor(key) (#key)
    # define NoThrowNoThrow(Member)NoThrowNoThrow ## Member

    static void (*struct(NoThrow)(01)(cstring))(cstring);

    static void struct(NoThrow)(02)(cstring);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief the struct class method (definition)               *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define classclass class(Push) //struct(class)

    static Object * * (*class(Push)(Object* self))(cstring);

    static Object * * class(Method)(cstring);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    // /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///|
    //+--------------------------------------------------------+//|
    explicit bool ()(*class(Register)(cstring name))(size_t,...)//|
    {   if( !tPush(name) ){throw(new(OutOfMemory))              //|
            (this, "TypeIDStackFailure");}                      //|
        return & class(Init);}                                  //|
                                                                //|
                                                                //|
    explicit bool class(Init)( size_t c, ... )  //|             //|
    {                                                           //|
        cstring name = tPop();                                  //|
        if(!name){throw(new(NullPointer))                       //|
            (this, "NullClassTypeID");}                         //|
                                                                //|
      class(FactoryMethod) * p = is_class(name) ;//safety       //|
                                                                //|
      if( !p )                                                  //|
      {                                                         //|
        Interface meth=allocate(sizeof(builder(FactoryMethod)));//|
                                                                //|
        if (!meth){throw(new(OutOfMemory))                      //|
                (this, "BuilderFactoryMethodFailure");}         //|
                                                                //|
        /* note: initialize our new: builder(FactoryMethod)*/   //|
        /* */                                                   //|
        meth[0] = &builder(FactoryMethod)(Type);                //|
        meth[1] = &volatile(ClassFactoryMethod);                //|
                                                                //|
        Stack * stack = (*Flags[0]?ControlSlot[0][0]:&c);       //|
                            stack=((void**)stack)+1;            //|
                                                                //|
        class(VirtualTable) * def = 0;                          //|
        string str;                                             //|
                                                                //|
        switch(c)                                               //|
        {                                                       //|
            case 0:                                             //|
                                                                //|
            meth[2] = 0;//setup (null)                          //|
            meth[3] = 0;//abort (null)                          //|
                                                                //|
            meth[4] = allocate(sizeof(Heap(Interface))) ;       //|
            if (!meth[4]){throw(new(OutOfMemory))               //|
                    (this, "NullMapContainer");}                //|
                                                                //|
            meth[5] = & Heap(Interface)(Interface) ;            //|
                                                                //|
            ((ctorPtr*)meth[5])[1](meth[4], 0);                 //|
                                                                //|
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /* note: no security heap needed for builder factory */ //|
        /*       method but default interface still gets added*///|
        /*        as a utility. */                              //|
        /* */                                                   //|
        /* also: so not only does this not need a security */   //|
        /*       heap for pass number but pass numbers for */   //|
        /*       interfaces (# of) have an implementation */    //|
        /*       limit or compile-time limit. */                //|
        /* */                                                   //|
            def = allocate(sizeof(class(VirtualTable)));        //|
                                                                //|
            if( !def ){throw(new(OutOfMemory))                  //|
                (this, "VTOInterfaceFailure");}                 //|
                                                                //|
            (*def) = class(Interface) ; //ol' struct assign     //|
            /* note: allocate a string for the typeid */        //|
            /* (runtime object) */                              //|
            /* */                                               //|
            str = (string)allocate(string(size)(name)) ;        //|
                                                                //|
            if( !str ){throw(new(OutOfMemory))                  //|
                (this, "BuilderTypeIDFailure");}                //|
                                                                //|
            string(fill)(str, name);                            //|
                                                                //|
            /* note: btable coupling (insert int, typeid) */    //|
            /* */                                               //|
            class(builder)(insert)(def, str);//for typeid       //|
                                                                //|
            /* note: insert def int to F.T.C.I.H. */            //|
            /* */                                               //|
            ((boolPtr*)meth[5])[4](meth[4], def);               //|
        /* note: insert class factory method with typeid */     //|
        /*       string */                                      //|
        /* */                                                   //|
        FactoryTable(Interface).insert( ftable, name, meth, 0 );//|
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            /* note: this is the basic vto package being */     //|
            /*       added. this is still abstract, no */       //|
            /*       instances until there is a */              //|
            /*       class(FactoryTable) and */                 //|
            /*       class(ComplexHeap). the default */         //|
            /*       interface or the class extended */         //|
            /*       interface has already been added into */   //|
            /*       the Factory-Table-Class- Interface-Heap. *///|
            /*       the class builder function is the helper *///|
            /*       for achieving balance between the vto */   //|
            /*       interface and virtual heap. */             //|
            /* */                                               //|
            class(builder)(multimap)(false)(name)               //|
                (class(VirtualHeap))(0);                        //|
                                                                //|
            class(builder)(multimap)(true)(name)                //|
                (class(VirtualHeap))("type")                    //|
                (0,&class(Type),"cstring(*)()");                //|
                                                                //|
            class(builder)(multimap)(true)(name)                //|
                (class(VirtualHeap))("init")                    //|
                (1,&volatile(Init),"Object*(*)(Object*,...)");  //|
                                                                //|
            class(builder)(multimap)(true)(name)                //|
                (class(VirtualHeap))("dtor")                    //|
                (2,&volatile(Dtor),"void(*)(Object*)");         //|
                                                                //|
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            break;                                              //|
            case 1:   ;                                         //|
            Interface other = stack(arg)(Interface);            //|
                                                                //|
            meth[4] = allocate(sizeof(Heap(Interface))) ;       //|
            if (!meth[4]){throw(new(OutOfMemory))               //|
                            (this, "NullMapContainer");}        //|
                                                                //|
            meth[5] = & Heap(Interface)(Interface) ;            //|
                                                                //|
                                                                //|
            if( string(equal)( ((typePtr*)other)[0](),          //|
            "builder(FactoryMethod)" ) )                        //|
            {   /* note: this was giving me a problem with*/    //|
                /*       deallocating so your on your own */    //|
                /*       with copying builder to builder */     //|
                /*       (using this constructor)*/             //|
                /*                         */                   //|
                /* ...when i find the time i will impl this */  //|
                throw(new(IllegalOperation))                    //|
                (this, "ConstructorNotCompatible\n"             //|
                 "note: builder(FactoryMethod)\t\t");           //|
                /*((ctorPtr*)meth[5])[1](meth[4],1,other[4]);*/ //|
            }                                                   //|
            else                                                //|
            if( string(equal)( ((typePtr*)other)[0](),          //|
            "class(FactoryMethod)" ) )                          //|
            {                                                   //|
                if( !tPush(name) )                              //|
                {throw(new(OutOfMemory))                        //|
                (this, "TypeIDStackFailure");}                  //|
                                                                //|
                ((ctorPtr*)meth[5])[1](meth[4], 0);             //|
                Heap(Interface)(CopyFromArray)                  //|
                ( meth[4], other[4] );                          //|
                                                                //|
                meth[2] = other[2];//setup                      //|
                meth[3] = other[3];//abort                      //|
                                                                //|
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            Interface volatile(iterator)[3]={                   //|
                    &volatile(Type),0,0};                       //|
                    volatile(type) = name;//slot rig            //|
                                                                //|
            class(VirtualTable) ** pdef = Heap(Interface)       //|
                (Interface).base.at(meth[4],                    //|
                volatile(iterator))  ;                          //|
            if(pdef){def = *pdef;}                              //|
                                                                //|
              if( def )                                         //|
              {                                                 //|
                if( !Heap(Interface)                            //|
                (Interface).base.remove(meth[4],                //|
                volatile(iterator)) )                           //|
                { }                                             //|
                                                                //|
                (*def) = class(Interface) ;                     //|
                /* note: allocate a string for the typeid */    //|
                /* (runtime object) */                          //|
                /* */                                           //|
                str = (string)allocate(string(size)(name)) ;    //|
                                                                //|
                if( !str ){throw(new(OutOfMemory))              //|
                    (this, "BuilderTypeIDFailure");}            //|
                                                                //|
                string(fill)(str, name);                        //|
                                                                //|
                /* note: btable coupling (insert int, typeid) *///|
                /* */                                           //|
                class(builder)(insert)(def, str);//for typeid   //|
                /* note: insert def int to F.T.C.I.H. */        //|
                /* */                                           //|
                ((boolPtr*)meth[5])[4](meth[4], def);           //|
              }                                                 //|
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /* note: if theres a factory table, override*/  //|
                /*       its method for the builder/complex */  //|
                /*       version                            */  //|
                /* */                                           //|
                /*Interface volatile(iterator)[3]={             //|
                    &volatile(Type),0,0};*/                     //|
                volatile(type) = "class(FactoryTable)";         //|
                                                                //|
                Interface reg = 0;                              //|
                                                                //|
                Interface * preg = Heap(Interface)              //|
                (Interface).base.at(meth[4],                    //|
                volatile(iterator))  ;                          //|
                if(preg){reg = *preg;}                          //|
                if( reg ){ reg[1] = &volatile(Ctor); }          //|
            }                                                   //|
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /* note: insert class factory method with typeid */     //|
        /*       string */                                      //|
        /* */                                                   //|
        FactoryTable(Interface).insert( ftable, name, meth, 0 );//|
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            break;                                              //|
        }                                                       //|
    #if 0                                                       //|
        delete(self);                                           //|
        return meth;//jimmy rig it (ya!)                        //|
    #else                                                       //|
        return true;//meth;  //like usual register              //|
        //return self;//poor object                             //|
    #endif // GET_COMPLEX_OBJECT_FROM_FACTORY_METHOD_PLEASE     //|
      }                                                         //|
      else                                                      //|
      {                                                         //|
        return false;//p; //like usual register                 //|
      }                                                         //|
    }                                                           //|
    //+--------------------------------------------------------+//|
    // /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///|

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief         the class builder multimap                 *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class builder multimap initializer (ControlFactory)*
     *                                                           *
     *     - - this is similar to cin/cout initializer(s) - -    *
     *                                                           *
     * @param bool flag                                          *
     *                                                           *
     * @throw everything multimap throws + ...                   *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Factory(00) * class(Builder)(MultiMap)( bool flag )
    {
        if( !class(Builder)(Object) )
        {class(Builder)(Object) = accumulate(Array(Factory))(this, 3);

            default(4) = true;
            default(5) = false;
            default(7) = true;

            using template(class(Builder)(Object))
            (& class(Builder)(01), nullptr) (& class(Builder)(02), nullptr)
            (& class(Builder)(03), nullptr)cend ; }


                    default(0) = false;
                    default(1) = true;
                    default(2) = false; /*false default*/
                    default(3) = false; /*pri or sec vtable, false sec*/
                    default(4) = true;
                    default(5) = false;
                    default(6) = false;
                    default(7) = false;/*true default*/

                        Skip = 0;

        FactoryTable(MultiMap)(flag);//<-- push flag

        return using template(class(Builder)(Object));//<-- push control
                                                            //factory
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class builder multimap #1                          *
     *                                                           *
     * @param cstring key to the primary factory method          *
     *                                                           *
     * @throw ...                                                *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void class(Builder)(01)( cstring key )//pri
    {
        Map(01)(key);//<-- push heap, typeid, map
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class builder multimap #2                          *
     *                                                           *
     * @param cstring key to the class factory method            *
     *                                                           *
     * @throw ...                                                *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void class(Builder)(02)( cstring key )//cla
    {
        bool * f    =   flag() ;//<--pop flag
        if(   !f   ){ throw( new(NullPointer) )
            (this, "NullFlag"); }

        if( !fPush(f) )
            { throw( new(OutOfMemory) )
            (this, "FlagStackFailure"); }//<-- push flag

        Heap(Interface) * h = hPop();//<-- pop class heap

        if( !h )
            { throw(new(NullPointer))
            (this, "NullInterface"); }


        if( !hPush(h) )
            { throw(new(OutOfMemory))
            (this, "HeapStackFailure"); } //<-- push class heap


            /* note: this is where we continue sequence,
                     or abort, either way interface is
                     there already, so copy or assign?

                     this pops our heap and pushes two
                     things, typeid for interface and its
                     heap container.

                     this also checks if our class(Heap)
                     is there as a builder(Heap) like our
                     build()() method takes a class(Heap)
                     and allocates a builder(Heap), also
                     theres the case where the interface
                     is not found so...

                     this does not deaccumulate our flag.
             */
        Interface reg = map(key);//<-- pop class heap, pop class typeid,
                                //+push sub typeid, push sub heap (if true)


        if( (*f) )//if multimap(true)
        {
            if( !reg )
            { throw(new(NotFound))
            (this, "NotAHeapInterface", key); }

                   f    =   flag() ;//<--pop flag
            if(   !f   ){ throw( new(NullPointer) )
                (this, "NullFlag"); }

            deaccumulate(f);
        }
        else
        {
            /* note: this is where we build()()
             */
            if( !reg )
            {
                class(Builder)(Flag) = true;//for build return 0, and push typeid


                build(key);//<-- need ctor? (yes)(push interface)(push typeid)


                Interface obj = iPop();//<-- pop interface

                if( !obj )
                { throw(new(NullPointer))
                (this, "NullInterface"); }

                /* note: push the reg object for build
                         constructor
                 */
                if( !iPush(obj) )//<--push interface
                {throw(new(OutOfMemory))
                (this, "InterfaceStackFailure");}

                /* note: insert int reg we built
                 */
                Heap(Interface)(Interface).base.insert(h, obj);
            }
            else // reg
            {
                /* note: if a sub-factory method, then
                         convert to builder (done). just
                         getting the string for using build
                         as a re-constructor. this means the
                         proper constructor gets returned
                         for the interface.
                 */
                cstring iter = key, str;
                size_t n;

                str = class(Builder)(Helper)(key, & n);

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

                { str="builder(Heap)"; }

                    if( !tPush(str) )//<-- push interface "class" typeid
                    {throw(new(OutOfMemory))
                    (this, "TypeIDStackFailure");}

                /* note: this case is for pushing the reg
                         for use in the build constructor.
                 */
                if( !iPush(reg) )//<--push interface
                {throw(new(OutOfMemory))
                (this, "InterfaceStackFailure");}
            }

                   f    =   flag() ;//<--pop flag
            if(   !f   ){ throw( new(NullPointer) )
                (this, "NullFlag"); }

            deaccumulate(f);


            StrategicCommand * self = cPop();

            if( !self ){ throw(new(NullStrategicCommand))
            (this, "NoVirtualTableObjectOnControlStack"); }


            ((StrategicCommand*)self)->defaults[4] = false;
            ((StrategicCommand*)self)->defaults[5] = true;


            ((StrategicCommand*)self)->_template
                = & class(Builder)(InterfaceCtor);

            cPush(self);
        }
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief the build constructor used with class builder      *
     *        multimap                                           *
     *                                                           *
     * @param all the parameters from: build("class(Table)")     *
     *                                          (0-2, ...) ;     *
     *                                                           *
     * @throw ...                                                *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void class(Builder)(InterfaceCtor)( Object * self, ... )
    {
        if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        cstring type = tPop();//<--pop interface class typeid

        if( !type ){throw(new(NullPointer))
            (this, "NullInterfaceClassTypeID");}

        /* * * * * * * * * * * * * * * * * * */
        class(FactoryMethod) * method1 = primary("class(Builder)");

        Interface p1 = method1->search
            ("class(BasicsHeap)");

        if(!p1){throw(new(NullPointer))
        (this, "BasicsHeapNotFound");}
        /* * * * * * * * * * * * * * * * * * */

        Strategy * p = ((methPtr*)p1)[1](type);
        if( !p ){throw(new(NotFound))
            (this, "NotAnInterfaceClass", type);}

          ((Interface()(*)(size_t,...))p->val)( ((size_t)self) );//<--pop interface

        (*Flags[0]) = false;

        ControlFactory(00)(ControlFactory(00));//pop control factory
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class builder multimap #3                          *
     *                                                           *
     * @param cstring key to the sub factory method              *
     *                                                           *
     * @throw ... (alot if stack mis-use while dis-assembled)    *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void class(Builder)(03)( cstring key )//sub
    {
        cstring type = tPop();//<-- pop interface typeid

        if( !type )
        {throw(new(NullPointer))
        (this, "NullTypeID");}

        if( !tPush(type) || !tPush(type) )//double push typeid
        { throw(new(OutOfMemory))
        (this, "TypeIDStackFailure"); }

        Object * heap = hPop();//<-- pop sub heap

        if( !heap )
        {throw(new(NullPointer))
        (this, "NullHeapContainer"); }

        if( !hPush(heap) )
        { throw(new(OutOfMemory))
        (this, "HeapStackFailure"); }

        /* note: this is supposed to add the row if its not
         *       already there (just looking now).
         *
         *       because of this, no map is pushed onto the map
         *       stack here.
         */
        Info * row = volatile(SubFactoryMethod)( key );//<-- pop typeid, sub heap

        /* note: this is for heap container interface (sub heap)
         */
        /* - - - - - - - - - - - - - - - - - - - - - - - - - */
        cstring _type = type;

        while(type[0]!='(' && type[0]!='\0'){type++;}

        if( type[0]=='\0' ){throw(new(EmptyString))
                (this, "NotAParenthesizedRegistrationType");}

        /* * * * * * * * * * * * * * * * * * */
        class(FactoryMethod) * method1 = primary("class(Builder)");

        Interface p1 = method1->search
            ("class(TemplateHeap)");

        if(!p1){throw(new(NullPointer))
        (this, "TemplateHeapNotFound");}
        /* * * * * * * * * * * * * * * * * * */

        Strategy * strategy = ((methPtr*)p1)[1](type);

        Container(VirtualTable) * i = 0;

        if( !strategy ){throw(new(NotFound))
                (this, "NotABuilderHeap", _type);}
        else{ i = strategy->val; }
        /* - - - - - - - - - - - - - - - - - - - - - - - - - */

        if( !row )
        {
            string str = (string)allocate(string(size)
                                        (key)) ;
            if( !str ){throw(new(OutOfMemory))
                (this, "VirtualKeyFailure");}
            string(fill)(str, key);


            class(Rig) slot = {str,0,0,0};//all types

            /* note: add the row with the slot rig
             */
            i->insert(heap, slot);

            row = i->at(heap, str);

            if( !row )
            {throw(new(NullPointer))
            (this, "NullRow");}
        }

        StrategicCommand * self;

        if( !string(equal)(((typePtr*)i)[0](), "Heap(Security)") )
        {
            if( !iPush(row) ) //<-- push sub heap row as interface
            {throw(new(OutOfMemory))
            (this, "InterfaceStackFailure");}

            self = cPop();

            if( !self ){ throw(new(NullStrategicCommand))
            (this, "NoVirtualTableObjectOnControlStack"); }


            ((StrategicCommand*)self)->defaults[4] = false;
            ((StrategicCommand*)self)->defaults[5] = true;


            ((StrategicCommand*)self)->_template
                = & class(Builder)(InfoCtor);

            cPush(self);
        }
        else
        {
            self = cPop();

            deaccumulate(self);

            tPop();
        }
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief info ctor                                          *
     *                                                           *
     * @param each column in order of implementation minus key   *
     *        (first)                                            *
     *                                                           *
     * @throw ...                                                *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void class(Builder)(InfoCtor)( Object * self, ... )
    {
        cstring type = tPop();//<-- pop typeid

        if( !type )
        {throw(new(NullPointer))
        (this, "NullTypeID");}

        while(type[0]!='(' && type[0]!='\0'){type++;}

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

        if( !strategy ){throw(new(NotFound))
                (this, "NotABuilderHeap", type);}
        else{ i = strategy->val; }
        /* - - - - - - - - - - - - - - - - - - - - - - - - - */

        Info * row = iPop();

        if( !row )
        {throw(new(NullPointer))
        (this, "NullRow");}

        /* note: this was the last problem found in this
         *       class builder, i was trying to use the control
         *       slot but this functions role is to be called
         *       from its factory slot so...
         */
        if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

            ((void(**)(Object*,...))i)[11](row);

        (*Flags[0]) = false;

        /*       ...i shouldn't need this FactoryObject.h style
                 case... wait shouldn't the ... (updated using.h)
                 (the control slot was being set without the control
                 flag being raised from the ControlFactory)
         */
        ControlFactory(00)(ControlFactory(00));//pop control factory
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class builder complex                              *
     *                                                           *
     * - - this function still needs to reallocate or update - - *
     *- - every object so the other one (function method) will- -*
     *- - be the easy one that just updates the vto interface - -*
     *                                                           *
     * @param typeid cstring                                     *
     *                                                           *
     * @param name cstring                                       *
     *                                                           *
     * @param type cstring                                       *
     *                                                           *
     * @throw ...                                                *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void (*class(Builder)
    (ComplexCtor)(cstring key))(cstring, cstring)
    {
        if( !tPush(key) )
        {throw(new(OutOfMemory))
        (this, "TypeIDStackFailure");}
        return & class(Builder)(ComplexInit) ; }

    explicit void class(Builder)
    (ComplexInit)(cstring type, cstring name)
    {
        cstring key = tPop();

        if(!key)
        {throw(new(NullPointer))
        (this, "NullTypeID");}

    #if 0 // 1
        multimap(-1)(key);
        if( !map("builder(ComplexHeap)") )
        {
            class(builder)(multimap)(false)(key)
                (class(ComplexHeap))(0);
        }
    #endif // 1 FOR_AUTO_ADD_REGISTRATION

        multimap(true)(key)("builder(ComplexHeap)");
        if( !map(name) )
        {
            Interface reg = multimap(false)(key)("builder(ComplexHeap)");

            size_type pos = ((Container(VirtualTable)*)reg[3])
                ->size(reg[2]) ;

            class(builder)(multimap)(true)(key)
            (class(ComplexHeap))(name)( pos, sizeof(void*), type );

        /* note: now that the complex has been updated, every object
                 has to be recycled it seems like. every object can
                 certainly be copied but i think this problem needs
                 to be solved using double pointers, or a vtable
                 even that uses double pointers, nevermind the vtable,
                 we don't want to re-implement it just maybe use
                 a Subject object that gets allocated when the
                 builder(FactoryMethod) gets allocated. this Subject
                 object, it can use a double pointer so, when the
                 vtable recycles its complex objects, thats when the
                 Subject object is used to locate each one an reassign
                 each one a new instance of a complex object, this way
                 a Complex becomes embedded into the program with
                 strategically placed objects that are (their own addresses)
                 stored inside the Subject Object, therefore we need
                 to put a front-end onto the factory method factory()
                 when we create a new complex object, ...

                 what does this all have to do with the ctable?
                 there will be no ctable.

                 no front-end has been added to factory() just
                 class(builder)(auto)(typeid(obj))(& obj); is
                 used afterwards if you are going to update the
                 complex object.
         */
            reg = multimap(false)(key)("class(SubjectTable)");

            N(Class) * iter = ((Stk(Class)*)reg[1]) -> stktop;


            while(iter) //for each datamember
            {
                /* note: this should be better
                 */
                Pair(Class,ClassVirtualTable) pair = { *(Object**)iter->info, 0 }, * p

                /* note: get interface
                 */
                = VirtualTable(Interface).base.base.base.at( vtable, pair );

                if(!p){throw(new(NullPointer))
                    (this, "NullPair");}

                class(VirtualTable) * intr = p->val;//for interface

                Object * * objt = *(Object**)iter->info; //for datamembers

                *(Object**)iter->info = allocate(bytes(key));///<--allocate new

                if( !*(Object**)iter->info ){deallocate(objt);
                        throw(new(OutOfMemory))
                    (this, "ObjectReallocationFailure");}

                pair.key = objt;

                /* note: now remove old
                 */
                VirtualTable(Interface).base.base.base.remove( vtable, pair );

                /* note: insert new
                 */
                VirtualTable(Interface).insert(vtable, vstk, *(Object**)iter->info, intr, 0);


                for( size_t i = 0; i < ( bytes(key) / sizeof(void*) ) - 1 ; i++ )
                {
                    ((Object***)iter->info)[0][i] = objt[i] ;//copy datamembers
                }

                ((Object***)iter->info)[0][ ( bytes(key) / sizeof(void*) ) - 1 ] = 0;

                deallocate(objt);///<-- deallocate old

                iter = iter->link;
            }

        }
        else
        {
            class(builder)(multimap)(true)(key)
            (class(ComplexHeap))(name)( ((Complex*)multimap(true)(key)
            ("class(ComplexHeap)")(name))->val, sizeof(void*), type );
        }
        //return complex( self, name );
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class builder function                             *
     *                                                           *
     * - -this function only needs to update the interface  - -  *
     * - -the object is technically only needed for retrieving- -*
     * - - the interface, also if reallocate fails to do what - -*
     * - - i think its implemented to do, is reallocate to  - -  *
     * - - the same address, then every object needs to be - -   *
     * - - updated just like with the class builder complex - -  *
     *                       - - method. - -                     *
     *                                                           *
     * - - reallocate does not reallocate to the same address - -*
     *                                                           *
     *   - -(every object needs its interface reasssigned)- -    *
     *                                                           *
     * @param self Object                                        *
     *                                                           *
     * @param name cstring                                       *
     *                                                           *
     * @param type cstring                                       *
     *                                                           *
     * @throw ... (everything from class builder multimap)       *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void (*class(Builder)
    (FunctionCtor)(cstring key))(cstring, cstring, Method *)
    {
        if( !tPush(key) )
        {throw(new(OutOfMemory))
        (this, "TypeIDStackFailure");}
        return & class(Builder)(FunctionInit) ; }

    explicit void class(Builder)
    (FunctionInit)(cstring type, cstring name, Method * addr)
    {
        cstring key = tPop();

        if(!key)
        {throw(new(NullPointer))
        (this, "NullTypeID");}

        multimap(true)(key)("builder(VirtualHeap)");
        if( !map(name) )
        {
            Interface reg = multimap(false)(key)("builder(VirtualHeap)");

            size_type pos = ((Container(VirtualTable)*)reg[3])
                ->size(reg[2]) ;

            /* note: assign (add to) the virtual heap (A).
             */
            class(builder)(multimap)(true)(key)
            (class(VirtualHeap))(name)( pos, addr, type );

            /* note: reallocate the interface (B).
             */
            /* note: first reallocate the interface. so retrieve
             *       the virtual heap and allocate an new interface.
             *       (the virtual heap has been retrieved). so
             *       just use pos to get interface size.
             */
            /* note: this is for retrieving the class factory method
             *       and removing the vto interface.
             */
            Interface meth = *FactoryTable(Interface)
                .search(ftable, key);//primary

            Interface volatile(iterator)[3]={&volatile(Type),0,0};
                volatile(type) = "class";//slot rig

            Interface def =  *(void***)Heap(Interface)(Interface).base
                .at(meth[4], volatile(iterator))  ;

            Interface obj = allocate( ( pos + 1 ) * sizeof(void*) );
            if( !obj ){throw(new(OutOfMemory))
                (this, "InterfaceFailure");}

            /* note: vto interface copy.
             */
            size_t i ;
            for( i = 0 ; i < pos ; i ++ )
            {
                obj[i] = def[i];
            }obj[pos] = addr;

            /* note: remove here (no).
             */
            /**Heap(Interface)(Interface).base  //demolish def
                .remove(meth[4], volatile(iterator))  ;*/

            /* note: now add (no).
             */
            /**Heap(Interface)(Interface).base
                .insert(meth[4], obj)  ;*/

            /* note: simple swap (yes).
             */
            *(void***)Heap(Interface)(Interface).base
                .at(meth[4], volatile(iterator)) = obj ;

            /* note: the btable needs to be updated...
             */
            cstring str = class(builder)(search)( def );

            class(builder)(remove)( def );

            class(builder)(insert)( obj, str );

            deallocate(def);

            /* note: every object needs its interface reassigned
                     when this function gets called.
             */
            reg = multimap(false)(key)("class(SubjectTable)");


            N(Class) * iter = ((Stk(Class)*)reg[1]) -> stktop;

            while(iter)
            {
                *VirtualTable(Interface)
                .search( vtable, 0, *(Object**)iter->info ) = obj ;

                iter = iter->link;
            }

        }
        else
        {   /* note: re-assign in the virtual heap (A)
             */
            class(builder)(multimap)(true)(key)
            (class(VirtualHeap))(name)
            (((virtual*)multimap(true)(key)
            ("class(VirtualHeap)")(name))->val, addr, type );

            /* note: override the interface method (B)
             */
            ((Method * *)multimap(false)(key)(key))
            [ ((virtual*)multimap(true)(key)
            ("class(VirtualHeap)")(name))->val ] = addr;
        }
        //return function( self, name ) ;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief class builder subject (auto update stack)          *
     *                                                           *
     *                                                           *
     * - - reallocate does not reallocate to the same address - -*
     * - -this is just the helper for the subject object stack- -*
     * - - used by class builder function and class builder - -  *
     *                       - - complex - -                     *
     *                                                           *
     * @param typeid cstring                                     *
     *                                                           *
     * @param self object                                        *
     *                                                           *
     * @throw ... (everything from class builder multimap)       *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void (*class(Builder)
    (SubjectCtor)(cstring key))(Object * *)
    {
          if( !iPush( multimap(false)(key)("class(SubjectTable)") ) )
          {throw(new(OutOfMemory))(this, "InterfaceStackFailure");}

        return & class(Builder)(SubjectInit);
    }

    explicit void class(Builder)
    (SubjectInit)(Object * * pself)
    {
        Interface reg = iPop();
        if( !reg ){throw(new(NullPointer))
            (this, "NullInterface");}

        if( !pself ) //if delete passed

        {
          ((class(VirtualTable)*)reg[2])->dtor(reg[1]);

        }else
        {
        ((Stk(Class)(VirtualTable)*)reg[2])->push(reg[1], pself);} }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief the struct abort method                            *
     *                                                           *
     *  - - this needed to be here and not inside builder.h - -  *
     * - - because it is one of the bigger helpers when it  - -  *
     *   - - needs a new builder factory method constructed - -  *
     *                                                           *
     * @param typeid cstring                                     *
     *                                                           *
     * @param key passnumber or "pass(SecurityHeap)" cstring     *
     *                                                           *
     * @throw ...                                                *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static void struct(Abort)(Method)(cstring);

    explicit void struct(Abort)(Method)(cstring key)
    {
        Interface method = primary(key);

        if( !string(equal)( ((typePtr*)method)[0](),
            "builder(FactoryMethod)" ) )
        {
          FactoryTable(Interface).remove( ftable, key, method[3] );

          class(builder)(register)(key)(1, method);//new builder(FactoryMethod)
        }
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    ///* warning:                                              *///
    ///*                                                       *///
    ///*   this struct abort method has no check for every     *///
    ///*   object data member being a virtual table object     *///
    ///*   and every data member/interface method access       *///
    ///*   being from the complex/function method(s) so        *///
    ///*   this method can easily produce an incorrect         *///
    ///*   result or terminate the program after using a       *///
    ///*   recently aborted struct class that is not           *///
    ///*   compatible with the builder/complex operation.      *///
    ///*                                                       *///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief no throw debug tool                                *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static void (*struct(NoThrow)(01)(cstring))(cstring);

    static void struct(NoThrow)(02)(cstring);


    explicit void (*struct(NoThrow)(01)(cstring key))(cstring)
    {   if( !tPush( key ) ){throw(new(OutOfMemory))
            (this, "TypeIDStackFailure");}

        class(builder)(register)(key)(0);
        return & struct(NoThrow)(02) ; }

    explicit void struct(NoThrow)(02)(cstring key)
    {   cstring type = tPop();
        if( !type ){throw(new(NullPointer))
            (this, "NullTypeID");}

        class(Builder)(MultiMap)(false)(type)
            (key) (0); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note: these methods conclude the Complex C un-implementation.
     *       the un-implementation of implemented structured data
     *       types and their . and -> (member access)(Factory C).
     */
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
                   class(builder)(register)("Class");
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
   class(builder)(multimap)(false)("Class")(class(StrategyHeap))(0);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                class(builder)(multimap)(true)("Class")
                (class(StrategyHeap))("case")( &func );
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
             class(builder)(complex)("Class")(int, "var");
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
 class(builder)(function)("Class")(void(*)(Object*), "meth", &func ) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
              Object * obj = factory("Class")(this, ...);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
              class(builder)(auto)(typeid(obj))(& obj) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                    class(builder)(drop)("Class");
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                      struct(abort)("Class") ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note:

        these are the definitions that use builder.h

        definitions, these are truly the final definitions

        to Factory C. this like is where Factory C ends and

        something else begins i believe, something that would

        be like a Complex C or a Builder C.

        ... i may be wrong a little bit since it seems that

        the object itself should be accessed from a factory

        method and so then from the class builder windowed

        program even, you would be able to re-assign new objects

        of new types, to the location of existing objects.

        this would be using a factory method for an object in

        the class(SubjectTable) on a stack. a map comes to mind

        with the factory method recommendation so a

        class(StrategyHeap) comes to mind also. auto comes

        to mind as my new auto-matic object dispenser

        auto(true)("Class")("obj") or something. this way a runtime

        string is used to access each thing in object oriented

        programming including the object

        auto = a - u - t - o - m - a - t - c - a - l - l - y

        g - e - t   y - o - u - r   o - b - j - e - c - t

        if you weren't so in love with keywords right now you

        would call it: obj("Class")("obj") or object()()

        or auto still for auto object (automatically strategic)

        (the keyword using comes to mind). also your not wrong

        at all because you have the struct bunker with its complex

        heap of double pointers (object locations) so you already

        implemented that strategy at least once (with more to come).
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief the struct class method (implementation)           *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Object * * (*class(Push)(Object* self))(cstring)
    {   if( !vPush(self) ){throw(new(OutOfMemory))
            (this, "ObjectStackFailure");}

        return & class(Method);    }
    explicit Object * * class(Method)(cstring name)
    {   Object * self = this;

        multimap(true)(typeid(self))("class(ComplexHeap)");
        if( !map(name) )
        {return function(self, name);
        }else
        {return complex(self, name);
        }    }

    /* note: i don't know if im ready for this method, but if
     *       you want both data members and interface methods
             accessed from one place like a class is one place
             then this is the easy method for that using the
             object-oriented helper methods and using multimap
             the helper multi-method.
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                   ... struct(class)(obj)("var")  ...
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**               __
                     /\ \
                  ___\ \ \    ___      ____     ____
                 / ___\ \ \  / __`\   / ____\  / ____\
                /\ \__/_ \ \/\ \/\.\_/\_____`\/\_____`\
                \ \_____\ \_\ \___/\_\/\_____/\/\_____/
                 \/_____/\/_/\/__/\/_/\/____/  \/____/
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #endif // CONCRETE_CLASS 0 ___CLASS_BUILDER___ 1
                                                             //CWJB
#endif // CLASS_H_INCLUDED
