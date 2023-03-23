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
    #ifndef FUNCTION_H_INCLUDED
    #define FUNCTION_H_INCLUDED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                 THE FUNCTION METHOD                 || *
     *                                                           *
     *             by Willy (02/11/2022)(04/19/2022)             *
     *                      (08/09/2022)                         *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         function                          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1) use the object typeid and method name cstring    *
     *          to search for a slot in factory table class      *
     *          methods (interface) table: class(VirtualHeap).   *
     *                                                           *
     *       2) return a double pointer to interface method      *
     *          data field pos.                                  *
     *                                                           *
     *       3) implement the function template the function     *
     *          method expands into (the high-overload).         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief ((factPtr)(*function(self, "method")))(this,...) ; *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         function                          */
    except explicit Method * * fTable(Function)

        (Object * self, cstring meth)

        {   return &( (Method * *) virtual( self, class ) )

            [ ((virtual*)multimap(true)(type_info(self))

            ("class(VirtualHeap)")(meth))->val ] ; }/// +this

    /// PLEASE_DEBUG_ERROR_FLAG_STACK_FAILURE___MULTIMAP___ 1
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
  ((bool()(*)(Object*,...))(*function(vector, "insert")))(this, ...);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
       (*function(vector, "...")) = (*function(vector, "...")) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        note: this function returns a double pointer to an
              interface method so when this function is
              called on both sides of an assignment operator
              with both returns being dereferenced, it is
              used as the general purpose runtime override.

        also: this function is the helper function for the
              central overload function(s). that is a high-
              level overload or an interface-level overload
              instead of a datatype-level overload (low-level)
              (in FactoryObject.h).
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  typename for factory function overload    *
         *                                                   *
         *  this is for the interface-level overload the     *
         *  high-overload for any method in the program      *
         * using the function helper (the function method).  *
         *                                                   *
         * - -this is for any factory table class using a- - *
         *   - -class(VirtualHeap) for a factory object- -   *
         *                                                   *
         * @param  method name from virtual table object     *
         *         interface.                                *
         *                                                   *
         * @param  return type.                              *
         *                                                   *
         * @param  function prototype's datatype cast        *
         *         (Object *) for fist param.                *
         *                                                   *
         * @param  const or no (omit if not).                *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    //             (FACTORY OBJECT FUNCTION HELPER)              //
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
     ///Interface-Overload
    #define defineFunction(name, rtrn, cast, cnst)                \
                                                                  \
        name( cnst Object *, ... );                               \
                                                                  \
        explicit rtrn       name( cnst Object * self, ... )       \
        {                                                         \
            if( !(*Flags[0]) ){flags(0);ControlSlot[0][0]=&self;} \
                                                                  \
            rtrn objt = ((cast)                                   \
                                                                  \
                (*function( self, # name )))(this);               \
                                                                  \
            (*Flags[0]) = false;                                  \
                                                                  \
            return objt;   }                                      \

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
       static bool
       typename(Function)(insert,bool,bool()(*)(Object *,...),);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                          insert(vector, ...);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //                        (EXTENDED)                         //
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
            is_function(obj, "func") ;  // (is equal to:)

            multimap(true)(typeid(obj))("class(VirtualHeap)");

            if(  !map("func")  ) { ... } //(so no need)
    #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define is_function(/*bang,*/objt, func)\
    \
        multimap(true)(typeid(objt))("class(VirtualHeap)");\
    \
        if( /*bang*/ map(func) ) // { ... } else { ... } (why not)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                is_function(objt, "func") { } else { }
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //(probably the biggest brainstorm in one file)
    #endif // FUNCTION_H_INCLUDED
                                            //CWP
#endif // FACTORYTABLESINGLETON
#endif // VIRTUALTABLESINGLETON
