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
    #ifndef TYPE_INFO_H_INCLUDED
    #define TYPE_INFO_H_INCLUDED

    ///#include "../Library/String.h"
    /**

    THIS IS TYPE_INFO, THIS IS WHERE YOU GET A TYPE CHECK AND RETURN

    THE OTHERWISE HIDDEN ATTRIBUTE OF WHETHER OR NOT ITS AN ADAPTER.

    FOR CERTIFICATION, A CLASS OBJECT EXTENDED FROM ASSERTION/EXCEPTION

    IS PUSHED ONTO THE STACK (TODO).


     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1) try and retrieve the adapters friend.            *
     *                                                           *
     *       2) return typeid if not an adapter, return          *
     *          the adapter type if it is.                       *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief               type_info(obj);                      *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #define TypeInfo(Member)TypeInfo ## Member

    noexcept explicit cstring aTable
    (TypeInfo)(const Object * self)

    {Pair(Class, Class) pair = { self, 0 }, * p = AdapterTable
        (Interface).base.search( atable, pair );

        if( !p || !p->key )//
        {return typeid(self);
        }
        else//
        {
            return (cstring)((Adapter*)multimap(true)(typeid(p->val))
            ("class(AdapterHeap)")(typeid(p->key)))->val; } }

    /* note:
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1) return true or false if its an adapters union.   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief               is_union(a, b);                      *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    noexcept explicit bool aTable
    (IsUnion)(const Object * self, const Object * objt)

    {Pair(Class, Class) pair = { self, 0 }, * p = AdapterTable
        (Interface).base.search( atable, pair );

        if( !p || !p->key )
        { pair.key = objt;
          pair.val = 0;

          p = AdapterTable(Interface).base.search( atable, pair );

          if( !p || !p->key )
          { return false; }
          else{ return p->val == self; } }
        else
        {return p->val == objt; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief               is_adapter(a, b);                    *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    noexcept explicit Object * aTable
    (IsAdapter)(const Object * self)

    {Pair(Class, Class) pair = { self, 0 }, * p = AdapterTable
        (Interface).base.search( atable, pair );

        if( !p || !p->key )
        {
            return 0 ;
        }
        else
        { return p->val; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
        I THINK I AM GOING TO HAVE TO SETTLE FOR MORE FACTORY METHODS

        THAT CAN BE USED, A NEW TABLE THAT USES A DOUBLE CSTRING

        SO:  INSIDE WEATHERSTATION INTERFACE HEAP SUB HEAP:

            { "Statistics", "WeatherStation(Statistics)" },
            { "CurrentConditions", "WeatherStation(CurrentConditions)" },
            { "HeatIndex", "WeatherStation(HeatIndex)" },
            { "Forecast", "WeatherStation(Forecast)" },

        class(AdapterHeap)
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - - everything should be good to go (11/12/2022).

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                            type_info(obj);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif
                                          //CWP
#endif //ADAPTERTABLESINGLETON
