#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED
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
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1) use the Set name (class name or no)              *
     *          to assign the array (proper or improper).        *
     *                                                           *
     *       2) use The Case name (enumeration element value)    *
     *          to assign a data field pos by subscript.         *
     *                                                           *
     *       3) use not only the Set name but the Case           *
     *          name to assign the typedef for the cast          *
     *          that maps itself to the appropriate data         *
     *          field pos.                                       *
     *                                                           *
     *       X) just use the array name no compile-time          *
     *          construction invloved, just initializer          *
     *          you pass array name into.                        *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief               template(Set, Case)                  *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #define TEMPLATE_ENUM 1 //
    #ifdef    define
        #undef    define   //(Macro)

        #undef    typename
    #endif // define
    #if 0
        #define   vEnum(Set)    Set##Enum
        #define   vArray(Set)   Set##Array
    #endif // 0
    #if 0
        #define   enum(Set)    Set##Enum
        #define   array(Set)   Set##Array
    #endif // 0
    #define COMMAND_CONTROL_TEMPLATE
    #ifdef  COMMAND_CONTROL_TEMPLATE
    #define TEMPLATE_DEFINE 0
  //#undef  TEMPLATE_DEFINE               /// <---
  //#ifdef  TEMPLATE_DEFINE
        #if TEMPLATE_DEFINE == 1
            #define  template  define          ///   X
        #else // TEMPLATE_DEFINE
            #if    TEMPLATE_ENUM == 1          ///   O

              #if 0 // X X X X X X X X X X X X X X X X X

                #define template(Set, Case)\
                \
                    (((Case##Set*)Set##Array)[Case]) /// (*SetArray)

              #else // X X X X X X X X X X X X X X X X X

                #define template(array)\
                \
                    (TemplateArrays(array)) ///(Factory C)

                  //  (((StartSet*)array)[Start]) /// VALUE SIMPLICITY

              #endif // ___TEMPLATE_ARRAYS___BASIC
                    /**THIS IS A CONSTRUCTION MACRO**/
                        ///typedef type CaseSet;
                        ///typedef type CaseSet;
                        ///typedef type CaseSet;

                        ///

            #elif  TEMPLATE_ENUM == 0
                #define template(Set, Num)\
                \
                    (((Set##Num**)Set##Array)[Num])

            #endif ///
        #endif // TEMPLATE_DEFINE
        #define TYPENAME_DEFINE 1
            #if TYPENAME_DEFINE == 1                ///
            #ifndef        define
                    #  define  define(macro)     define ## macro

                #define   typename   define///typename(Vector)(int, );
            #endif // define
        #endif // TYPENAME_DEFINE
    #endif // COMMAND_CONTROL_TEMPLATE \\

    #if 0   ///
        #define namespace /// namespace(Case) (or) namespace("Set", "Case") X
        #define operator  /// (C+)                template("Set", "Case") Y

        #define auto(...)
        #define break(...)
        #define goto(...)

    #endif // 1
    //#endif // TEMPLATE_H_INCLUDED
    //#define  using    //(namespace, member) namespace##member
    #ifndef null
        #define null 0    ///
    #endif // define

    #ifdef _                                  ///
        #undef _
        #define _(arg) _##arg
    #endif// _
    #ifndef _     ///
        #define _(arg) _##arg
    #endif // _
          ///                                     ///
  #if 0
    #define defineT(x)      x##Table * volatile * volatile x##table
  #endif // 0
  #if 0
    #define  define(macro)           define##macro

    #define  typename                define
  #endif // 0

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
          typename (Vector) (int, typename (Iterator) (int));
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
#endif // VTABLEGUARD
