#ifdef FACTORYTABLESINGLETON
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
    #ifndef MULTIMAP_H_INCLUDED
    #define MULTIMAP_H_INCLUDED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*     - FLAG FUNCTION - FLAG FUNCTION - FLAG FUNCTION -     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||              THE FACTORY TABLE MULTIMAP             || *
     *                                                           *
     *              by Willy (08/03/2022)(08/05/2022)            *
     *                       (09/24/2022)(11/08/2022)            *
     * ||                    (01/12/2023)                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*     - FLAG FUNCTION - FLAG FUNCTION - FLAG FUNCTION -     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1) use the multimap flag to decide between whether  *
     *          to use a sub factory method or not (at compile   *
     *          time).                                           *
     *                                                           *
     *       2) search for the factory table class in the        *
     *          factory table.                                   *
     *                                                           *
     *       3) search for the heap interface with the class     *
     *          factory method for the interface itself (or)     *
     *          for a sub factory method.                        *
     *                                                           *
     *       4) search for the info with the sub factory method. *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief             multimap data members                  *
     *                                                           *
     * @var Map(Keys)     list of available sub-factory methods  *
     *                                                           *
     * @var map("")       this factory method (mStk)             *
     *                                                           *
     * @var flag()        flag or pivot as to return 2 or 3 func *
     *                                                           *
     * @var registructor  the choice of implementation for the   *
     *                    factory table index or multimap        *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                            map                            */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* ||   THE FACTORY TABLE INDEX  (STRUCTCLASS MULTIMAP)   || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    # define Map(Member)Map ## Member

        /* note: available sub-factory methods (security set)
         */
        static Security

            Map(KeyHeap)[thirteen] =
        /*A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
          {{"(AdapterHeap)"},  //=Adapter Type Info
           {"(BasicsHeap)"},   //+Overload sets
           {"(BuilderHeap)"},  //+Factory sets
           {"(ComplexHeap)"},  //=Class table
           {"(ControlHeap)"},  //+Command sets
           {"(FactoryHeap)"},  //=Factory Table Functions (see below:)
           {"(LibraryHeap)"},  //+Overload sets
           {"(OverloadHeap)"}, //+Overload sets
           {"(PolymorphHeap)"},//=Class Inheritance Table
           {"(SecurityHeap)"}, //+Key sets
           {"(StrategyHeap)"}, //+Overload sets
           {"(TemplateHeap)"}, //+Overload sets
           {"(VirtualHeap)"},  //=Class(VirtualTable) Table #9

           {""}} ;
        static Security *
        typename(SubFactoryMethod)(Map,Security,Key,0,12);

        static struct class(SecurityHeap)
            Map(Security) =

        {   &class(SecurityHeap)(Type),
            &Map(KeySearch),
            Map(KeyHeap)};


        static Interface Map(InterfaceHeap)[one] =
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/

            &Map(Security),

          /*&Map(Singleton), //(registructor) (todo)*/

            nullptr /*(null termination required)*/ };

        /**
         * @brief class factory method (Factory C)
         */
        static Interface
        typename(ClassFactoryMethod)(Map,0,0);


        static void typename(Setup)(Map) {}

        static void typename(Abort)(Map) {}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        //note: the factory heap was for factory table functions

        //but redefined as a security set for extended classes...

        //(i think the virtual heap accounts for everything

        //there and so no need for a function table as much, ...

        //at the same time that could be the class(FunctionTable)

        //or a strategy heap your thinking about, wow, ... back

        //to a big brainstorm about info heap types, etc...

        /* note: security set as in opposite of polymorph heap */

        ///these are the 7 basic heaps (permanent heaps)

        ///plus factory heap and strategy variants (basics+library)

        ///plus adapter heap

        /* + or = is for whether or not their can be multiples in

              one class interface heap (or just class basics)*/
        /**
          these could include class(...Array)(s) that use

          the sub-factory method with an index (but don't atm)

          TODO: implement a converter for telling the difference

          between class, pass and builder (naw)


          this heap and the heap in the other command; initialize;

          (inside builder.h) are the heaps that need updating

          when a new subfactory method interface is added.
         **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    except static Interface Map(03)(cstring);

    except static Interface () (*Map(02)(cstring))
        (cstring);

    except static Interface () (*(*Map(01)(cstring))
        (cstring))(cstring);


    typedef Interface () (*(*(*Registructor)(cstring))(cstring))
        (cstring);


        static Registructor FactoryTable(MultiMap)(bool);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static Registructor registructor = & Map(01);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**@brief  the factory table index (map/multimap)            *
     * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - *
     * @param  flag (true for multi)                          (1)*
     *                                                           *
     * @param  key  (class typeid)                            (2)*
     *                                                           *
     * @param  key  (interface typeid)                        (3)*
     *                                                           *
     * @param  key  (info id)                                 (4)*
     * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - *
     * @return the registructor (with primary factory method) (1)*
     *                                                           *
     * @return class factory method                           (2)*
     *                                                           *
     * @return sub factory method -or- interface              (3)*
     *                                                           *
     * @return info -from- sub factory method                 (4)*
     * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - *
     * @throw  empty class type id                            (1)*
     *                                                           *
     * @throw  not a factory table class                      (2)*
     *                                                           *
     * @throw  no class factory method                        (3)*
     *                                                           *
     * @throw  empty interface type id                        (4)*
     *                                                           *
     * @throw  null map                                       (5)*
     *                                                           *
     * @throw  empty map stack                                (6)*
     *                                                           *
     * @throw  map stack failure (push)                       (7)*
     *                                                           *
     * @throw  not a heap interface                           (8)*
     *                                                           *
     * @throw  null flag                                      (9)*
     *                                                           *
     * @throw  empty flag stack                              (10)*
     *                                                           *
     * @throw  flag stack failure (push)                     (11)*
     *                                                           *
     * @throw  no sub factory method                         (12)*
     *                                                           *
     * @throw  empty info id                                 (13)*
     *                                                           *
     * @throw  no info                                       (14)*
     *                                                           *
     * @throw  not a builder complex                         (15)*
     *                                                           *
     * @throw  null class type id                            (16)*
     *                                                           *
     * @throw  null interface type id                        (17)*
     *                                                           *
     * @throw  null info type id                             (18)*
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //#define  primary  is_class
        /**+---------------------------------+
         * @brief multimap                   |
         * +---------------------------------+
         */
        explicit Registructor FactoryTable(MultiMap)(bool flag)
        //(compile time-dynamic) flag case
        {
          if( flag != -1 )
          {
            /* * * * * * * * * * * * * * * * * * */
            class(FactoryMethod) * method = primary("struct(Bunker)");

            void ** p = method->search
            ("class(SingletonTable)");

            if(!p){throw(new(NullPointer))
                (this, "StructBunkerNotFound");}

            struct(Bunker) **
            struct(bunker) = &((objtPtr*)(p))[1] ;
            /* * * * * * * * * * * * * * * * * * */

            bool * f = (bool*)VirtualTable(Interface).insert(
                       (*struct(bunker))->stable, vstk,
                       allocate(sizeof(bool)), & bool(Interface),
                       & bool(Init) )(this, flag);

            /* * * * * * * * * * * * * * * * * * */
            if( (*f) != flag ){ (*f) = flag; }//DEBUG (ASSERT)

            if( !fPush( f ) )///<---push flag
                { throw( new(OutOfMemory) )
                (this, "FlagStackFailure"); }//
          }
            if( !mPush(is_class) )//<--push map (primary)
                { throw( new(OutOfMemory) )
                (this, "MapStackFailure"); }

          return registructor; }
            /// /// /// /// /// /// /// /// /// /// /// ///
        except explicit Interface () (*(*Map(01)
            (cstring key))(cstring))(cstring)
        {   /// /// /// /// /// /// /// /// /// /// /// ///
            if( !key )
              { throw(new(NullPointer))
              (this, "NullClassTypeID"); }

            if( string(equal)( key, "" ) )
              { throw(new(EmptyString))
              (this, "EmptyClassTypeID"); }

            class(FactoryMethod) * heap = map(key);//<-- pop map (primary)

              // /// /// /// /// /// /// /// /// /// /// /// //
              //*FactoryTable(Interface).search(ftable, key);//
              // /// /// /// /// /// /// /// /// /// /// /// //

            if( !heap ){ throw( new(NotFound) )
                (this, "NotAFactoryTableClass",key); }

            if( !heap->search ){ throw( new(NotFound) )
                         (this, "NoClassFactoryMethod", key); }

            // -- -- -- -- -- --builder-- -- -- -- -- -- //
            /* note: anyone that uses the vto interface
             *       as an interface heap utility needs to
             *       remember the difference between struct
             *       classes and builder classes when it
             *       comes to typeid and a builder classes
             *       vto typeid is "class". from there there
             *       is a lookup in the btable for that
             *       typeid, not accesible when we want that
             *       interface in the heap like the rest.
             *       (of course multimap settles that difference).
             *
             *       vto = virtual table object
             */
            // -- -- -- -- -- --builder-- -- -- -- -- -- //
            /* note: this is for the volatile(Ctor) method
             *       this is the one important thing not given
             *       a stack to operate with a number of
             *       assigned variables. looks to me that if its
             *       just used to work with that one thing in
             *       builder.h then it does not stack tightly
             *       enough to need a stack by my observations.
             *
             *       this ensures that a fully dynamic instance
             *       of a builder complex can be allocated after
             *       here (inside the next encapsulated multimap).
             */
            volatile(class) = key;//singleton
            // -- -- -- -- -- --builder-- -- -- -- -- -- //
            /* note: this case is for starting the chain of
             *       events that occur when the volatile class
             *       factory method is used, implemented to use
             *       this heap that gets pushed here. there are
             *       2 additional stacks used in multimap when
             *       the volatile class and sub factory methods
             *       are used so theres a heap stack and type
             *       stack for interface typeid. any further
             *       use of those two stacks is found inside
             *       the volatile factory methods (class/sub).
             *
             *       (taking the responsibility of builder
             *       with them)
             */
            if( string(equal)( heap->typeid(),
                "builder(FactoryMethod)" ) )
            { if( heap->search != & volatile(ClassFactoryMethod) )
              { throw(new(IllegalOperation))
                (this, "NotConfiguredFor:BuilderComplex\n"
              "need:\t\t volatile(ClassFactoryMethod)"); }

                if( !hPush( ((objtPtr*)heap)[4] ) )//<-- push heap container
                    { throw(new(OutOfMemory))
                    (this, "HeapStackFailure"); }

                if( !tPush(key) )   ///<-- push class typeid
                { throw( new(OutOfMemory) )
                (this, "TypeIDStackFailure"); } }

            // -- -- -- -- -- --builder-- -- -- -- -- -- //

            if( !mPush(heap->search) )//<--push map (class)
                { throw( new(OutOfMemory) )
                (this, "MapStackFailure"); }

            return & Map(02); }

            /// /// /// /// /// /// /// /// /// /// /// ///
        except explicit Interface () (*Map(02)
            (cstring key))(cstring)
        {   /// /// /// /// /// /// /// /// /// /// /// ///
            if( !key )
              { throw(new(NullPointer))
              (this, "NullInterfaceTypeID"); }

            if( string(equal)( key, "" ) )
              { throw(new(EmptyString))
              (this, "EmptyInterfaceTypeID"); }

            Interface reg = 0;
            if( true )
               { reg = map (key); }             //<--pop map (class)
            if( !reg ){ throw( new(NotFound) )
                   (this, "NotAHeapInterface", key); }

            /* * * * * * * * * * * * * * * * * * */
            /* note: this procedure is one of the
                     reasons why the struct bunker
                     cant be aborted (calls the
                     function HeapSearch) or its
                     just one of the things just
                     holding it down. don't forget
                     multimap needs to use it, i
                     guess thats why its a struct
                     bunker, because it does not
                     abort its compile-time struct(s)

                     (same with the builder).
             */
            /* * * * * * * * * * * * * * * * * * */
            class(FactoryMethod) * method = primary("struct(Bunker)");

            void ** p = method->search
            ("class(SingletonTable)");

            if(!p){throw(new(NullPointer))
                (this, "StructBunkerNotFound");}

            struct(Bunker) **
            struct(bunker) = &((objtPtr*)(p))[1] ;
            /* * * * * * * * * * * * * * * * * * */

            bool * flag = flag();///<---pop flag


            if(   !flag   ){ throw( new(NullPointer) )
                            (this, "NullFlag"); }

            if(  (*flag)  )


            { VirtualTable(Interface).remove(

                (*struct(bunker))->stable, vstk, & flag );///multimap


            // -- -- -- -- -- --builder-- -- -- -- -- -- //
            /* note: here is where the pushes should go,
                     otherwise you need a builder factory
                     method for builder sub heaps, on the
                     other hand, if it works this way and
                     the... coupling between multimap and
                     the volatile factory methods is that
                     multimap pushes the very first container
                     anyways.

                     see the thing is, you might not be able
                     to catch all the right cases from here
                     and so the heap+typeid for a builder
                     sub factory method gets pushed in the
                     extended-purpose volatile class factory
                     method that does extra work pushing
                     onto stacks because of course there is
                     really only builder(Heaps)(sub) under a
                     builder(FactoryMethod)(class).

                     the more i think about it, it couldn't
                     be more perfectly implemented as the
                     only case needed to set off the whole
                     chain of events is if its a builder
                     factory method and push onto the heap
                     stack for it. should there be a check
                     for if its the volatile class factory
                     method at that...

                     the builder is not up and running yet
                     (12/18/2022)... but its definition is
                     sound with the use of all the stacks it,
                     or the majority of the overly "complex"
                     problems have been smoothed over with the
                     volatile class plus sub factory method(s),
                     builder heaps and build()() + demolish()
                     to go with class builder multimap. just
                     closing for what it said about the pushes
                     going right here and no, its perfect how
                     the volatile sub + cla factory methods
                     take the responsibility of builder with
                     them and the sub factory method being
                     dependant on the class factory method
                     being builder itself. that means i have
                     finalized my definitions of multimap
                     and its builder, complex, and volatile
                     components meant to work with a run-
                     time (complex) data type.
             */
            // -- -- -- -- -- --builder-- -- -- -- -- -- //

                cstring type = ((typePtr*)reg)[0]();//this

            // -- -- -- -- -- -- pass  -- -- -- -- -- -- //
                  /* note:

                        || string(equal)(type, "(pass)") <---

                        this does not help, technically,
                        but there is an implementation
                        limit on pass numbers for interfaces
                        or use a security table that has
                        interfaces by pass number. so a
                        pure builder version of a factory
                        table class will use pass(SecurityHeap)
                        without the passnumber being returned
                        from the type method because it needs
                        an implementation. there is no need
                        for a security pass number for
                        builder factory method, it has a pointer
                        to a container (to iterate).

                   */


                if( type[0] == '0' )

                { type = ((typePtr*)reg)[3](); }


            // -- -- -- -- -- -- pass  -- -- -- -- -- -- //

                while(type[0]!='(' && type[0]!='\0'){type++;}

                /* * * * * * * * * * * * * * * * * * */
                class(FactoryMethod) * method2 = primary("multimap");

                Interface p2 = method2->search
                ("class(SecurityHeap)");

                if(!p2){throw(new(NullPointer))
                    (this, "SecuritySetNotFound");}
                /* * * * * * * * * * * * * * * * * * */

                Security * security = nullptr;

                if( type[0]!='\0' )
                {
                    security = ((methPtr*)p2)[1]( type );
                }

                if ( !security ){ throw( new(NotFound) )
                            (this, "NoSubFactoryMethod", key); }

                if( !mPush(((methPtr*)reg)[1]) )//<--push map (sub)
                    { throw( new(OutOfMemory) )
                    (this, "MapStackFailure"); }

                return & Map(03); }///multimap
            else///map

            { VirtualTable(Interface).remove(

                (*struct(bunker))->stable, vstk, & flag );

                return reg; } }///map
            /// /// /// /// /// /// /// /// /// /// /// ///
        except explicit Interface Map(03)(cstring key)
        {   /// /// /// /// /// /// /// /// /// /// /// ///
            if( !key )
              { throw(new(NullPointer))
              (this, "NullInfoTypeID"); }

            if( string(equal)( key, "" ) )
              { throw(new(EmptyString))
              (this, "EmptyInfoID"); }

            Object
               * info = 0;
            if ( true )
               { info = map (key); }             //<--pop map (sub)
            if (!info){ throw( new(NotFound) )
                      (this, "NoInfo", key); }
            return info;///multimap
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - - everything should be good to go (09/24/2022).

    - - TODO: IMPLEMENT PROTECTED AND BREAK AS FACTORY OBJECT
              OVERLOAD FUNCTIONS OR USE THE CONTROL FACTORY.

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    ///* IMPORTANT:                                            *///
    ///*   this is what is used to access a factory table      *///
    ///*   classes interface heap and so a single interface    *///
    ///*   can be returned at a time, used with all the casts  *///
    ///*   defined by Object.h and used by structclass.h       *///
    ///*                                                       *///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
             multimap(true)(typeid(vector))("...")("...");
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                multimap(false)(typeid(vector))("...");
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        note: true/false is for if you want it (the factory table
              index) to be a multimap or not. this is a composite
              map/multimap provided by the factory table for a
              class. it is a class multimap when using the sub
              factory method.

        also: if an operation abort throw occurs, things like the
              multimap flag and map may be on the stack(s) for
              continuing or resolving (flag() and map("")).
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                                !map("")
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        note: map may be used after multimap is used without
              calling all the needed factory methods to finish
              the operation, leaving one on the stack to call
              from map, that represents the top of the stack
              and it is popped as it is called. map may be used
              to check if an interface or info is there to be
              used by checking for a 0 to be returned.
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                         bool * flag = flag();
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        note: if map is used, that would be around the same time
              that you should use the above statement and
              deaccumulate the flag variable (if map is used after
              the primary factory method or before the class
              factory method).
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief namespace (Factory C)                              *
     *                                                           *
     * this is supposed to be implemented like sql_connect except*
     * maybe only for a single file system or something on a     *
     * lower level than sql_connect (database level) and use an  *
     * object like so:                                           *
     *                                                           *
     * namespace( obj, "", "", "" ) ; (same # of params as)      *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /**+---------------------------------+
     * @brief multimap connect           |
     * +---------------------------------+
     */
    explicit void       namespace(/*const*/Object * self, ... )
    {if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

        ((void(*)(Object*,...))
            (*function( self, "namespace" )))(this);

    (*Flags[0]) = false; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           *
     * note: database level would be acceptable for factory      *
     *       table classes that would be stored via db or        *
     *       config file. there being a lower level like a       *
     *       file system level or something that involves        *
     *       nodes or file/directory permissions that a unix     *
     *       or linux person can understand or appreciate as     *
     *       anything like a system administrator is the aim     *
     *       or intent of this namespace overload function,      *
     *                                                           *
     * also: it would be for a system administrator to protect   *
     *       themselves with symbols/macro labels defined by     *
     *       the factory c compiler, protect themselves with     *
     *       passnumbers (any amount) along with struct bunker   *
     *       and builder pass numbers, and issue a compiler...   *
     *       (to a group) and with having factory c open as a    *
     *       library or c project, with the compiler open as     *
     *       a project (as admin).                               *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define Pub(Member)Pub ## Member
    # define Pro(Member)Pro ## Member
    # define Pri(Member)Pri ## Member

  #if 1
    #define pri -1//  primary  // -1
    #define cla 0              // 0
    #define sub 1              // +1

    #define pub 1//            // +1
    #define pro 0              // 0
    #define pri -1//  private  // -1 NOT REDEFINED
  #endif // GO_FOR_IT
  #if 1
  volatile static bool Security(Restrict) = false;
  #endif // 1
    volatile static bool Map(PriFlag) = true;//true public

    volatile static bool Map(ClaFlag) = true;

    volatile static bool Map(SubFlag) = true;


    volatile static int8_t Pub(Lever) = -1;

    volatile static int8_t Pri(Lever) = -1;


    typedef void (*(*(*Flagstructor)(bool))(bool))(bool);


    #define public FactoryTable(Public)()
    /**+---------------------------------+
     * @brief public multimap            |
     * +---------------------------------+
     */
    static void (*(*Pub(01)(bool))(bool))(bool);
        static void (*Pub(02)(bool))(bool);
            static void Pub(03)(bool);

    static Flagstructor FactoryTable(Public)();
    static Flagstructor pubstructor = & Pub(01);
    explicit Flagstructor FactoryTable(Public)()
    {
        return pubstructor; }

    static void (*(*Pub(01)(bool flag))
        (bool))(bool)
    {Map(PriFlag) = flag;
        return Pub(02);}

    static void (*Pub(02)(bool flag))(bool)
    {Map(ClaFlag) = flag;
        return Pub(03);}

    static void Pub(03)(bool flag)
    {Map(SubFlag) = flag;}

    /*
    THERE NEEDS TO BE A CASE WHERE WHEN A CERTAIN FLAG IS RAISED,

    ONLY CLASSES THAT USE A SINGLE DEFAULT PASS (FOR THE INTERFACE

    HEAP) CAN BE ACCESSED, SO IF A CERTAIN FLAG IS RAISED,... THE CLASS

    PASS HAS TO BE ON THE STACK (PASS STACK) FROM BREAK AS TO POP FROM

    MULTIMAP AND CHECK WHEN ONLY HEAPS THAT HAVE A '0' IN THEM AT THE FRONT

    SINCE IT WOULD BE FOR THE PASS SECURITY HEAP.

     */
    #define protected FactoryTable(Protected)()
    /**+---------------------------------+
     * @brief protected multimap         |
     * +---------------------------------+
     *///PassStack Used
    static void (*(*Pro(01)(bool))(bool))(bool);
        static void (*Pro(02)(bool))(bool);
            static void Pro(03)(bool);

    static Flagstructor FactoryTable(Protected)();
    static Flagstructor prostructor = & Pro(01);
    explicit Flagstructor FactoryTable(Protected)()
    {
        return prostructor; }

    static void (*(*Pro(01)(bool flag))
        (bool))(bool)
    {
        return Pro(02);}

    static void (*Pro(02)(bool flag))(bool)
    {
        return Pro(03);}

    static void Pro(03)(bool flag)
    {}


    #define private FactoryTable(Private)()
    /**+---------------------------------+
     * @brief private multimap           |
     * +---------------------------------+
     */
    static void (*(*Pri(01)(bool))(bool))(bool);
        static void (*Pri(02)(bool))(bool);
            static void Pri(03)(bool);

    static Flagstructor FactoryTable(Private)();
    static Flagstructor pristructor = & Pri(01);
    explicit Flagstructor FactoryTable(Private)()
    {
        return pristructor; }

    static void (*(*Pri(01)(bool flag))
        (bool))(bool)
    {Map(PriFlag) = !flag;
        return Pri(02);}

    static void (*Pri(02)(bool flag))(bool)
    {Map(ClaFlag) = !flag;
        return Pri(03);}

    static void Pri(03)(bool flag)
    {Map(PriFlag) = !flag;}

    /**
    YOU CAN ADD A VERY SPECIAL CASE FOR MULTIMAP TO ACCESS OVERRIDE

    FOR THE STRUCT BUNKER PUTTING A PASS ON THE STACK IF THE STRUCT

    BUNKER WAS ACCESSED BY MULTIMAP. MEANING THAT OVERRIDE GETS

    ACCESSED AS AN INTERFACE METHOD ITSELF, OR ITS ACCESSED AS A

    GLOBAL FUNCTION/METHOD USING A BREAK FIRST. (todo)
     */
    /*
    cstring insrt = "insert"; //now any one of a few interface methods

    ((virtual*)multimap(true)(typeid(obj))

     ("class(VirtualHeap)")(insrt))->end           (strategy)
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  TODO: dissasemble this using the dissasembly window      *
     *        (DEBUG) and help the try/throw/catch for its       *
     *        bool factory object value needing to be compared   *
     *        like a pointer for > 0 not == true because its not *
     *        the intention of me and should be debugged.        *
     *                                                           *
     * 193    bool * f = new(bool)(this, flag);                  *
     * 194    if( (*f) != flag ){ (*f) = flag; }//DEBUG (ASSERT) *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief    primary("Class"); + is_class("Class");          *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    noexcept explicit class(FactoryMethod) * fTable
    (IsClass)(cstring key)

    {Pair(ClassName, ClassFactoryMethod) pair = { key, 0 },
        * p = FactoryTable(Interface).base.search( ftable, pair );

        if( !p || !p->key )
        {
            return 0 ;
        }
        else
        { return p->val; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    except static Interface fTable(Primary)(cstring);

    except explicit Interface

            fTable(Primary)(cstring key)

    { return *FactoryTable(Interface).search(ftable, key); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // FACTORY_H_INCLUDED
                                            //CWP
#endif
