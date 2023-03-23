#ifndef DEFINESEARCH_H_INCLUDED
#define DEFINESEARCH_H_INCLUDED
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
    /*                                                           *
     * @brief define binary search for arrays O(log n)           *
     *                                                           *
     *  defineSearch(int, array[*mid] == key,                    *
     *                    array[*mid] > key )                    *
     *                                                           *
     *  typename(Search)(...)                                    */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define Search(type)type ## Search

    #define defineSearch(type, equal, greater)\
    \
        static type * Search(type)( type *, const type,\
    \
            size_type *, size_type, size_type );\
    \
    \
    explicit type * Search(type)( type * array, const type key,\
    \
        size_type * mid, size_type first, size_type last )\
        {\
            bool found = false;\
    \
            while( first <= last && !found )\
            {/*printf("f: %d, l: %d\n", first, last);*/\
                * mid = (first + last) / 2;\
    \
                if( equal )\
                {\
                    found = true;\
    \
                    break;\
                }\
                else\
                {\
                    if( first == last && !found )\
                    {\
                        return nullptr;\
                    }\
                    if( greater )\
                    {\
                        last = *mid - 1;\
                    }\
                    else \
                    {\
                        first = *mid + 1;\
                    }\
                }\
            }\
            if( found )\
            {\
                return & array [*mid];\
            }\
            else\
            {\
                return nullptr;\
            }\
        }

#endif // DEFINESEARCH_H_INCLUDED
