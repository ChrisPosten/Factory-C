#ifdef VIRTUALTABLESINGLETON
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
    #ifndef TYPEID_H_INCLUDED //WHAT_H_INCLUDED
    #define TYPEID_H_INCLUDED //WHAT_H_INCLUDED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1) ask the vtable what an object is and return      *
     *          the runtime string for its type id (class type). *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief               typeid(object)                       *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 1
   # define TypeID(Member)TypeID ## Member
  #endif // DEFINED_IN_VTABLE_H
    #define defineTypeID(instance, v)\
    \
    /*except explicit cstring*/v##Table(TypeID)( const Object * self )\
    \
        { if( !self ){ return "(null)"; }\
    \
          class(VirtualTable) * i = instance(self);\
          if( !i ){ return "(!" # instance ")"; }\
    \
          if( ((typePtr*)i)[0] )/*i->type*/\
          { return ((typePtr*)i)[0](); }/*i->type();//whatitismang*/\
          else \
          { return ""; } }

    noexcept explicit cstring typename(TypeID)(instance,v);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        PASS; ALLOCATOR;    PASS; ALLOCATOR;    PASS; ALLOCATOR;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static void TypeID(PassNumber)(string * *, void *);//allocator
  #if 0
    explicit void TypeID(PassNumber)(string * * pself, void * ptr)
    {
        if( !(*pself) )
        {
            (*pself) = new(string)(this, 11);//accumulate

            ItoaHex( (**pself), ptr );
        } }
  #endif // BUNKER_H_INCLUDES
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        PASS; ALLOCATOR;    PASS; ALLOCATOR;    PASS; ALLOCATOR;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - - everything should be good to go (09/24/2022).

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                    cstring type = typeid(vector) ;
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
     // WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #endif // WHAT_H_INCLUDED
                                            //CWP
#endif // VIRTUALTABLE
