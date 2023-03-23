#ifndef SUBJECT_H_INCLUDED
#define SUBJECT_H_INCLUDED
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
    #include "../Object/Container.h"

    #include "../Adapter/Observer.h"


    # define Subject(Member)Subject ## Member
    # define SubjectVirtualTable(Member)SubjectVirtualTable ## Member
    static cstring Subject(VirtualTable)(Type)(void);
    /**+---------------------------------+
     * @brief Subject interface          |
     * +---------------------------------+
     *///PRIMARY (BASE) INTERFACE (OBSERVER C)
    typedef struct Subject Subject ;

    typedef struct Subject (VirtualTable)
    {   struct class (VirtualTable) base;/// = {0,0,0}          (0,1,2)

        void (*assign)(Subject *, ... );/// = 0                     (3)
                        ///
        void (*notify)(Subject *);/// = 0                           (4)

    } Subject (VirtualTable);

  #if 0
    volatile static struct aTable * volatile otable ; /// = 0
  #endif // 0

    volatile struct Subject
    {   struct class base;/// = {}

        volatile Container * volatile observers;/// = 0             (0)
    };
    volatile static bool Subject(Flag)=false;
  explicit
    cstring Subject(VirtualTableType)()
    { return "Subject(VirtualTable)"; }


    static void update( Object *, ... );

    static void assign( Object *, ... );

    static void notify( Object * );


    # undef  size_type
    # define size_type unsigned int//
    typedef struct Observer * pObserver;//

    # define pObserver(Member)pObserver ## Member

    # define pObserverIterator(Member)pObserverIterator ## Member
    typename(Iterator)(pObserver);

    # define pObserverVector(Member)pObserverVector ## Member
    typename (Vector) (pObserver, );

/**-----------------------------------------------------------------+
  | /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// |
  | /**|| UPDATE FROM OBSERVER  (INDIRECT RECURSION SOLUTION) || *  |
  |  *                                                           *  |
  |  *                    by Willy (12/13/2021)                  *  |
  |  * ||                                                     ||*//**
  | /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// |
  | /**                                                             |
  | void ObserverUpdate( Observer *, ... )                          |
  | {                                                               |
  |     if( *//* ON *//** )  //2) notified from Subject             |
  |     {                                                           |
  |                                                                 |
  |         *//*set observer values*//**                            |
  |                                                                 |
  |     }                                                           |
  |     if( *//* OFF *//** ) //1) raise a flag for                  |
  |     {                               //the Subject to notify all |
  |                                                                 |
  |         *//*set(...) and notify() from subject*//** // <------- |
  |                                                                 |
  |     }                                                           |
  | }                                                               |
  |                                                                 |
  | void SubjectSet( Subject *, ... )                               |
  | {                                                               |
  |     *//*set subject values to update observers with*//**        |
  |                                                                 |
  |     *//* TURN ON *//**                                          |
  | }                                                               |
  |                                                                 |
  | void SubjectNotify( Subject * )                                 |
  | {                                                               |
  |     *//*call update() from every observer*//**                  |
  |                                                                 |
  |     *//* TURN OFF *//**                                         |
  | }                                                               |
  |                                                                 |
  | /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// |
  +-----------------------------------------------------------------+*/
    /*
            the purpose of this would be to find a primary
            base case for recursive functions so recursive
            functions stop at: if( callStackMax() ){return;}
            in order to prevent a stack overflow error:
     */
    /**
            unsigned short callStackCounter = 0;

            #define callStackMax()\
            \
    ( callStackCounter == typemax(unsigned short) ? true : false )

            #define inc() callStackCounter += 1;

            #define dec() callStackCounter -= 1;
     */
#endif // SUBJECT_H_INCLUDED
