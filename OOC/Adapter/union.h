#ifdef VIRTUALTABLESINGLETON
#ifdef FACTORYTABLESINGLETON
#ifdef ADAPTERTABLESINGLETON
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
    #ifndef UNION_H_INCLUDED
    #define UNION_H_INCLUDED
        /**

        I KNOW IT MIGHT BE GETTING OLD ALREADY WHEN IT COMES

        TO SOME OF THESE THINGS, BUT I FELT THIS DESERVED TO

        BE ITS OWN FUNCTION/FILE FOR ANY ADJACENCIES IT HAS

        IN COMMON WITH (LIKE THE OBSERVER AND ADAPTER FILES)


        THIS FUNCTION MAY BE RULED OUT FOR adapt() OR I SEE

        THAT THERE MAY ONLY BE ROOM FOR ONE. update() IS ITS

        OWN FUNCTION WITH ITS OWN RESPONSIBILITIES AND I DO

        NOT COMPARE IT TO THE OTHER TWO.


        ANYWAYS JUST REMEMBER

        THAT THESE (TYPES OF) FUNCTIONS REQUIRE THAT BOTH THE

        VIRTUAL TABLE AND THE FACTORY TABLE ARE TO BE USED IN

        CONJUNCTION WITH EACH OTHER TO ACHIEVE THE INTENDED

        RESULT. typeid(object) IS ALL THAT IS NEEDED FROM THE

        VIRTUAL TABLE HERE


        BUT DONT FORGET THAT THESE FILES

        ARE INCLUDED IN THE ADAPTER TABLE FILE, EVEN THOUGH

        THE ADAPTER TABLE IS NOT AS IMPORTANT AS THE FIRST

        TWO TABLES, REMEMBER THAT IT IS A PERMANENT DATA

        STRUCTURE HERE AS I HAVE USE FOR A TABLE OF SELF POINTER

        DATA MEMBERS, (FOR OBJECTS) USED IN CONJUNCTION WITH

        AN ALTERNATE INTERFACE AND ALTERNATE CONSTRUCTOR USING

        ONE OF THE NON-DYNAMIC ALTERNATES OF new(Class)(this, ...) .

        THE ADAPTER TABLE IS TO BE USED IN CONJUNCTION WITH THE

        VIRTUAL TABLE AND THE FACTORY TABLE IN A WAY THAT IS TO

        PROVIDE EASY ACCESS TO ALTERNATE INTERFACES FOR AN OBJECT

        AT RUNTIME.



        THE TYPEID FOR THE ADAPTER/OBJECT

        PAIR IN THE ADAPTER TABLE (THE TYPEID FOR BOTH TOGETHER)

        CAN BE USED TOGETHER AS A COMPOSITE KEY TOGETHER, SOMEWHERE

        LIKE THE FACTORY TABLE IS ALL THAT COMES TO MIND NOW

        AND (type_info.h). (DONE)



    LIKE I THOUGHT I JUST FINISHED TALKING ABOUT THE FACTORY

    TABLE AND ITS (STRUCTCLASS FACTORY SOLUTION) BEING WHAT

    PROVIDES FOR FULLY DYNAMIC INSTANCES BUT ONLY AFTER EACH

    CASE OF NOT ONLY new(Class) BUT ITS ALTERNATE

    adapter(Class, Adapter) GETS ENCAPSULATED (EVERY CASE)

    AND SO THAT WOULD BE A SOLID CASE FOR WHEN ITS SOMETHING

    OTHER THAN A CLASS THAT GETS SUBMITTED AT THE FACTORY TABLE

    BUT, THE INSTANCE OF AN ADAPTER, ... SO "Class(Adapter)"

    GETS SUBMITTED THERE IN THE FORM OF "Turkey(Duck)" FOR

    A FULLY DYNAMIC INSTANCE, SO U CAN SEE WHERE THE COMPOSITE KEY

    MAY GO AND THATS INTO THE PARENTHESIS FOR factory("Class(Adapter)").

    BUT, LIKE IM SURE I SAID BEFORE, THE type METHOD FOR THE TYPEID

    FOR AN ADPATER IS STILL THE NORMAL TYPEID. THIS MAKES ME THINK

    OF type_info(obj) AND HOW IT CAN BE USED "TO READ THE

    INVISIBLE INK" OF AN ADAPTER-OBJECT COUPLING BY typeid(obj)

    BECAUSE THE typeid(obj) ONLY IS SUPPOSED TO RETURN THE

    CLASS NAME NOT CLASS(ADAPTER) NAME, THAT IS FOR type_info(obj).


    SINCE ITS THAT WAY,

    ITS EASIER TO CREATE A NON-ADAPTER COPY OF THE ORIGINAL OBJECT

    WHEN THE ORIGINAL OBJECT IS AN ADAPTER. SO WHEN THAT HAPPENS

    THATS WHEN AN ADAPTER WOULD BE CONSIDERED TO HAVE LIVED ITS

    LIFE AND SUCCEEDED BY PURPOSE. THERE WILL BE NO NEED TO BRANCH

    AWAY FROM (IMPLEMENTED) STRUCTURED DATATYPES TOWARDS ANYTHING

    LIKE A COMPLEX DATATYPE GIVEN THE SUCCESS OF THE ADAPTER PATTERN.


    THERE WILL BE ROOM FOR A SMALL CLASS BUILDER ANYWAYS, FOR A

    COMPLEX RUNTIME DATATYPE. THERE WILL ALSO BE AN IMPLEMENTATION

    FOR MULTIPLE INHERITANCE I CAN SEE WHEN THE Polymorph TABLE

    IS USED WITH ANYTHING OTHER THAT A NEUTRAL VALUE FOR THE SIGNED

    OFFSET THATS THE VALUE. MULTIPLE INHERITANCE WILL REQUIRE A

    STACK TO PUT OBJECTS ON, AND AN STACK TO PUT INTERFACES ON.


    SO FROM THERE THERE WILL NEED

    TO POSSIBLY BE TWO SEPARATE Polymorph TABLES OR THE THEY WILL

    BE MORPHED TOGETHER INTO ONE Table(Key, Val, End) INSTEAD

    OF TWO Pair(Key, Value). THAT IS ALL FOR NOW.


    REMEMBER TO GET THE TYPEID FROM UP TO TWO OBJECTS FOR

    THIS FUNCTION. THEN FOCUS ON USING THE FACTORY TABLE HERE.

         */
        /*
    explicit void       decorate( Object * self, ... )
    {

    }*/
        /// void     (*decorate)( Object *, ... ) = & adapt;


        /**
            THIS FUNCTION WILL CHECK AND SEE IF THE

            OBJECT IS OF A CLASS REGISTERED TO THE

            FACTORY TABLE AND THEN PROCEED TO CHECK

            THE DESCRIPTION (typeid) OF THE REGISTRATION

            THAT CLASS IS REGISTERED WITH, COMPARING

            THE DESCRIPTION WITH THE CLASS NAME STRING

            DESCRIPTION PASSED AS A PARAMETER SO

            THE OBJECT CAN THEN BE GIVEN ITS ADAPTER

            AS IN RE-ASSIGNING ITS INTERFACE ASSIGNED

            TO IT BY THE VTABLE WHEN NEW()(), ... WAS USED


            THIS FUNCTION(S) WILL ONLY REASSIGN AN INTERFACE

            NOT CREATE A NEW INSTANCE.


            THIS FUNCTION(S) WILL LOOK FOR THE

            class(AdapterTable) WITH THE STRING DESCRIPTION

            OF THE CLASS THAT IT IS AN ADAPTER FOR MOSTLY.


            Turkey(AdapterTable) INSIDE Duck CLASS INTERFACE

            HEAP


        SO: class(AdapterTable) INSIDE OF ADAPTER REGISTRATION

        LIST, THE CLASS INTERFACE HEAP ACCESSED BY THE CLASS

        FACTORY METHOD FOR THE CLASS USED AS AN ADAPTER, USING

        THIS APPROACH, THE ADAPTER CLASS IS MADE INTO A WORKHORSE

        CLASS THAT SUPPORTS ANOTHER CLASSES FUNCTIONS/ADAPTER

        INTERFACE.

        */
        /*explicit bool adapt( Object * self, ...*/
            /**ClassName adpt**//* )
        {*/
     /**THIS IS FOR WHEN USED AT THE FACTORY CONTROL SEQUENCE**//*
            Stack * stack = control();

            *//**2nd PARAM (ALL THATS EVER NEEDED)**//*
            cstring adpt = arg(stack, cstring);

        }*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*     - FLAG FUNCTION - FLAG FUNCTION - FLAG FUNCTION -     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                   ADAPTER'S UNION                   || *
     *                                                           *
     *                 by Willy (08/03/2022)(09/13/2022)         *
     * ||                       (11/12/2022)(11/21/2022)         *
     * ||                       (03/07/2023)                  || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*     - FLAG FUNCTION - FLAG FUNCTION - FLAG FUNCTION -     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        COMMAND; CENTER;    COMMAND; CENTER;    COMMAND; CENTER;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1)  ask if union coupling or decoupling.            *
     *                                                           *
     *       2)  ask what data type name(s).                     *
     *                                                           *
     *       3)  call the reconstructor (uni-structor).          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief           union(true)("","")(adp,obj)              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                           union                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
   # define Union(Member)Union ## Member

    static const char Union(Array)[] = "(AdapterTable)";//14 + '\0'

    except static void Union(02)(Object *, ...);

    except static void (*Union(01)(cstring, ...))
        (Object *, ...);


    typedef void (*(*Unistructor)(cstring, ...))(Object *, ...);

        static Unistructor AdapterTable(Union)(bool);

        static Unistructor unistructor = & Union(01);

        static volatile bool Union(Flag) = false;//

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        /**+---------------------------------+
         * @brief union                      |
         * +---------------------------------+
         */
        explicit Unistructor AdapterTable(Union)(bool flag)

        {
            bool * f = accumulate(bool)(this, flag);
            if( (*f) != flag ){ (*f) = flag; }//DEBUG (ASSERT)

            if( !fPush( f ) )///<---push flag
                { throw( new(OutOfMemory) )
                (this, "FlagStackFailure"); }//

          return unistructor; }
            /// /// /// /// /// /// /// /// /// /// /// ///
        except explicit void (*Union(01)(cstring objt, ...))
            (Object *, ...)
            /// /// /// /// /// /// /// /// /// /// /// ///
        {bool * flag = flag();///<---pop flag

            if(  (*flag)  )
            {
              cstring   p     = objt;
              string    j     = 0;
              string  * strg  = nullptr,
                      * intr  = nullptr;
              bool      f     = false;
              size_t    osize = 0 + 15;//includes parenth


        /* this won't work for template types as containers

           and as adapters simultaneously but i don't think that

           will be missed. so this will just have to do.
         */
              while(*p){if(*p=='('){f=true;break;}p++;osize++;}
        /*
           an extension of this would be to look for the interface

           inside the adapter factory table class, and use the

           implementation you have inside override.h for taking

           the class name out of the parenthesis... otherwise

           you need to reassign the pointer in the factory table

           class interface heap for the class builder (03/07/2023).
         */
              if( f )//if type_info passed
              {
                size_t   asize  =  0 ;//does not include parenth
                cstring  p2     =  ++p;

                while(p){if(*p==')'){break;}p++;asize++;}

                strg = accumulate(string)(this, asize);//adapter object typeid

                size_t i;
                for( i = 0; i < asize; i ++ )
                {
                    (*strg)[i] = p2[i];
                }(*strg)[i] = '\0';

                intr = accumulate(string)(this, osize); //interface typeid

                for( i = 0; i < osize - 15; i ++ )
                {
                    (*intr)[i] = objt[i];
                }
                size_t k = 0;
                for( ; i < osize; i ++ )
                {
                    (*intr)[i] = Union(Array)[k]; k++;
                }
                /***********************************************/
            #if 0 // 1 FOR_OLD___WITHOUT_ADDED_CASE___ 0
                if( !iPush( ((intrPtr*)multimap(false)
                    (*strg)(*intr))[2] ) )//<--push interface
                {throw(new(OutOfMemory))
                (this, "InterfaceStackFailure");}
            #else
                multimap(-1)(*strg);
                if( map(*intr) )
                {
                    if( !iPush( ((intrPtr*)multimap(false)
                        (*strg)(*intr))[2] ) )//<--push interface
                    {throw(new(OutOfMemory))
                    (this, "InterfaceStackFailure");}
                }
                else
                {
                    if( !iPush( multimap(false)
                        (objt)(*strg) ) )//<--push interface
                    {throw(new(OutOfMemory))
                    (this, "InterfaceStackFailure");}
                }
            #endif // ADDED_NEW_CASE 1
                /***********************************************/
                deaccumulate(intr);
              }
              else
              if( !f )//if typeid X2 passed
              {
                Stack * stack = (*Flags[0]?ControlSlot[0][0]:
                               &objt);stack=((void**)stack)+1;

                cstring adpt = arg(stack, cstring);

                size_t size = string(size)(objt);

                strg = accumulate(string)(this, size + 14), j = (*strg) ;


                p = objt;

                cstring u = Union(Array);


                while(*p) { *j = *p; p++; j++; }
                while(*u) { *j = *u; u++; j++; }

                /***********************************************/
            #if 0 // 1 FOR_OLD___WITHOUT_ADDED_CASE___ 0
                if( !iPush( ((intrPtr*)multimap(false)
                    (adpt)(*strg))[2] ) )//<--push interface
                {throw(new(OutOfMemory))
                (this, "InterfaceStackFailure");}
            #else
                multimap(-1)(adpt);
                if( map(*strg) )
                {
                    if( !iPush( ((intrPtr*)multimap(false)
                        (adpt)(*strg))[2] ) )//<--push interface
                    {throw(new(OutOfMemory))
                    (this, "InterfaceStackFailure");}
                }
                else
                {
                    size_t _type_info_size = string(size)(objt)
                        + string(size)(adpt) + 2 - 1;

                    size_t adpt_size = string(size)(adpt) ;

                    string * _type_info = accumulate(string)(this, _type_info_size);

                    size_t i ;
                    for( i = 0 ; i < string(size)(objt) - 1 ; i ++ )
                    {
                        (*_type_info)[i] = objt[i] ;
                    }
                    (*_type_info)[i] = '(' ; i ++ ;
                    size_t k ;
                    for( k = 0 ; i < _type_info_size - 2 ; i ++ )
                    {
                        (*_type_info)[i] = adpt[k] ; k ++ ;
                    }
                    (*_type_info)[i] = ')' ; i ++ ;
                    (*_type_info)[i] = '\0' ;

                    if( !iPush( multimap(false)
                        (*_type_info)(adpt) ) )//<--push interface
                    {throw(new(OutOfMemory))
                    (this, "InterfaceStackFailure");}

                    deaccumulate(_type_info);
                }
            #endif // ADDED_NEW_CASE 1
                /***********************************************/
              }
              deaccumulate(strg);
                                         // - or -
            }
            else
            if( !(*flag)  )
            { if( !iPush( (Interface)multimap(false)
                (objt)(objt) ) )//<--push interface
              {throw(new(OutOfMemory))
              (this, "InterfaceStackFailure");}
            }

            if( !fPush( flag ) )///<---push flag
                { throw( new(OutOfMemory) )
                (this, "FlagStackFailure"); }

            return &Union(02);  }

            /// /// /// /// /// /// /// /// /// /// /// ///
        except explicit void Union(02)(Object * self, ...)
            /// /// /// /// /// /// /// /// /// /// /// ///
        {if(Union(Flag)){   bool * flag = flag();///<---pop flag
            deaccumulate(flag);

            ///.remove or not adapter (before)
            virtual( self, class ) -> dtor( self );

            * VirtualTable(Interface)
            .search( vtable, vstk, self ) = iPop();//<--pop interface

            if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

            ///.insert or not adapter (after)
            virtual( self, class ) -> init( self );

            (*Flags[0]) = false; }

        else if(!Union(Flag))

        {   bool * flag = flag();///<---pop flag

            * VirtualTable(Interface)
            .search( vtable, vstk, self ) = iPop();//<--pop interface

            if( *flag )
            {   Stack * stack = control();

                Object * obj = arg(stack, Object*);

                AdapterTable(Interface)
                .insert( atable, self, obj );///.insert or
            }else
            {   AdapterTable(Interface)
                .remove( atable, self );    ///.remove
            }deaccumulate(flag); }}

        // UNION_INCLUDES_RECONSTRUCTOR 1
        /* note: Union(Flag) or default(12) being initialized
                 to true or false is the flag for the union
                 coupler/reconstructor (one way includes data
                 member init using a call to dtor then init).

                 (coupler not reconstructor by default default(12))
         */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        ///#1
            // if true then get two cstrings, and the adapter
            // table from the ftable


            // if false then get one cstring and the class
            // virtual table from the ftable


            // assign interface ? NO, assign interface
            // in next function using class(VirtualTable)
            // pushed here

            // i could see the possibility of pushing one
            // or two interfaces being the diff between
            // true and false

        ///#2
            // this should hopefully just be the
            //constructor-adapter-re-constructor

            // if true then this is the adapter constructor area

            // if false this needs to be where something
            //more like a destructor needs to be called

            // this function should have an interface assigned
            //to it from the last function that is for the
            //factory table so their can be a call to:

            //*VirtualTable(Interface).search() = interface
            //or virtual()

            //and have the interface reassigned...

            //and call the dtor or constructor u need
            //(since both found in interface)

            //check and see if initialized with memory
            //and deallocate by calling dtor maybe
            //all so the adapter constructor doesn't
            //change

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief adapter constructor                                *
     *                                                           *
     * this goes into the adapter constructor/initializer:       *
     *                                                           *
     *  AdapterTable(Interface).insert( atable, adapter, object );*
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief adapter destructor                                 *
     *                                                           *
     * this goes into the adapter destructor:                    *
     *                                                           *
     *  AdapterTable(Interface).remove( atable, adapter );       *
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
         union(true)(typeid(objt), typeid(adpt))(adpt, objt) ;
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                   union(false)(typeid(adpt))(adpt);
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        note: true/false is for if u want a union.

        also: typeid does not change between objects being
              adapters or not, type_info does. type_info
              reveals the invisible ink of the adapter type.
              you can substitute the 2 typeids above for one
              type_info.
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /**
            MAYBE AN OBJECT SHOULD BE GIVEN ITS ADAPTER

            INTERFACE UPON CREATING AN INSTANCE, THEN

            A FUNCTION LIKE THIS WONT BE NEEDED. REMEMBER

            THAT THIS KIND OF FUNCTION IS FOR FULLY

            DYNAMIC PROGRAMMING AND IF INSTANCE CREATION

            OF AN OBJECT IS THAT DYNAMIC THEN WHY DO

            WE NEED ADAPTER INTERFACE CHANGES TO BE

            THAT DYNAMIC? WE NEED TO CONSIDER THAT BEFORE

            CHOOSING WHAT STYLE ADAPTER IS USED (THAT OR

            MAYBE THE RUNTIME OVERRIDE WOULD WORK FOR U)

            (THE INTERFACE METHOD OVERRIDE).

         */
    #endif // UNION_H_INCLUDED
                                            //CWP
#endif // ADAPTERTABLESINGLETON
#endif // FACTORYTABLESINGLETON
#endif // VIRTUALTABLESINGLETON
