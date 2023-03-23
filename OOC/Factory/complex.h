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
    #ifndef COMPLEX_H_INCLUDED
    #define COMPLEX_H_INCLUDED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                 THE COMPLEX METHOD                  || *
     *                                                           *
     *             by Willy (02/11/2022)(04/19/2022)             *
     *                      (08/09/2022)                         *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          complex                          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1) access the datamember row in the complex heap    *
     *          using the factory table index.                   *
     *                                                           *
     *       2) return pos times size for struct datamember.     *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief          (*(int*)complex(obj, "a"))                *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                          complex                          */
    except explicit Object * fTable(Complex)

        (Object * self, cstring id)

    { Complex * row = (Complex*)multimap(true)(typeid(self))

        ("class(ComplexHeap)")(id);

      return self + ( row->val * row->col ) ; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
               (*(size_t*)complex(vector, "maxsize")) =
    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // COMPLEX_H_INCLUDED
                                                        //CWP
#endif // FACTORYTABLESINGLETON
#endif // VIRTUALTABLESINGLETON
