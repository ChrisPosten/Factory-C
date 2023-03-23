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
    #ifndef THROW_H_INCLUDED
    #define THROW_H_INCLUDED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief throw( new(Exception) )(this, "...");              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #ifndef throw
    #define throw( instance )\
    \
        instance _exception
    #else

    #endif // throw

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief used underneath throw(  )    (macro constructor)   *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define _exception(self, text, ...)\
    \
        (self, _line_, _file_, _time_, _date_, text, ## __VA_ARGS__ );\
    \
            if(Exception(Flag)){default(0)=false;printf("\a");}/*system alert*/\
    \
            if( jTop() )\
            { Jump _p = jPop();\
    \
              vPush(_p.key);\
    \
              vPush(_p.val);\
    \
              JumpFlag = true;\
    \
              if(_p.val)\
              { (*_p.val) = true; }\
    \
              jump( _p.key, _p.val ); }\
    \
            else { printStackTrace(ePop()); \
    \
              destroy(); abort(); }/**terminate**/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #endif // THROW_H_INCLUDED
                                                        //CWP
#endif //EXCEPTION
