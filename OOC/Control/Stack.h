#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
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
    /*                    initial preparation                    */
    #include "../Object/Object.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||   THE FACTORY C FUNCTION ARGUMENTS STACK FOR THE    || *
     *         FACTORY FUNCTION AND THE CONTROL FACTORY          *
     *                                                           *
     *             by Willy (??/??/2022)(04/17/2022)             *
     *                      (04/20/2022)(12/05/2022)             *
     * ||                                                     ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  stack control & arg                               *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*              define factory function control              */
    typedef void         Stack; // = control()
    ///{
    #define                              control()\
    \
           (*Flags[0]?ControlSlot[0][0]:&self);stack=((void**)stack)+1

    static void *                       varg( void **, size_t );
    #define                              arg(self, type)\
    \
            * (type*) varg(&self, sizeof(type))
    explicit void *   varg( void ** pself, size_t typesize )

    {void * temp = *pself; *pself = *pself + typesize;return temp;}
    #define                              default(flag)flags(flag)
    #define                              flags(def)\
    \
            (*Flags[def])

    volatile static void*volatile*volatile*StackControlSlot[1]={0};

      volatile static void*volatile*volatile* ControlSlot[1]={0};

        volatile static uint8_t*Flags[256] = {0};

    ///}
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - - remember to declare variables using arg and not just pass
        them i remember, because it gets mis-assembled otherwise,
        i wish i had an example ... (too lazy) ... there is an
        example but now i can remember what file

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                      Stack * stack = control() ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                      int var = arg(stack, int) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note:

        for control() to work without parameters, the Stack pointer
        must be named stack and the first parameter must be the
        object oriented pointer named self or the object self
        pointer (apart from class self)
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief  2nd gen stack control (syntax sugar)              *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //#undef  stack//... (need)?
    #define  stack(member)           stack##member

    #define  stackcontrol()          Stack*stack=control()

    #define  stackarg(type)          arg(stack,type)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                           stack(control)();
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                      int var = stack(arg)(int) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note:

        now the Stack * is hidden completely.
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note: this was moved from clibrary.h for obvious reasons.
     */
    static Object * StandardHelper( Object **, size_t ) ;

    volatile static bool StandardFlag = false;

    #include "../Standard/stdio.h"   ///printf & scanf (KEEPER)
    /* also: String.h
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

#endif // STACK_H_INCLUDED
