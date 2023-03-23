#ifndef COMMAND_H_INCLUDED
#define COMMAND_H_INCLUDED
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
    #include "../Object/structclass.h"
            ;
    # define Command(Member)Command ## Member
    /**+---------------------------------+
     * @brief Strategic Command          |
     * +---------------------------------+
     */ //Strategic interface  ()
    typedef struct Command()
    { struct class base; /// = {}  NOT A DATAFIELD POSITION          X

        Object * self;///   (helper style pattern)                  [0]

        void (*execute)( Object * );///   /**, ...**/               [1]

    } Command();///strategic ()


    typedef struct
    {   struct class (VirtualTable) base;//
    } Command(VirtualTable);

                                /**Object*,void(*)(Object*)**/
    static Command() * Command(Init)( Command() *, ... );

    static void typename(Dtor)(Command)( Command() * self ) {}

    static cstring typename(Type)(Command) ;

    static ctorPtr Command(Ctor)();


    static void Command(Default)( Object * ) ;

    explicit void Command(Default)( Object * host ) {}///NoCommand(hook)


    static Command(VirtualTable)

        Command(Interface) =

    { { &Command(Type), &Command(Init), &Command(Dtor) } };


    explicit Command() * Command(Init)( Command() * self,

        /**Object * host, void (*execute)( Object * )*/... )

    { if (!self) {return 0;}

        Stack * stack = control();

    /* note: the dissasembly should give some light
             as to why the bottom one gets misassembled.
     */
    #if 1 //TOP
        Object * host = arg(stack, Object *);

        Object * execute = arg(stack, Object *);

        self->self    = host;

        self->execute = execute;
    #else//BOTTOM
        self->self    = arg(stack, Object *);

        self->execute = arg(stack, Object *);
    #endif // 1 PLEASE_USE_DISASSEMBLY_HERE 0
      return self; }


    ///Light * light = new(Light)(this, ...);

    ///Command * lightOn = new(Command)(this, light, & LightOn);


    ///static CommandVirtualTable

    ///    CommandInterface = {{0,0,0},0};  X  STRATEGIC


    /**
    A GOOD PLACE TO USE A FACTORY METHOD IS WHERE &LightOn IS PASSED INTO

    THE CONSTRUCTOR FOR A NEW COMMAND. THAT COULD BE REPLACED WITH A

    class(StrategyHeap) AND A SUB FACTORY METHOD (FOR DYNAMIC PROGRAMMING).
     */
    /*

        Q: how does the design of the Command pattern support the decoupling
           of the invoker of a request and the reciever of a request?

        A:

    */

    /**

    for there to be an undo command it might be desirable to use setJump()
    and longJump() and possibly encapsulate the execute function inside
    of a function that always sets a jump for long jump to jump back to
    and branch over the execute function getting called inside the function
    that encapsulates it


    there is the idea also of storing a stack of commands to see what command
    was last executed. (for an implemented Control possibly)


    also there is the idea of queuing Command requests (using a queue)

    */
#endif // COMMAND_H_INCLUDED
