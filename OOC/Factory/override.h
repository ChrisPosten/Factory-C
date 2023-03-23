#ifdef VIRTUALTABLESINGLETON
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
    #ifndef OVERRIDE_H_INCLUDED
    #define OVERRIDE_H_INCLUDED
    /**
    THIS IS THE INTERFACE METHOD OVERRIDE, THIS NEEDS A PASS FOR IT

    TO RESTRICT ACCESS USING IT UNLESS THERE IS A BREAK break(true)(...).

    THAT MEANS THAT IT CAN BE ACCESSED EITHER AS AN INTERFACE METHOD

    OF THE STRUCT BUNKER, OR THE STRUCT BUNKER PASS CAN BE USED WITH

    BREAK WITH OVERRIDE AS A GLOBAL METHOD/FUNCTION FLAG FUNCTION.

    THAT WAY, RUNTIME OR NOT (GETTING THERE) IT HAS SECURITY BUILT

    IN. THIS INTERFACE METHOD OVERRIDE WILL BE PERFECT TO PUT ALL

    THE EXTRA SECURITY STUFF INTO AT THE VERY END. USED IN CONJUNCTION

    WITH BREAK USING MULTIMAP/MULTIMAP COMPONENTS, ... protected, ...

    (SIGH) I MIGHT CUT OUT CERTAIN AMBITIONS TOWARDS INFORMATION HIDING

    AND EXCEPTIONS THAT ARENT THROWN, PASS NUMBER, OVERRIDE, ...

    BECAUSE OBJECT ORIENTED PROGRAMMING DOES NOT NEED THOSE THINGS

    JUST TO BE OBJECT ORIENTED PROGRAMMING. AN OPERATIING SYSTEM MIGHT

    NEED...


         void * * dptr = & ptr;

         if( ... )

    USING A DOUBLE POINTER, YOU CAN...

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*     - FLAG FUNCTION - FLAG FUNCTION - FLAG FUNCTION -     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||       THE FACTORY C INTERFACE METHOD OVERRIDE       || *
     *                                                           *
     *                   by Willy (08/03/2022)(01/21/2023)       *
     * ||                         (01/29/2023)                || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*     - FLAG FUNCTION - FLAG FUNCTION - FLAG FUNCTION -     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         override                          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1) decide whether its an override or a cancel       *
     *          override using true or false.                    *
     *                                                           *
     *       2) override/cancel override.                        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief       override(true)(obj, "")(obj, "");            *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         override                          */
    # define Over(Member) Over ## Member

    #define override(flag)\
    \
        FactoryTable(Override)(_line_, _file_, _time_, _date_, flag)

    except static void Over(02)(const Object *, cstring);

    except static void (*Over(01)(const Object *, cstring))
        (const Object *, cstring);


    typedef void (*(*Overstructor)(const Object *, cstring))
        (const Object *, cstring);

        static Overstructor FactoryTable(Override)
        (size_t, char *, char *, char *, bool);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static Overstructor overstructor = & Over(01);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
            COMMAND; INITIALIZE;       COMMAND; INITIALIZE;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        /**+---------------------------------+
         * @brief override                   |
         * +---------------------------------+
         *///
        explicit Overstructor FactoryTable(Override)
        (size_t line, char * file, char * time, char * date, bool flag)
        {
            /* note: this pushes the override exception also
             */
            accumulate(Override)(this, line, file, time, date, "","");


            bool * f = accumulate(bool)(this, flag);
            if( (*f) != flag ){ (*f) = flag; }//DEBUG (ASSERT)

            if( !fPush( f ) )///<---push flag
                { throw( new(OutOfMemory) )
                (this, "FlagStackFailure"); }

          return overstructor; }

            /// /// /// /// /// /// /// /// /// /// /// ///
        except explicit void (*Over(01)
            (const Object * self, cstring meth))
            (const Object *, cstring)
            /// /// /// /// /// /// /// /// /// /// /// ///
        {
            bool * flag = flag();///<---pop flag


            if(   !flag   ){ throw( new(NullPointer) )
                            (this, "NullFlag"); }

            if(  (*flag)  ) ///Override

            { deaccumulate(flag);

                Override * o = ePop();
                if(!o){throw(new(NullPointer))
                    (this, "NullOverride");}

                deallocate(o->base.text);
                o->base.text = 0;
                deallocate(o->item);
                o->item = 0;

                o->item = (char*)allocate(string(size)((cstring)meth));
                if( !o->item )
                {throw(new(OutOfMemory))
                (this, "OverrideStringFailure");}

                string(fill)(o->item, meth);

            #if 1
                if( !is_object(self) )
                {
                    o->base.text = (char*)allocate(string(size)((cstring)self));

                    if( !o->base.text )
                    {throw(new(OutOfMemory))
                    (this, "OverrideStringFailure");}

                    string(fill)(o->base.text, self);
                }
                else
                {
            #endif // 0
                    o->base.text = (char *)allocate(string(size)(type_info(self)));

                    if( !o->base.text )
                    {throw(new(OutOfMemory))
                    (this, "OverrideStringFailure");}

                    string(fill)(o->base.text, type_info(self));
            #if 1
                }
            #endif // 0
                if( !ePush(o) ){throw(new(OutOfMemory))
                (this, "ExceptionStackFailure");}


        #if 1

                /* note:

                    its very nice this case but it still doesn't

                    cover both templates and adapters both being

                    parenthesized data types and the second time

                    self gets passed into a factory method below

                    is supposed to be for an adapter that gives

                    a non-parenthesized data type name for the

                    typeid from an adapter interface. that makes

                    sense to me at least and this sorta problem could

                    use its own helper function or something that

                    takes in a adapter typeid and translates it into

                    a non-adapter typeid while confirming that its

                    an adapter type and not a template type, (also

                    a parenthesized data type). maybe its asking too

                    much to begin with and that has nothing to do

                    with the fact that there is a runtime error here.

                    maybe technical overload cases for the override

                    multi-method is too ambitious and therefore i will

                    section this out using the preprocessor...

                    (again)
                    so i am asking if the default interface is there,

                    if its not then assume its because its an adapter

                    factory table class and that means the typeid is

                    going to return Adapter not Class(Adapter)
                     */
                if( !is_object(self) )
                {
                    multimap(false)((cstring)self);
                    if( !map((cstring)self) )
                    {   /*********************************************/
                        size_t size = 0;
                        cstring iter = (cstring)self, p;

                        while( iter[0]!='(' && iter[0]!='\0' ){iter++;}
                        if(iter[0]=='\0'){throw(new(EmptyString))
                        (this, "NotAParenthesizedDataType\n"
                               "also:\t\t DefaultInterfaceNotFound");}

                        p = ++ iter ;

                        while( iter[0] != ')' )
                        {iter++;size++;
                        }size++;

                        string * strg = accumulate(string)(this,size);
                        size--;
                        while(size)
                        {
                            (*strg)[size-1] = p[size-1] ;

                            size--;
                        }
                        /*********************************************/
                        if( !iPush(&((Method* *)multimap(false)((cstring)self)(*strg))  //<--
                        [((virtual*)multimap(true)((cstring)self)("class(VirtualHeap)")
                        (meth))->val ] ) ){deaccumulate(strg);throw(new(OutOfMemory))
                                     (this, "InterfaceStackFailure");}
                        deaccumulate(strg);
                    }else
                    {
                      if( !iPush(&((Method* *)multimap(false)((cstring)self)((cstring)self))  //<--
                      [((virtual*)multimap(true)((cstring)self)("class(VirtualHeap)")
                      (meth))->val ] ) ){throw(new(OutOfMemory))
                                     (this, "InterfaceStackFailure");}
                    }


                }
                else
                {
        #endif // 0
                    if( !iPush(&((Method* *)virtual( self, class ) )
                    [ ((virtual*)multimap(true)(type_info(self))
                    ("class(VirtualHeap)")(meth))->val ] ) )
                    {throw(new(OutOfMemory))
                    (this, "InterfaceStackFailure");}

                    vPop();
        #if 1
                }
        #endif // 0

                return & Over(02);//override
            }
            else       ///Cancel Override

            { deaccumulate(flag);

        #if 1
                if( !is_object(self) )
                {
                    multimap(false)((cstring)self);
                    if( !map((cstring)self) )
                    {
                        size_t size = 0;
                        cstring iter = (cstring)self, p;

                        while( iter[0]!='(' && iter[0]!='\0' ){iter++;}
                        if(iter[0]=='\0'){throw(new(EmptyString))
                        (this, "NotAParenthesizedDataType\n"
                               "also:\t\t DefaultInterfaceNotFound");}

                        p = ++ iter ;

                        while( iter[0] != ')' )
                        {iter++;size++;
                        }size++;

                        string * strg = accumulate(string)(this,size);
                        size--;
                        while(size)
                        {
                            (*strg)[size-1] = p[size-1] ;

                            size--;
                        }
                        virtual * row = ((virtual*)multimap(true)
                        ((cstring)self)("class(VirtualHeap)")(meth));
                        ((Method * *)multimap(false)((cstring)self)
                        (*strg))[ row->val ] = row->col;
                    }else
                    {
                        virtual * row = ((virtual*)multimap(true)
                        ((cstring)self)("class(VirtualHeap)")(meth));
                        ((Method * *)multimap(false)((cstring)self)
                        ((cstring)self))[ row->val ] = row->col;
                    }
                }
                else
                {
        #endif // 0
                /*
        cancel any runtime override by returning the interface

        method data field position and re-initializing it to the

        address of the function it was initialized to at compile

        time thanks to the default column in the virtual heap
                 */
                    (*function(self, meth))=((virtual*)
                        multimap(true)(type_info(self))
                    ("class(VirtualHeap)")(meth))->col ; //done

                    vPop();

                    return 0;//cancel override
        #if 1
                }
        #endif // 0
                /*
        using override as an overload with two cases lets you use

        a virtual table object or string directive, the thing is that

        when re-assigning an interface method (override) for an

        interface assigned to a virtual table object, this means that

        any class interface including adapter interfaces are subject

        to an override, on the other hand, you can perform a runtime

        override for a non-virtual table object representing a class

        using a runtime string instead of virtual table object. the

        function method was re-implemented to use type_info() instead

        of typeid(). now i have a proper interface method override

        and the only change of definition is that adapter factory

        table classes must implement the virtual heap. now override

        (lets pretend and say with like three adapters or interfaces

        then override is like a strategic trifecta of function pointer

        re-initializations including adapter interface sets).
                 */
            return 0; }
        }
            /// /// /// /// /// /// /// /// /// /// /// ///
        except explicit void Over(02)
            (const Object * self, cstring meth)
            /// /// /// /// /// /// /// /// /// /// /// ///
        { if( iTop() )
          {
              if( is_object(self) )
              {
                (*(Method**)iPop()) = ( (Method * *) virtual( self, class ) )
                [ ((virtual*)multimap(true)(type_info(self))
                ("class(VirtualHeap)")(meth))->val ] ;
              }else
              {
                multimap(false)((cstring)self);
                if( !map((cstring)self) )
                {
                    size_t size = 0;
                    cstring iter = (cstring)self, p;

                    while( iter[0]!='(' && iter[0]!='\0' ){iter++;}
                    if(iter[0]=='\0'){throw(new(EmptyString))
                    (this, "NotAParenthesizedDataType\n"
                            "also:\t\t DefaultInterfaceNotFound");}

                    p = ++ iter ;

                    while( iter[0] != ')' )
                    {iter++;size++;
                    }size++;

                    string * strg = accumulate(string)(this,size);
                    size--;
                    while(size)
                    {
                        (*strg)[size-1] = p[size-1] ;

                        size--;
                    }
                    (*(Method**)iPop()) = ((Method* *)multimap(false)
                    ((cstring)self)(*strg))  //<--
                    [((virtual*)multimap(true)((cstring)self)
                    ("class(VirtualHeap)")(meth))->val ] ;

                    deaccumulate(strg) ;

                }else
                {
                      (*(Method**)iPop()) = ((Method* *)multimap(false)
                        ((cstring)self)((cstring)self))  //<--
                      [((virtual*)multimap(true)((cstring)self)
                        ("class(VirtualHeap)")(meth))->val ] ;
                }
              }

          }
          else
          { throw(new(NullPointer))
            (this, "EmptyInterfaceStack"); }
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*

        there needs to be runtime tables for this one ...

        maybe the struct(Bunker) can use a builder(Heap)

        for Override Certificates, to go with one for the

        class security ids (class(StrategyHeap)) as an

        abort heap or class(AbortHeap) and builder(OverrideHeap)

        i cant think of anything else that needs to be there

        at the moment, maybe a security set of methods that

        cannot be overridden, or a table of {"method", "Class"}


        a security set for "SecurityRestriction" to be thrown

        for override, function maybe should have the same thing

        but not sure...


        there needs to be (extended from exception)

        -an override certificate

        -a polymorph certificate

        -a passnumber to a specific factory method case/datamember

        -passnumber typeid

        i should make sure to make the appropriate cuts from
        the implementation, just new(class) and build/demolish
        and builder(complex) macro and override certificate
        try to implement break still since all the ambition
        seemed to come from that (12/06/2022). no Override
        table (too many). i am just going to place overrides
        onto the new exception stack like the assertions, anyone
        else can put the overrides into something else from off
        the stack. also i am proud to announce that there will
        be a class builder version of multimap that is the small
        class builder i promised (using build & demolish).


         */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    ///* warning:                                              *///
    ///*                                                       *///
    ///*   this override method has no data type check for     *///
    ///*   incompatible overrides and so therefore has the     *///
    ///*   ability to easily terminate the program on          *///
    ///*   through improper datatyping when calling a          *///
    ///*   function from a pointer.                            *///
    ///*                                                       *///
    ///* * * * * * * * * * * * * * * * * * * * * * * * * * * * *///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
         override(true)("Class", "method")("Class", "method");
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                  override(false)("Class", "method");
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        TODO: your chores


        note: true/false is for if you want an override so the
              thing is when false it un-overrides or resets from
              any runtime override considering that initialization
              is provided by the method row in the class virtual
              table table (interface table) a.k.a. virtual heap
              (false also asserts false for adapter interfaces).

        also: using override(false) while assigned an adapter
              interface does not cancel the override, instead
              it assigns the default interface method. maybe
              a new design practice/pattern like using adapter
              virtual heaps could/would be desirable to someone.

              the Class(Adapter) interface heap would have a
              virtual heap and there would be a check for the
              object being an adapter or not to correct that
              problem (because of the spare set of addresses).

              TODO: reimplement override,

              also:


              #define override(flag)\
              \
                FactoryTable(Override)\
                    ( _line_,_file_,_time_,_date, flag )

              will be needed for any success with Overrides, an
              incomplete one may be pushed onto the exception stack
              to be popped, completed and pushed again for use.
              this will give override information similar to
              information given by a: throw(new(Exception)(this, ""))

              override(true)(obj, "method")(obj, "method")

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // OVERRIDE_H_INCLUDED
                                            //CWP
#endif // FACTORYTABLESINGLETON
#endif // VIRTUALTABLESINGLETON
