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
    #ifndef CATCH_H_INCLUDED
    #define CATCH_H_INCLUDED

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief           catch( Exception * e ) {}                *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define catch( pointer )\
    \
        if( !JumpFlag )\
        { Jump _p_ = jPop();\
          vPush(_p_.key);\
          vPush(_p_.val); }\
    \
        bool _b;\
        if( string(equal)( struct(bunker)(typeid)\
    \
            ( vTop() ? *vTop()\
    \
         : nullptr ), "bool" ) )/*&& JumpFlag NO*/\
    \
         {Object * _p = vPop();\
    \
            if(_p){ _b = (*(bool*)_p); }\
    \
            pJumpVal = & _b;\
    \
    \
    \
            deaccumulate(_p); }\
    \
    \
        if( string(equal)( struct(bunker)(typeid)\
    \
            ( vTop() ? *vTop()\
    \
         : nullptr ), "jumpBuf" ) )/*&& JumpFlag NO*/\
    \
         {Object * _p = vPop();\
    \
    \
    \
            deaccumulate(_p);}\
    \
    \
        pointer = ( JumpFlag ? ePop() : nullptr );\
    \
        JumpFlag = false;/*must be named Exception * e NO*/\
    \
        if( ((bool*)pJumpVal) && (*(bool*)pJumpVal) ) //if e here


   # define sTable(Member)sTable ## Member
    static cstring sTable(TypeID)( const Object * ) ;

    /**
    THERE IS/WAS A PROBLEM HERE (try/catch) AND A PROBLEM WITH THE

    STACK OF FLAGS, MAYBE A PROBLEM WITH THE STACK ALLTOGETHER,

    SINCE THE STACKS HAVE GARBAGE OR SOMETHING ON THEM BY THE TIME

    THEY GO ON OR OFF, THATS WHY (*pJumpVal) CANT == true  FOR

    COMPARISON, JUST (*pJumpVal) THAT IS ANY POSITIVE VALUE AND

    A CONCERN FOR ME WITH THE CONTROL FACTORY. AND A CONCERN FOR

    ME WITH ... (MAYBE WAS EXCEPTION PROBLEM I JUST FIXED THAT

    INVOLVED ONLY "Exception" BEING USABLE NOT DERIVED EXCEPTIONS)


    THE LINE THAT SAYS DEBUG (ASSERT) IS ME ASSERTING MYSELF OR

    MY VALUE THAT SEEMS TO HAVE BEEN HAVING CONSTRUCTOR PROBLEMS

    AND THIS PROBLEM CAN HAVE ITS BOOK CLOSED SINCE I FIGURED OUT

    IT COMES FROM THE BOOL AS AN OBJECT AND SOMETHING ABOUT EVERY

    ODD CASE FROM ITS CTOR. MULTIMAP WAS SUFFERING FROM THE SAME

    DILEMMA THAT CAME FROM THIS DATATYPE.

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // CATCH_H_INCLUDED
                                                      //CWP
#endif // EXCEPTION
