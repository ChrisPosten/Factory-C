#ifndef FACTORYOBJECT_H_INCLUDED
#define FACTORYOBJECT_H_INCLUDED
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
[ 12 ]graduate;
#endif // TAG
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    #include "../Factory/fTable.h"

    //#include "../Template/defineFactoryObject.h"//for primitives/arrays

    //#include "../Template/defineHeap.h"//for the builder heaps

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**|| THE FACTORY C FACTORY TABLE EXTENDED IMPLEMENTATION || *
     *          FOR THE FACTORY OBJECT (STRUCTCLASS PT.2)        *
     *                                                           *
     *                by Willy (02/01/2022)(03/05/2022)          *
     *                         (04/05/2022)                      *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* ||   C FACTORY OBJECT (C CENTRAL OVERLOAD FUNCTIONS)   || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         *   THIS IS THE FACTORY OBJECT FILE FOR FACTORY C   *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*                  factory object                   */
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         *THIS IS THE FACTORY TABLES EXTENDED IMPLEMENTATION *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         * A FACTORY TABLE CLASS MUST HAVE ITS METHODS TABLE *
         *                                                   *
         * FILLED OUT AND MUST BE AT SOME CERTAIN LEVEL OF   *
         *                                                   *
         * EXTENSION FROM THE CLASS VIRTUAL TABLE. NOT ONLY  *
         *                                                   *
         * THAT BUT THEY MUST MAKE A control() CASE LIKE THEY*
         *                                                   *
         * WOULD FROM A FACTORY SLOT IN THE CONTROL FACTORY  *
         *                                                   *
         * BEING THAT THEY ARE IMPLEMENTED AS FACTORY        *
         *                                                   *
         * FUNCTIONS THEMSELVES (METHODS A.K.A. INTERFACE)   *
         *                                                   *
         * (RE-LABELED AS VIRTUAL HEAP class(VirtualHeap))   *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*
        TODO: implement a heap of factory method addresses

              and type functions for their typeid(s)

        note: this must be a builder heap.


        this is the way to read what factory methods are on the

        stack at any time. this may possibly also be just an array.
         */
    #if 0
        static Strategy

            FactoryTable(Factories) =

        {{&FactoryTable(HeapSearch), &FactoryTable(Type)},




        {&VirtualTable(HeapSearch), &VirtualTable(Type)},
        {&AdapterTable(HeapSearch), &AdapterTable(Type)},
         {},{},{},

        }
    #endif // BAD_IMPLEMENTATION___BUILDER_HEAP_REQUIRED___

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1)                                                  *
     *                                                           *
     *       2)                                                  *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief X               v(object) ->                       *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /** & * & * & * & * & * & * & * & * & * & * & * & * &&
         & @brief  FACTORY C (FACTORY OBJECT FACTORY TABLE)  *
         *                                                   &
         &   A FACTORY OBJECT IS NOT ONLY A VIRTUAL TABLE    *
         *                                                   &
         &   OBJECT BUT AN OBJECT OF A FACTORY TABLE CLASS   *
         *                                                   &
         & @author willy (christopher)                       *
         *                                                   &
         & @param  factory object A.K.A. self                *
         *                                                   &
         & @throw  NotImplemented                            *
         *                                                   &
         & @return the factory object interface              *
         *& * & * & * & * & * & * & * & * & * & * & * & * & &*/
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*          structure(s) (moved from fTable.h)               */
  # define FACTORY_OBJECT___INTERFACE___V 0

  #if FACTORY_OBJECT___INTERFACE___V
    # define FactoryObject(Member)FactoryObject ## Member
    typedef final struct FactoryObject(FactoryTable)//DO NOT MAKE BASIC
    {   struct class (FactoryTable) base;//
    /*/ /// /// /// /// VIRTUAL TABLE OBJECT/// /// /// /// /// /*/
        cstring ()  (*type)( Object * ); //  ;  (in vTable.h)    (0)(0)

        Object *    (*ctor)( Object *, ... );// init()used by vtable(1)

        void        (*dtor)( Object * ) ; //                        (2)
    /*/ /// /// /// /// ///  COMPARABLE /// /// /// /// /// /// /*/
        bool ()     (*equal)( const Object *, const Object * );  // (1)

        bool ()     (*greater)( const Object *, const Object * );// (2)

        bool ()     (*less)( const Object *, const Object * );   //  X
    /*/ /// /// /// /// ///  PRIMITIVE  /// /// /// /// /// /// /*/
        bool ()     (*assign)( Object *, Object * );

        bool ()     (*swap)( Object *, Object * );               // ( )

        SizeType    (*max)( const Object * );
                                //(also used with Factory Container)
        SizeType    (*min)( const Object * );

        Object *    (*plus)( Object *, ... );

        Object *    (*minus)( Object *, ... );

        Object *    (*multiplies)( Object *, ... );

        Object *    (*divides)( Object *, ... );

        Object *    (*modulus)( Object *, ... );
    /*/ /// /// /// /// /// ///CONTAINER/// /// /// /// /// /// /*/
        bool ()     (*copy)( Object *, const Object * );//         (3)

        bool ()     (*insert)( Object *, ... );     //             (4)

        bool ()     (*remove)( Object *, ... );//                  (5)

        Object *    (*at)( const Object *, ... );//                (6)

        SizeType    (*size)( const Object * );//                   (7)

        Object *    (*begin)( const Object * );//                  (8)

        bool ()     (*resize)( Object *, ... );//                  (9)

        bool ()     (*replace)( Object *, ... ); //                (10)

        bool ()     (*clear)( Object * );       //                 (11)

        void *      (*getptr)( void * );   //                      (12)

        Object *    (*front)( Object * );  //                      (13)

        Object *    (*back)( Object * ); //                        (14)

        Object *    (*end)( const Object * );    //                (15)

        bool ()     (*concat)( Object *, ... ); //                 (16)

        Object *    (*substr)( const Object *, ... ); //           (17)

        cstring ()  (*toString)( const Object * );   //            (18)

        Object *    (*search)( const Object *, ... );//(in HashSet)(19)
    /*/ /// /// /// /// /// /// ITERATOR/// /// /// /// /// /// /*/
        Object *    (*get)( Object * );                        //  (3)

        bool ()     (*next)( Object * );                        // (5)

        bool ()     (*prev)( Object * );                       //  (6)
    /*/ /// /// /// /// /// ??????????????? /// /// /// /// /// /*/

        /* to be continued ... */

    }FactoryObject(FactoryTable);
  explicit
    cstring FactoryObject(Type)()
    { return "FactoryObject"; }
    # define FactoryObjectFactoryTable(Member)\
        FactoryObjectFactoryTable ## Member
  explicit
    cstring FactoryObject(FactoryTable)(Type)()
    { return "FactoryObject(FactoryTable)"; }
  #endif // FACTORY_OBJECT___INTERFACE___V
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*      central area (continued) (moved from fTable.h)       */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         prototypes                        */
            /** Factory ID Object includes what() **/
 ///cstring         type(Object *)   ;  (in vTable.h)                   (0)
                  //type_info;
    static bool            equal( const Object *, const Object * );  ///(1)

    static bool            greater( const Object *, const Object * );///(2)

    static bool            less( const Object *, const Object * );   /// X

            /** FactoryPrimitive (Object) **/
    #if 0
    #define         ref(obj)    (*obj)

                    ref(obj);;
    #endif // 0
    static void            assign( Object *, ... );

    static void            swap( Object *, ... );                ///()


    static Object *        plus( Object *, ... );

    static Object *        minus( Object *, ... );

    static Object *        multiplies( Object *, ... );

    static Object *        divides( Object *, ... );

    static Object *        modulus( Object *, ... );

        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*                 factory container                 */
 ///cstring         type(Object *)    ;  (in vTable.h)                  (0)

    static Object *        ctor( Object *, ... );///init()used by vtable(1)

    static void            dtor( Object * ) ; ///                       (2)

    static bool            copy( Object *, const Object * );///         (3)

    static bool            insert( Object *, ... );     ///             (4)

    static bool            _(remove)( Object *, ... );///               (5)

    static Object *        at( const Object *, ... );///                (6)

    static SizeType        size( const Object * );///                   (7)

    static Object *        begin( const Object * );///                  (8)

    static bool            resize( Object *, ... );///                  (9)

    static bool            replace( Object *, ... ); ///                (10)

    static bool            clear( Object * );       ///                 (11)

    static void *          getptr( void * );   ///                      (12)

    static Object *        front( Object * );  ///                      (13)

    static Object *        back( Object * ); ///                        (14)

    static SizeType        min( const Object * );
        ///functor
    static SizeType        max( const Object * );  ///(done)            (15)

    static Object *        end( const Object * );    ///                (16)

    static bool            concat( Object *, ... ); ///                 (17)

    static Object *        substr( const Object *, ... ); ///           (18)

    static cstring         toString( const Object * );   ///            (19)

    static Object *        search( const Object *, ... );///(in HashSet)(18)
 /**const Object *, size_type *, size_type, size_type */
 ///bool            push            ///              (9)

 ///                pop;             ///             (10)

 ///                top;             ///             (11)

                                   ///(0,1,2) in class(VirtualTable)
        /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /*                 factory iterator                  */
    static Object *        get( Object * );                        ///  (3)

 /**bool            equal( const Object *, const Object * );*/     ///  (4) (Comparable.h)

    static bool            next( Object * );                       ///  (5)

    static bool            prev( Object * );                       ///  (6)

                    move;

        ///... (open for extension)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /** & * & * & * & * & * & * & * & * & * & * & * & * &&
         & @brief  FACTORY C   (FACTORY OBJECT INTERFACE)    *
         *                                                   &
         & @param  factory object A.K.A. self                *
         *                                                   &
         & @throw  NotImplemented                            *
         *                                                   &
         & @return the factory object interface              *
         & * & * & * & * & * & * & * & * & * & * & * & * & * */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*             interface (moved from fTable.h)               */
  #if FACTORY_OBJECT___INTERFACE___V
    static FactoryObject(FactoryTable)

        FactoryObject(Interface) =

    {///class(Helper)
        {& FactoryObject(Type),0,0},
      //{ "", nullptr },    //{}  X  [0]  [1]  [2]
    /// /// /// /// /// VIRTUAL TABLE OBJECT/// /// /// /// /// ///
//+--> & typeid,              //[0]               ///(0)
//+already a method
        & ctor,                //[1]               ///(1)

        & dtor,                //[2]               ///(2)
    /// /// /// /// /// ///  COMPARABLE /// /// /// /// /// /// ///
        & equal,   ///(1)                          ///(3)

        & greater, ///(2)                          ///(4)

        & less,  ///   X                           ///(5)
    /// /// /// /// /// ///  PRIMITIVE  /// /// /// /// /// /// ///
        & assign,                                  ///(6)

        & swap,       ///(.)                       ///(7)

        & max,///(also used with Factory Container)///(8)

        & min,                                     ///(9)

        & plus,                                    ///(10)

        & minus,                                   ///(11)

        & multiplies,                              ///(12)

        & divides,                                 ///(13)

        & modulus,                                 ///(14)
    /// /// /// /// /// /// ///CONTAINER/// /// /// /// /// /// ///
        & copy, ///                  (3)           ///(15)

        & insert,    ///             (4)           ///(16)

        & _(remove), ///             (5)           ///(17)

        & at, ///                    (6)           ///(18)

        & size, ///                  (7)           ///(19)

        & begin, ///                 (8)           ///(20)

        & resize, ///                (9)           ///(21)

        & replace,  ///              (10)          ///(22)

        & clear,      ///            (11)          ///(23)

        & getptr,   ///              (12)          ///(24)

        & front,  ///                (13)          ///(25)

        & back,  ///                 (14)          ///(26)

        & end,     ///               (16)          ///(27)

        & concat, ///                (17)          ///(28)

        & substr,  ///               (18)          ///(29)

        & toString,    ///           (19)          ///(30)

        & search,///(in HashSet)     (18)          ///(31)
    /// /// /// /// /// /// /// ITERATOR/// /// /// /// /// /// ///
        & get,                  ///  (3)           ///(32)

        & next,                  /// (5)           ///(33)

        & prev                  ///  (6)           ///(34)
    /// /// /// /// /// /// ??????????????? /// /// /// /// /// ///

        // to be continued ... //
    };

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /** & * & * & * & * & * & * & * & * & * & * & * & * &&
         & @brief  FACTORY C    (FACTORY OBJECT VIRTUAL)     *
         *                                                   &
         & @param  factory object A.K.A. self                *
         *                                                   &
         & @throw  NotImplemented                            *
         *                                                   &
         & @return the factory object interface              *
         & * & * & * & * & * & * & * & * & * & * & * & * & * &*/
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    # define v FactoryObject(Virtual)
    static FactoryObject(FactoryTable)

        * FactoryObject(Virtual)( Object * );


    noexcept explicit FactoryObject(FactoryTable) *

        FactoryObject(Virtual)( Object * self )

    {if(!self){return & FactoryObject(Interface);}

        vPush(self);

    return & FactoryObject(Interface);}///+this

  #endif // FACTORY_OBJECT___INTERFACE___V
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  typename for factory object overload      *
         *                                                   *
         *  this is for the interface-level overload the     *
         *                                                   *
         *  high-overload for any method in the program      *
         *                                                   *
         * using the function helper (the function method).  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0 ///(found in function.h)
               ///Overload
    #define defineFunction(name, rtrn, cast, cnst)\
    \
        name( cnst Object *, ... );\
                   /*always a factory function that calls control()*/\
        explicit rtrn       name( cnst Object * self, ... )\
        {/**this function manually uses a single control factory flag**/\
            if( !(*Flags[0]) ){flags(0);ControlSlot[0][0]=&self;}\
         /**and raises it if its not aready raised**/\
            rtrn objt = ((cast)\
    \
                (*function( self, # name )))(this);/**stringize: #**/\
    \
            (*Flags[0]) = false;/**and lowers**/\
    \
            return objt;\
        }
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
 static bool typename(Function)(insert,bool,bool()(*)(Object *,...),);
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
     ///cstring    type(Object *)    ;  (in typeid.h)           (0)
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  init (Constructor)                        *
         *                                                   *
         * @param  self, ...                                 *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #define initialize init   ///Init
    static Object *                                          ///(1)
    typename(Function)(init,Object *,Object *(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  dtor (Destructor)                         *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return void                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  DONT FORGET THAT THIS FUNCTION GETS CALLED FROM THE      *
     *                                                           *
     *  INTERFACE AFTER BEING RETRIEVED BY THE METHODS TABLE.    *
     *                                                           *
     *  THAT MEANS THAT THE DESTRUCTOR GETS CALLED BUT THE       *
     *                                                           *
     *  OBJECT DOES NOT GET DELETED ITSELF. THAT SHOULD BE       *
     *                                                           *
     *  OBVIOUS TO ANYONE WORKING WITH A VIRTUAL TABLE BUT IT    *
     *                                                           *
     *  WAS SOMETHING UNCLEAR TO ME EVEN FOR A SECOND AND SO I   *
     *                                                           *
     *  WANTED TO SAY THAT THIS FUNCTION IS NOT DELETE.          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    ///Destroyable.h (a file with one function if it was)
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        # define destruct   dtor
        explicit void       dtor( Object * self )  ///          (2)
        {return ((dtorPtr)*function( self, "dtor" ))(this);}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  copy                                      *
         *                                                   *
         * - -  this function will not be used with the  - - *
         *   - - factory control sequence i felt that it - - *
         * - - was appropriate that at least one function- - *
         *                 - - shouldn't. - -                *
         *                                                   *
         * - - on second thought, at least one function - -  *
         *       - - should be/have an overload - -          *
         *                                                   *
         * @param  self, objt (not a factory function)       *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
                                                            /// (3)
        explicit bool     copy( Object * self, const Object * objt)
        { return ((copyPtr)*function( self, "copy" ))(this, objt); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  insert                                    *
         *                                                   *
         * @param  self, ...                                 *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static bool                                          ///(4)
        typename(Function)(insert,bool,bool()(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  remove                                    *
         *  - - i would be happy if this is what every - -   *
         *          - - function looked like - -             *
         *                                                   *
         * @param  self, ...                                 *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit bool       _(remove)( Object * self, ... )///  (5)
        {
            if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

            bool flag = ((bool()(*)(Object*,...))

                (*function( self, "remove" )))(this);

            (*Flags[0]) = false;

            return flag;
        }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  at                                        *
         *                                                   *
         * @param  self, ...                                 *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Object * typename(Function)                   ///(6)
        (at,Object*,Object*(*)(const Object *,...),const);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  size                                      *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return SizeType (careful for double width int)   *
         *                                                   *
         * - - return a pointer to the size type variable - -*
         *       - - for double width integer types - -      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit SizeType   size( const Object * self )///      (7)
        { return ((SizeType(*)(const Object*))
          (*function( self, "size" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  begin                                     *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit Object *   begin( const Object * self )///     (8)
        { return ((Object*(*)(const Object*))
          (*function( self, "begin" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  resize                                    *
         *                                                   *
         * @param  self, ...                                 *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static bool                                          ///(9)
        typename(Function)(resize,bool,bool()(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  replace                                   *
         *                                                   *
         * @param  self, ...                                 *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static bool                                          ///(10)
        typename(Function)(replace,bool,bool()(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  clear                                     *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit bool       clear( Object * self )       ///    (11)
        { return ((bool()(*)(Object*))
          (*function( self, "clear" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  getptr                                    *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return void * (Object * but display void *)      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         *                                                   *
         * DISPLAY THE USE OF A VOID POINTER JUST AS A       *
         *                                                   *
         * REMINDER AS TO WHY WE ARE HERE IN C. BECAUSE OF   *
         *                                                   *
         * THE ABILITIES OF A VOID POINTER OR HOW AN Object  *
         *                                                   *
         * HAS ITS ROOTS IN BEING A VOID POINTER THAT HAS    *
         *                                                   *
         * MEMORY ALLOCATED TO IT BY AN allocate() FUNCTION. *
         *                                                   *
         * WHEN YOU USE AN allocate() FUNCTION YOU USE A     *
         *                                                   *
         * deallocate() FUNCTION, IF YOU DONT USE AN         *
         *                                                   *
         * allocate() FUNCTION THEN YOU DONT USE A           *
         *                                                   *
         * deallocate() FUNCTION. OBVIOUSLY IF YOU MADE      *
         *                                                   *
         * IT THIS FAR YOU KNOW THAT OOC OR FACTORY C        *
         *                                                   *
         * (HERE) PROVIDES A VIRTUAL TABLE PATTERN SIMILAR   *
         *                                                   *
         * TO ONE THAT WE SHOULD ALL KNOW FROM EITHER C++,   *
         *                                                   *
         * OR JAVA, OR C# (I THINK) (AS OF RIGHT NOW THIS    *
         *                                                   *
         * FUNCTION IS ONLY IMPLEMENTED BY THE C VECTOR)     *
         *                                                   *
         * (JUST A DISCUSSION ABOUT RUNTIME-OBJECTS).        *
         *                                                   *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit void *     getptr( void * self )   ///         (12)
        { return ((void*(*)(void*))
          (*function( self, "getptr" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  front                                     *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit Object *   front( Object * self )  ///         (13)
        { return ((Object*(*)(Object*))
          (*function( self, "front" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  back                                      *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit Object *   back( Object * self ) ///           (14)
        { return ((Object*(*)(Object*))
          (*function( self, "back" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  max                                       *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return SizeType  (double width may be too big)   *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit SizeType   max( const Object * self )///  (15)
        { return ((SizeType(*)(const Object*))
          (*function( self, "max" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  min                                       *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return SizeType (double width may be (is) too big)*
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit SizeType   min( const Object * self )///       (15)
        { return ((SizeType(*)(const Object*))
          (*function( self, "min" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  end                                       *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit Object *   end( const Object * self )    ///   (16)
        { return ((Object*(*)(Object*))
          (*function( self, "end" )))(this); }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  concat                                    *
         * - - last i checked this function and the          *
         * constructor for bool wasn't working still         *
         * even tho calling it from the function method was  *
         * successful, telling me it has to do with the      *
         * function arguments stack - -                      *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static bool                                          ///(17)
        typename(Function)(concat,bool,bool()(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  substr                                    *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Object * typename(Function)                   ///(18)
        (substr,Object*,Object*(*)(const Object *,...),const);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  toString                                  *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return cstring  (const char *)                   *
         *         RETURNS typeid(self) IF NOT A FACTORY     *
         *         TABLE CLASS WITH METHODS TABLE AND        *
         *         toString()                                *
         *                                                   *
         * TODO:   use @ and address of object together      *
         *         with typeid if no toString() method       *
         *         in class (VirtualHeap)                    *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit cstring    toString( const Object * self )///  (19)
        {
            multimap(true)(typeid(self))("class(VirtualHeap)") ;
            if( map("toString") )/*function(self, "toString") //can't (throws)*/
            {
                return ((cstring()(*)(const Object*))

                    (*function(this, "toString")))(this);
            }
            else
            {
                return typeid(self);
            }
        }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  search                                    *
         *                                                   *
         * @param  self, ...                                 *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
                                                             ///(20)
        static Object * typename(Function)
        (search,Object*,Object*(*)(const Object *,...),const);
        /**const Object *, size_type *, size_type, size_type */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  get (Iterator)                            *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return Object *                                  *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /*                 factory iterator                  */
        explicit Object *   get( Object * self )            /// (21)
    {return((Object *(*)(Object *))(*function(self,"get")))(this);}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  equal (Iterator)                          *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**
            THIS FUNCTION IS IMPLEMENTED INSIDE Comparable.h

            ALONGSIDE greater() AND USING A POINTER NAMED

            compare() ALSO, THAT POINTS TO equal(). THIS IS

            NOT A VIRTUAL HEAP OVERLOAD BUT A COMPARE TABLE

            ONE. (LIKE IO) SINCE IT DOES NOT HAVE TO BE PART

            OF THE INTERFACE ASSIGNED TO A VIRTUAL TABLE OBJECT

            IF IT IS... (maybe it can be both)

            (if typeid equals Iterator)
         */
     /**bool       equal( const Object *, const Object * );   ///(X)*/

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  next (Iterator)                           *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit bool       next( Object * self )            ///(22)
    { return ((bool()(*)(Object*))(*function(self,"next")))(this);}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  prev (Iterator)                           *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit bool       prev( Object * self )            ///(23)
    { return ((bool()(*)(Object*))(*function(self,"prev")))(this);}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  assign                                    *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit void       assign( Object * self, ... )     ///(24)
        {if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}
            ((void(*)(Object*,...))

                (*function( self, "assign" )))(this);
            (*Flags[0]) = false; }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  swap                                      *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit void       swap( Object * self, ... )  ///     (25)
        {if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}
            ((factPtr)*function( self, "swap" ))(this);
            (*Flags[0]) = false;}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  plus                                      *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Object *                                      ///(26)
        typename(Function)(plus,Object*,Object*(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  minus                                     *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Object *                                      ///(27)
        typename(Function)(minus,Object*,Object*(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  multiplies                                *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Object * typename(Function)                   ///(28)
        (multiplies,Object*,Object*(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  divides                                   *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Object *                                      ///(29)
        typename(Function)(divides,Object*,Object*(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  modulus                                   *
         *                                                   *
         * @param  self                                      *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Object *                                      ///(30)
        typename(Function)(modulus,Object*,Object*(*)(Object *,...),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  open                                      *
         *                                                   *
         * - - experiencing technical difficulties here - -  *
         * - - swap 0 for 1 at #if to include section for - -*
         *                 - - compiler - -                  *
         * @param  self, objt                                *
         *                                                   *
         * @throw  see multimap.h                            *
         *                                                   *
         * @return bool                                      *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
        explicit Object *        open( const Object * self,
            const Object * objt, ... )                     ///  (5)
        {
            if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}
            Stack * stack = control();

            if( instance(self) ){
            const Object * _objt = arg(stack, const Object *);
            Object * rtrn = ((Object *(*)(const Object*,
                const Object*, ...))

                (*function( self, "open" )))(this, _objt);

            }else{ (*Flags[0]) = false;return fopen(self, _objt); }
            (*Flags[0]) = false;
            return rtrn;
        }
    #endif // CONFLICTING_TYPES_OPEN___IO_H___ 1
    /* note: if its not a virtual table object (by instance method)
             then call the interface version? ... sigh
     */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *   %d - integer (signed) decimal                           *
     *                                                           *
     *   %i - integer (signed)                                   *
     *                                                           *
     *   %o - octal                                              *
     *                                                           *
     *   %u - unsigned integer                                   *
     *                                                           *
     *   0x%x - pointer (hex)                                    *
     *                                                           *
     *   %X       ?                                              *
     *                                                           *
     *   %f       ?                                              *
     *                                                           *
     *   %.1f - %.2f - %.3f - %.4f - %.5f (float, double)        *
     *                                                           *
     *   %e -     ?                                              *
     *                                                           *
     *   %E       ?                                              *
     *                                                           *
     *   %g       ?                                              *
     *                                                           *
     *   %G       ?                                              *
     *                                                           *
     *   %a       ?                                              *
     *                                                           *
     *   %A       ?                                              *
     *                                                           *
     *   %c       char                                           *
     *                                                           *
     *   %C       ?                                              *
     *                                                           *
     *   %s       string                                         *
     *                                                           *
     *   %S       ?                                              *
     *                                                           *
     *   %p       ?                                              *
     *                                                           *
     *   %n       ?                                              *
     *                                                           *
     *   %m       ?                                              *
     *                                                           *
     *   %%       escape                                         *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    ///- - DEBUG VERSION - - DEBUG VERSION - - DEBUG VERSION - -///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
        static ctorPtr bool(Ctor)(void) ;

        explicit ctorPtr bool(Ctor)(void) {return new(bool);}


        static struct class (FactoryTable)

            bool(Factory) =

        {
            &class(FactoryTable)(Type),

            &bool(Ctor),

            0
        };

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     * @brief   comparable registration                          *
     *                                                           *
     *                                                           *
     * @param   self, object                                     *
     *                                                           *
     *                                                           *
     * @return  true or false                                    *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit bool bool(Equal)

            ( const bool * self, ... )

        { Stack * stack = control();

            const bool * objt = arg(stack, const bool *);

            return (*self) == (*objt) ;
        }


        explicit bool bool(Greater)

            ( const bool * self, ... )

        { Stack * stack = control();

            const bool * objt = arg(stack, const bool *);

            return (*self) > (*objt) ;
        }


        static struct class (CompareTable)

            bool(Compare) =

        {   &class(CompareTable)(Type),

            &bool(Equal),

            &bool(Greater)   };

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     * @brief   console io                                       *
     *                                                           *
     *                                                           *
     * @param                                                    *
     *                                                           *
     *                                                           *
     * @return                                                   *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit int bool(ConsoleIn)

            ( bool * self )

        { return scanf ("%d", self); }


        explicit int bool(ConsoleOut)

            ( const bool * self )

        { return printf (*self?"true":"false"); }


        static class(ConsoleTable)

            bool(Console) =

        {   &class(ConsoleTable)(Type),

            &bool(ConsoleIn),

            &bool(ConsoleOut)   };

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     * @brief  file io                                           *
     *                                                           *
     *                                                           *
     * @param                                                    *
     *                                                           *
     *                                                           *
     * @return                                                   *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit int bool(FileIn) ( bool * self, ... )

        { Stack * stack = control();

            File * file = arg(stack, File*);

            return fscanf (file, "%d", self); }


        explicit int bool(FileOut) ( bool * self, ... )

        { Stack * stack = control();

            File * file = arg(stack, File*);

            return fprintf (file, *self?"true":"false"); }


        static class(FileTable)

            bool(File) =

        {   &class(FileTable)(Type),

            &bool(FileIn),

            &bool(FileOut)   };

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     * @brief  standard io                                       *
     *                                                           *
     *                                                           *
     * @param                                                    *
     *                                                           *
     *                                                           *
     * @return                                                   *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit int bool(StandardIn) ( bool * self, ... )

            { Stack * stack = control();

            string str = arg(stack, string*);

            return sscanf (str, "%d", self); }


        explicit int bool(StandardOut) ( bool * self, ... )

            { Stack * stack = control();

            string str = arg(stack, string*);

            return sprintf (str, *self?"true":"false"); }


        static class(StandardTable)

            bool(Standard) =

        {   &class(StandardTable)(Type),

            &bool(StandardIn),

            &bool(StandardOut)   };

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     * @brief  class factory method + reg list                   *
     *                                                           *
     *                                                           *
     * @param  cstring reg                                       *
     *                                                           *
     *                                                           *
     * @return Reg                                               *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        static Interface bool(InterfaceHeap)[five] =
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
            &bool(Compare),

            &bool(Console),

            &bool(Factory),

            &bool(File),

            &bool(Standard),

          /*&bool(Virtual),*/

            nullptr /*(null termination required)*/ };

        /**
         * @brief class factory method (Factory C)(OOC)(C+)
         *//*  Class(FactoryMethod)  */
        static Interface typename(ClassFactoryMethod)(bool, 0, 4);


        static void typename(Setup)(bool) {}

        static void typename(Abort)(bool) {}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    ///- - DEBUG VERSION - - DEBUG VERSION - - DEBUG VERSION - -///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  primitive type as factory table class     *
         *                                                   *
         *         implementations for primitive types as    *
         *         factory table class, this only includes   *
         *         class factory method and interface heap   *
         *         (no sub factory methods)                  *
         *                                                   *
         *  note: these datatype tables might (not) need to  *
         *        include const_types and volatile_types     *
         *  ... (but not least & fast) ? (no too repetitive) *
         *                                                   *
         *  todo: possibly extend the vto interface and      *
         *        use a virtual heap with sub factory method *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
  #else // DEBUG
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  bool                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           bool                            */
    typename       (FactoryObject)                              //#1
    (bool, (" %d", self), (*self?"true":"false"),
           ((*file), " %d", self), ((*file), *self?"true":"false"),
           (str, " %d", self), (str, *self?"true":"false"),) ;
  #endif // 0
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int                                               *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          int                              */
    static cstring int(Spec) = " %d";//"%u"//"%o"//"%x"//       //#2
    typename       (FactoryObject)
    (int,(int(Spec),self),(int(Spec),(*self)),
     ((*file), int(Spec),self),((*file), int(Spec),(*self)),
     (str, int(Spec),self),(str, int(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  float                                             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          float                            */
    static cstring float(Spec) = " %.3f";//problem with float?  //#3
    typename       (FactoryObject)
    (float,(float(Spec),self),(float(Spec),(*self)),
     ((*file), float(Spec),self),((*file), float(Spec),(*self)),
     (str, float(Spec),self),(str, float(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  double                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          double                           */
    static cstring double(Spec) = " %.2f";                      //#4
    typename       (FactoryObject)
    (double,(double(Spec),self),(double(Spec),(*self)),
     ((*file), double(Spec),self),((*file), double(Spec),(*self)),
     (str, double(Spec),self),(str, double(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  char                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           char                            */
    typename       (FactoryObject)                              //#5
    (char,(" %c",self),("%c",(*self)),
     ((*file), " %c",self),((*file), "%c",(*self)),
     (str, " %c",self),(str, "%c",(*self)),) ;

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  long                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           long                            */
    static cstring long(Spec) = " %d";                          //#6
    typename       (FactoryObject)
    (long,(long(Spec),self),(long(Spec),(*self)),
     ((*file), long(Spec),self),((*file), long(Spec),(*self)),
     (str, long(Spec),self),(str, long(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  short                                             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          short                            */
    static cstring short(Spec) = " %d";                         //#7
    typename       (FactoryObject)
    (short,(short(Spec),self),(short(Spec),(*self)),
     ((*file), short(Spec),self),((*file), short(Spec),(*self)),
     (str, short(Spec),self),(str, short(Spec),(*self)),);
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  unsigned                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         unsigned                          */
    static cstring unsigned(Spec) = " %u";                      //#8
    typename       (FactoryObject)
    (unsigned,(unsigned(Spec),self),(unsigned(Spec),(*self)),
     ((*file), unsigned(Spec),self),((*file), unsigned(Spec),(*self)),
     (str, unsigned(Spec),self),(str, unsigned(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  signed                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          signed                           */
    static cstring signed(Spec) = " %d";                        //#9
    typename       (FactoryObject)
    (signed,(signed(Spec),self),(signed(Spec),(*self)),
     ((*file), signed(Spec),self),((*file), signed(Spec),(*self)),
     (str, signed(Spec),self),(str, signed(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  size_t                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          size_t                           */
    static cstring size_t(Spec) = " %u";                        //#10
    typename       (FactoryObject)
    (size_t,(size_t(Spec),self),(size_t(Spec),(*self)),
     ((*file), size_t(Spec),self),((*file), size_t(Spec),(*self)),
     (str, size_t(Spec),self),(str, size_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  intptr_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         intptr_t                          */
    typename       (FactoryObject)                              //#11
    (intptr_t,(" 0x%x",self),("0x%x",(*self)),
     ((*file), " 0x%x",self),((*file), "0x%x",(*self)),
     (str, " 0x%x",self),(str, "0x%x",(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uintptr_t                                         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uintptr_t                         */
    typename       (FactoryObject)                              //#12
    (uintptr_t,(" 0x%x",self),("0x%x",(*self)),
     ((*file), " 0x%x",self),((*file), "0x%x",(*self)),
     (str, " 0x%x",self),(str, "0x%x",(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  intmax_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         intmax_t                          */
    static cstring intmax_t(Spec) = " %d";                      //#13
    typename       (FactoryObject)
    (intmax_t,(intmax_t(Spec),self),(intmax_t(Spec),(*self)),
     ((*file), intmax_t(Spec),self),((*file), intmax_t(Spec),(*self)),
     (str, intmax_t(Spec),self),(str, intmax_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uintmax_t                                         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uintptr_t                         */
    static cstring uintmax_t(Spec) = " %u";                     //#14
    typename       (FactoryObject)
    (uintmax_t,(uintmax_t(Spec),self),(uintmax_t(Spec),(*self)),
     ((*file), uintmax_t(Spec),self),((*file), uintmax_t(Spec),(*self)),
     (str, uintmax_t(Spec),self),(str, uintmax_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  wchar_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         wchar_t                           */
    typename       (FactoryObject)                              //#15
    (wchar_t,(" %c",self),("%c",(*self)),
     ((*file), " %c",self),((*file), "%c",(*self)),
     (str, " %c",self),(str, "%c",(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  wctype_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         wctype_t                          */
    static cstring wctype_t(Spec) = " %c";                      //#16
    typename       (FactoryObject)
    (wctype_t,(wctype_t(Spec),self),(wctype_t(Spec),(*self)),
     ((*file), wctype_t(Spec),self),((*file), wctype_t(Spec),(*self)),
     (str, wctype_t(Spec),self),(str, wctype_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int8_t                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         int8_t                            */
    static cstring int8_t(Spec) = " %d";                        //#17
    typename       (FactoryObject)
    (int8_t,(int8_t(Spec),self),(int8_t(Spec),(*self)),
     ((*file), int8_t(Spec),self),((*file), int8_t(Spec),(*self)),
     (str, int8_t(Spec),self),(str, int8_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint8_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uint8_t                           */
    static cstring uint8_t(Spec) = " %u";                       //#18
    typename       (FactoryObject)
    (uint8_t,(uint8_t(Spec),self),(uint8_t(Spec),(*self)),
     ((*file), uint8_t(Spec),self),((*file), uint8_t(Spec),(*self)),
     (str, uint8_t(Spec),self),(str, uint8_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int16_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         int16_t                           */
    static cstring int16_t(Spec) = " %d";                       //#19
    typename       (FactoryObject)
    (int16_t,(int16_t(Spec),self),(int16_t(Spec),(*self)),
     ((*file), int16_t(Spec),self),((*file), int16_t(Spec),(*self)),
     (str, int16_t(Spec),self),(str, int16_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint16_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uint16_t                          */
    static cstring uint16_t(Spec) = " %u";                      //#20
    typename       (FactoryObject)
    (uint16_t,(uint16_t(Spec),self),(uint16_t(Spec),(*self)),
     ((*file), uint16_t(Spec),self),((*file), uint16_t(Spec),(*self)),
     (str, uint16_t(Spec),self),(str, uint16_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int32_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         int32_t                           */
    static cstring int32_t(Spec) = " %d";                       //#21
    typename       (FactoryObject)
    (int32_t,(int32_t(Spec),self),(int32_t(Spec),(*self)),
     ((*file), int32_t(Spec),self),((*file), int32_t(Spec),(*self)),
     (str, int32_t(Spec),self),(str, int32_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint32_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uint32_t                          */
    static cstring uint32_t(Spec) = " %u";                      //#22
    typename       (FactoryObject)
    (uint32_t,(uint32_t(Spec),self),(uint32_t(Spec),(*self)),
     ((*file), uint32_t(Spec),self),((*file), uint32_t(Spec),(*self)),
     (str, uint32_t(Spec),self),(str, uint32_t(Spec),(*self)),) ;

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int64_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         int64_t                           */
    static cstring int64_t(Spec) = " %d";                       //#23
    typename       (FactoryObject)
    (int64_t,(int64_t(Spec),self),(int64_t(Spec),(*self)),
     ((*file), int64_t(Spec),self),((*file), int64_t(Spec),(*self)),
     (str, int64_t(Spec),self),(str, int64_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint64_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uint64_t                          */
    static cstring uint64_t(Spec) = " %u";                      //#24
    typename       (FactoryObject)
    (uint64_t,(uint64_t(Spec),self),(uint64_t(Spec),(*self)),
     ((*file), uint64_t(Spec),self),((*file), uint64_t(Spec),(*self)),
     (str, uint64_t(Spec),self),(str, uint64_t(Spec),(*self)),);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
  #if 0
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_bool                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_bool                         */
    typename       (FactoryObject)                              //#25
    (atomic_bool,(" %d", self),(*self?"true":"false"),
           ((*file), " %d", self),((*file), *self?"true":"false"),
           (str, " %d", self),(str, *self?"true":"false"),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_char                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_char                         */
    typename       (FactoryObject)                              //#26
    (atomic_char,(" %c",self),("%c",(*self)),
     ((*file), " %c",self),((*file), "%c",(*self)),
     (str, " %c",self),(str, "%c",(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_schar                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_schar                        */
    typename       (FactoryObject)                              //#27
    (atomic_schar,(" %c",self),("%c",(*self)),
     ((*file), " %c",self),((*file), "%c",(*self)),
     (str, " %c",self),(str, "%c",(*self)),) ;

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uchar                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_uchar                        */
    typename       (FactoryObject)                              //#28
    (atomic_uchar,(" %c",self),("%c",(*self)),
     ((*file), " %c",self),((*file), "%c",(*self)),
     (str, " %c",self),(str, "%c",(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_short                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_short                        */
    static cstring atomic_short(Spec) = " %d";                  //#29
    typename       (FactoryObject)
    (atomic_short,(atomic_short(Spec),self),
     (atomic_short(Spec),(*self)),
     ((*file), atomic_short(Spec),self),
     ((*file), atomic_short(Spec),(*self)),
     (str, atomic_short(Spec),self),
     (str, atomic_short(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ushort                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                      atomic_ushort                        */
    static cstring atomic_ushort(Spec) = " %u";                 //#30
    typename       (FactoryObject)
    (atomic_ushort,(atomic_ushort(Spec),self),
     (atomic_ushort(Spec),(*self)),
     ((*file), atomic_ushort(Spec),self),
     ((*file), atomic_ushort(Spec),(*self)),
     (str, atomic_ushort(Spec),self),
     (str, atomic_ushort(Spec),(*self)),) ;

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_int                                        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_int                          */
    static cstring atomic_int(Spec) = " %d";                    //#31
    typename       (FactoryObject)
    (atomic_int,(atomic_int(Spec),self),
     (atomic_int(Spec),(*self)),
     ((*file), atomic_int(Spec),self),
     ((*file), atomic_int(Spec),(*self)),
     (str, atomic_int(Spec),self),
     (str, atomic_int(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uint                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_uint                         */
    static cstring atomic_uint(Spec) = " %u";                   //#32
    typename       (FactoryObject)
    (atomic_uint,(atomic_uint(Spec),self),
     (atomic_uint(Spec),(*self)),
     ((*file), atomic_uint(Spec),self),
     ((*file), atomic_uint(Spec),(*self)),
     (str, atomic_uint(Spec),self),
     (str, atomic_uint(Spec),(*self)),) ;

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_long                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_long                         */
    static cstring atomic_long(Spec) = " %u";                   //#33
    typename       (FactoryObject)
    (atomic_long,(atomic_long(Spec),self),
     (atomic_long(Spec),(*self)),
     ((*file), atomic_long(Spec),self),
     ((*file), atomic_long(Spec),(*self)),
     (str, atomic_long(Spec),self),
     (str, atomic_long(Spec),(*self)),) ;

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ulong                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_ulong                        */
    static cstring atomic_ulong(Spec) = " %u";                  //#34
    typename       (FactoryObject)
    (atomic_ulong,(atomic_ulong(Spec),self),
     (atomic_ulong(Spec),(*self)),
     ((*file), atomic_ulong(Spec),self),
     ((*file), atomic_ulong(Spec),(*self)),
     (str, atomic_ulong(Spec),self),
     (str, atomic_ulong(Spec),(*self)),) ;

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_llong                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_llong                        */
    static cstring atomic_llong(Spec) = " %d";                  //#35
    typename       (FactoryObject)
    (atomic_llong,(atomic_llong(Spec),self),
     (atomic_llong(Spec),(*self)),
     ((*file), atomic_llong(Spec),self),
     ((*file), atomic_llong(Spec),(*self)),
     (str, atomic_llong(Spec),self),
     (str, atomic_llong(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ullong                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_ullong                       */
    static cstring atomic_ullong(Spec) = " %u";                 //#36
    typename       (FactoryObject)
    (atomic_ullong,(atomic_ullong(Spec),self),
     (atomic_ullong(Spec),(*self)),
     ((*file), atomic_ullong(Spec),self),
     ((*file), atomic_ullong(Spec),(*self)),
     (str, atomic_ullong(Spec),self),
     (str, atomic_ullong(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_char16_t                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_char16                       */
    static cstring atomic_char16_t(Spec) = " %c";               //#37
    typename       (FactoryObject)
    (atomic_char16_t,(atomic_char16_t(Spec),self),
     (atomic_char16_t(Spec),(*self)),
     ((*file), atomic_char16_t(Spec),self),
     ((*file), atomic_char16_t(Spec),(*self)),
     (str, atomic_char16_t(Spec),self),
     (str, atomic_char16_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_char32_t                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_char32_                      */
    static cstring atomic_char32_t(Spec) = " %c";               //#38
    typename       (FactoryObject)
    (atomic_char32_t,(atomic_char32_t(Spec),self),
     (atomic_char32_t(Spec),(*self)),
     ((*file), atomic_char32_t(Spec),self),
     ((*file), atomic_char32_t(Spec),(*self)),
     (str, atomic_char32_t(Spec),self),
     (str, atomic_char32_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_wchar_t                                    *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_wchar_t                      */
    static cstring atomic_wchar_t(Spec) = " %c" ;               //#39
    typename       (FactoryObject)
    (atomic_wchar_t,(atomic_wchar_t(Spec),self),
     (atomic_wchar_t(Spec),(*self)),
     ((*file), atomic_wchar_t(Spec),self),
     ((*file), atomic_wchar_t(Spec),(*self)),
     (str, atomic_wchar_t(Spec),self),
     (str, atomic_wchar_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_intptr_t                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_intptr_t                     */
    static cstring atomic_intptr_t(Spec) = " %d" ;              //#40
    typename       (FactoryObject)
    (atomic_intptr_t,(atomic_intptr_t(Spec),self),
     (atomic_intptr_t(Spec),(*self)),
     ((*file), atomic_intptr_t(Spec),self),
     ((*file), atomic_intptr_t(Spec),(*self)),
     (str, atomic_intptr_t(Spec),self),
     (str, atomic_intptr_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uintptr_t                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_uintptr_t                    */
    static cstring atomic_uintptr_t(Spec) = " 0x%x" ;           //#41
    typename       (FactoryObject)
    (atomic_uintptr_t,(atomic_uintptr_t(Spec),self),
     (atomic_uintptr_t(Spec),(*self)),
     ((*file), atomic_uintptr_t(Spec),self),
     ((*file), atomic_uintptr_t(Spec),(*self)),
     (str, atomic_uintptr_t(Spec),self),
     (str, atomic_uintptr_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_size_t                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_size_t                       */
    static cstring atomic_size_t(Spec) = " %u" ;                //#42
    typename       (FactoryObject)
    (atomic_size_t,(atomic_size_t(Spec),self),
     (atomic_size_t(Spec),(*self)),
     ((*file), atomic_size_t(Spec),self),
     ((*file), atomic_size_t(Spec),(*self)),
     (str, atomic_size_t(Spec),self),
     (str, atomic_size_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ptrdiff_t                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_ptrdiff_t                    */
    static cstring atomic_ptrdiff_t(Spec) = " 0x%x" ;           //#43
    typename       (FactoryObject)
    (atomic_ptrdiff_t,(atomic_ptrdiff_t(Spec),self),
     (atomic_ptrdiff_t(Spec),(*self)),
     ((*file), atomic_ptrdiff_t(Spec),self),
     ((*file), atomic_ptrdiff_t(Spec),(*self)),
     (str, atomic_ptrdiff_t(Spec),self),
     (str, atomic_ptrdiff_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_intmax_t                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_intmax_t                     */
    static cstring atomic_intmax_t(Spec) = " %d" ;              //#44
    typename       (FactoryObject)
    (atomic_intmax_t,(atomic_intmax_t(Spec),self),
     (atomic_intmax_t(Spec),(*self)),
     ((*file), atomic_intmax_t(Spec),self),
     ((*file), atomic_intmax_t(Spec),(*self)),
     (str, atomic_intmax_t(Spec),self),
     (str, atomic_intmax_t(Spec),(*self)),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uintmax_t                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_uintmax_t                    */
    static cstring atomic_uintmax_t(Spec) = " %u" ;             //#45
    typename       (FactoryObject)
    (atomic_uintmax_t,(atomic_uintmax_t(Spec),self),
     (atomic_uintmax_t(Spec),(*self)),
     ((*file), atomic_uintmax_t(Spec),self),
     ((*file), atomic_uintmax_t(Spec),(*self)),
     (str, atomic_uintmax_t(Spec),self),
     (str, atomic_uintmax_t(Spec),(*self)),);
  #endif // 0
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  clock_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           clock_t                         */
    static cstring clock_t(Spec) = " %.2f" ;                    //#46 (25)
    typename       (FactoryObject)
    (clock_t,(clock_t(Spec),self),
     (clock_t(Spec),(*self) / 60),
     ((*file), clock_t(Spec),self),
     ((*file), clock_t(Spec),(*self) / 60),
     (str, clock_t(Spec),self),
     (str, clock_t(Spec),(*self) / 60),);

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  time_t                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           time_t                          */
    static cstring time_t(Spec) = " %.3f" ;                     //#47 (26)
    typename       (FactoryObject)
    (time_t,(time_t(Spec),self),
     (time_t(Spec),(*self) / 60),
     ((*file), time_t(Spec),self),
     ((*file), time_t(Spec),(*self) / 60),
     (str, time_t(Spec),self),
     (str, time_t(Spec),(*self) / 60),);


    //typename         (FactoryObject)       (string);



    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     & @brief       THE FACTORY OBJECT FACTORY TABLE             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * (previously)                                              *
     *     this has been an ongoing-unsolvable-problem it seems  *
     *                                                           *
     * to be but now my solution i seem to have for it would be  *
     *                                                           *
     * if it was possible to have a "datatypes table" that works *
     *                                                           *
     * for casting like i wanted to use virtual without a class  *
     *                                                           *
     * name parameter or have:  v(obj)->  that i once felt       *
     *                                                           *
     * confident i needed a compiler to do that i fell back      *
     *                                                           *
     * into that place where i felt i had a solution for that    *
     *                                                           *
     * without one...                                            *
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * (previously)                                              *
     * with or without any extra tables, will it be able to      *
     *                                                           *
     * return the datatype fully casted?                         *
     *                                                           *
     * yes i believe so, study:                                  *
     *                                                           *
     *                                                           *
     * virtual(object)()  <-  that ctor like function there      *
     *                                                           *
     *                                                           *
     * or no, since when a function is called through a          *
     *                                                           *
     * pointer, its return type is always the return type        *
     *                                                           *
     * of the pointer, not the return type of the                *
     *                                                           *
     * implementation. (implicitly castable)                     *
     *                                                           *
     *                                                           *
     * there is a chance that could work if you dereference the  *
     *                                                           *
     * pointer to a function before calling it                   *
     *                                                           *
     *                                                           *
     *   X                                                       *
     *                                                           *
     *                                                           *
     * this idea of getting rid of the ClassName parameter led   *
     *                                                           *
     * me back to using a Helper struct like i did in C++        *
     *                                                           *
     * where i realized i was trying to solve a problem that     *
     *                                                           *
     * was unnecessary to be solved.                             *
     *                                                           *
     *             factory("ClassName")(this, ...);              *
     *                                                           *
     * creates dynamic types of objects but they are always      *
     *                                                           *
     * used to initialize the same Base pointer, that Base       *
     *                                                           *
     * type would also be used with.                             *
     *                                                           *
     *                virtual(object, Base) ->                   *
     *                                                           *
     * that is acceptable. I am more proud of virtual (above)    *
     *                                                           *
     * than i was before coming to this conclusion and i kept the*
     *                                                           *
     * Helper idea for sure now that i defined a type of Helper  *
     *                                                           *
     * here in C (see String.h and Object.h) even though its     *
     *                                                           *
     * not used for anything, it may still prove useful          *
     *                                                           *
     * if i can make the compiler use it.                        *
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     & @brief    FACTORY C     (v FOR VIRTUAL)                   *
     *                                                           *
     *    THIS IS GOING TO BE MY LAST ATTEMPT TOWARDS v(obj)     *
     *                                                           *
     *    THATS SHORT FOR VIRTUAL, THAT A VERSION OF VIRTUAL     *
     *                                                           *
     *    USED WITHOUT A CLASS NAME PARAMETER, THIS MACRO CAN    *
     *                                                           *
     *    NEVER (WITHOUT ADDING A CASE TO THE COMPILER THAT      *
     *                                                           *
     *    HIDES A CAST) RETURN THE ASSIGNED INTERFACE FROM       *
     *                                                           *
     *    THE VIRTUAL TABLE (WHETHER OR NOT IT USES A CENTRAL    *
     *                                                           *
     *    OVERLOAD FUNCTION TO HIDE THE STRING PARAMETER #1).    *
     *                                                           *
     *    EVEN IF IT DID, IT CAN ONLY RETURN THE POINTER FROM    *
     *                                                           *
     *    THE FUNCTION, WHEN A FUNCTION IS CALLED FROM A         *
     *                                                           *
     *    POINTER (ECSPECIALLY) OR WHEN THERE IS A POINTER       *
     *                                                           *
     *    USED, FOR EVERY TYPE, THEN ITS (OBVIOUSLY TO ME)       *
     *                                                           *
     *    A VOID POINTER, (Object *) IT CAN ONLY RETURN THE      *
     *                                                           *
     *    BASE TYPE OR BE THE BASE TYPE (void *). THEREFORE      *
     *                                                           *
     *    THIS HAS BEEN (SOMEWHAT) OF A DEAD END IN MY           *
     *                                                           *
     *    IMPLEMENTATIONS AND THEREFORE NEEDS TO BE ABANDONED,   *
     *                                                           *
     *    BUT WILL REMAIN AS A CONSTANT REMINDER THAT THERE      *
     *                                                           *
     *    IS A DEAD END TO BE VIEWED (LIKE THE CONCRETE          *
     *                                                           *
     *    class) (NOT SAYING THAT THE CONCRETE CLASS IS A        *
     *                                                           *
     *    DEAD END ITSELF JUST THAT ITS AN END). AN END THAT     *
     *                                                           *
     *    GETS TIED OFF/UP AND CAN REMAIN THERE TO BE VIEWED     *
     *                                                           *
     *    OR EVEN USED.                                          *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /**& * & * & * & * & * & * & * & * & * & * & * & * & &
         & @brief    FACTORY C        (FACTORY OBJECT)       *
         *                                                   &
         &  this is the solution for something that took a   *
         *                                                   &
         &  while to figure out, and didn't work the way     *
         *                                                   &
         &  i thought it would, but now i understand C       *
         *                                                   &
         &  for what it is. this is what im sure that the    *
         *                                                   &
         &  C++/Java compiler either does for its dot        *
         *                                                   &
         &  operator, or it uses its compiler to hide a      *
         *                                                   &
         &  cast. ( if they have the same solution for this  *
         *                                                   &
         &  here, then why does their own form of factory    *
         *                                                   &
         &  table have nothing good come out of it other     *
         *                                                   &
         &  than overloaded functions? my conclusion is that *
         *                                                   &
         &  C++ does not use a factory table, but it just    *
         *                                                   &
         &  uses a single strategy table for a set of        *
         *                                                   &
         &  overloaded functions.                            &
         &                                                   *
         *                                                   &
         &  now i understand, the functions in this file     *
         *                                                   &
         &  are a higher level of an overloaded function     *
         *                                                   &
         &  from C++ i believe,                              *
         &                                                   *
         *                                                   &
         & @param  default first parameter for method (self) *
         *                                                   &
         & @throw  throw(new(Exception))(this,"no function") *
         *                                                   &
         & @return & FactoryObject(Interface)                *
         *                                                   &
         &         FactoryObject(VirtualTable) *             *
         *& * & * & * & * & * & * & * & * & * & * & * & * & &*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** & * & * & * & * & * & * & * & * & * & * & * & * & * & * &*
     * @author CLASS FACTORY HELPER                              *
     & * & * & * & * & * & * & * & * & * & * & * & * & * & * & * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
    volatile struct String (Helper)
    {   Helper   base;

        String * self;

        String (VirtualTable) * (*virt)( String * );

        ctorPtr (*ctor)(void);

    }volatile string(Helper)={{},nullptr,&String(Virt),&String(Ctor)};


    explicit String (VirtualTable) * String(Virt)( String * self )
    {
        return virtual( self, String );   }


    static struct String(Helper) * String(GetHelper)();

    static struct String(Helper) * (*String(InitHelper)(String *))(void);


    explicit struct String(Helper) * String(GetHelper)()
    {
        return & string(Helper);   }


    explicit struct String(Helper) *

        (*String(InitHelper)(String * self))(void)

    { string(Helper).self = self; return & String(GetHelper); }
  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  THAT CONCLUDES THE FULL IMPLEMENTATION FOR A             *
     *                                                           *
     *  class(FactoryTable) REGISTRATION (INTERFACE). THE CLASS  *
     *                                                           *
     *  HELPER IS STILL NOT A SOLUTION FOR ANYTHING I KNOW       *
     *                                                           *
     *  BUT I HAVE SPENT TOO MUCH TIME ON IT TO REMOVE ITS       *
     *                                                           *
     *  IMPLEMENTATION FROM THE FILE OR EVEN RE-DECLARE ITS      *
     *                                                           *
     *  DATAFIELD POSITION (THE THIRD DATAFIELD POS [2]) TO      *
     *                                                           *
     *  BE FOR SOMETHING ELSE. THERE IS NOTHING ELSE THATS       *
     *                                                           *
     *  NEEDED FOR class(FactoryTable).                          *
     *                                                           *
     *                                                           *
     * "IF THIS LAST FUNCTION OR SOMETHING LIKE IT WOULD BE      *
     *                                                           *
     *  A FACTORY METHOD THAT TAKES A STRING THEN WE MAY STILL   *
     *                                                           *
     *  BE IN LUCK HERE WITH OUR HELPER. WE CAN MAKE USE OF OUR  *
     *                                                           *
     *  VOLATILE WHAT FUNCTION MAYBE OR JUST volatilewhat AS A   *
     *                                                           *
     *  cstring. (str) THE STRING USED BELOW CAN BE THE VOLATILE *
     *                                                           *
     *  ONE (volatiletype)... THAT IDEA CHANGED INTO SOMETHING   *
     *                                                           *
     *  ELSE (i wonder why)" - author                            *
     *                                                           *
     *                                                           *
     *#define factory(cstring) FactoryTable(Interface).function(\*
     *   \                                                       *
     *      ftable, cstring )  X  ->fact()                       *
     *                                                           *
     *                                                           *
     *#define v(obj)  FactoryTable(Interface).function(\         *
     *   \                                                       *
     *      ftable, typeid(obj) )  X  ( obj )  () ->  virt( obj )*
     *                                                           *
     *                                                           *
     *  I BELIEVE IN INFORMATION HIDING USING DATATYPING IN C    *
     *                                                           *
     *  WHERE A BASE POINTER CAN ONLY BE PROVIDED BY A RETURN    *
     *                                                           *
     *  FROM A FUNCTION CALLED FROM A POINTER AND NOTHING ELSE   *
     *                                                           *
     *  (SO IM MOVING ON).                                       *
     *                                                           *
     *  THE HELPER WILL REMAIN AS THE 3RD DATAFIELD POS OR [2]   *
     *                                                           *
     *  FOR class(FactoryTable) UNTIL ITS NEEDED FOR A SOLUTION  *
     *                                                           *
     *  FOR SOMETHING LIKE WHEN A COMPILER GETS IMPLEMENTED TO   *
     *                                                           *
     *  SUPPORT THE SYNTAX FOR AN operator FUNCTION POINTER TO BE*
     *                                                           *
     *  DECLARED INSIDE A STRUCT. THEN THE CLASS HELPER CAN HAVE *
     *                                                           *
     *  ALL THE FUNCTION POINTERS ITSELF (WHICH WOULD BE OF SOME *
     *                                                           *
     *  STRATEGIC SIGNIFICANCE CONSIDERING A CLASS HELPER).      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                                                           *
     * I CAME UP WITH A SOLUTION USING THE SAME SYNTAX AS WHAT I *
     *                                                           *
     * WANTED, BUT, WILL NEVER BE THE ASSIGNED INTERFACE FOR AN  *
     *                                                           *
     * OBJECT IN THE VIRTUAL TABLE BECAUSE OF HOW A FUNCTION     *
     *                                                           *
     * CALLED FROM A POINTER CAN ONLY RETURN THE DATATYPE        *
     *                                                           *
     * SPECIFIED BY THE POINTER, NOT THE IMPLEMENTATION. THE     *
     *                                                           *
     * DATATYPES OF THE PARAMETERS PASSED INTO THE FUNCTION ARE  *
     *                                                           *
     * THE DATATYPES SPECIFIED BY THE IMPLEMENTATION.            *
     *                                                           *
     *                 v(obj)->meth(this, ...);                  *
     *                                                           *
     * IS A SYNTAX THAT ACCEPTS EVERY OBJECT OF EVERY TYPE USING *
     *                                                           *
     * A FACTORY TABLE CLASS, HOWEVER, DONT FORGET THAT IT (THE  *
     *                                                           *
     * STATEMENT DISPLAYED) IS USING THE FACTORY OBJECT FACTORY  *
     *                                                           *
     * TABLE STRUCT VARIABLE FACTORY OBJECT INTERFACE.           *
     *                                                           *
     *                 v(obj)->meth(this, ...);                  *
     *                                                           *
     * IS ACCEPTIBLE FOR EVERY FACTORY OBJECT LIKE               *
     *                                                           *
     * virtual(obj, Class)->meth(this, ...) IS FOR VIRTUAL TABLE *
     *                                                           *
     * OBJECTS BUT YOU NEED TO IMPLEMENT THE CENTRAL OVERLOAD    *
     *                                                           *
     * VERSIONS OF THOSE METHODS (->meth(this,...)) (PROBABLY    *
     *                                                           *
     * INSIDE FactoryObject.h) THOSE ARE GLOBAL FUNCTIONS WITH   *
     *                                                           *
     * METHOD NAMES, THEY ALSO ARE ADDED TO THE                  *
     *                                                           *
     * FactoryObject(FactoryTable) AND INITIALIZED INSIDE THE    *
     *                                                           *
     * FactoryObject(Interface) AS final METHODS. DONT FORGET    *
     *                                                           *
     * THAT A (FACTORY C) FACTORY OBJECT IS NOT ONLY A VIRTUAL   *
     *                                                           *
     * TABLE OBJECT BUT AN OBJECT OF A FACTORY TABLE CLASS.      *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                           end                             */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
       THE FACTORY OBJECT FACTORY TABLE STRUCT         *
         *                                                   &
         &   VARIABLE FACTORY OBJECT INTERFACE IS THE        *
         *                                                   &
         &   FACTORY C PRIMARY INTERFACE WHERE EVERY METHOD  *
         *                                                   &
         &   OF EVERY FACTORY TABLE CLASS HAS A PLACE

     */
    /**
      #define v(obj)  FactoryTable(Interface).function(\
      \
          ftable, typeid(obj) ) X ( obj )  () ->  virt( obj )   X
     */
    #if 0
    #if 0
      #define _v(obj) \
      \
          FactoryTable(Interface).map( ftable, "..." )      X     \
      \
          FactoryTable(Interface).pair.hlpr->               X
    #endif // 0
    #ifndef v
      #define v FactoryObject(Virtual)
    #endif // v
    #endif // 0 DEAD_END___TIED_OFF___
    #define VICTORY_OVER___C_PLUS_PLUS___ 1
    #if VICTORY_OVER___C_PLUS_PLUS___
      #define v(flag) multimap(flag) //or multidex
    #endif // VICTORY_OVER___C_PLUS_PLUS___
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
      ((bool()(*)(Object*, ...))((Method**)virtual(vector,class))

            [ ((virtual*)multimap(true)(typeid(vector))

          ("class(VirtualHeap)")("insert"))->val ])(this, ...) ;

    #endif //USED_TO_IMPLEMENT_1_BELOW
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                           insert(vector, ...);     //Y
    #endif // HERE
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                      v(vector)->insert(this, ...); //N (CLUTTERED)
    #endif // C_PLUS_PLUS___INTERFACE_VICTORY___FACTORY_C
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * *
         * @brief  FACTORY OBJECT FACTORY TABLE (INTERFACE) *
         * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if  FACTORY_OBJECT___INTERFACE___V
        printf("\n0x%x\n", ((void**)v(obj))[0]);
        printf("0x%x\n",   ((void**)v(obj))[1]);
        printf("0x%x\n\n", ((void**)v(obj))[2]);



        printf("type:       0x%x\n", ((void**)v(obj))[3]);
        printf("ctor:       0x%x\n", ((void**)v(obj))[4]);
        printf("dtor:       0x%x\n", ((void**)v(obj))[5]);
        printf("equal:      0x%x\n", ((void**)v(obj))[6]);
        printf("greater:    0x%x\n", ((void**)v(obj))[7]);
        printf("less:       0x%x\n", ((void**)v(obj))[8]);
        printf("assign:     0x%x\n", ((void**)v(obj))[9]);
        printf("swap:       0x%x\n", ((void**)v(obj))[10]);
        printf("max:        0x%x\n", ((void**)v(obj))[11]);
        printf("min:        0x%x\n", ((void**)v(obj))[12]);
        printf("plus:       0x%x\n", ((void**)v(obj))[13]);
        printf("minus:      0x%x\n", ((void**)v(obj))[14]);
        printf("multiplies: 0x%x\n", ((void**)v(obj))[15]);
        printf("divides:    0x%x\n", ((void**)v(obj))[16]);
        printf("modulus:    0x%x\n", ((void**)v(obj))[17]);
        printf("copy:       0x%x\n", ((void**)v(obj))[18]);
        printf("insert:     0x%x\n", ((void**)v(obj))[19]);
        printf("remove:     0x%x\n", ((void**)v(obj))[20]);
        printf("at:         0x%x\n", ((void**)v(obj))[21]);
        printf("size:       0x%x\n", ((void**)v(obj))[22]);
        printf("begin:      0x%x\n", ((void**)v(obj))[23]);
        printf("resize:     0x%x\n", ((void**)v(obj))[24]);
        printf("replace:    0x%x\n", ((void**)v(obj))[25]);
        printf("clear:      0x%x\n", ((void**)v(obj))[26]);
        printf("getptr:     0x%x\n", ((void**)v(obj))[27]);
        printf("front:      0x%x\n", ((void**)v(obj))[28]);
        printf("back:       0x%x\n", ((void**)v(obj))[29]);
        printf("end:        0x%x\n", ((void**)v(obj))[30]);
        printf("concat:     0x%x\n", ((void**)v(obj))[31]);
        printf("substr:     0x%x\n", ((void**)v(obj))[32]);
        printf("toString:   0x%x\n", ((void**)v(obj))[33]);
        printf("search:     0x%x\n", ((void**)v(obj))[34]);
        printf("get:        0x%x\n", ((void**)v(obj))[35]);
        printf("next:       0x%x\n", ((void**)v(obj))[36]);
        printf("prev:       0x%x\n", ((void**)v(obj))[37]);
        /*
      THESE ALL ARE GLOBAL FUNCTIONS ANYWAYS SO NO NEED FOR THIS

      (THIS IS LITERALLY THAT ONE DISASTER CASE)
         */
    #endif // FACTORY_OBJECT___INTERFACE___V
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

  #if 0    //  pri   cla   sub

        register(Class);

        allocate(sizeof(Class))

        accumulate(Class)(this, ...)

        new(Class)(this, ...)

        adapter(Class, Adapter)(this, ...)

        factory("Class")(this, ...)

        build("class(FactoryTable)")(0);



        deallocate(obj)//allocate

        delete(obj)//everything - allocate

        destruct(obj)

        demolish(reg)

        deaccumulate(obj)

        drop(Class);



        register(Class); //class

        drop(Class);


        Object * obj = allocate(sizeof(type));   //runtime object

        deallocate(obj);
        reallocate(obj, size)


        Object * obj = new(Class)(this, ...) ; //virtual table object

        delete(obj);


        initialize(obj, ...); //virtual table object
                            //these two are extra (built into previous two)
        destruct(obj)  ;


        Object * obj = accumulate(Class)(this, ...); //side virtual table "accumulator"
                                    // this one will be treated as a table
        deaccumulate(obj)   ;       //of variables


        build()

        demolish()


        register(Class); //class


            *(int*)complex(obj, "a") =

            ((bool()(*)(Object*,...))
            *function(obj, "meth"))(this, ...)


        drop(Class);



        Interface reg = build("class(FactoryTable)")(0);

        demolish(reg)



        union(true)(type_info(adp))(adp, obj);

        union(true)(typeid(obj), typeid(adp))(adp, obj);


        union(false)(typeid(adp))(adp)


        public(true)(true)(false);

        private(true);


        protected(true)(true)(true);//flagstructor 1,2,3


        default(1) = false;

        public(true);

        namespace(obj, "", "", "");//system connect




        break(false)("")("")("");//control factory
        break(true)("")("")("");//+pass stack
                  //pri cla sub

    register(Class); //class

        multimap(true)("")("")("");//registructor

            cout("")endl cend; //right

    drop(Class);

                        typeid(obj)


            cout("")endl(end(0));//wrong

        //static_assert(a > b);




    namespace() //wtf i use for? (database connect or OS connect, config?)


    operator() // compiler?


    break()   //factory object overload
    protected()
    static() //... static access operator


        public(true)(true)(true);         //<--  pivot on flag

        protected(true)(true)(false);   //<-- use stack or no

        private(false)(false)(false);     //<--  pivot on same flag


    const_cast(Class) ;
    static_cast(Class);


    static_assert(a > b);


    auto()()()()  //control factory  ... for loop?

    // auto loop

    goto()()()()  //... for loop? (COMMAND)
    so()()()()

    try //control factory tower "control tower" NONONONONONONO
    {}
    so(start)(check)(block)(probe)

    goto(flag) //choice of NO NO NO NO NO NO !
    {}
    using template(Array)(start)(check)(block)(probe)(break(0));

    ... (...)(...)();//


    template(array);
    try
    {
        auto(& i)(i < 10)(...)(++i);//YES AUTO   1 ?
    }
    catch( Exception * e ){}


    try
    {
        auto(array)(& i)(i < 10)(...)(++i);//YES AUTO   OR 2 ?
    }
    catch( Exception * e ){}






    struct(bunker)(typeid)(obj)

    struct(bunker)(virtual)(obj, Class) ->

    !struct(bunker)(instance)(obj)

    !struct(bunker)(instanceof)(obj, Class)

    Object * obj = accumulate(Class)(this, ...)
    deaccumulate(obj)


        accumulate(Assertion)(this, assert( a < b ));

        throw(accumulate(Exception))(this, "...");

        throw(factory("Exception"))(this, "...");


  #endif // 0




  #if 0
    #define         const(obj, ...)   init(obj, # _VA_ARGS_ )
  #endif // 0
                /*
                 abs;
                 div;
                 acos;
                 asin;
                 atan;
                 atan2;
                 ceil;
                 cos;
                 cosh;
                 exp;
                 fabs;
                 floor;
                 fmod;
                 frexp;
                 ldexp;
                 log;
                 log10;
                 modf;
                 pow;
                 sin;
                 sinh;
                 sqrt;
                 tan;
                 tanh;
                 */
        #if 0
         default;
         break;
         return;
        #endif // 0


        rend;
        rbegin;

        ///cbegin;
        ///cend;

        /**
         * @brief just comment out when they are
         *  put to use these macro definitions (or not)
         */
        #if 0
                allocator;
                allocate_shared;
                allocator_base;
                allocator_chunklist;
                allocator_fixed_size;
                allocator_newdel;
                allocator_suballoc;
                allocator_unbounded;
                allocator_variable_size;

                all_of;


                 LessThanComparable;
                 remove_all_extents;
                 remove_const;
                 remove_copy;
                 remove_copy_if;
                 remove_cv;
                 remove_extent;
                 remove_if;
                 remove_pointer;
                 remove_reference;;
                 remove_volatile;
                 less_equal  ;


        binary_function;
        binary_negate;
        binary_search;
        bind;
        bind1st;
        bind2nd;
        binder1st;
        binder2nd;
        binomial_distribution;
                   ///max;pow;sqrt;
        conditional;
        condition_variable;

        constexpr;

        cons

        valarray;
        value_type;

      #if 0
        #undef size_type
        typedef size_t size_type;
      #endif // 0

        typedef size_t nothrow_t;
        const nothrow_t nothrow = 0U;


            equal_to;
            not1;
            not2;

        is_constructible;//(Complex C)

        is_array;
        ///is_class;//ftable !instance()
        is_empty;
        is_function;

        //is_object;  //!instance()

        is_abstract; //+is_polymorphic(a, b)

        is_arithmetic;
        is_array; //cstring p = typeid() if(p[0] = 'A' && ...)
        is_base_of;
        is_bind_expression;
        ///is_class;
        is_compound;
        is_const;

        is_constructible;//yes if added to builder table

        is_convertible;
        is_empty;
        is_enum;
        is_error_code_enum;
        is_error_condition_enum;
        is_explicitly_convertible;
        is_floating_point;

        is_function;

        is_fundamental;
        is_heap;
        is_heap_until;
        is_integral;
        is_literal_type;


        is_lock_free;


        is_lvalue_reference;
        is_member_function_pointer;
        is_member_object_pointer;
        is_member_pointer;
        is_nothrow_constructible;


        is_partitioned;
        is_placeholder;
        is_pod;
        is_pointer;
        is_reference;
        is_rvalue_reference;
        is_same;
        is_scalar;
        is_signed;
        is_sorted;
        is_sorted_until;
        is_standard_layout;
        //is_union;
        is_void;
        is_volatile;




            bad_alloc;
            bad_function_call;
            bad_weak_ptr;

        length_error;


            not_equal_to;

                           /** FactoryArray */

                            set_difference;
                            set_union;
                            set_intersection;

                                back_item;
                                minmax;
                                unique;
                                min_element;
                                max_element;

                                minmax_element;


                                max_fixed_size;
                                max_none;
                                max_unbounded;
                                max_variable_size;

                                //for_each( item ; in ( list )){}
                                all_of;
                                any_of;
                                none_of;
                                find;
                                find_if;
                                find_if_not;
                                count;
                                count_if;
                                transform;
                                reverse;
                                rotate;
                                shuffle_order_engine;
    ///except;
                                nth_element;

                                merge;

                                includes;

                                iter_swap;

                                array;


        discard_block;
        discard_block_engine;
        discrete_distribution;


        minstd_rand;

        minstd_rand0;


       ///noexcept;

    uninitialized_fill_n;
    uninitialized_fill;

    uninitialized_copy_n;
    uninitialized_copy;
    uniform_real_distribution;
    uniform_int;
    uniform_int_distribution;

    unique_copy;
    unique_ptr;
                                difference_type;

                                ///max;




                                ///sin; cos; tan;
    //exception;
        ///multimap;

        ///multiplier;


        multiset;


        //ACC OR accumulate(Class)(...)

      deaccumulate;
        accumulate;
        //delete?  (not if they are accumulated?)
        //virtual? (not if they are variables)
        //typeid?  ()



        ///div_t;

        sub_match;

        //exception;

        subtract_with_carry_engine;

        subtract_with_carry_01;

        subtract_with_carry;




        vector;
        list;
        deque;
        queue;

        stack;//like complex() but for multiple inheritance stack()
        table;

        ///map;
        ///multimap;

        ///set;    set()   jump()





        set_new_handler;
        set_symmetric_difference;


        bitset;




        setw;//




        inplace_merge;

        ;
        input_iterator_tag;
        output_iterator_tag;

        out_of_range;



        istream;ostream;iostream;

        istreambuf_iterator;
        istream_iterator;
        ostreambuf_iterator;
        ostream_iterator;




        swap_ranges;


        random_access_iterator_tag;

        random_device;

        random_shuffle;

        range_error;

        rank;

        ranlux24;

        ranlux24_base;

        ranlux3;

        ranlux3_01;

        ranlux4;

        ranlux48;

        ranlux48_base;

        ranlux_base_01;

        ranlux4_01;

                                ranlux64_base_01;

                ///static_assert;

            ///static_cast;



         static_pointer_cast;


                                        pair(key, val);

                                        ///size;
        sort_heap;



        filebuf;

        search_n;


        unary_function;
        unary_negate;
        ///function;

        move_backward;
        move_iterator;

        ptr_fun;
        iterator_traits;
        back_insert_iterator;

             stable_sort;

             stable_partition;

        next_permutation;

          numeric_limits;   constexpr;

          const_iterator; conditional;

          extent;

          //is_polymorphic; //polymorph table can return list here
                         //saying is_polymorphic with a list


                get_deleter;
        get_temporary_buffer;
        get_pointer_safety;

        //nothrow;

        //nothrow_t;

         ///  and


          ///and_eq


         /// bitand


          /// bitor

        // ../Standard/iso646.h has more along with

        // ../Library/clibrary.h (includes standard files and
                                  // starts setting up)

          just;

          //then;

          so;

          //as;

          like;



          //if

#if 0
          {}
          using template(Set, Case)(...)(...)(...)(...)(...)() ;
#endif // 0

          /// compl
common_type;
          ///  not
compare_exchange_strong;
compare_exchange_weak;



          /// not_eq


         ///  or


         /// or_eq


       /// xor
     ///@headername
    ///@file
         ///xor_eq

         allocator;//&vtable,&ftable,&atable (poly Allocator)
     //deallocator;

         tr1;


                   ///exception; ///(in throw.h)
                   value_type;
                   ///type_info; (in type_info.h)
                   size_type; ///(in SizeType.h)
                   valarray;


        ///reference;
          reference_wrapper;

          static_assert;//

          static_cast;

          static_pointer_cast;

       /// std; ///std->cout->cout()->cout()
                 ///less;
                 ///more;

                 ///bit_and;
                 ///bit_or;
                 ///bit_xor;
 ///SizeType        max( const Object * );///(also used with Factory Container)








                ///max;
                ///min;

                ///less;
                ///plus;
                ///minus;
                ///multiplies;
                ///divides;
                ///modulus;



                ///bit_and;
                ///bit_or;
                ///bit_xor;

                    empty;

                    hash;   /// Strategic (in object)

                    sort;

                    find;

                 ///fill;

                    reverse;

                 ///assign;
        #endif // 0
                                                         //CWP
#endif // FACTORYOBJECT_H_INCLUDED

