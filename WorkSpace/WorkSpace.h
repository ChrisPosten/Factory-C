#ifndef WORKSPACE_H_INCLUDED
#define WORKSPACE_H_INCLUDED
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

/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                                          *
     *          Factory C + Head First: Design Patterns WorkSpace File           *
     *                                                                           *
     *  look inside:      clibrary.h     (kindergarden)                          *
     *                    Object.h       (grade 1)(primary)                      *
     *                    structclass.h  (grade 2)(primary)                      *
     *                    Array.h        (grade 3)(primary)                      *
     *                    Stack.h        (grade 4)                               *
     *                                                                           *
     *  for all major definitions.                                               *
     *                                                                           *
     *  also: look inside vTable.h, fTable.h, aTable.h for reasons to use.       *
     *                                                                           */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

                        /// /// /// /// /// /// /// /// /// ///
                        //           Concrete Stuff          //
                        /// /// /// /// /// /// /// /// /// ///
                        /** this all gets included in main.c */
                        /*

                        */

                        //#include "../OOC/Library/vArray.h" (demo)

                        /// /// /// /// /// /// /// /// /// ///
                        //          design patterns          //
                        /// /// /// /// /// /// /// /// /// ///

                        /** Head First: Design Patterns **/

                          /** book printed in: (2014) **/

                    /** Factory C (OOC) work done in: (2021-22) **/

                    ///Error handling (a must use)
                    // define Exception
            #include "../OOC/Exception/Exception.h"

                    // new (Assertion)
            #include "../OOC/Exception/Assertion.h"



                    /// Polymorphism & Virtual
            #include "../DesignPatterns/Virtual/Circle.h"

            #include "../DesignPatterns/Virtual/Rectangle.h"

            #include "../DesignPatterns/Virtual/Square.h"



                    /// Strategic function (+Overload)

            #include "../DesignPatterns/Strategy/Display.h"

                    /// Subject/Observer

            #include "../DesignPatterns/Observer/CurrentConditions.h"//Observer

            #include "../DesignPatterns/Observer/Forecast.h"//Observer

            #include "../DesignPatterns/Observer/HeatIndex.h"//Observer

            #include "../DesignPatterns/Observer/Statistics.h"//Observer

                    /// Decorator pattern
                    //Coffees
            #include "../DesignPatterns/Decorator/HouseBlend.h"

            #include "../DesignPatterns/Decorator/DarkRoast.h"

            #include "../DesignPatterns/Decorator/Espresso.h"

            #include "../DesignPatterns/Decorator/Decaf.h"

                    //Coffee Decorations
            #include "../DesignPatterns/Decorator/Milk.h"

            #include "../DesignPatterns/Decorator/Mocha.h"

            #include "../DesignPatterns/Decorator/Soy.h"

            #include "../DesignPatterns/Decorator/Whip.h"

                    /// Factory pattern (Factory Method + Security)

            #include "../DesignPatterns/Factory/PizzaFactory.h"

                    /// The Almighty Singleton
                    /// (see fTable & vTable & aTable also) ADDED volatile

            #include "../DesignPatterns/Singleton/cBoiler.h"


                    /// Command

            #include "../OOC/Control/Command.h"


            #include "../DesignPatterns/Command/Remote.h" /// <---


            #include "../DesignPatterns/Command/Light.h"

            #include "../DesignPatterns/Command/Fan.h"

            #include "../DesignPatterns/Command/Door.h"

            #include "../DesignPatterns/Command/Camera.h"


                    /// Adapter


                        //object adapter
            #include "../DesignPatterns/Adapter/Duck.h"

            #include "../DesignPatterns/Adapter/Turkey.h"

                        //class adapter
            //#include "../DesignPatterns/Adapter/DuckTurkey.h"


                    /// Facade

            #include "../DesignPatterns/Facade/HomeTheater.h"


            /// /// /// /// /// /// /// /// /// ///


                    /// Template Method

            #include "../DesignPatterns/Template/Coffee.h"

            #include "../DesignPatterns/Template/Tea.h"


                    /// -Composite
        #if 0
            #include "../DesignPatterns/Composite/Component.h"

            #include "../DesignPatterns/Composite/Item.h"

            #include "../DesignPatterns/Composite/Menu.h"

            #include "../DesignPatterns/Composite/Waitress.h"
        #endif // 0
        /**********************************************************************
         * use code generator macro for Vector (Vector(type))                 *
         *                                                                    *
         * the size_type being redefined here will remain with the concrete   *
         * structures after the code/impl is generated by typename            *
         **********************************************************************/
        /*
           note: any #define directive macro with define in its name like

                 defineVector can be used with typename(Macro) (...) ;

           also: the defineVector macro has parenthesis for 2 param:

                 1) a single datatype token

                 2) utility param to put typename for iterator

                 the defineIterator has one param.
         */
        /**********************************************************************
         * use code generator macro for Stack (Stk(t)) or Vector(type)        *
         *                                                                    *
         * the size type being redefined here will remain with the concrete   *
         * structures after the code is generated (the macro size_type can    *
         * be discarded after code generation)                                *
         **********************************************************************/
    // // // // // // // // // // //

    #undef size_type
    #define size_type unsigned short


    #define intVector(member)   intVector##member
    #define intIterator(member) intIterator##member

    typename(Iterator)(int);

    typename(Vector)(int, );

    // // // // // // // // // // //

    #undef size_type
    #define size_type unsigned long int


    #define size_tVector(member)   size_tVector##member
    #define size_tIterator(member) size_tIterator##member

    typename(Iterator)(size_t);

    typename(Vector)(size_t, );

    // // // // // // // // // // //

    typedef const int * constIntPointer;//valid token

    #undef size_type
    #define size_type size_t

    #define constIntPointer(Member)         constIntPointer##Member
    #define constIntPointerVector(Member)   constIntPointerVector##Member
    #define constIntPointerIterator(Member) constIntPointerIterator##Member

    typename(Iterator)(constIntPointer);

    typename(Vector)(constIntPointer, );

    // // // // // // // // // // //

    ///  typename(Vector)(const int*)  X  //  (NOT A VALID TOKEN)

        //using.h has the int, bool, and DataType Stk now.
        /**********************************************************************
         * to continue writing, use these functions together                  *
         * and known patterns to create a Set that's extended                 *
         * from a Vector (if u like)                                          *
         **********************************************************************/

    typename(Search)(int, array[*mid] == key, array[*mid] > key);

            //intSearch()

    typename(QSort)(int, array[i] == array[left], array[i] > array[left],

        typename(Swap)(int));
                           //array[i] < array[left]
            //intQSort()

        //these typenames or more specifically the search typename

        //has been adopted by the factory table class.



    // // // // // // // // // // //

    /* * * * * * * * * * * * * * * * * * * * * * * * */
            /// THAT WAS ALL JUST LIKE:
    /* * * * * * * * * * * * * * * * * * * * * * * * */
    #undef size_type
    #define size_type unsigned int  ///IF THE SIZE TYPE EVER MATTERS

        #define atomic_intIterator(member)   atomic_intIterator##member

        #define atomic_intVector(member)   atomic_intVector##member

        typename(Iterator)(atomic_int);

        typename(Vector)(atomic_int, );


    /* * * * * * * * * * * * * * * * * * * * * * * * */
            /// NOW NO ONE HAS TO GO WITHOUT TYPENAME KNOW-HOW
       # define intArray(Member)intArray ## Member
        typedef int * Array(int);
        typename (Array) (int); // + Array(int) * array = new(Array(int))(this, 101);

            //this typename is for basic virtual table object package, similar to
            //typename(Object)(...) but hides allocate(sizeof(...)*size) since
            //its just for an Array like the typename says

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                                                           *
     * just in:   primitives a Objects                           *
     *                                                           *
     * just a reminder: type define types using qualifiers       *
     *                  or pointer types using typedef for       *
     *                  all template define macros included      *
     *                                                           */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    #include "../OOC/Template/defineObject.h"

        ///there are two tables of primitives here, one in structclass.h

        ///and the other in FactoryObject.h (once for virtual table object,

        ///twice for factory table class). the Array typename below is

        ///just an example of how to object-orient your array

  #if 0
   # define intArray(member)intArray ## member
    typedef int * Array(int);
    typename(Array)(int);
  #endif // 0

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief data type extravaganza (Factory C)                               pt.1 *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
        /**********************************************************************

        THESE ARE ALL THE PRIMITIVE TYPES FOUND IN C GIVEN OBJECT-ORIENTED

        COMPONENTS, CONSTRUCTOR + INTERFACE AS A VIRTUAL TABLE OBJECT AND

        INTERFACE HEAP + FACTORY METHOD AS A FACTORY TABLE CLASS. THEY HAVE

        ALSO BEEN REGISTERED USING register(Class) IN THE FACTORY TABLE PROGRAM

        CONSTRUCTOR (FACTORY C).


        THESE OBJECTS ARE CAPABLE OF DYNAMIC INSTANCES USING A FACTORY

        METHOD WITH THE CONSTRUCTOR. THEY ARE CAPABLE OF DYNAMIC (AT-RUNTIME)

        INPUT-OUTPUT (cin/cout) AND OBJECT COMPARISON USING: equal() AND greater().

        THESE ARE PRIMITIVES AS FACTORY OBJECTS, ARRAY AS A VIRTUAL TABLE OBJECT

        IS DEFINED ALSO BUT WITHOUT A COMPLETE TABLE OF DATATYPES, JUST

        LOOK FOR THE typename(Array) AND typename(FactoryArray) TO GO WITH

        typename(Object) AND typename(FactoryObject) (PROBALY FOUND IN THE

        SAME FILES). I FORGOT TO MENTION THEY ARE CAPABLE OF typeid() FOR

        COMPARISON, OVERLOAD FUNCTIONS A.K.A. FUNCTION OVERLOADS (TO OVERLOAD

        A SET OF FUNCTIONS), ETC... THEY ALSO ARE (ALL) CAPABLE OF USING THE

        FACTORY METHOD FOR DYNAMIC-AT-RUNTIME INSTANCES (NOT JUST THE FIRST ONE)

        (BELOW).


        I BELIEVE SINCE THE string (AT THE BOTTOM) IS AN ARRAY TYPENAME

        OR AN EXCEPTION OF ONE IT HAS NOT (YET) BEEN GIVEN FACTORY TABLE CLASS

        COMPONENTS TO GET REGISTERED WITH. clock_t AND time_t ARE ALSO EXCEPTIONS

        AND NOT GIVEN SIMILAR COMPONENTS (YET). THE UNIQUENESS OF THESE LAST FEW

        DATATYPES IS THE CAUSE FOR ANY EXTRENUATING CIRCUMSTANCES AND THE string

        HERE IS ONLY AN OBJECT-ORIENTED ARRAY NOT THE String IMPLEMENTED USING

        A STRUCT CLASS (THATS A FULL-SIZED FACTORY TABLE CLASS).

        UPDATE: clock_t AND time_t ARE NOW FACTORY TABLE CLASSES.


        NOTE: THIS DOES NOT INCLUDE CONSTRUCTOR AND INTERFACE FOR THE LEAST

              TYPES THAT WERE WIDTH TYPES BECAUSE IT WAS TOO REPETITIVE. (FAST TYPES ALSO)

         **********************************************************************/

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief             void * for virtual table object.                          *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    # define obj(num)obj ## num
    explicit void f01() // do()
    {try{

                                          /**FACTORY METHOD    +     CONSTRUCTOR**/
        bool *                  obj(01)      = factory ("bool")      (this, true);
                                       /**  NEW CONSTRUCTION MACRO + CONSTRUCTOR**/
        int *                   obj(02)      = new (int)             (this, 234);
                                                  /*was problem with float*/
        float *                 obj(03)      = new (float)           (this, 3.11);
                                                  /*but not double (sensitive?)*/
        double *                obj(04)      = new (double)          (this, 4.11);

        char *                  obj(05)      = new (char)            (this, 'a');

        long *                  obj(06)      = new (long)            (this, 6);

        short *                 obj(07)      = new (short)           (this, 7);

        unsigned *              obj(08)      = new (unsigned)        (this, 8);

        signed *                obj(09)      = new (signed)          (this, -9);

        size_t *                obj(10)      = new (size_t)          (this, 10);

        wchar_t *               obj(11)      = new (wchar_t)         (this, 'b');

        intptr_t *              obj(12)      = new (intptr_t)        (this, obj(01));

        uintptr_t *             obj(13)      = new (uintptr_t)       (this, nullptr);

        intmax_t *              obj(14)      = new (intmax_t)        (this, 14);

        uintmax_t *             obj(15)      = new (uintmax_t)       (this, 15);

        wctype_t *              obj(16)      = new (wctype_t)        (this, 'c');

        int8_t *                obj(17)      = new (int8_t)          (this, 17);

        uint8_t *               obj(18)      = new (uint8_t)         (this, 18);

        int16_t *               obj(19)      = new (int16_t)         (this, 19);

        uint16_t *              obj(20)      = new (uint16_t)        (this, 20);

        int32_t *               obj(21)      = new (int32_t)         (this, 21);

        uint32_t *              obj(22)      = new (uint32_t)        (this, 22);

        int64_t *               obj(23)      = new (int64_t)         (this, 23);

        uint64_t *              obj(24)      = new (uint64_t)        (this, 24);
  #if 0
        atomic_size_t *         obj(25)      = new (atomic_size_t)   (this, 25);

        atomic_bool *           obj(26)      = new (atomic_bool)     (this, true);

        atomic_char *           obj(27)      = new (atomic_char)     (this, 27);

        atomic_schar *          obj(28)      = new (atomic_schar)    (this, 28);

        atomic_uchar *          obj(29)      = new (atomic_uchar)    (this, 29);

        atomic_short *          obj(30)      = new (atomic_short)    (this, 30);

        atomic_ushort *         obj(31)      = new (atomic_ushort)   (this, 31);

        atomic_int *            obj(32)      = new (atomic_int)      (this, 32);

        atomic_uint *           obj(33)      = new (atomic_uint)     (this, 33);

        atomic_long *           obj(34)      = new (atomic_long)     (this, 34);

        atomic_ulong *          obj(35)      = new (atomic_ulong)    (this, 35);

        atomic_llong *          obj(36)      = new (atomic_llong)    (this, 36);

        atomic_ullong *         obj(37)      = new (atomic_ullong)   (this, 37);
                                                         //char16_t (keyword)
        atomic_char16_t *       obj(38)      = new (atomic_char16_t) (this, 'x');
                                                         //char32_t (keyword)
        atomic_char32_t *       obj(39)      = new (atomic_char32_t) (this, 'y');

        atomic_wchar_t *        obj(40)      = new (atomic_wchar_t)  (this, 'z');

        atomic_intptr_t *       obj(41)      = new (atomic_intptr_t) (this, 41);

        atomic_uintptr_t *      obj(42)      = new (atomic_uintptr_t)(this, null);

        atomic_ptrdiff_t *      obj(43)      = new (atomic_ptrdiff_t)(this, 44);

        atomic_intmax_t *       obj(44)      = new (atomic_intmax_t) (this, 45);

        atomic_uintmax_t *      obj(45)      = new (atomic_uintmax_t)(this, 46);
  #endif // 0 TOO_MESSY_TOO_MANY (USE_SEPARATE_QUALIFIER ATOMIC MAYBE)
        clock_t *               obj(46)      = new (clock_t)(this, clock());//25

        time_t *                obj(47)      = new (time_t)(this, 0);       //26

        string *                obj(48)      = new (string)(this, 101);     //27


    #if 0 /**SORRY BUT IT LOOKS LIKE THE CONSTRUCTOR FOR FLOAT WON'T WORK**/
        *obj(03) = 3.12;//(DEBUG) ASSERT
    #endif // 0 DEBUG 1
        cout("obj(03): ")(obj(03))endl cend;  // endl = ("\n")

    #if 0  // 1
        cin(obj(01))(obj(02))(obj(04));
    #endif // CONSOLE_IN
        cout("obj(01): ")(obj(01))(", obj(02): ")(obj(02))(", obj(04): ")(obj(04))(", ...")("obj(05): ")(obj(05))endl cend;

    #if 0
        cout(", obj(06): ")(obj(06))(", obj(07): ")(obj(07))(", ...")("obj(08): ")

        (obj(08))(", obj(09): ")(obj(09))(", obj(10): ")(obj(10))(", ...")("obj(11): ")(obj(11))(", obj(12): ")

        (obj(12))(", obj(13): ")(obj(13))(", ...")("obj(14): ")(obj(14))(", obj(15): ")(obj(15))(", obj(16): ")

        (obj(16))(", ...")("obj(17): ")(obj(17))(", obj(18): ")(obj(18))(", obj(19): ")(obj(19))(", ...")

        ("obj(20): ")(obj(20))(", obj(21): ")(obj(21))(", obj(22): ")(obj(22))(", ...")("obj(23): ")(obj(23))

        (", obj(24): ")(obj(24))endl cend;
    #endif // 0

        //cout(", obj(46): ")(obj(46))(", ...")("obj(47): ")(obj(47))(", obj(48): ")(obj(48))endl cend;

        int * i = new (int) (this, 123);/*<---virtual table object*///(instance)


            cout("i: ")(i)("\n")cend;/*<---factory table class*///(overload)


        double * d = new(double)(this, .75);


            cout("d: ")(d)("\n")cend;



        virtual( d, class )->init(this, .101); ///same function as constructor "init"


            cout("d: ")(d)("\n")cend;



        double(Spec) = "%.3f"; //specifier variable for datatype


            cout("d: ")(d)("\n")cend;


            cout("type of d: ")(typeid(d))("\n")cend;


            ///



        Array(int) * array = new(Array(int)) (this, 101);/*<---virtual table object*/



        (*array)[0] = 123;


        printf("arr[0]: %u\n",  (*array)[0]  );/*<---not a factory table class (yet)*/




        delete(i);// = 0

        delete(d);// = 0

        delete(array);// array = 0;
        /**


        OBJECTS,

        THAT ARE NOT DELETED USING delete(obj) ACCUMULATE INSIDE THE ACTIVE VTABLE SO CARE

        SHOULD BE TAKEN AS TO DEALLOCATE EACH OBJECT IF THEY ARE FLOODING THE VIRTUAL

        TABLE, OTHERWISE YOU CAN JUST LET THE VTABLE DEALLOCATE EVERYTHING AT

        PROGRAMS END (INSIDE THE VIRTUAL TABLE'S PROGRAM DESTRUCTOR), OR USE AN ITERATOR

        THAT DELETES EVERYTHING OF A SPECIFIC typeid(obj). YOU CAN ALSO CALL destroy()

        IN WHICH THE VIRTUAL TABLE DESTRUCTOR GETS CALLED DEALLOCATING EVERYTHING, AND

        ITS INITIALIZER GETS CALLED AFTER SETTING UP SHOP AGAIN. THE typeid(obj) COMES FROM

        THE ->type() METHOD IN THE INTERFACE (FIRST DATA FIELD POS).
         *//*virtual factory adapter */
        cout(vtable)(ftable)(atable)cend;

        //destroy();

     }catch( Exception * e )
     {
         cout(e)endl cend;//perfect

         delete(e);
     }
    }


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief data type extravaganza (Factory C)                               pt.2 *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /**********************************************************************

    THESE ARE THE THINGS OFFERED BY THE FACTORY C LIBRARY, THINGS USED TO

    IMPLEMENT THE MAJOR DATASTRUCTURES CAN ALSO BE RE-USED TO FIT MORE

    NEEDS FOR CONTAINERS, STARTING WITH THE VECTOR, USED (THROUGH

    INHERITANCE A.K.A. DIRECT COMPOSITION) BY EACH VOLATILE HASH TABLE (THE VIRTUAL

    TABLE, THE FACTORY TABLE, THE ADAPTER TABLE) IT IS A SEQUENCE CONTAINER THAT CAN

    BE ADAPTED INTO A STACK OR QUEUE USED BY ITSELF. THE SINGLE LINKED-LIST

    THATS A STACK USED FOR THE OBJECT STACK, THE FACTORY METHOD STACK,

    AND THE JUMP STACK CAN BE USED FOR WHATEVER DATATYPE U NEED IT FOR.

    BOTH THE VECTOR AND THE STACK COME WITH AN ITERATOR (Iterator) AS A

    SMALLER SECONDARY INTERFACE TO THE CONTAINER INTERFACE (Container).


    WHERE THERE IS THE LOOSE (typedef) DEFINITION OF AN OBJECT, THERE IS

    THE DEFINITION OF A CONTAINER THAT CONTAINS A SET OF OBJECTS. USING AN

    IMPLEMENTED STRUCTURED DATATYPE (struct) CONTAINER RETURNS EITHER AN

    OBJECT, A SIZE TYPE OR AN ITERATOR THAT RETURNS AN OBJECT. WHEN OBJECT

    (Object) IS UN-IMPLEMENTED (void *) CONTAINER MAY CONTAIN EITHER

    STRUCTURED OR PRIMITIVE TYPES.

                                     OBJECT
                                    /      \
                            ITERATOR        CONTAINER    (SEE OBJECT.H)

     **********************************************************************/
    explicit void f02()///STRING IMPLEMENTATION
    { //PrintFlags[1] = true; PrintFlags[4] = true;


     try{

        char str[] = "String";


        Container * str1 = factory(str)(this, 2, "HelloWorld");

                            //String(InterfaceHeap); //0x47567c

        //class(Interface) *** p = (class)

        void *** p =   ((tblePtr*)multimap(false)("String")
                        ("pass(SecurityHeap)"))[2];  // swapped for reg[3]
                                                    //is reg[0] for passnum
                      //String(Security)(ID)()
                                           ///hidden from
                                          ///class factory method
        ((p))++;                         ///"interface" as an information
                                        ///hiding technique
        ((p))++;
                                       ///instead a security table with
        ((p))++;                      ///pass number typeid used for full
                                     ///heap in the form of a list (StringID)
        ((p))++;                    //StringID

        ((p))++;                  //(redefined to use a heap pointer from class factory method)
                                 //so: primary("Class")[4] returns array (heap) also
        printf("%s \n", typeid(str1));//class type

        printf( "%s\n", ((typePtr*)(*p))[0]() );//interface type

        /* note: calling this method to return the constructors address
         *       also leaves the virtual stack (vstk) UNRESOLVED to
         *       answer for any long-time frustration involving your
         *       stack there having an object stuck on it or whatever
         *       (probably).
         */
        printf( "0x%x\n\n", ((whatPtr*)(*p))[1]() );//constructor address

        /* also: this will resolve the virtual stack
         *
         */
        Object * temp = vPop();

        delete(temp);

    #if 1
                         ///now im not looking at a ClassName
        Container * _str =  ((new*)(*p))[1]() (this, 2, "Hello");
                         ///this is the function called by factory("String")
    #else
        Container * _str =  factory("String") (this, 2, "Hello");
    #endif // 1

        --((p));

        --((p));

        --((p));

        --((p));

        --((p));


        while( *p )
        {

            printf( "%s\n", ((typePtr*)(*p))[0]() );



            ((p))++;  //PHAT FARM

            //printf("...");
        }

        printf("\n");


        ///StrategyQSort( StringLibraryTable, 0, 86 );

                         // = String(LibraryHeap);//multimap can return this

        Strategy * strategy =  ((tblePtr*)multimap(false)
                            ("String")("class(LibraryHeap)"))[2] ;//like so



        size_type count = 0;

        while( !string(equal)( ((strategy))->key, "") )
        {



            printf( "%s", ((strategy))->key );



            for( size_t i = 0; i < 16 - string(size)( strategy->key ); i++ )
            {
                printf( " " );
            }



            if(count==4){count=0;printf("\n");}else{count++;}



            ((strategy)) ++ ;
        }
        printf("\n\n");



    ///cout("name: ")(name)(", ")(question)("\n")(item)(" = %.2f", .89);


            /// StringIOTable

            /// StringFileIOTable

            ///add everything a class is to be registered with

            ///if factory("Class")(this, ...) renders new(Class)(this, ...)

            ///obsolete just because a "Class" is registered inside fTable

            ///then this fTable needs to be as extendible as possible

            ///and serve a dynamic amount of purposes... YES (COMPOSITE) DONE





        //cout(vtable)(ftable);


     }catch( Exception * e )
     {
         cout(e)cend;

         delete(e);
     }
    }


    /**********************************************************************
     * exception throwing and assertion placing
     **********************************************************************/
    static void myFunction();

    explicit void f03()
    {
        int i;
        for( i = 0; i < 3; i++ )
        {
            try
            {
                /* note: this throws exceptions into the catch block
                 *       as an operation abort occurs. the catch block
                 *       is skipped if no throw
                 */
                myFunction();
            }
            catch ( Exception * e )
            {
                cout(e)endl cend;

                delete(e);
            }

            /* note: these assertions don't get printed
             *       because they make/pass the condition
             */
            new(Assertion)(this, assert( i < 3 ));

            /* note: this prints the passed assertions,
             *       that or ePop() also can return 0.
             *       this prints anything left on the
             *       exception stack (like assertions)
             *       (stack like this keyword)(exception).
             *       overrides also get placed on this
             *       stack as a form of an exception.
             */
        #if 0
            cout(exception)endl cend;
        #endif // 0
        }

        /* note: this assertion gets printed since you want
         *       to be warned of any failed assertions
         *
         */
        new(Assertion)(this, assert( i < 3 ));

        /* note: this is strategic control over what catch block you
         *       want to throw to (count the try blocks out and pop that many).
         */
        jPop();

        while( jTop() ){ jPop(); }

        /* note: see an exception abort the program since all jumps were popped
         *       this is like as if there was no try blocks anywhere
         */
        throw( new(IllegalOperation) )( this, "this was thrown outside try{}" );

    }

    explicit void myFunction()
    {
        throw( new(Exception) )( this, "this was a thrown exception!!" );
    }

    /**********************************************************************
     * Vector in-action! Container/Iterator implementations               *
     **********************************************************************/
    /**********************************************************************
     * Stack in-action! C++ template style using plain                    *
     * macros for code generator and datatype front-end                   *
     *                                                                    *
     * easy example should check for e being 0 after                      *
     * new, check if delete returns 1 or 0 for successful                 *
     * removal, check this and/or e for being 0 after delete              *
     * for successful deallocation                                        *
     *                                                                    *
     * update: this throws an exception for memory failure so no need     *
     *         to check for a 0, delete still returns 1 or 0 (bool) and   *
     *         sets the pointer to 0 so you don't have to, since you      *
     *         always wanna set the pointer to 0 after deallocate()       *
     *                                                                    *
     * note:   this function is for a virtual table object, factory table *
     *         class is implemented for vector including a virtual heap   *
     *         also... (should be included after factory object intro f5-6)*
     **********************************************************************/

    explicit void f04()
    {try
     {


        int i;
        /**
        THIS IS THE CONCRETE CLASS TYPE WITH STRATEGIC DESTRUCTOR AND EXTRA

        PARAMETER FOR BYTES.
         */
        /*
         * look inside file for full documentation of things like constructors
         */                                                  //EXTRA AMOUNT OF BYTES
        //class *                 obj(49) = new(class)(this, 2, nullptr, 10);//10



        /**
        THIS IS THE CONTAINER AS A VECTOR. THERE IS ALSO A LINKED LIST FOR A

        STACK AND HASH SET (OR TABLE) EXTENDED FROM VECTOR.
         */

        Container *     c = new( Vector(int) )(this, 256);//base type     Container
                                                         //
        Vector(int) *   v = c;                          //derived type  Vector(type)






        Iterator *      iter = virtual(c, Container)->begin(this);
                                        //base type    Iterator
        Iterator(int) * intiter = new(Iterator(int))(this, nullptr);
                                        //derived type Iterator(type)

        //Stk(int)

                                                 //Iterator(int)
                                                //
        size_type size = 123;                  //macro defined for the
                                              //size type of data structures
                                             //generated using their x-macros (typename)


            // - - Container types can be structured or primitive - - //
            //         - - as Container returns Object - -            //
            //         - - and Object is unimplemented - -            //
            //         - - (an explicit cast is needed) - -           //

        /**
        THIS IS THE String EXTENDED FROM VECTOR EXTENDED FROM CONTAINER

        AND THE string THATS JUST AN OO-ARRAY (OBJECT-ORIENTED)
         */
        String * str = new(String)(this, 2, "hello world");//constructor

      //char**
        string * s = new(string)(this, 101);




        /**
        THIS IS THE vArray EXTENDED FROM class AND THE GENERIC ARRAY

        AS VIRTUAL TABLE OBJECT SIMILAR TO THE STRING ABOVE
         */
    #if 0
        vArray * a = new(vArray)(this, nullptr, sizeof(int), 101);

        vArr(a, int)[0] = -321; //set

        i = vArr(a, int)[0]; //get


        delete(a);
    #endif // DEMO

        Array(int) * array = new(Array(int))(this, 101);

        (*array)[0] = -123; //set

        i = (*array)[0]; //get


        delete(array);
        /**
        THESE ARE THE MIGHTY SINGLETONS BEING LOADED INTO THE VIRTUAL TABLE

        AS VIRTUAL TABLE OBJECTS THEMSELVES, ECSPECIALLY FOR AN OPERATING SYSTEM,

        AND ECSPECIALLY FOR THE VIRTUAL TABLE, LOADING VTABLES INTO THE MAIN VTABLE

        WOULD BE EXCELLENT AS A VTABLE WOULD REPRESENT A SINGLE PROGRAM RUN BY AN

        OPERATING SYSTEM USER, WITH A SIDE VTABLE FOR SIDE PROCESSES THAT ARE NOT

        RUN BY THE USER. AS VIRTUAL TABLE OBJECTS THEY ARE NOT IN CONTROL OF ANY

        SINGLETON "FORTIFICATION" STRUCTURE OR BASE, INTERFACE, SET OF MACROS

        LABELS OR FUNCTIONS, BUT IF THE POINTER VTABLE WAS RE-INITIALIZED TO POINT

        TO THE NEW VIRTUAL TABLE LIKE AN ITERATOR, THEN IT WOULD BE IN THE PLACE OF

        THE "FORTIFIED" VIRTUAL TABLE AND SO WOULD USE ITS SINGLETON FORTIFICATIONS.


        - NEW - DELETE - VIRTUAL - TYPEID - THIS - INSTANCE - INSTANCEOF - DESTROY -

                                - INSTANCE == IS_OBJECT -

        NOTE: THE VIRTUAL TABLE ARRANGEMENT DESCRIBED ABOVE IS TAKEN INTO PRACTICE

              WITH THE IMPLEMENTATION OF THE STRUCT BUNKER (Control/Bunker.h)
         */
        vTable * vtable2 = new(VirtualTable)(this, 997);//vTable similar to the singleton
                                        //used by new, virtual, delete, typeid, and this


        fTable * ftable2 = new(FactoryTable)(this, 997);//fTable similar to the singleton
                                        //used by register, multimap(true-false), factory,
                                        //function, complex, override(true-false), and map


        aTable * atable2 = new(AdapterTable)(this, 997);//aTable similar to the singleton
                                        //used by adapter, union(true-false), type_info,
                                        //and friend



        Stk(Class) * ostk = new(Stk(Class))(this);//object stack similar to the one used by
                                          // this (vtable)


        Map(Stk) * bstk = new(Map(Stk))(this);//factory method stack similar to the one
                                                 //used by multimap(true-false) and map (ftable)

        Stk(Jump) * estk = new(Stk(Jump))(this);//jump stack similar to the one used by
        //  .                                    try/throw/catch (Exception)
        // / \
        //  +---------------------------------------+
        //                                          |
        //to apply polymorphism, replace any of the +
        //classnames used to declare pointers here with Container *



        //Class p = vPop();/// this   (return static temp var when empty)

        //printf("pop: 0x%x\n", p);
        /**

        DON'T FORGET THAT THESE ARE VIRTUAL TABLE OBJECT VERSIONS OF THE NON-VIRTUAL TABLE

        OBJECT SINGLETONS THAT ARE EACH OF THOSE THINGS LISTED ABOVE. IT IS FROM THESE

        LISTED SINGLETONS AND THE CONTROL FACTORY (using.h) THATS WHERE FACTORY C HAS ITS

        "HIDDEN" POWER.

         */


        String * str1 = new(String)(this, 2, "init"),
               * str2 = new(String)(this, 2, "initarray");

        bool flag = string(greater)(virtual(str1, String)->toString(str1),

                             virtual(str2, String)->toString(str2));
  #if 0
        printf("flag: ");

        if( flag )
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
  #endif // 0






     }catch( Exception * e ){ cout(e)cend; delete(e); }
    }



    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief C Factory Object                                                 pt.1 *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    /**********************************************************************
     * @brief Composite map/multimap, the factory table multimap          *
     **********************************************************************/
    explicit void f05()   /*class multimap*/
    {try
     {
        /**
        THIS IS WHERE DYNAMIC-AT-RUNTIME PROGRAMMING COMES FROM, THIS IS

        THE FACTORY TABLE INDEX (DEX) OR CLASS MULTIMAP PROVIDED BY THE

        FACTORY TABLE FOR ITS CLASSES. THIS RETURNS EITHER AN INTERFACE

        (DOUBLE POINTER) AFTER CALLING 2 FACTORY METHODS OR INFO AFTER

        CALLING 3 FACTORY METHODS (SINGLE POINTER). AS YOU CAN SEE HERE

        multimap(false) IS BEING USED TO ALLOCATE A STRING OBJECT.

        (DONT FORGET THAT IF YOU WERE SUPPOSED TO CALL A FACTORY METHOD

        BUT DIDNT, IT SHOWS UP ON THE STACK FOR YOU WHEN map() IS INVOKED)

         */
        String * obj(1) = ((new*)multimap(false)("String")
            ("class(FactoryTable)"))[1]()(this, 2, "hello_world") ;


            cout( obj(1) )endl cend;
        /**
        THE FIRST PARENTHESIS IS A FUNCTION PARENTHESIS USED FOR A RUNTIME

        VARIABLE (A FLAG) THATS USED TO DETERMINE SOMETHING THAT IS

        DYNAMIC AT COMPILE TIME (WHETHER MULTI - OR NOT).


        THE AMOUNT OF FUNCTIONS THAT ARE BEING RETURNED OR SPECIFICALLY IF THERE

        IS A SUB-FACTORY METHOD USED OR NOT, SO JUST A LOOKUP FOR THE

        INTERFACE WITH false. THE FIRST FACTORY METHOD OR SECOND

        SET OF PARENTHESIS IS BEING USED TO ACCESS THE STRING CLASS

        AND ITS FACTORY METHOD FOR THE class(FactoryTable) FOR A

        DYNAMIC INSTANCE. THIS IS EQUIVALENT TO THE LINE OF CODE BELOW.

        THIS IS ALSO SIMILAR TO JUST STRIAGHT new(Class)(this, ...) BUT

        DYNAMIC-AT-RUNTIME.
         */
    #if 1
        String * obj(2) = factory("String")(this, 2, "HelloWorld") ;

        cout( obj(2) )endl cend;
    #endif // 0
        /**
        MULTIMAP IS USED TO IMPLEMENT EVERY FUNCTION OR METHOD THAT

        MAKES A LOOKUP INSIDE THE FACTORY TABLE STARTING WITH THE

        FACTORY METHOD factory("Class")(this, ...) USED FOR DYNAMIC

        OBJECT INSTANCES. THE CLASS IMPLEMENTATION OF THE FACTORY

        OBJECT IS ROOTED WITH THE USE OF multimap()()()(). SO ANYONE

        WHO MIGHT WANT TO EXTEND THE DEFINITION OF THE FACTORY OBJECT

        FOR WHAT INTERFACES ARE USED IN THE CLASS INTERFACE HEAP OR

        WHERE THEY ARE USED, CAN USE MULTIMAP. YOU DON'T NEED TO USE

        multimap()()()() MOST OF THE TIME BECAUSE IT IS DONE FOR YOU

        ALREADY WITH A NUMBER OF FUNCTION HELPER METHODS BUT NEVER

        FORGET THAT THIS WILL REPLACE THE DOT OPERATOR ONE DAY ...


        (VIRTUAL HEAP FOR INTERFACE MEMBERS

        COMPLEX HEAP FOR OBJECT MEMBERS) ...


        THE typeid() COMES FROM

        THE ->type() METHOD IN THE INTERFACE (FIRST DATA FIELD POS).
        **/
    #if 1
            ((boolPtr)((virtual*)multimap(true)(typeid(obj(2)))
            ("class(VirtualHeap)")("insert"))->col)(obj(2), 5, ' ') ;


            cout( obj(2) )endl cend;
    #endif // 0
        /**          ... MULTIMAP

        CAN BE USED FOR EVERYTHING INVOLVING THE FACTORY TABLE. ITS

        THE FACTORY TABLE'S VERSION OF virtual()->meth() OR WHAT

        SUBSTITUTES THE FactoryTable(Interface).search() OPERATION.

        BECAUSE THE VIRTUAL TABLE ASSIGNS AN INTERFACE AND THE FACTORY

        TABLE ASSIGNS A COMPOSITE MAP/MULTIMAP IN A SIMILAR WAY.

        SO MULTIMAP IS THE FRONT-END OR THE DASHBOARD YOU SHOULD HOOK

        UP YOUR MUSIC LIBRARY TO A FACTORY TABLE CLASS FOR IT AFTER

        A VIRTUAL HEAP. MULTIMAP THROWS ALL THE EXCEPTIONS THAT ARE

        NEEDED FOR SMOOTH OPERATION FROM ONE SIDE OF THE FACTORY TABLE

        TO THE OTHER, IN ONE STATEMENT.
        */


        /**
        THIS (multimap) USES A STACK OF FACTORY METHODS AND ONE OF

        THE REASONS FOR THIS IS SO MULTIMAP CAN BE USED INSIDE MULTIMAP

        FACTORY METHOD(S) TO RETURN A C-STRING INTO IT FOR

        CLASS/INTERFACE/INFO. THERE ALSO IS A STACK OF FLAGS IN USE HERE

        FOR THAT REASON. SO TO DISASSEMBLE MULTIMAP HERE...

        A REASON TO DO THIS WOULD BE IF U WOULD LIKE TO CHECK IF SOMETHING

        IS A PART OF A SECURITY SET FOR INSTANCE AND SO WOULD LIKE A 0 RETURNED

        INSTEAD OF AN EXCEPTION BEING THROWN.
         */


            multimap(false)(typeid(obj(1)));//<---

            Interface reg = map("class(FactoryTable)");//disassembled

            if( !reg ){ cout("!reg\n")cend; return; }//no null check when disassembled

            cout endl( ((typePtr*)reg)[0]() )endl cend;

            bool * flag = flag();
            deaccumulate( flag );


    /**
    CLASS FACTORY METHOD NOT DISASSEMBLED.
     */
    # if 0
                reg = multimap(false)(typeid(obj(1)))("class(VirtualHeap)");

            cout endl( ((typePtr*)reg)[0]() )endl cend;
    # endif //THIS_HAS_NULL_CHECK

    /**
    NOT DISASSEMBLED. ALL DONE IN ONE STATEMENT. PASSED INTO cout.
     */

            cout endl( ((typePtr*)multimap(false)(typeid(obj(1)))
                ("class(LibraryHeap)"))[0]() )endl endl cend;
                                     /*("\n")("\n")(&ControlFactory(00)) ;*/

    /**
    (ABOVE) MAP WOULD BE THE ACTION OF A FACTORY METHOD POPPED OFF

    OF THE STACK AS ITS BEING CALLED, THIS WOULD BE EITHER CLASS OR SUB

    FACTORY METHOD DEPENDING ON THE LAST ONE PUSHED ONTO THE STACK

    (mstk) (for mPush(meth), mPop(), mTop())


    THIS EXAMPLE BELOW IS PART OF THE ULTIMATE INTENSION AS TO WHY WE

    ARE IN C AND NOT ANYWHERE POST C IS BECAUSE THE FACTORY TABLE CLASS

    CAN GET UNDERNEATH THE VIRTUAL TABLE OBJECT'S ASSIGNED INTERFACE

    AND PROVIDE AN OVERLOAD TYPE THATS AN INTERFACE-LEVEL OVERLOAD AND

    THE HIGHEST-LEVEL OF OVERLOAD ON A FUNCTION OR SET OF FUNCTIONS THAT

    BECOME THE INTERFACE METHODS OF A CLASS. BELOW IS THE SAME OPERATION

    USED TO IMPLEMENT THE FUNCTION METHOD, DISCUSSED IN FACTORY OBJECT PT2

    BECAUSE THAT AND THE COMPLEX METHOD AND THE FACTORY METHOD (factory)

    ARE THE CLASS BUILDER FUNCTION HELPERS AND THE FactoryObject.h FUNCTION

    HELPER (THE FUNCTION METHOD).


     */
            if( !((bool()(*)(Object*,...))

                (( (Object * *)

                  virtual( obj(2), class ) )[ ((virtual*)

                  multimap(true)(typeid(obj(2)))("class(VirtualHeap)")

                  ("remove"))->val ] ))(this, 5) ){ cout("remove failed\n")cend; }


            cout( obj(2) )endl cend;

    /**
    THE FACTORY TABLE INDEX IS WHAT IT IS BECAUSE IT DOES NOT RELY ON THE

    OBJECT IN OBJECT ORIENTED PROGRAMMING, JUST USE STRING DIRECTIVE OR

    ANOTHER VARIABLE IF THE OBJECT IS UNAVAILABLE BY TYPEID typeid().


    USUALLY WE USE MULTIMAP WITH A CAST SINCE IT RETURNS A VOID POINTER.

    */
        reg = (Interface)multimap(false)
              ("String")("class(FactoryTable)");//false sub (single map)


        virtual * info = (virtual*)multimap(true)("String")
                        ("class(VirtualHeap)")("insert");//true sub (multi map)


    /**
    THERE ARE A NUMBER OF HEAPS/TABLES TO ACCESS AND TO FULLY UNDERSTAND

    MULTIMAP IS TO FULLY UNDERSTAND THE FACTORY TABLE AND HOW ITS FACTORY

    METHOD (THE PRIMARY FACTORY METHOD) IS CONNECTED TO THE CLASS FACTORY

    METHOD THATS CONNECTED TO THE CLASS INTERFACE HEAP AND AN INTERFACE

    (WHETHER ITS A TABLE OR HEAP) MAY OR MAY NOT HAVE A SUB FACTORY METHOD

    THAT IT IS CONNECTED TO, AS A SUB FACTORY METHOD IS CONNECTED TO THE

    CLASS INFO HEAP FOR THAT INTERFACE.

    SEE structclass.h FOR THE VARIETY OF INTERFACES AND WHAT PURPOSE EACH

    HAS. THIS IS A FULLY EXTENSIBLE CLASS INTERFACE HEAP AND SOMETHING

    OF AN ALTERNATIVE TO MULTIPLE INHERITANCE (THE FACTORY C SOLUTION)

    AS THERE IS STILL A SOLUTION TO MULTIPLE INHERITANCE FOUND WITH THE

    POLYMORPH HEAP AND ITS SIGNED OFFSETS.
    */

        String * obj(3) = ((new*)multimap(false)("String")
            ("class(FactoryTable)"))[1]()(this, 2, "23") ;




        ((boolPtr)((virtual*)multimap(true)(typeid(obj(3)))
            ("class(VirtualHeap)")("insert"))->col)(obj(3), 0, '1');

        cout( obj(3) )endl cend;





     }catch ( Exception * e ){cout(e)cend;delete(e);}
    }

    /**

     */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief C Factory Object                                                 pt.2 *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /**********************************************************************
     * @brief factory object function helpers implemented using multimap  *
     **********************************************************************/
    #define cmplx(self, str, type) (*(type*)complex(self, str))

    #define fnctn(self, str, type) ((type)*function(self, str))
    /**********************************************************************
     * @brief central functions for the high-level overloads              *
     **********************************************************************/
    /**
    WHEN THESE (3) METHODS ARE USED IN THE IMPLEMENTATIONS OF THE FUNCTIONS THAT BECOME

    THE INTERFACE METHODS OF YOUR CLASS, THAT IS THE START OF THE CLASS BUILDER MATERIAL

    NEEDED FOR THIS, ONLY STUFF AFTERWARDS IS USING A BUILDER FACTORY METHOD FOR A CLASS

    FACTORY METHOD AND BUILDER SUB FACTORY METHODS, IMPLEMENTING THE FULL-SIZED STRUCT CLASS

    IS DESIREABLE BECAUSE IT PROVIDES STABILITY AND A SOURCE TO COPY A BUILDER INTERFACE

    HEAP FROM. - FACTORY METHOD - FUNCTION METHOD - COMPLEX METHOD -
     */
    explicit void f06()
    {

      try
      {

        /*
         * this is the factory method (factory.h)
         */
        String * obj = factory ("String") (this, 2, "Hello World");

            cout("obj: ")(obj)endl cend;
            /*
             * it would be dynamic as long as it used a variable.
             */



            /*
            this is the function method (function.h)

            this could strategically be replaced by insert, ...

            if it used a variable. any object with a replace

            method in its class interface can use the function

            method to retrieve it, bridging classes so they

            can be used from the same place polymorphically.


            this can also be dynamic at compile-time for the

            amount of parameters a single method uses, possibly

            overloading beyond the first parameter but also using

            a class(StrategyHeap) underneath or in conjunction

            with a class(VirtualHeap).
             *///
            if( !((bool()(*)(Object*,...))
                *function(obj, "replace"))(this,0,'h') ){  }

            if( !((bool()(*)(Object*,...))
                *function(obj, "replace"))(this,6,'w') ){  }

                cout("obj: ")(obj)endl cend;
                /*
                 * same goes for this also just relies on a cast also
                 *
                 * so its as dynamic as the set of functions you would
                 *
                 * implement, boolPtr is same as factPtr just returns bool
                 *
                 * not pointer, Object.h has everything for function casts.
                 *
                 * by set of functions, i mean how strategically inclined
                 *
                 * it would be. typedef bool()(*boolPtr)(Object*,...)
                 */


            /*
            this is an overload implemented using the function method

            and perhaps its overload function template it expands into.

            (function.h) and (FactoryObject.h)
             */
            /**if(     !replace(obj,6,'w')       ){  }

                        cout("obj: ")(obj)endl endl cend;*///(not working now)
            /*
            this is just a minor setback involving the function arguments stack

            for a factory function and passing the parameters straight through

            into the encapsulated factory function thats a function that calls

            control() (in Stack.h) ... this is a difficult area and there is not

            much to change other than maybe someone who knows assembly can call

            it.
            *///(just a minor setback)
            /*
            the overload is still intact when calling the function method, it just

            looks like such syntax sugar is something you (might) have to work for

            yourself (otherwise call the function method).
             */


            /*
             * this is the complex method (complex.h)
             */
            cout(  "length: %d\n", (*(size_t*)complex(obj, "length"))  )cend;

            size_t temp = (*(size_t*)complex(obj, "length"));

            (*(size_t*)complex(obj, "length")) = 5;


            cout(  "length: %d\n\n", (*(size_t*)complex(obj, "length"))  )cend;


            (*(size_t*)complex(obj, "length")) = temp;

            printf(  "length:\t\t%d\n", (*(size_t*)complex(obj, "length"))  );

            printf(  "maxsize:\t%d\n", (*(size_t*)complex(obj, "maxsize"))  );

            cout(  "array:\t\t0x%x\n", (*(char**)complex(obj, "array"))  )cend;
            /*
             * note: it might be desireable to use a macro so c(obj, "var", type)
             *
             *       replaces the complex method and same for function method f(...)
             *
             *       this will be done by the class(builder)(complex) because the type
             *
             *       is needed to stringize.
             *
             * also: class(complex)(objt, type, name) is defined now
             */


        delete(obj);
      }
      catch(  Exception * e  )
      {
        cout(e)cend;

        delete(e);
      }
    }

    //builder(ComplexHeap)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /**********************************************************************
     * empty the exception stack                                          *
     **********************************************************************/
    /**
    AN IMPLEMENTATION WORTH KEEPING HERE IS ONE THAT USES A SECURITY KEYSET

    PLUS FACTORY METHOD FOR ALL OF THE BELOW THINGS, MAKES IT MORE READY TO

    BE PROGRAMMABLE-AT-RUNTIME (MORE DYNAMIC-AT-RUNTIME). THE AMOUNT OF

    DATATYPES LISTED BECOMES DYNAMIC AS SOON AS ITS USING A BUILDER HEAP.
     */
    explicit void f07()
    {
        printf( "height: %u\n\n", eHeight() );


        while( eTop() )
        {printf("eTop()\n");
        #if 0
            if( instanceof( eTop() ? *eTop() : nullptr , Assertion )

             || instanceof( eTop() ? *eTop() : nullptr , Exception )

             || instanceof( eTop() ? *eTop() : nullptr , OutOfMemory )

             || instanceof( eTop() ? *eTop() : nullptr , OutOfBounds )

             || instanceof( eTop() ? *eTop() : nullptr , NullPointer )

             || instanceof( eTop() ? *eTop() : nullptr , InputMismatch )

             || instanceof( eTop() ? *eTop() : nullptr , IllegalOperation )

             || instanceof( eTop() ? *eTop() : nullptr , EmptyString ) )
        #else
            multimap(true)("Exception")("class(SecurityHeap)");
            if( map(struct(bunker)(typeid)(*eTop())) )//
        #endif // 0
            {
                ((factPtr*)multimap(false)(struct(bunker)(typeid)(*eTop()))
                ("class(ConsoleTable)"))[2](*eTop());
            }
            else
            {
                /* note: this was for when the exceptions/assertions/overrides/...
                 *       were placed just on the vstk (VirtualStack) that is also
                 *       used to operate the constructor, (so u can see this is a
                 *       new stack ExceptionStack)
                 */
                cout("type:\t\t")(struct(bunker)(typeid)(*eTop()))endl cend;
            }
            ePop();
        }


        printf( "height: %u\n\n", eHeight() );

    }
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///


    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                         ...                              */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///


    explicit void f08()
    {
        cout(vtable)endl cend;


    }


    explicit void f09()
    {
        cout(ftable)endl cend;

        /// /// /// /// /// /// /// ///

    }
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void f10()
    {   /// /// /// /// /// /// /// ///
        //destroy();
        /*
        with certain objects inside the vtable, this method becomes unusable,

        therefore, they will be stored in the accumulator vtable unless the

        control factory has a problem with that. i think the greatest solution

        for that would be for another control factory flag to be declared, to

        decide between accumulator and main vtable, cout and cin can put returns

        into the accumulator table, come to think about it, the strategy flag

        for iterating foreward or backward is useless sorta so use it for that

        but dont forget that Controller() uses it (so change that). (DONE)
         */
        //destroy();//all good now

    }   /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /**********************************************************************
     * true object (stack) comparison (just needs a better example)       *
     *                                                                    *
     * i am happy that is_polymorphic got implemented properly with       *
     * equal, greater, less                                               *
     **********************************************************************/
    explicit void f11()
    {//register(Vector(int));


            Object * a = new(Vector(char))(this, 0, 101);

            (*(char**)complex(a, "array"))[0] = 'a';
            (*(char**)complex(a, "array"))[1] = 'b';
            (*(char**)complex(a, "array"))[2] = 'c';
            (*(char**)complex(a, "array"))[3] = '\0';


            Object * b = new(String)(this, 2, "abc");
            Object * c = new(String)(this, 2, "abc");


            /* note: make sure the stack is resolved for
             *       is_polymorphic like it needs to be.
             */
            printf("TypeIDStackHeight: %u\n", tHeight());

            while(tTop())
            {
                cstring type = tPop();

                printf("TypeID: %s\n", type);
            }

            /* note: is_polymorphic fills the typeid
             *       stack with types to compare as/with.
             */
            if( is_polymorphic(a,b) )
            {
                /* note: while polymorphic (while tTop())
                 *       then check if equal as the type
                 *       specified (each time).
                 *
                 *       equal() uses tTop()
                 */
                while( polymorphic )
                {

                  try{
                    cout("ComparableAs:")(*polymorphic)(":")
                    (equal(a,b)?"true":"false")cend;
                  }catch( Exception * e )
                  {
                      cout endl(e)endl cend;
                      delete(e);
                  }
                  tPop();//pop class typeid
                }

            }
            else
            {
                cout("NotComparable")cend;
            }


            cout("num_polymorphs: %u", num_polymorphs)endl cend;

    }



    /**********************************************************************
     *
     **********************************************************************/
    explicit void f12()
    {//Heap(Interface)






        Container * heap = new(Heap(Interface))(this, 0);

        Interface i = build("class(FactoryTable)")(case(copy), &String(Factory));


        Interface volatile(iterator)[3]={&volatile(Type),0,0};
        volatile(type) = "class(FactoryTable)" ;

        virtual(heap, Container) -> insert( this, i );



        Interface * p = virtual(heap, Container)

            -> at( this, volatile(iterator) );



        printf("type: %s", ((typePtr*)*p)[0]() );


        demolish(*p);


        //virtual(heap, Container) ->


    }



    /**********************************************************************
     * print interface heaps.
     *
     * TODO: some kind of strategy for storing Class(Security)(ID) objects
     *       (so using them can be dynamic)
     *
     * TTOODDOO: hide them using a compiler for strategy between admin/group
     *
     * for now: reg[3] is swapped for reg[0] so passnumber is not used
     *          directly with the factory method, instead a function
     *          that is security involved would check the pass on the security
     *          interface. i am doing this because i want Factory C to be
     *          implemented and its not worth going in the security direction
     *          this way when there are other implementations in other places
     *          that could be further developed instead. there is/was a need
     *          for some kind of break stack of passnumbers, maybe when i
     *          implement Factory C v2.1.1 it will be only for operating
     *          systems and include all the security/break stuff it would ever
     *          need that has to do with the level of using factory methods
     *          and keywords (Complex C).
     **********************************************************************/
    explicit void f13()
    {



        printHeap( ((tblePtr*)multimap(false)("String")
                        ( "pass(SecurityHeap)"/*String(Security)(ID)()*/ ))[2] ) ;

        printHeap( ((tblePtr*)multimap(false)("FactoryTable")
                        ( "pass(SecurityHeap)"/*FactoryTable(Security)(ID)()*/ ))[2] ) ;



        printf( "id:            %s\n", struct(Bunker)(ID)() )     ;
        printf( "pass(address): 0x%x\n", & Bunker(Pass) );
        printf( "Pass(string):  %s\n", *Bunker(Pass) );


        printHeap( ((tblePtr*)multimap(false)( "struct(Bunker)"/*struct(Bunker)(ID)()*/ )
                        ( "pass(SecurityHeap)"/*struct(Bunker)(Security)(ID)()*/ ))[2] ) ;


        printf( "id:            %s\n", class(Builder)(ID)() )     ;
        printf( "pass(address): 0x%x\n", & Builder(Pass) );
        printf( "Pass(string):  %s\n", *Builder(Pass) );

        printHeap( ((tblePtr*)multimap(false)( "class(Builder)"/*class(Builder)(ID)()*/ )
                        ( "pass(SecurityHeap)"/*class(Builder)(Security)(ID)()*/ ))[2] ) ;





    }

    /**********************************************************************
     * the secondary virtual table (accumulator)                          *
     **********************************************************************/
    explicit void f14()
    {
        string * id = accumulate(string)(this, 11);//new (using secondary vtable)

        int a = -1, b = +1;

        accumulate(Assertion)(this, assert( a > b ));


        cout endl; //no cend (leaves a StrategicCommand in the secondary) ;


        ((ctorPtr*)multimap(false)("struct(Bunker)")("class(ConsoleTable)"))//struct(Bunker)(ID)()
        [2]((struct(Bunker)*)((objtPtr*)multimap(false)("struct(Bunker)")//struct(Bunker)(ID)()
        ("class(SingletonTable)"))[1]) ; // (print secondary vtable)

        cout(struct(bunker)(typeid)(id))endl cend;

        deaccumulate(id);//delete (using secondary vtable)
    }

    /**********************************************************************

     **********************************************************************/
    explicit void f15()
    {
        cout(ftable)cend;
    }

    /**********************************************************************
     *
     **********************************************************************/
    explicit void f16()
    {

        cout("num: %u, num: %u\n", 123, 456)endl cend;//test control case here //GOOD

    }


    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
            the foundational design patterns to Factory C:

                Virtual
                Template
                Container/Iterator

            the almighty design pattern that powers our OOC:

                Singleton

            the key object-oriented design patterns to Factory C (OOC):

                Virtual
                Factory (Method)
                Adapter

                as each pf these three patterns is fortified by a
                Singleton hash table.

            the patterns that power the Control Factory:

                Strategy #1

                Command
                Control
                Factory  (Function)
                Template (Method)


                Command + cstring = Control
                Factory + cstring = Builder

            patterns missed by - Head First: Design Patterns

                Virtual
                Template  (Container)
                Container (covered partially by Iterator)

                so those are my 3 key patterns to discuss beside the book.

            also, the Builder or Factory extended pattern for
            complex object/runtime class building (one i invented):

                Complex

            and a pattern too small to be covered by itself (kinda):

                Strategy (or Overload)  Strategy vs. Overload   (worth doing)


                see:Command (100% strategic) also see the Control Factory

            the design patterns that power the AdapterTable:

                Adapter (Object)
                Observer
                Decorator

                each of these patterns qualifies as an object adapter,
                with Adapter (Object) itself representing a simple
                one-to-one object adapter.

            last but not least, a pattern i invented that comes
            from Factory (Method):

                Security

            security involves restricting how dynamic the factory methods
            are (using a set) and using pass numbers/pass words for typeid(s)


            what gets "dubbed" as a Factory Function here is a function/method
            that is dynamic-at-compile-time, dynamic for how it can take any
            amount of parameters or any datatypes for its parameters using a
            stack pointer for control of the function arguements stack. a
            Factory Method or what gets "dubbed" as one is a function/method
            that is dynamic-at-runtime for its single runtime string parameter
            and is essentially a Map function or a singleton Map function/method
            representing a single Map without having that Map passed as a
            parameter. (Factory Function vs. Factory Method).


            also. what gets "dubbed" as a Template here is a datastructures
            Template like a Function Template but for a complete Container/Iterator.
            (Template Function vs. Template Method).

            The State Machine won't be implemented because its too much like an Adapter
            or the Observer example especially, only difference is that the state machine
            won't be involved with a second object behind it.

     */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Strategy example has been moved to where the workspace                *
     *                                                                              *
     *        has stuff for Observer                                                *
     *                                                                              *
     * (using the Display.h Display with its self->display() is strategic)          *
     * (also: Display has a factory method for its strategic pointer and an         *
     * overload function implemented (Overload vs. Strategy)).                      *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Adapter example     (initial preparation)                             *
     * this is a level 2 object example (factory object)                            *
     * Adapter Pattern is for simple one-to-one Object Adapter                      *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d01()
    {

        Turkey * turkey = new(Turkey)(this, 9);//needs an adapter



    #if 0
        /* we can have an adapter interface assigned at the

           point of deployment for the object, this includes

           an adapter constructor for the object.
         */
        Duck * duck = adapter(Turkey, Duck)(this, turkey);
    #endif // 0
    #if 0
        register(Turkey(Duck));//adapter()
            //encapsulated inside ctor hook here
        /* and we can have a fully dynamic instance from

           a factory method: +type_info(obj)
         */
        Duck * duck = factory("Turkey(Duck)")(this, turkey);

    #endif // 0
    #if 1
        register(Turkey);

        register(Duck);

        register(Turkey(Duck));//for virtual heap now
        /* but we are going to create a virtual table object,

           then assign it as an object adapter to another virtual

           table object dynamically (using typeid) afterwards.
         */
        Duck * duck = new(Duck)(this, 4);


        union(true)(typeid(turkey),typeid(duck))(duck, turkey);

        /* this couples the objects together, default(12) = true;

           will turn the coupler function at the end into a

           reconstructor that calls dtor() then init() that should

           call AdapterTable(Interface).insert() , .remove()

           themselves also.

           again, this couples the objects together (union(true)).

           union uses the uni-structor (here).
         */

    #endif // 1




            cout(type_info(duck))endl cend;

            /* we can access our interface methods

               using the virtual table.
             */
    #if 0
            virtual(duck, Duck)->fly(this);
            cout("\n")cend;
            virtual(duck, Duck)->quack(this);
            cout("\n")cend;
            virtual(duck, Duck)->swim(this);
    #else
            /* but we are going to use the factory

               table in conjunction with the virtual

               table objects assigned interface,

               and overload both interfaces of both

               classes for these functions...


               we are going to use the class(VirtualHeap)

               in conjunction with Duck(VirtualTable)

               and Turkey(VirtualTable) interfaces.


               these functions are as abstract

               as they sound, being overloaded across

               multiple interfaces.

             */
            fly(duck);  //calls Duck(Fly)
            cout("\n")cend;
            quack(duck);
            cout("\n")cend;
            swim(duck);
    #endif // 0
            cout("\n")("\n")("\n")cend;



            cout("%s\n", typeid(turkey))cend;

            fly(turkey); //calls Turkey(Fly)
            cout("\n")cend;
            gobble(turkey);
            cout("\n")cend;
            swim(turkey);

            cout("\n")("\n")("\n")cend;


        Duck * turkeyDuck = new(Duck)(this, 4);

        /* here we already have an adapter we can identify

           using type_info so we can pass a single type_info

           instead of typeid X2: "Turkey" and "Duck" but

           "Turkey(Duck)" from type_info is a reserved case

           inside AdapterTable(Union)
         */
        union(true)(type_info(duck))(turkeyDuck, turkey);


            cout(typeid(turkeyDuck))endl cend;//... just typeid

            fly( turkeyDuck );
            cout("\n")cend;
            quack( turkeyDuck );
            cout endl cend;
            swim( turkeyDuck );
        #if 0
            printf("\n");printf("\n");printf("\n");
        #else
            cout endl endl endl cend;
        #endif // 0




            cout(vtable)(atable)cend;

            cout("friend: 0x%x\n", friend(turkeyDuck))cend;

            /* don't forget that typeid does not identify adapters.

               this decouples the two objects (union(false)).
             */
            union(false)(typeid(turkeyDuck))(turkeyDuck);

            cout("%s\n", type_info(turkeyDuck))cend;//...


        /***********************************************************/
            /* this is not the adapter pattern being used, but

               something of an alternative. when the function

               method is called and returns on both sides of an

               assignment operator with both returns being

               dereferenced, it is a general purpose runtime

               override for interface methods. i must note that

               from here a duck uses a Turkey(Duck) adapter function

               from its quack interface method but no adaptee

               behind it, that might prove itself a problem and

               could be a reason why this possibility gets eliminated

               over just using an adapter (Factory C).


               ...running this throws an exception for no friend(obj)

               so not true substitute for adapter pattern just a nearby

               mechanism, something of an opposite or relative

               of the overload, is the override, both rely on the

               virtual heap... on the plus side i can assign non-adapter

               methods to an adapter using override...


               you need to implement a virtual heap for Turkey(Duck)

               first (since override was updated)
             */
    #if 1
            override(true)(duck,"fly")(turkeyDuck,"swim");

            override(true)(type_info(duck),"swim")(type_info(turkeyDuck),"fly");


            ((factPtr*)multimap(false)("Override")
             ("class(ConsoleTable)"))[2](exception);

            ((factPtr*)multimap(false)("Override")
             ("class(ConsoleTable)"))[2](exception);
    #else
            (*function(duck,"quack")) = (*function(turkeyDuck,"quack"));
    #endif // 0 OR 1
        /***********************************************************/
    #if 1
            override(false)("Turkey(Duck)","fly");

            override(false)(duck,"swim");
    #endif // 1

            fly( duck );
            cout("\n")cend;
            quack( duck );
            cout endl cend;
            swim( duck );

            cout endl endl endl cend;



            cout(atable)cend;



        /* this is the helper multimap, used to implement methods

           like: factory, complex, function, override, type_info, ...

                 and of course, union
         */
      #if 0
        Duck * duck = ((new*)multimap(false)("Turkey(Duck)")
                       ("class(FactoryTable)"))[1]()(this, turkey);
      #endif // 0


        /* i leave the delete()s out for the sake of leaving everything

           to accumulate inside the primary virtual table between each

           workspace function because its enjoyable runtime testing that way.
         */
    #if 0
        delete(duck);          ///deletes what its an adapter for...

        delete(turkeyDuck);
    #endif // 0

    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Observer example     (initial preparation)                            *
     * Observer Pattern is for many-to-one Adapter Configuration                    *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                              initial preparation                             */
    #include "../OOC/Template/defineStk.h"

    #include "../OOC/Adapter/Observer.h"

    /*
     * implement Containers for the weatherStation
     */
    //typedef Observer * pObserver;//valid token (moved to Observer.h or Subject.h)

    #define pObserver(Member)        pObserver##Member


    #define pObserverIter(Member)    pObserverIter##Member

    #define pObserverStk(Member)     pObserverStk##Member
                                                             //implement
    typename(Stk)(pObserver, typename(Iter)(pObserver, typename(N)(pObserver)));


    //define(Iterator)(pObserver);

    //define(Vector)(pObserver, );//implement


    //needed for Observer pattern (Container implementation)
    #include "../OOC/Template/defineVector.h"

                 ///&this                      ///&this
        ///new(WeatherStation)(this, new(pObserverVector)(this, 15));

    /**
            VirtualTable(Interface).add( vtable, & this,

            (WeatherStation*)allocate(sizeof(WeatherStation)),

            & WeatherStationInit, & WeatherStationInterface )

            *//*     new(Class) cannot be passed
                     into another constructor
                     since this gets reinitialized
                     and passed into the wrong ctor

                     ***PROBLEM SOLVED***

                     USE vPop() and vTop() either in place of
                     this or re-initialize self to vPop()

                     and possibly use vTop() in the constructors
                     implementation

                     ***UPDATE***

                     this is redefined as a macro that substitutes vPop()
                     so the stack is always resolved and nothing special
                     is required of any initializer/constructor other than:

                     if( !self ){ return 0; }

                        //...

                     return self;

                     ***UPDATE***

                     this is encapsulated so it throws a memory failure
                     exception so nothing is required of any constructor
                     other than it return self;

                     *//**

            (this, VirtualTable(Interface).add( vtable, & this,

            (pObserverVector*)allocate(sizeof(pObserverVector)),

            & pObserverVectorInit, & pObserverVectorInterface )(this, 15));
    */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Observer example                                                      *
     * this is a level 2 object example (factory object)                            *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d02()
    {register(Display);
     register(WeatherStation);
     register(Statistics);
     register(WeatherStation(Statistics));
     register(HeatIndex);
     register(WeatherStation(HeatIndex));
     register(CurrentConditions);
     register(WeatherStation(CurrentConditions));
     register(Forecast);
     register(WeatherStation(Forecast));




        Observer * c = new(CurrentConditions)(this),///non-observer interface
                                                               /// assigned to object
                 * f = factory("Forecast")(this),//class(FactoryTable) overload

                 * h = new(HeatIndex)(this),//new is the same just non-dynamic-
                                               //at-runtime (dynamic-at-compile time)
                 * s = new(Statistics)(this);




        cout("type_info: ")(type_info(c)) endl cend;//reveals adapter types

        cout("typeid: ")(typeid(c)) endl cend;//does not reveal

        //destroy();//get rid of the last 4 objects because ...


        Subject * weatherStation = new(WeatherStation)(this, 0);//...

            //by the time im done, Stk(type), HashSet(type, bits), and Vector(type)

            //will all be able to fit inside Subject and work

            //since Subject has a Container * ...

            //without giving myself all the worst problems to never work out

            //i can substitute Containers for Containers of the same classification:

                //Sequence

                //Associative

                //Adapter




                        ///create instance using Observer interface
        c = adapter(WeatherStation, CurrentConditions)(this, weatherStation); //not new(Class)

        f = adapter(WeatherStation, Forecast)(this, weatherStation);//special adapter-assigned
                                                                   //interface and constructor
        h = factory("WeatherStation(HeatIndex)")(this, weatherStation);//class(FactoryTable) overload

        s = adapter(WeatherStation, Statistics)(this, weatherStation);//same like factory("") just
                                                                     //not dynamic-at-runtime





                //just a strategic print object not a part of Observer/Subject pattern

        Display * cd = new(Display)(this, c, display("CurrentConditions")),

                * fd = new(Display)(this, f, display("Forecast")),//class(StrategyHeap)

                * hd = new(Display)(this, h, display("HeatIndex")),//factory method

                * sd = new(Display)(this, s, display("Statistics"));//for strategic pointer init
                //...


        cd->display(cd->self); /**STRATEGIC DISPLAY OBJECT*/

        fd->display(fd->self);

        hd->display(hd->self);

        sd->display(sd->self); ///Strategy vs. Overload


        //
        Subject(Flag) = false;
                              /*1)set to true and update() only updates
                                  the observer update() called from

                                2)set to false and update() calls set()
                                  and notify() calling update() from every
                                  observer

                                3)this flag is set to true in set()
                                  so notify() can be called immediately after
                                  and the flag gets set back to false

                                X)thanks to my indirect recursion solution:
                                  base case true (and) base case false
                                  BASE CASE ON   (and) BASE CASE OFF
                              */            printf("TURN OFF/");



        virtual(c, Observer)->update(this, 80.001, 65.001, 30.001);


        cd->display(cd->self);///strategic display

        fd->display(fd->self);//

        hd->display(hd->self);

        sd->display(sd->self);


        //Subject(Flag) = true; //update single observer at a time now


        virtual(c, Observer)->update(this, 82.333, 70.120, 27.345);

        virtual(f, Observer)->update(this, 83.123, 73.340, 34.456);

        virtual(h, Observer)->update(this, 52.789, 70.220, 22.789);


        virtual(s, Observer)->update(this, 81.678, 70.123, 29.123);//class(VirtualHeap) overload  X NOT

            //


        Display(Overload)(c);///overload on set of functions

        Display(Overload)(f);//class(StrategyHeap) overload

        ((factPtr*)multimap(true)("Display")//from multimap (ftable)
        ("class(StrategyHeap)")(typeid(h)))[1](h); //Display(Overload)(h);

        Display(Overload)(s);//this low-level overload doesn't need factory table
        ///Strategy vs. Overload


        //Subject(Flag) = false; //back to auto-all


        virtual(c, Observer)->update(this, 78.345, 90.123, 27.876);


        cout(c)(f)(h)(s)endl cend;///cout overload (using template A.K.A. ControlFactory)
                                                //class(ConsoleTable) overload

            //check and see what delete returns at the end


        printHeap( ((tblePtr*)multimap(false)("WeatherStation")
                        ( WeatherStation(Security)(ID)() ))[2] ) ;




        cout("type_info: ")(type_info(c)) endl cend;//type_info reveals adapters

        cout("typeid: ")(typeid(c)) endl cend;//typeid returns same if adapter



        cout(vtable)(atable)cend;

        delete(weatherStation);//must delete cuz dtor uses the vtable for something else
                              //(the vector, plus iterator added then)
        cout(vtable)(atable)cend;

        //can use drop(Class) here but no need since no build/demolish
    }


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Decorator example                                                     *
     * - - this example is a level 1 object example (virtual object)                *
     * as soon as any of these datatypes get registered at the factory table        *
     * the sooner they can start being level 2 objects.- -                          *
     * - -Decorator is for an advanced, recursive, polymorphic, stackable Adapter   *
     * where there is interface coupling between base and derived interfaces and    *
     * recursion terminated at the base form of the interface method being called- -*
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d03()
    {
        //default(12) = true;//QProbe



        Beverage * beverage = adapter( Beverage, Espresso )( this );


        String * str1 = virtual( beverage, Beverage )

                    ->getDescription(this);



        printBeverageDescription(str1);



        printf( "%s, $%.2f\n", virtual( str1, String )->toString(this),

                    virtual( beverage, Beverage )->cost(this) );




        Beverage * darkRoast = adapter( Beverage, DarkRoast ) ( this );


        String * str2 = virtual( darkRoast, Beverage )

                    ->getDescription(this);




        printBeverageDescription(str2);


        //          factory("Beverage(Mocha)")

        darkRoast = adapter( Beverage, Mocha ) ( this, darkRoast );

        darkRoast = adapter( Beverage, Mocha ) ( this, darkRoast );

        darkRoast = adapter( Beverage, Whip ) ( this, darkRoast );


        beverage = adapter(Beverage,Milk)(this, beverage);

        beverage = adapter(Beverage,Soy)(this, beverage);

        beverage = adapter(Beverage,Whip)(this, beverage);

                ///   sizeof(Milk)

                /// & MilkInit, & MilkInterface



        String * str3 = virtual( darkRoast, Beverage )->getDescription(this);

        printf( "%s, $%.2f\n", virtual( str3, String )->toString(this),

                    virtual( darkRoast, Beverage )->cost(this) );




        String * str4 = virtual( beverage, Beverage )->getDescription(this);

        printf( "%s, $%.2f\n", virtual( str4, String )->toString(this),

                    virtual( beverage, Beverage )->cost(this) );




        cout(vtable)(atable)cend;
       // delete( darkRoast );


        //delete( beverage );

        printf("...");
    }







    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Factory Method example (without restricting how dynamic it is)        *
     * this is a level 2 object example (factory object)                            *
     * the finished example here will include the Security pattern for key sets.    *
     * - - remember Factory C uses an assortment of factory methods this factory    *
     * method is the virtual table object factory, similar to the book but includes *
     * its own constructor - -                                                      *
     * - - look for multimap examples above for Factory C evolved factory method use*
     * - - a factory method is a singleton method because it uses a container in its*
     * implementation one that is not passed into it (because of a singleton or     *
     * a stack)                                                                     *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d04()
    {
        /* note: strategic set of classes. can have their ctors go into
         *       a strategy heap + security heap or anything you can
         *       come up with. the virtual table object factory is for
         *       the full range of classes registered at the factory
         *       table, not just any strategic "set" of classes.
         */
        register(NYCheesePizza);         register(NYClamPizza); /**23**/
        register(ChicagoVeggiePizza);    register(ChicagoCheesePizza);
        register(NYVeggiePizza);         register(ChicagoPepperoniPizza);
        register(NYPepperoniPizza);      register(ChicagoClamPizza);
        register(MoscowPepperoniPizza);  register(SmolenskCheesePizza);
        register(MoscowVeggiePizza);     register(SmolenskPepperoniPizza);
        register(BukarestPepperoniPizza);register(SmolenskVeggiePizza);
        register(BukarestClamPizza);     register(RomeClamPizza);
        register(BukarestVeggiePizza);   register(BukarestCheesePizza);
        register(BudapestClamPizza);     register(BudapestCheesePizza);
        register(RomePepperoniPizza);    register(BudapestPepperoniPizza);
        register(BudapestVeggiePizza);   register(RomeCheesePizza);
        register(RomeVeggiePizza);       register(SmolenskClamPizza);
        register(MoscowClamPizza);       register(MoscowCheesePizza);


            Pizza * p = factory("NYCheesePizza")(this, 0);//virtual table object factory


            cout(typeid(p))("\n")cend;

            //delete(p);

                    p = factory("ChicagoCheesePizza")(this, 0);


            cout(typeid(p))("\n")cend;

            //delete(p);

                    p = factory("BudapestCheesePizza")(this, 0);


            cout(typeid(p))("\n")cend;

            //delete(p);

                    p = factory("MoscowPepperoniPizza")(this, 0);


            cout(typeid(p))("\n")cend;

            //delete(p);

                   p = factory("RomeClamPizza")(this, 0);


            cout(typeid(p))("\n")cend;

            Object * p2 = factory(typeid(p))(this, 1, p);//create a copy of any object...

                                                   //...of any class registered to the ftable
                                                  //with the classFactoryTable
                                                 //registration, also considering
                                                //case 1 as the copy constr for EVERY
                                        //object, label it as a "class responsibility"

            cout(typeid(p))("\n")cend;

            //delete(p);

            cout(vtable)cend;

    #if 0 // 1 DEBUG
            destroy();//jumpBuf?
    #endif // UNTERMINATED_RECURSION_ERROR___DEBUG___
    }

///labeled everything in vTable, aTable, and fTable as volatile (singleton)
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Singleton pattern                                                     *
     * this is a level 1 object example (virtual object)                            *
     * this object preferably does not go inside the virtual table so therefore can *
     * be considered its own class of object apart from virtual, factory, complex   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
///void ChocolateBoiler(Constructor)(void) { ChocolateBoiler(Allocator)(&cboiler); }
    explicit void d05()
    {
        //cBoiler * boiler = new(ChocolateBoiler)(this, 0); //NotAVirtualTableObject


        ChocolateBoiler(Allocator)(&cboiler);///singleton allocator/initializer


        if( !fill() )  {}

        if( !boil() )  {}

        if( !drain() ) {}


            puts("\n");//put string


        fill();

        boil();

        drain();


        /**

        THE PROGRAM CONSTRUCTOR AND PROGRAM DESTRUCTOR MUST GO INSIDE main.c IT

        SEEMS TO ME (OR THE PROGRAM GET TERMINATED). ChocolateBoiler(Constructor)

        AND ChocolateBoiler(Destructor), A SINGLETON SHOULD USE BOTH OF THEM AND

        THE ALLOCATOR AND DEALLOCATOR INSTEAD OF BEING A VIRTUAL TABLE OBJECT BUT

        MAY STILL.

         */
        ChocolateBoiler(Deallocator)(&cboiler);///singleton deallocator
    }
///void ChocolateBoiler(Destructor)(void) { ChocolateBoiler(Deallocator)(&cboiler); }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Command example                                                       *
     * this is a level 1 object example (virtual object)                            *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d06()
    {
        Remote * remote = new(Remote)(this);


        Light * light = new(Light)(this, new(String)(this, 2, "LivingRoom"));
        /// LightOn

        /// LightOff

        Fan * fan = new(Fan)(this, new(String)(this, 2, "Ceiling"));
        /// FanHigh

        /// FanMed

        /// FanLow

        /// FanOff

        /// FanGetSpeed


        Door * door = new(Door)(this, new(String)(this, 2, "Garage"));
        /// DoorUp( Door * );

        /// DoorDown( Door * );

        /// DoorStop( Door * );



        printf("%s%s\n", virtual(light->location, String)->toString(this), typeid(light));


        printf("%s%s\n", virtual(fan->location, String)->toString(this), typeid(fan));


        printf("%s%s\n", virtual(door->location, String)->toString(this), typeid(door));



            ///Command is a strategic interface so () is a perfect syntax decoration
        Command() * livingRoomLightOn = new(Command) ( this, light, & LightOn );
            ///good meaningful syntax for strategic interfaces
        Command() * livingRoomLightOff = new(Command) ( this, light, & LightOff );


        Command() * ceilingFanOn = new(Command) ( this, fan, & FanMed );

        Command() * ceilingFanOff = new(Command) ( this, fan, & FanOff );


        virtual( remote, Remote )->setCommand(0, livingRoomLightOn, livingRoomLightOff);

        virtual( remote, Remote )->setCommand(1, ceilingFanOn, ceilingFanOff);

        vPop();/// this is needed because the macro named this was not used
        vPop();/// after using virtual. since vPop() is called here the stack is
               /// still resolved.

               /// i would recommend using the control factory for
               /// the "control" that goes with command or use Control as an array
               /// type for accessing a command using a string.

        virtual( remote, Remote )->onButtonWasPushed(0);vPop();

        virtual( remote, Remote )->onButtonWasPushed(1);vPop();

        ///...

        virtual( remote, Remote )->offButtonWasPushed(0);vPop();

        virtual( remote, Remote )->offButtonWasPushed(1);vPop();




        cout(vtable)cend;



    #if 0
        delete(remote);

        delete(light);

        delete(fan);

        delete(door);
    #endif // DELETE
    }


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Template Method                                                       *
     * this is a level 1 object example (virtual object)                            *
     * - - SEE THE FUNCTION c01() - c06() THAT INCLUDES TEMPLATE METHOD AS IN THE- -*
     * - - CONTROL FACTORY'S TEMPLATE METHOD (GOOD ARRAY INITIALIZER) (BELOW) - -   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d07()
    {

		Tea * tea  =  new (Tea)(this);

		Coffee * coffee  =  new (Coffee)(this);

		cout("\nMaking tea...\n\n")cend;
		virtual ( tea, CaffeineBeverage ) -> prepare(this);


		cout("\nMaking coffee...\n\n")cend;
		virtual ( coffee, CaffeineBeverage ) -> prepare(this);

		cout(vtable)cend;


		delete(tea);

		delete(coffee);

    }



    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Facade pattern                                                        *
     * this is a level 1 object example (virtual object)                            *
     * - - streaming player gets registered with an overload heap and so therefore  *
     * is a level 2 object (factory object) (minimal) - -                           *
     * - - i would consider an object truly a level 2 object if it had an implemented*
     * virtual heap with a factory method "prototype" (typename) (which it doesn't  *
     * i don't think). the virtual heap overloads the interface and replaces the    *
     * classes virtual table. - -                                                   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d08()
    {
        register(StreamingPlayer);



      HomeTheater * homeTheater;

      try
      {

        TheaterLights * lights = new (TheaterLights)(this,

                                    new(String)(this, 2, "Theater Ceiling Lights"));

        Screen * screen = new (Screen)(this,

                                    new(String)(this, 2, "Theater Screen"));

        PopcornPopper * popper = new (PopcornPopper)(this,

                                    new(String)(this, 2, "Popcorn Popper"));

        Amplifier * amp = new (Amplifier)(this,

                                    new(String)(this, 2, "Amplifier"), null, null);
        /** NOT USED (STREAMING PLAYER USED) */
        CDPlayer * cd = new (CDPlayer)(this,

                                    new(String)(this, 2, "CD Player"),

                                        new(String)(this, 2, "[Title]"), 1, amp);

        Tuner * tuner = new (Tuner)(this,

                                    new(String)(this, 2, "AM/FM Tuner"), amp);

        StreamingPlayer * player = new (StreamingPlayer)(this,

                                    new(String)(this, 2, "Streaming Player"),

                                        new(String)(this, 2, "[Movie]"), amp);



        Projector * projector = new (Projector)( this,

                                    new(String)(this, 2, "Projector"), player);


        amp->tuner = tuner;    ///static

        amp->player = player;



        /**
         * THIS IS THE FACADE PATTERNS FACADE OBJECT
         */
        homeTheater =

                new (HomeTheater)(this, amp, tuner, player, cd,

                        projector, lights, screen, popper);

        virtual( homeTheater, HomeTheater )->watchMovie(this,

                            new(String)(this, 2, "Raiders of the Lost Ark"));

        virtual( homeTheater, HomeTheater )->endMovie(this);

      }
      catch(  Exception * e  )
      {
          cout(e)cend;

          ///delete(e);
      }
      ///delete(homeTheater);
        /**
            A GOOD THING TO FIND PRACTICE WITH WOULD BE TO USE THE HomeTheater CLASS

            DESTRUCTOR TO delete(object) ALL THE OBJECTS AND EVERYTHING ITSELF, SO

            AFTER delete(homeTheater) IS INVOKED, THERE SHOULD BE NO REMAINING OBJECTS

            INSIDE THE VIRTUAL TABLE. USING THE DESTRUCTOR, DELETING THE HomeTheater

            DELETES EVERYTHING ITSELF, THEN. THAT WOULD BE MY PERSONAL CHOICE FOR

            DEALLOCATING EVERYTHING.


            NOW THAT I TAKE ANOTHER LOOK, THE OBJECTS THAT TAKE MULTIPLE STRINGS

            IN THEIR CONSTRUCTORS SHOULD DEALLOCATE MULTIPLE STRINGS IN THEIR

            DESTRUCTORS, BEING THAT EACH OBJECT USES ITS DESTRUCTOR TO DEALLOCATE

            ITS STRING DESCRIPTION OBJECT.


            WHEN I LOOK AT THIS FACADE EXAMPLE I SEE OPPORTUNITY. OPPORTUNITY TO

            SHOW OFF THE COMPLEX CONSTRUCTOR LIKE THE NEXT EXAMPLE. THIS EXAMPLE,

            SHOULD USE A COMPLEX OBJECT FOR THE HomeTheater AND SOMETHING FOR A

            METHOD THAT USES THE COMPLEX HEAP INSIDE IT. THAT WOULD BE SIMILAR

            TO ANY OF THE volatile() FUNCTIONS INSIDE builder.h THAT WAY THE

            watchMovie() METHOD CAN BE DYNAMIC FOR THE AMOUNT OF OBJECTS IT USES.

            IF NOT THE class(ComplexHeap) THEN A STRATEGY HEAP class(StrategyHeap)

            MAYBE...  (a strategy heap of void(*)(void))
         */
        cout(vtable)cend;

        //delete(homeTheater);  //+deletes all

        cout(vtable)cend;


    }
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Complex Pattern (Complex C)  (...)                                    *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static void fanHigh( Object * );

    static void fanMed( Object * );

    static void fanLow( Object * );

    static void fanOff( Object * );

    explicit int fanGetSpeed( Object * ) ;

    /* note: use this (complex method) and function method
     *       for a full-proof runtime complex.
     */
    explicit int fanGetSpeed( Object * self )

    { return (**(size_t**)complex(self, "level")); }

    #define DESIGN_PATTERNS_COMPLEX_DEBUG 1
    #undef size_type
    #define size_type size_t //bytes
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Complex Pattern (Complex C) **//* 1 FOR HEAP PRINTING *//**           *
     * this is a level 3 object example (complex object)                            *
     *                                                                              *
     * this is where Factory C provides an implementation or un-implementation      *
     *                                                                              *
     * to a highly complex data type. a complex and its object(s), a complex object *
     *                                                                              *
     * is/has a dynamic-at-runtime class builder class or a factory table class     *
     *                                                                              *
     * using a: builder(FactoryMethod) that is an extended: class(FactoryMethod)    *
     *                                                                              *
     * anything like a class-implementation for this kind of datatype goes inside   *
     *                                                                              *
     * of a function or function(s). a datatype or a class of object, a level 3     *
     *                                                                              *
     * object (complex object).                                                     *
     *                                                                              *
     * - - further development of this kind of class building should cover every    *
     *                                                                              *
     * corner there is for when the class constructors starting with class builder  *
     *                                                                              *
     * register get re-used inside functions, so they should mostly be like         *
     *                                                                              *
     * extra prototypes or like the original register. that way functions can build *
     *                                                                              *
     * a part of a class and then use it that way since a function was called on a  *
     *                                                                              *
     * class object (complex object) - -                                            *
     *                                                                              *
     * - - there should probably be an easy way to demo things also before having   *
     *                                                                              *
     * to go back to all that ugly stuff used to implement the class builder. - -   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d09()
    {
    #if DESIGN_PATTERNS_COMPLEX_DEBUG
        default(20) = true;//print flag

        class(builder)(register)("Fan")(0);

        class(FactoryMethod) * obj = primary("Fan");

      #if 1
        //nothrow((!instance))(class(ComplexHeap));
      #else
        class(builder)(register)("(!instance)");

        class(builder)(multimap)(false)("(!instance)")
            (class(ComplexHeap)) (0);
      #endif // 0 DEBUG_TOOL
    #else //

        /* note: this adds a class to the factory table
         */
        class(builder)(register)("Fan");

        //struct(abort)("Fan") ;//critical
    #endif // 0
    #if 0 //
        class(builder)(multimap)(false)("Fan")
            (class(VirtualHeap)) (0);

        class(builder)(multimap)(true)("Fan")
            (class(VirtualHeap))("type")
            (0,&class(Type),"cstring(*)()");

        class(builder)(multimap)(true)("Fan")
            (class(VirtualHeap))("init")
            (1,&volatile(Init),"Object*(*)(Object*,...)");

        class(builder)(multimap)(true)("Fan")
            (class(VirtualHeap))("dtor")
            (2,&volatile(Dtor),"void(*)(Object*)");

    #endif // ALREADY_ADDED_BASIC_VTO_PACKAGE
        /* note: these are registrations (interfaces) getting added,
         *       the cases below are for the build constructor
         *       (at the end):
         *
         *       case 0: == case(default)
         *       case 1: == case(copy)      , & Class(Interface)
         *       case 2: == case(assign)    , ptr1, ptr2
         *
         *       also: assign for heaps has only one container
         *             assignment. interface is fetched based on
         *             interface registration typeid (int_id)
         *
         *       when these are re-used is just assures that
         *       the interface has been added. so if already
         *       added then do nothing at case 0 (but not 1 or 2).
         */
        class(builder)(multimap)(false)("Fan")//(concrete #1)
            (class(FactoryTable))(0);

        class(builder)(multimap)(false)("Fan")//(concrete #2)
            (class(ComplexHeap)) (0);


        class(builder)(multimap)(false)("Fan")
            (class(SubjectTable))(0);




        class(builder)(multimap)(false)("Fan")
            (class(StrategyHeap))(0);




        class(builder)(multimap)(false)("Fan")
            (class(PolymorphHeap))(0);//

    #if DESIGN_PATTERNS_COMPLEX_DEBUG
        printBuilderHeap( primary("Fan")[4] );
    #endif //

        /* note: these are cases getting added to the
         *       strategy heap added. same as multimap
         *       for true/false just either build
         *       constructor for an interface or the
         *       info constructor.
         *
         *       when these are re-used it just re-initializes
         *       the value to the same value, so if not used
         *       then it will add them too  : D
         */
        class(builder)(multimap)(true)("Fan")
            (class(StrategyHeap))("off")( & fanOff );

        class(builder)(multimap)(true)("Fan")
            (class(StrategyHeap))("low")( & fanLow );

        class(builder)(multimap)(true)("Fan")
            (class(StrategyHeap))("med")( & fanMed );

        class(builder)(multimap)(true)("Fan")
            (class(StrategyHeap))("high")( & fanHigh );

        /* note: this is not the class builder multimap but
         *       the actual multimap used with a class builder
         *       class (complex). this will call each of the
         *       cases specified by the class builder multimap.
         *       the 0 getting passed in is for a virtual table
         *       object once we have one... func_id() var_id()
         */
        ((execPtr*)class(multimap)(true)("Fan")
        (class(StrategyHeap))("med"))[1](0);

        ((execPtr*)class(multimap)(true)("Fan")
        (class(StrategyHeap))("low"))[1](0);

        ((execPtr*)class(multimap)(true)("Fan")
        (class(StrategyHeap))("high"))[1](0);

        ((execPtr*)class(multimap)(true)("Fan")
        (class(StrategyHeap))("off"))[1](0);



        /* note: this allocates a complex object a trusty
         *       virtual table object, it is as big as the
         *       total amount of bytes added together from
         *       each data member in the complex heap
         *       (which is nothing atm).
         */

        Object * fan = factory("Fan")(this)   ;



        /* note: this is for upgrading/updating each object
         *       added. don't forget this is for each location
         *       where you have a virtual table object of the
         *       complex (class) type (and if u want auto update).
         *
         *   so:
         */
        class(builder)(auto)(typeid(fan))(& fan);


        //auto(typeid(fan))


        size_type bytes = bytes("Fan");

        printf("\nbytes: %u\n", bytes);



    #if 0
        /* note: -update
         */
        class(builder)(multimap)(true)("Fan")
        (class(ComplexHeap))("level")( 0, sizeof(void*), "int*" );

        class(builder)(multimap)(true)("Fan")
        (class(ComplexHeap))("location")( 1, sizeof(void*), "String*" );
    #else
        /* note: this will be similar just copy each object as much as
                 can and treat complex objects as arrays of vto's (virtual
                 table objects). add data members to the complex heap
                 +update the objects of the subject table.


                 +update
         */
        class(builder)(complex)("Fan")
            (int, "level") ;

        class(builder)(complex)("Fan")
            (String, "location") ;

    #endif // 0 AUTO_UPDATE 1

        printf("\nbytes: %u\n", bytes("Fan"));


        multimap(true)("Fan")("class(ComplexHeap)");
        if( !map("level") )
        {
            printf("not found.\n");
        }
        else
        {
            printf( "found: %s\n", multimap(true)("Fan")("class(ComplexHeap)")("level")[0] );
        }


        /* note: initialize each datamember.
         */
        class(complex)
        (fan, int, "level") = new(int)(this, -1) ;

        class(complex)
        (fan, String, "location")
        = new(String)(this, 2, "bedroom") ;


        cout("fan level: ")
        (class(complex)(fan,int,"level"))endl cend;

        *class(complex)
        (fan, int, "level") = 1;


        cout("fan level: ")
        (class(complex)(fan,int,"level"))endl cend;



        cout("fan location: ")
        (class(complex)(fan,String,"location"))endl cend;


        /* note: now we want another object and u can see that both
         *       data members go into the constructor and in
         *       alphabetical order. also since we already have an
         *       object we can use typeid.
         */
    #if 1
        Object * other_fan = factory(typeid(fan))

            (this, new(int)(this, 0), new(String)(this, 2, "basement"));
    #else
        factory(typeid(fan));
        Object * other_fan = this; //no ctor
    #endif // 1

        /* note: add this one to the subject stack just in case our
         *       complex changes again (so all added). this is an
         *       important decision as whether to add all the objects
         *       to the subject stack in the subject table or not.
         *       the permanence or impermanence of the class datamember
         *       (complex) heap and the life duration of the object
         *       are all factors here. dont forget that complex and
         *       function their class builder versions use this stack.
         */
        class(builder)(auto)
        (typeid(other_fan))(& other_fan);
        /* also: to continue on that development, this is for an automatic
         *       pointer to have it's address given to the subject stack
         *       meaning that pointer is unloaded and becomes invalid, ...
         *       (an automatic local pointer)(maybe consider a singleton)
         */


        cout("other: ")
        (class(complex)
         (other_fan,int,"level"))endl cend;

        *class(complex)
        (other_fan,int,"level") = 2;

        cout("other: ")
        (class(complex)
         (other_fan,int,"level"))endl cend;



        cout("fan location: ")
        (class(complex)
         (other_fan,String,"location"))endl cend;

        /* note: this shows how typeid returns and multimap
         *       uses the class name for the complex not just
         *       "class" literally even tho the type() method
         *       itself will only return "class". this is a
         *       by-product of using a runtime class instead of
         *       a struct class (compile-time). typeid & multimap
         *       settle any differences between the two. also
         *       this is the reason for a btable thats an adapter
         *       table of interfaces and typeids. so when u specify
         *       a class(Heap) it uses either class or builder,
         *       when u specify builder it only uses builder
         *       just like for the vto interface in the heap,
         *       you can use its ClassName or class, just if u
         *       specify class in the class factory method, that
         *       is only for returning the vto for a builder class.
         */
        cout endl("typeid:")(typeid(fan))endl("type:")
        ( ((typePtr*) multimap (false)
        (typeid(fan))(typeid(fan)))[0]() )endl cend;

        cout endl("typeid:")(typeid(fan))endl("type:")
        ( ((typePtr*) multimap (false)
        (typeid(fan))("class"))[0]() )endl cend;


    #if 0
        /* note: -update
         */
        class(builder)(multimap)(true)("Fan")
        (class(VirtualHeap))("getSpeed")
        (3, & fanGetSpeed, "int()(*)(Object*)");
    #else
        /* note: this will update every object for its interface
         *       added to the class subject object table after
         *       adding to the virtual heap, after the interface
         *       gets reallocated.
         *
         *       +update
         */
        class(builder)(function)("Fan")
            (int()(*)(Object*), "getSpeed", & fanGetSpeed);

        int level = class(function)
            (fan,int()(*)(Object*),"getSpeed")(this) ;

        cout("getSpeed(): %u\n", level)cend;//(printf)
    #endif // 0 AUTO_UPDATE 1


        /* note: this will unload all the objects leaving scope
         *       this will not however, delete the objects
         *       themselves. these are the object locations and
         *       so use a strategy heap of objects if you want
         *       the objects stored strategically and accessed
         *       using a factory method. place the object locations
         *       on a stack for what ones get updated and during
         *       the life of a function in the middle of being called
         *       and so a function on the call stack. because all
         *       local pointers for objects are unloaded from the
         *       stack at the end of the function, they become invalid
         *       after. if you use a singleton, here its location can
         *       be assigned here with class builder auto method, or
         *       if the object locations are really just in a strategy
         *       heap, then that can be a powerful combo is putting
         *       their locations on the auto (subject) stack as they
         *       are allocated into the strategy heap to be accessed
         *       strategically between the life of any/every function.
         *
         *       the fully self contained "datatype" or "class".
         *
         */
        class(builder)(auto)(typeid(fan))(delete);//unload all

        delete(fan);//
    #if 0 // 1
        destroy();

        cout(vtable)cend;
    #endif // 1 TO_DELETE_ALL_(DESTROY) STRATEGICALLY


    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Builder/Complex pt.2                                                  *
     * i am going to try to orient this function towards Builder over Complex so    *
     * this can be the workspace function that print/access heaps like a "builder"  *
     * that would be similar to a program that uses an editor, but oriented a little*
     * differently. this should even be its own console program that would be the   *
     * factory table builder i promised myself. keep in mind the polymorphism       *
     * involved with cout between output types and a windowed program would then    *
     * be eassiepiesice for me just practice printing to a console with an iterator *
     * here.                                                                        *
     *                                                                              *
     * (you might want an interface/info iterator or factory table iterator that    *
     * iterates a sorted set deallocating nodes as it goes)                         *
     *                                                                              *
     * by oriented a little differently, i mean that its more centralized on having *
     * a table of datatypes including things like strategy heaps for objects.       *
     * (so its just looking at the factory table and finding things to do).         *
     * remember override is another thing to put beside an open factory table.      *
     *                                                                              *
     * now all this function needs is a real program where you "build" the program  *
     * from the comfort of the factory table. maybe start with an override here     *
     * and there, include strategy heaps with objects, class(ControlHeap) comes     *
     * to mind. thats all i can think of for now. obviously, this function is       *
     * supposed to ask if you would like to create a class and so you use the       *
     * existing factory table classes here to "pick-and-pull" a new class.          *
     *                                                                              *
     * TODO: write struct(print)(typeid(obj)) ( you know what that does ;D )        *
     * (struct print would print a structclass to a file for you, "class builder")  *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d10() ///Builder/Complex
    {default(26) = true;//ftable print dtor
        /* for tomorrow:

            clear the typeid stack (inside class builder multimap)

            debug.


           for tomorrow:

            implement the heap iterator.
         */
        while(true)
        {
            cout(ftable)cend;

            String * clss = new(String)(this, 3, 50);


            cout endl endl
                ("pick a class ?")endl("(q for quit):")endl cend;
            cin(clss)cend;//


            if(string(equal)( *(string*)
                complex(clss, "array") , "q" )){break;}

            while(true)
            {
                cout endl cend;

                Iterator * regs = iterator(primary( *(string*)
                complex(clss, "array") ));

                while( iterator(regs) )
                {
                   cout(((typePtr*)ref(regs))[0]())endl cend;
                }
                cout endl cend;

                String * reg = new(String)(this, 3, 50);

                cout endl endl
                    ("pick a registration ?")endl("(q for quit):")endl cend;
                cin(reg)cend;//

                if(string(equal)( *(string*)
                    complex(reg, "array"), "q" )){break;}


                Iterator * rows = iterator(multimap(false)(*(string*)
                    complex(clss, "array"))(*(string*)
                        complex(reg, "array")));

                size_t count = 0;
                while( iterator(rows) )
                {
                   cstring key = ref(rows)[0];
                   size_t size = string(size)(key);


                   cout(key)cend;

                   if( size >= 25 )
                   {
                       cout endl cend;
                       count = 0;
                   }else
                   {
                       for( size_t i = 0 ; i < 25 - size ; i ++ )
                        {cout(" ")cend;}
                        ++count;
                   }
                   if( count > 3 ){cout endl cend;count = 0;}
                }
                cout endl cend;

                deaccumulate(regs);
                delete(reg);
                deaccumulate(rows);
            }
            delete(clss);
        }



    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief struct abort! EXTRA EXTRA READ ALL ABOUT IT                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d11()
    {
        printHeap( primary("String")[4] );


        struct(abort)("String");

        struct(abort)("String");
        struct(abort)("VirtualTable");
        struct(abort)("FactoryTable");
        struct(abort)("AdapterTable");
        struct(abort)("AdapterTable");
        struct(abort)("AdapterTable");

        class(builder)(register)("A")(0);
        class(builder)(register)("B")(0);
        class(builder)(register)("C")(0);
        class(builder)(register)("D")(0);
        class(builder)(register)("E")(0);
        class(builder)(register)("F")(0);
        class(builder)(register)("G")(0);
        class(builder)(register)("H")(0);
        class(builder)(register)("I")(0);
        class(builder)(register)("J")(0);
        class(builder)(register)("K")(0);
        class(builder)(register)("L")(0);
        class(builder)(register)("M")(0);
        class(builder)(register)("N")(0);
        class(builder)(register)("O")(0);
        class(builder)(register)("P")(0);
        class(builder)(register)("Q")(0);
        class(builder)(register)("R")(0);
        class(builder)(register)("S")(0);
        class(builder)(register)("T")(0);
        class(builder)(register)("U")(0);
        class(builder)(register)("V")(0);
        class(builder)(register)("W")(0);
        class(builder)(register)("X")(0);
        class(builder)(register)("Y")(0);
        class(builder)(register)("Z")(0);


        struct(abort)("unsigned");

        class(builder)(register)("Character")(1, primary("char"));

        cout endl endl cend;


        printBuilderHeap( primary("String")[4] );





        cout(ftable)cend;

        class(builder)(drop)("X");
        class(builder)(drop)("Y");
        class(builder)(drop)("Z");

        class(builder)(drop)("String");

        register(String);
        //struct(abort)("class(Builder)");
    }


    explicit void d12()
    {

    }



    explicit void d13()
    {

    }







    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d14(){}

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d15(){}

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void d16(){}


    /**********************************************************************
     * non-object oriented misc. (begin)                                  *
     **********************************************************************/
    /**********************************************************************
     * food for thought (array time)                                      *
     **********************************************************************/
    explicit void t01()
    {
        char * queue = (char *) allocate(sizeof(char) + 31);

        /**
        IF THIS WAS OBJECT-ORIENTED THEN,

        char ** IS string * AND

        string * queue = new(string)(this, size) ;

           (*queue) += 15

           (*queue)[index] =

           = (*queue)[index]



        delete(queue) ;
         */


        queue += 15; ///now half the data is in the negative index range:


        queue[ -5 ] = 'a';

        printf( "%c\n", queue[ -5 ] );


        ///or even just 1 based indexing:

        queue -= 15;///reset

        queue -= 1;

        queue [ 1 ] = 'b';

        printf( "%c\n", queue[1] );


        queue += 1;///reset to deallocate properly

        deallocate(queue);
    }

        /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /**                                                          *
         *                    typemax(type) example                  *
         *                                                           *
         *              returns the maximum allowed value            *
         *               of a size-type signed or unsigned           *
         *                                                           */
        /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void t02()
    {
        unsigned   char          max1    =    typemax(unsigned char);

        unsigned   short         max2    =    typemax(unsigned short);

        unsigned   int           max3    =    typemax(unsigned int);

        unsigned   long int      max4    =    typemax(unsigned long int);


        printf("max 1: %u\n",    max1  );

        printf("max 2: %u\n",    max2  );

        printf("max 3: %u\n",    max3  );

        printf("max 4: %llu\n",  max4  );

        int a =  (char) ( pow( 2, sizeof( char ) * 8 ) - 1 );

        int b =  (unsigned char)

                 ( pow( 2, sizeof( unsigned char ) * 8 ) - 1 );

        printf("manual: %d (signed)\n", a); //signed r/2 - 1

        printf("manual (u): %d\n", b);

        printf("manual: %llu\n", 2*2*2*2*2*2*2*2* 2*2*2*2*2*2*2*2*

                                 2*2*2*2*2*2*2*2* 2*2*2*2*2*2*2*2*

                                 2*2*2*2*2*2*2*2* 2*2*2*2*2*2*2*2*

                                 2*2*2*2*2*2*2*2* 2*2*2*2*2*2*2*2 - 1);

    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief asm or the C assembly keyword (supposedly from C++)                   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void t03()
    {   /// /// /// /// /// /// /// ///

        int src = 1;
        int dst;


        asm(  "mov %1, %0\n\t"
              "add $1, %0"
              : "=r" (dst)
              : "r"  (src)  );


    }   /// /// /// /// /// /// /// ///

    /**********************************************************************
     * C-based language components                                        *
     **********************************************************************/
    /**********************************************************************
     * clibrary.h extras                                                  *
     **********************************************************************/
    explicit void t04()
    {
        if(true)then

            printf( "%d\n", 1234 );/**IF U LIKE, THE REST OF IT IS FOUND
                                      IN Library/clibrary.h AND Standard/iso646.h*/
        endif
    }

    explicit void t05(){}

    /**********************************************************************
     * just a reminder that the vtable also was having memory allocation  *
     * problems because of this function (malloc) or allocate()           *
     **********************************************************************/
    explicit void t06()
    {                       //199 999 963
        int** array = allocate(199999963 * sizeof(int*));//too much?

        printf("%d", array != nullptr);               //i assume its a hardware
    }                                                //issue when no more memory
                                                    //can be allocated here

    /**********************************************************************
     * security requires that the password be a variable so it can be     *
     * different every run time (or access), therefore i am using the     *
     * vtables address to create a string key the factory table can use   *
     * for either a class or interface typeid at either the factory       *
     * tables factory method or the class factory method returned from    *
     * the first factory method (the factory tables factory method).      *
     **********************************************************************/
    explicit void t07()
    {
        string * x = new(string)(this, 11);

        string * y = new(string)(this, 11);

        string * z = new(string)(this, 11);




        void * p = vtable ;

        void * q = ftable ;

        void * r = atable ;




        ItoaHex((*x), p);

        printf("string:             %s\n", (*x));

        printf("pointer (hex):      0x%x\n\n", p);


        ItoaHex((*y), q);

        printf("string:             %s\n", (*y));

        printf("pointer (hex):      0x%x\n\n", q);


        ItoaHex((*z), r);

        printf("string:             %s\n", (*z));

        printf("pointer (hex):      0x%x\n\n", r);



        printf("x: 0x%x\n", x);

        delete(x);

        printf("y: 0x%x\n", y);

        delete(y);

        printf("z: 0x%x\n", z);

        //delete(z);need

        printf("\n...\n");


        char str[] = "Temporary";//password


        printf( "str: %s\n", str );

        printf( "hash: 0x%x\n", _hash(str) );

        ItoaHex((*z), _hash(str));

        printf( "PassNumber: %s\n", (*z) );


    }

    /**********************************************************************
     * typeid check and misc. string sort order check                     *
     **********************************************************************/
    explicit void t08()
    {
        if( string(equal)( "_hash32", "_hash" ) )
        {
            printf("equal\n");
        }
        else
        {
            printf("not equal\n");
        }

        if( string(greater)( "class", "class(VirtualHeap)" ) )//
        {
            printf("greater\n");
        }
        else
        {
            printf("not greater\n");
        }

        if( string(greater)( "class(VirtualHeap)", "class" ) )//
        {
            printf("greater\n");
        }
        else
        {
            printf("not greater\n");
        }


        printf( "S index: %d, s index: %d\n", 'S', 's' );

        printf( "_ index: %d, 0 index: %d\n", '_', '0' );
    }

    /**********************************************************************
     * problem with flags for try/throw/catch and multimap...             *
     **********************************************************************/
    explicit void t09()
    {
        bool * flag1 = new(bool)(this, true);

        bool * flag2 = new(bool)(this, false);


        fPush(flag1);


        printf( "flag: \n", fPop() );

        fPush(flag2);


        printf( "flag: \n", fPop() );

    }




    explicit void t10()
    {
        Object * obj(1) = allocate(1),

            * obj(2) = obj(1);


        deallocate(obj(1));

        deallocate(obj(2));//terminate?

    }

    #define a 1
    #define a() 2
    /*
    if i can make an observation, it seems like if both are macros then one
        undefines the next... but if the first one is a typedef... (ClassName)

     */

    explicit void t11()
    {
        printf("a(): %u\n", a());
        //printf("a: %u\n", a);

    }

    //#undef a

    explicit void t12()
    {
        printf("a(): %u\n", a());
        //printf("a: %u\n", a);

    }


    explicit void t13()
    {

        FILE * f = fopen("/tmp/test.txt", "w+");


        fprintf(f,"testing file");

    }



    explicit void t14()
    {
        Object * * o = allocate(8);

        o[0] = & class(Type);

        o[1] = & class(Init);


        printf( "before reallocate\n" );
        printf( "address: 0x%x\n", o );

        o = reallocate(o, 12);


        if( o[0] == & class(Type) ){printf("check\n");}

        if( o[1] == & class(Init) ){printf("check\n");}

    #if 0
        o[0] = & class(Type);

        o[1] = & class(Init);
    #endif // 0
        o[2] = & class(Dtor);

        printf( "after reallocate\n" );
        printf( "address: 0x%x\n", o );
    }

    #include <stdio.h>

    #include <stdlib.h>

    #include <unistd.h>

    #include <pthread.h>


    static void * myFun(void *);

    explicit void t15()
    {
        pthread_t thread_id;

        printf("before thread, ...\n");

        pthread_create(&thread_id, null, /*&*/ myFun, null);

        pthread_join(thread_id, null);

        printf("after thread, ...\n");

        exit(0);
    }

    explicit void * myFun(void * vargp)
    {
        //sleep(1);
        printf("...\t");
        return 0;
    }


    explicit void t16(){}

    /**********************************************************************
     * non-object oriented misc. (end)                                    *
     **********************************************************************/


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Control example      (initial preparation)                            *
     *                                                                              *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
  #if 0
    typename(Stk)(bool, typename(Iter)(bool, typename(N)(bool))) ;

    typename(Stk)(DataType, typename(Iter)(DataType, typename(N)(DataType))) ;
  #endif // 0
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Control example (02/04/2022)                                          *
     *                                                                              *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static int func( size_type );
    explicit void c01() /**Control**/
    {
        Array(Factory) * array = new (Array(Factory))(this, 4);

        default(0) = false; /*control() flag*/
        default(1) = true;  /*command or factory*/
        default(2) = false; /*command mode, false for iterate*/
        default(3) = true;  /*primary or secondary vtable for factory array*/
        default(4) = true;  /*include default, false for not included*/
        default(5) = false; /*template method*/
        default(6) = false; /*return object*/
        default(7) = true;  /*initializer flag*/

        using template(array)

            (ControlStart(I), 0)(ControlCheck(I), new(Stk(bool))(this)) //

            (ControlBlock(I), new(Stk(int))(this))(ControlProbe(I), 0)cend ;//

        default(7) = false;

        size_type  i  =  0 ;
                        //                (I*) == i      & i == I
        try
        {
            using template(array) (& i) (i < 10) (& func) (++i) cend;//auto
        }
        catch(  Exception * e  )
        {
            printStackTrace(e);//obsolete

            delete(e);
        }
    }
    explicit int func( size_type index )
    {default(0) = false; return printf("\nindex: %d\n",index);}


    static int           ControlBlock(Temp)              ( cstring );
    explicit int           ControlBlock(Temp)       ( cstring cstr )
    {
        if( !jumpControlFlag(I) )
        {
            return printf(cstr);
        } return 0; }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Command example      (initial preparation)                            *
     *                                                                              *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/


    explicit void fanHigh( Object * self )
    { printf("\nFan is on high.\n"); }

    explicit void fanMed( Object * self )
    { printf("\nFan is on med.\n"); }

    explicit void fanLow( Object * self )
    { printf("\nFan is on low.\n"); }

    explicit void fanOff( Object * self )
    { printf("\nFan is off.\n"); }


    static Object * _objt[1] = {0};  ///single slot

    static Command() CommandArr[4] =

    {
       { {}, _objt, &fanHigh },

       { {}, _objt, &fanMed },

       { {}, _objt, &fanLow },

       { {}, _objt, &fanOff } ,

       { {}, nullptr, nullptr }    };///...

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Command example (02/04/2022)                                          *
     *                                                                              *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void c02()
    {
        Array(Command) * array = new(Array(Command))(this, 4);

        Fan * fan = new(Fan)(this, nullptr);


        /// package defaults because console runs
        /// cout with its defaults
        default(0) = false;
        default(2) = false;///Command off for init (not anymore)
        default(3) = true;
        default(4) = true;
        default(5) = false;
        default(6) = false;
        default(7) = true; /// <---- init on


        default(1) = false; ///FactoryFlag NULLIFIES DEFAULT 2


        using template(array)

            (fan, &fanHigh)(fan, &fanMed)

            (fan, &fanLow)(fan, &fanOff)cend ;

        default(2) = true;  ///CommandFlag - NULLIFIED -
        default(7) = false; /// initializer off
    ///                                        |
    ///                                        |
        try ///                               \ /
        {                    ///               *
            using template(array) (0) (1) (2) (0) (3) cend;/**Command**///goto

            continue(+)(3)(2)(1) cend;

            continue(-)(0) cend;

            continue()(0) cend;

        }
        catch(  Exception * e  )
        {
            printStackTrace(e);//obsolete

            delete(e);
        }
        delete(fan);

    }


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Factory example      (initial preparation)                            *
     *                                                                              *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    # define double(member)double ## member

    # define doubleIter(Member)doubleIter ## Member

    # define doubleStk(Member)doubleStk ## Member
                                                ;
    ///typename (Object) (float);

    //typename(Object)(double);
    /**
    DONT FORGET TO RETURN double() FROM A FUNCTION THAT IS

    SUPPOSED TO RETURN double AND CANT, WHEN ITS A FUNCTION

    POINTER IT DOES MATTER.  double (*p)(...)  X

                             double () (*p)(...) YES
     */
    typename (N) (double);

    typename (Iter) (double, );

    typename (Stk) (double, );

    # define Double(Member)Double ## Member
    typedef struct {double base;} Double;///StructDouble

    typedef struct {struct class(VirtualTable) base;
    } Double(VirtualTable);

    static Double * Double(Init)( Double *, ... );
    static cstring  Double(Type)( void );

    explicit Double * Double(Init)( Double * self, ... )
    { if(!self){return 0;}
        Stack * stack = control();
            self->base = arg(stack, double);
        return self;}

    explicit cstring  Double(Type)( void ){return"Double";}

    static Double(VirtualTable)
        Double(Interface) =
    { { &Double(Type), &Double(Init), 0 } };

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Factory example (02/04/2022)                                          *
     *                                                                              *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    explicit void c03()
    {
        Array(Factory) * array = new (Array(Factory))(this,1);

        Stk(double) * stk = new(Stk(double))(this);

        default(0) = false;//Control
        default(1) = true; //Factory
        default(2) = false;//Command
        default(3) = true; //Strategy
        default(4) = true; //Default
        default(5) = false;//Template
        default(6) = false;//Terminate
        default(7) = true; //Initial

        using template(array)
            (&double(Init), stk)cend;

        default(2) = true;//Command

        default(7) = false;

        new(double);new(double);
        new(double);new(double);
        new(double);new(double);
        new(double);new(double);
        new(double);new(double);
        new(double);new(double);

        try
        {
            using template (array)

                (this, .99)       (this, .79)
                (this, 1.29)      (this, 1.99)
                (this, .99)       (this, .79)
                (this, 1.29)      (this, 1.99)
                (this, .99)       (this, .79)
                (this, 1.29)      (this, 1.99) cend;


            size_t length = double(Stk)(Size)(stk);

            printf("length: %u\n", length);


            for(int i = 1; i <= length; i++)
            {
                printf( "%d:%.2f\n", i, ** (double**) virtual

                       ((*array)[0].val, Container)

                        -> at( this ) );


                    virtual ((*array)[0].val, Container) -> remove( this );
            }

        }
        catch(  Exception * e  )
        {
            printStackTrace(e);//obsolete
        }
        cout(vtable)cend;
    }


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Console example (cout)                                                *
     *                                                                              *
     *     - - this one encapsulates the Factory example inside a function - -      *
     *          - - and puts an identifier label on top of it (cout). - -           *
     *                                                                              *
     * MUST DEBUG STANDARD (SIMPLY DOESNT WORK) MUST ADD CASES TO PRINTF, SCANF     *
     * SEE: COUT.H AND CIN.H     (FIXED FINALLY COUT)  (DONE)                       *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*
        IF THE CONSOLE OUT OBJECT object(cout) IS INITIALIZED TO NULL THEN COUT

        PRINTS TO A CONSOLE. PASSING A NEW FILE OBJECT new(File)(this,...) INTO

        COUT WILL INITIALIZE THAT OBJECT. ALSO A STRING OBJECT USING ITS DEFAULT

        CONSTRUCTOR IS FOR USE WITH COUT/CIN ONLY BECAUSE A GLOBAL FLAG default(x)

        GETS RAISED AND SO CIN/COUT EXPECTS A STRING OBJECT THEN new(String)(this, 0)

        PASSING DELETE IN WILL DELETE THE CIN OR COUT OBJECT. WHAT THAT OBJECT IS

        INITIALIZED TO WILL DETERMINE WHERE COUT PRINTS TO POLYMORPHICALLY. SO NOT

        ONLY DO THE PARAMETERS GET PASSED STRAIGHT INTO printf WHEN ITS NOT A VIRTUAL

        TABLE OBJECT PASSED BUT WHEN IT IS A VIRTUAL TABLE OBJECT PASSED, THE CLASS

        CONSOLE TABLE, OR FILE TABLE, OR STANDARD TABLE ARE USED BY THE REGISTERED

        CLASS. IN FACTORY C WE REGISTER OUR DATATYPES register(Class) AND drop(Class)

        BEFORE THEY ARE USED IN TOO MANY DYNAMIC OVERLOADS IT PAYS TO RESTRICT HOW

        DYNAMIC IT REALLY IS IN PLACES BEFORE LETTING EVERYTHING TIP OVER. JUST TRY

        TO IMAGINE HOW TALL THE CLASS BUILDER IS WHEN I SAY THAT. BUT ANYWAYS, THIS WAS

        ABOUT COUT. DON'T FORGET THAT IT CAN BE USED TO BUILD A STRING USING STANDARD

        PRINTING TO CONSOLE AT THE SAME TIME, FOR A DEPLOYED PROGRAM, JUST TRAIN YOUR

        CONSOLE WINDOW TO SIT BEHINDD THE OTHER WINDOW, IF ITS THERE AT ALL. (COUT).\
     */
    explicit void c04()
    {

        if( string(equal)( "", "" ) ){cout("[empty]")cend;}

        try
        {
            int * i = new (int)(this, -123);

            bool * flag = new (bool)(this, false);

            uintptr_t * p = new (uintptr_t)(this, 0x123);


            cout(i)(", flag: ")(flag)(", p: ")(p)(".")endl
            (new(File)(this,0,"testA.txt","a")) // "w+"
            ("testing file: testA.txt")endl (delete)
            (new(File)(this,0,"testB.txt","w+"))
            ("testing file: testB.txt")endl (delete)
            (new(String)(this,0))("testing standard:1")endl
            ("testing standard:2")endl("testing standard:%d",3)endl cend;//
            // ControlFactory(00-23) (DEBUG) good work //

            /* note: prove that standard built a string
             */
            printf("object(cout): %s\n",
                (*(string*)complex(object(cout),"array")) );


            cout (delete) endl("testing console")("\n")
            (new(String)(this,0))(vtable) endl cend;

            /* note: now prove that again for vtable
             */
            printf("object(cout): %s\n",
                (*(string*)complex(object(cout),"array")) );

            cout(delete)endl("...done")("\n")cend;




        }

        catch( Exception * e )
        {
            cout(delete)(e)cend;//full overload range across exception classes

            delete(e);
        }

    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Template Arrays example (10/06/2022)  (initializer like basic array)  *
     *                                                                              *
     * This is the template method example (one thats an initializer)               *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
  #if 0
    #undef  initializer_list
    #define initializer_list(init) \
    \
            Template = & init ;\
    \
            default(4) = false; \
    \
            default(5) = true;  \
    \
            /**cbegin();**/\
    \
            using template


    explicit void TemplateInt( Object * p )
    {
        (((int*)Controller)[0]) = (int) ((p));

        Controller += 1;}

  #endif // USING_H_INCLUDES

  /* this should almost go into clibrary.h
   */
  #define typesize(type) sizeof(type) // ;D

    /* note: this is for implementing
     */
    #if 0
        #undef size_type
        #define size_type size_t

        #define classArray(Member)\
        classArray ## Member
        typename(Array)(class);
    #endif // 0
    explicit void c05()
    {

        try
        {

            Array(int) * array = new(Array(int))(this, 21);

    #if 0 // 1
            template(&TemplateInt);
          /*cbegin(array)*/
            using template(array)(12)(54)(45)(78)(32)(43)(54)
                (54)(57)(43)(34)(56)(67)(56)(56)(43)(34)(56)(67)
                (56)(56)cend;
    #else
            initializer_list(TemplateInt)(array)(12)(54)(45)(78)
                (32)(43)(54)
                (54)(57)(43)(34)(56)(67)(56)(56)(43)(34)(56)(67)
                (56)(56)cend;
    #endif // SYNTAX_SUGAR__INITIALIZER__
            for(size_t i = 0; i < 21; i++)
            {
                printf("%d ", (*array)[i] );
            }


        }
        catch ( Exception * e )
        {
            printStackTrace(e);//obsolete
        }

    }


    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Control example (mm/dd/yyyy)                                          *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    explicit void c06()
    {}

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief Builder example (mm/dd/yyyy)                                          *
     *                                                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    explicit void c07()
    {}

    explicit void c08()
    {}

    explicit void c09()
    {}

    explicit void c10()
    {}

    explicit void c11()
    {}

    explicit void c12()
    {}

    explicit void c13()
    {}

    explicit void c14()
    {}

    explicit void c15()
    {}

    explicit void c16()
    {}


/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
         *   <OOC library that defines void-Oriented essentials in C (C+)>   *
         *                                                                   *
         * Copyright (C) <2017 - 2021>  <Christopher Posten>                   *
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
         * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
         * <library that defines Object-Oriented essentials in C (Factory C)>*
         *                                                                   *
         * Copyright (C) <2017-2022> <Christopher Posten>                    *
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
         *                                                                   *
         * The author may be contacted by email at:   <jb.bee250@gmail.com>  *
         * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
/* [ctrl] - z for undo, [ctrl] - x for cut, [ctrl] - c for copy, [ctrl] - v for paste*/
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///




#endif // WORKSPACE_H_INCLUDED
