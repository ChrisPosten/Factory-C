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
    #ifndef OBSERVABLE_H_INCLUDED
    #define OBSERVABLE_H_INCLUDED

        /**

        THIS IS FOR THE FACTORY OBJECT/FACTORY OBSERVER.

        THIS HAS BEEN MADE ITS OWN FILE FOR THE NAMESPACE

        TO BE INCLUDED HERE IN FACTORY C (OOC). HERE IN C.

        THIS WILL BE IMPLEMENTED THE SAME WAY EVERY FACTORY

        OBJECT FUNCTION IS IMPLEMENTED IN FactoryObject.h

        SO USE THE SAME CASES AND WORK THE CONRTOL FLAG THE

        SAME WAY AS THERE.



		ANYWAYS JUST REMEMBER

        THAT THESE (TYPES OF) FUNCTIONS REQUIRE THAT BOTH THE

        VIRTUAL TABLE AND THE FACTORY TABLE ARE TO BE USED IN

        CONJUNCTION WITH EACH OTHER TO ACHIEVE THE INTENDED

        RESULT. typeid(object) IS ALL THAT IS NEEDED FROM THE

        VIRTUAL TABLE HERE.


        SO MAKE A CALL TO control() AND PULL THE VALUES

        OFF THE STACK MANUALLY LIKE ALWAYS (INSIDE YOUR

        OWN FUNCTIONS).


        DON'T FORGET

        THAT 99% OF FACTORY OBJECT FUNCTIONS WILL MAKE

        A CALL TO control() FOR THE ABILITY OF BEING ABLE

        TO BE PLACED IN A FACTORY SLOT IN THE FACTORY

        SEQUENCE (FACTORY CONTROL SEQUENCE A.K.A.

        FACTORY FUNCTIONS IN A CONTROLLED SEQUENCE).

        BUT NEVERMIND THAT JUST KNOW THAT THIS FUNCTION

        USING A METHOD NAME IS OBVIOUSLY (TO ME) A

        FACTORY OBJECT FUNCTION LIKE THE ONES IN

        THE FILE MENTIONED BEFORE.

         */
        explicit void       update( Object * self, ... )

        {
            if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}

            ((void(*)(Object*,...))

                (*function( self, "update" )))(this);

            (*Flags[0]) = false;
        }
    #if 0
        explicit void       assign( Object * self, ... )  {}
    #endif // 0
        explicit void       notify( Object * self )
        {
            ((void(*)(Object*))(*function(self, "notify")))(this);
        }

    #endif // OBSERVABLE_H_INCLUDED
#endif // FACTORYTABLESINGLETON
