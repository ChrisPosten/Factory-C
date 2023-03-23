#ifndef DEFINEASSERTION_H_INCLUDED
#define DEFINEASSERTION_H_INCLUDED
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
    #include "../Exception/Assertion.h"
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                 ASSERTION GENERATOR                 || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineAssertion(Name)\
    \
        struct Name;\
    \
        typedef struct Name##VirtualTable\
        {   Assertion (VirtualTable) base;\
    \
        }Name##VirtualTable, Name##AssertionVirtualTable;\
    \
        typedef struct Name\
        {   Assertion base;\
    \
        }Name, Name##Assertion;\
    \
    \
        static Name * Name##Init( Assertion *,\
    \
            size_t, char *, char *, char *, char * );\
    \
        static cstring Name##Type();\
    \
    \
        explicit cstring Name##Type(){ return #Name ; }\
    \
    \
        static Name##VirtualTable Name##Interface = \
        {\
            {\
                {\
                    {\
                        &Name##Type,\
        \
                        &Name##Init,\
        \
                        &ExceptionDtor\
                    }\
        \
                },\
                &_assert\
            }\
        \
        }\
    \
        explicit Name * Name##Init( Assertion * self, size_t line,\
    \
            char * file, char * time, char * date, char * text, bool cond )\
        {\
            if( self == nullptr ){ return nullptr; }\
    \
            self = Assertion(Init)(self, line, file, time, date, text, cond);\
    \
            if( self == nullptr ){ return nullptr; }\
    \
            return self;\
        }

#endif // DEFINEASSERTION_H_INCLUDED

