#ifndef CSTRING_H_INCLUDED
#define CSTRING_H_INCLUDED
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
    #include "bool.h"
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                        CSTRING                      || *
     *                                                           *
     * ||           by Willy (??/??/????)                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * ||                  string functions                    || *
     *                                                            *
     *       front-end: string(function)(...); <--- yes/no?       *
     *                  yes (macros are an art form)              *
     * ||                                                      || *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    #define string(member)                           string##member
    typedef char * string;

    #define cstring(member)                         cstring##member
    typedef const char * cstring;

    #define char(member)                               char##member
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                  string(fill)                       *
     *                                                            *
     * @param   a, b                                              *
     *                                                            *
     * @return  void                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static void string(fill)(char *, const char *);

    explicit void string(fill)(char * a, const char * b)
    { if( a == 0 || b == 0 ){ return; }

        while(*b)
        {
            *a = *b;

            a++;

            b++;
        }
        *a = '\0';
    }
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                 string(size)                        *
     *                                                            *
     * @param   a                                                 *
     *                                                            *
     * @return  size                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static size_t string(size)(const char *);

    explicit size_t string(size)(const char * a)
    { if( a == 0 ){ return 0; }

        size_t size = 1;

        while(*a)
        {
            size++;

            a++;
        }
        return size;
    }
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                 string(equal)                       *
     *                                                            *
     * @param   a, b                                              *
     *                                                            *
     * @return  true if equal                                     *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static bool string(equal)(const char *, const char *);

    explicit bool string(equal)(const char * a, const char * b)
    {   if( a == 0 || b == 0 ){ return false; }/**NULL STRING CASE*/

        while( *a != '\0' || *b != '\0' )
        {
            if( *a != *b )
            {
                return false;
            }
            if( ( *a == '\0' && *b != '\0' )

             || ( *a != '\0' && *b == '\0' ) )
            {
                return false;
            }
            ++a; ++b;
        }
        return true;
    }
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                  string(greater)                    *
     *                                                            *
     * @param   a, b                                              *
     *                                                            *
     * @return  true if greater                                   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static bool string(greater)(const char *, const char *);

    explicit bool string(greater)(const char * a, const char * b)
    { if( a == 0 || b == 0 ){ return false; }/**NULL STRING CASE*/

        while( *a != '\0' || *b != '\0' )
        {
            if( *a < *b )
            {
                return false;
            }
            if( *a > *b )
            {
                return true;
            }
            ++a; ++b;
        }
        return false;
    }
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                  char(copy)                         *
     *                                                            *
     * @param   a, b, c, d                                        *
     *                                                            *
     * @return  void                                              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static void char(copy)( char *, char *, char *, char * );

    explicit void char(copy)( char * a, char * b, char * c, char * d )
    {
        while( a != c || b != d ){ *a = *b; a++; b++; }
    }
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                   \ /      - * -               \ /
                     __  - * -    __  \               - * -
                    /\ \__  \    /\_\                  / \
              ____ /\__  _\  ____\/_/_    ___     ___
             / ____\/_/\ \/ /\  _`\/\ \  / __`\  / __`\
            /\_____`\ \ \ \/\ \ \_/\ \ \/\ \/\ \/\ \/\ \
     \ /    \/\_____/  \ \__/\ \_\  \ \_\ \_\ \_\ \____ \
    - * -    \/____/    \/_/  \/_/   \/_/\/_/\/_/\/___/\ \
     / \                      - * -                /\_\/_/
                               / \                 \/___/
                      \ /                          - * -
                     - * -                          / \          */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                              //CWP
#endif // CSTRING_H_INCLUDED
