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
    #ifndef FACTORY_H_INCLUDED
    #define FACTORY_H_INCLUDED
    #define _DUD_CTOR_       1
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                  THE FACTORY METHOD                 || *
     *                                                           *
     *              by Willy (02/11/2022)(04/19/2022)            *
     *                       (08/13/2022)(09/07/2022)            *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          factory                          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* ||            (VIRTUAL TABLE OBJECT FACTORY)           || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1) use the cstring key to locate the                *
     *          appropriate class factory method.                *
     *                                                           *
     *       2) call the class factory method for                *
     *          "class(FactoryTable)".                           *
     *                                                           *
     *       3) return the ctor through the function             *
     *          encapsulating new(Class)(Ctor).                  *
     *                                                           *
     *       x) place security restriction, etc ...              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* ||            (VIRTUAL TABLE OBJECT FACTORY)           || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief           factory("Class")(this, ...);             *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          factory                          */
        noexcept static Class Class(Init)(Class, ...);//

    except explicit Constructor fTable(Factory)(cstring type)

    { ((new*)multimap(false)(type)("class(FactoryTable)"))[1](); }

        explicit Class Class(Init)( Class self, ... ){ return 0; }//

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
       Container * vector = factory ("Vector(int)") (this, ...);
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // FACTORY_H_INCLUDED
                                            //CWP
#endif
