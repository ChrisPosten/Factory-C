#ifndef DEFINEQSORT_H_INCLUDED
#define DEFINEQSORT_H_INCLUDED
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
     * @brief define quick sort for arrays                       *
     *                                                           *
     * defineQSort(int, array[i] == array[left],                 *
     *                  array[i] > array[left] );                *
     *                                                           *
     * lol this function was created on accident by the people   *
     * who invented it... it looks like it doesn't make sense    *
     * when you first look at it and can be difficult/time       *
     * consuming to trace the calls                              *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineQSort(type, equal, greater, comp)\
    \
        comp/*defineSwap(type)*/\
    \
        static void type##QSort( type *, size_type, size_type );\
    \
        explicit void type##QSort( type * array,\
    \
            size_type left, size_type right )\
        {\
            size_type i, last;\
    \
            if( left >= (typemax(size_type) == right ? 0 : right) )\
            {\
                return;\
            }\
            type##Swap( array, left, (left + right) / 2 );\
            last = left;\
    \
            for( i = left + 1; i <= right; i++ )\
            {\
                if( !( equal ) && !( greater ) )\
                {\
                    type##Swap(array, ++last, i);\
                }\
            }\
            type##Swap(array, left, last);\
            type##QSort(array, left, last - 1);\
            type##QSort(array, last + 1, right);\
        }

    #define defineSwap(type)\
    \
        static void type##Swap( type *, size_type, size_type );\
    \
        explicit void type##Swap( type * array, size_type i, size_type j )\
        {\
            type temp = array[i];\
            array[i] = array[j];\
            array[j] = temp;\
        }

    /// /// /// /// /// /// /// /// /// ///
    ///  front-end for array functions  ///
    /*   #define char(f) char##f         */
    /// /// /// /// /// /// /// /// /// ///

    #undef Member ///never continued with that idea

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
#endif // DEFINEQSORT_H_INCLUDED
