#ifdef EXCEPTION
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
    #ifndef TRY_H_INCLUDED
    #define TRY_H_INCLUDED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief try {}                                             *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define try \
    \
        accumulate(jumpBuf);\
    \
        _pair_.key = this;\
    \
        _pair_.val = accumulate(bool)(this, false);\
    \
        *_pair_.val = false; /*(DEBUG) ASSERT ASSIGN*/\
    /**(THIS ONE NOT NEEDED BUT DID ANYWAYS BECAUSE DON'T TRUST)**/\
    \
        jPush(_pair_) ;\
    \
        pJumpVal = (void*)set( _pair_.key );\
    \
        if( !((bool*)pJumpVal) || !(*(bool*)pJumpVal) )

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // TRY_H_INCLUDED
                                                     //CWP
#endif //EXCEPTION
