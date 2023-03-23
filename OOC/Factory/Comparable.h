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
    #ifndef COMPARABLE_H_INCLUDED
    #define COMPARABLE_H_INCLUDED
/*
        1) register a Class:  register(Class)


        2) this is the game plan: the fTable checks to

           see if a Class is registered by "ClassName"

           and if it is, it iterates (p++) the automatic

           ClassTables[n] array where n is the amount of

           "Interface" registrations in a null terminated

           array of pointers to those interfaces. The first

           data field position of each "interface"

           registration is reserved for the type() function

           that returns its "interface" type as a cstring.

           the fTable is going to find the registration

           called "classCompareTable" and use it for the impl

           of these two global functions that, will work for

           every object of every class that is found in the

           fTable


        X) that is what they meant in ooc to have an Object that

           is... registered? they register their Objects too there

           don't they?


        X) from here on we just have objects (Object *), and

           its not up to inheritance anymore, but its up to

           using a registered Class and its "interface"

           registrations, accessed through a null terminated

           global-static-automatic variable array (non-dynamic)

           (non-pointer type) A.K.A. static class tables


        X) again, so from here on we use equal to compare two

           objects, throw exceptions from the registered interfaces

           when we need, we have Java grade exception classes

           and an x-macro that encapsulates their implementations


            THE REGISTRATION CAN GIVE ITS DESCRIPTION FOR SOMETHING

            ELSE MAYBE BUT ONLY NEEDS TO GIVE ITS DESCRIPTION

            AS ITS BASE TYPE EVER AND THE SPECIFIC REGISTRATION

            NEEDED FOR THESE FUNCTIONS WONT NEED TO BE EXTENDED

            EVEN THO THERE IS THE POSSIBILITY THATS THERE.
         */

        /**
            THIS IS EQUAL AND GREATER FOR COMPARING TWO

            OBJECTS, IT WILL CHECK IF BOTH OBJECTS ARE

            REGISTERED WITH THE SAME DESCRIPTION AND

            WILL RETURN TRUE IF THEY ARE. THIS IS A FUNCTION

            YOU PASS A FACTORY OBJECT INTO. A FACTORY

            OBJECT IS A VIRTUAL TABLE OBJECT AND AN OBJECT

            OF A FACTORY TABLE CLASS. THE typeid OF THE

            OBJECT IN THE VIRTUAL TABLE IS THE KEY TO THE

            SLOT IN THE FACTORY TABLE FOR THAT CLASS. FROM

            THERE THERE IS A CLASS FACTORY METHOD THAT CAN

            BE USED TO LOOK FOR THE FACTORY REGISTRATION

            THAT SHOULD GIVE ITS DESCRIPTION ALWAYS AS

            "class(CompareTable)" FROM THE SAME REGISTRATION

            LIST FOR THAT CLASS NAME'S STRING SUBMISSION.



        NOT ONLY DO THESE IMPLEMENTATIONS NEED "class(CompareTable)"

        BUT THEY NEED "class(PolymorphHeap)" AS THE INHERITANCE

        TABLE, SO CHECK IF A FACTORY TABLE CLASS HAS BOTH AND

        USE THEM, IF NOT THEN COMPARE THEM JUST AS THE SAME

        CLASS, THEN COMPARE WITH "class(CompareTable)", IF NOT

        FOUND, THEN RETURN FALSE. IF FULL CHECK INCLUDES EMPTY

        IMPLEMENTATIONS THAT ARE CALLED, THEN FULL CHECK COMPLETE

        AND RETURN TRUE IF THEY ARE. (EQUAL OR GREATER)


        WHEN COMPARING TWO DATATYPES WHERE THEY BOTH HAVE A

        MATCHING CLASS TYPE IN THEIR INTERFACE HEAPS IT MIGHT

        BE A DESIREABLE FAILSAFE TO IMPLEMENT A COMPLEX HEAP

        TO USE THE COMPLEX METHOD TO ACCESS DATAMEMBERS.
         */

            ;//(chicken scratch)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *       1) call is_polymorphic(a,b) to fill the typeid stack.*
     *                                                           *
     *       2) call equal(a,b) or others inside a while().      *
     *                                                           *
     *       3) call tPop() inside a while().                    *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define polymorphic tTop ()

    static size_t is_polymorphic( const Object *, const Object * );

    volatile static size_t num_polymorphs = 0;// + tstk

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief        equal(a, b)   &&   greater(a, b)            *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit bool  equal( const Object * a, const Object * b )
    {
        if (polymorphic)
        {   return ((compPtr*)multimap(false)
            (*polymorphic)("class(CompareTable)"))[1](a,b);
        }
        else
        {   if(string(equal)(typeid(a),typeid(b)))
            {   return ((compPtr*)multimap(false)
                (typeid(a))("class(CompareTable)"))[1](a,b);
            }
            else
            {   throw(new(IllegalOperation))
                (this, "TypeIDNotMatching\n"
                 "call:/t/t is_polymorphic(a,b)");
            }
        }
    }

    explicit bool  greater( const Object * a, const Object * b )
    {
        if (polymorphic)
        {   return ((compPtr*)multimap(false)
            (*polymorphic)("class(CompareTable)"))[2](a,b);
        }
        else
        {   if(string(equal)(typeid(a),typeid(b)))
            {   return ((compPtr*)multimap(false)
                (typeid(a))("class(CompareTable)"))[2](a,b);
            }
            else
            {   throw(new(IllegalOperation))
                (this, "TypeIDNotMatching\n"
                 "call:/t/t is_polymorphic(a,b)");
            }
        }
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                   less(a,b)                        *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /* note: less implements itself (so not part of class(CompareTable))
     */
    explicit bool  less( const Object * a, const Object * b )
    {
        return !equal(a, b) && !greater(a, b);
    }

    static bool () (*const compare)( const Object *, const Object * )
        = & equal;/*multi def error without static*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*** * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief              is_polymorphic(a, b)                  *
     *                                                           *
     * - - this polymorphic function implementation will be the  *
     * one i am keeping, since it uses a stack (tstk) TypeIDStack*
     *                                                           *
     * note: this is for a struct class only... (re-implemented) *
     *                                                           *
     * @return amount of polymorphs, false if equal() or greater *
     *         would throw an exception                          *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit size_t is_polymorphic( const Object * a, const Object * b )
    {
        if( num_polymorphs > 0 ){ num_polymorphs = 0; }
        if( tTop() ){throw(new(IllegalOperation))
                    (this, "ResolveTypeIDStackFirst");}

        Iterator * iterator_a = iterator(multimap(false)
                        (typeid(a))("class(PolymorphHeap)")),
                 * iterator_b = iterator(multimap(false)
                        (typeid(b))("class(PolymorphHeap)"));

        if( string(equal)(typeid(a),typeid(b)) )
        {num_polymorphs++;
         if( !tPush(typeid(a)) ){throw(new(OutOfMemory))
            (this, "TypeIDStackFailure");}}

        /* note: check every possibility with obj b typeid
         */
        while( iterator(iterator_a) )
        {   cstring key = ref(iterator_a)[0];
            if( string(equal)(key, typeid(b)) )
            {   num_polymorphs++;
                if( !tPush(key) ){throw(new(OutOfMemory))
                    (this, "TypeIDStackFailure");}
            }   }
        deaccumulate(iterator_a);

        /* note: check every possibility with obj a typeid
         */
        while( iterator(iterator_b) )
        {   cstring key = ref(iterator_b)[0];
            if( string(equal)(key, typeid(a)) )
            {   num_polymorphs++;
                if( !tPush(key) ){throw(new(OutOfMemory))
                    (this, "TypeIDStackFailure");}
            }   }
        deaccumulate(iterator_b);
        iterator_a = iterator(multimap(false)
                    (typeid(a))("class(PolymorphHeap)"));

        /* note: check every possibility in the arrays
         */
        while( iterator(iterator_a) )
        {   cstring key_a = ref(iterator_a)[0];
            iterator_b = iterator(multimap(false)
                        (typeid(b))("class(PolymorphHeap)"));
            while( iterator(iterator_b) )
            {   cstring key_b = ref(iterator_b)[0];
                if( string(equal)(key_a, key_b) )
                {   num_polymorphs++;
                    if( !tPush(key_a) )
                        {throw(new(OutOfMemory))
                    (this, "TypeIDStackFailure");}
                }   }
            deaccumulate(iterator_b); }
        deaccumulate(iterator_a);

        if(num_polymorphs > 0){return num_polymorphs;}else{return 0;}
    }
    /* note: this could be further implemented to use a list of polymorph
             types and/or an IsPolymorphic object that uses the num var
     */

        /**
         * (#define final const) THAT IS WHAT A FINAL FUNCTION POINTER
         *
         * LOOKS LIKE, THAT CAN BE TAKEN TO THE CLASS VIRTUAL TABLE
         *
         * ALONG WITH volatile THAT WOULD BE PLACED AT THE SAME POINT
         *///thats obviously (after thinking about it)
         //how a const return type looks
        ///const X bool (*compare)(const Object *,const Object *) = &equal;
    //#define equal(self, obj, type) type##Equal
        ///void func3(){ compare = & greater; }///"error: assignment of read-
                                      ///only variable 'compare' " - compiler
    //#define greater(...)

    /// !equal && !greater  == less

    /// !greater            == less || equal

    /// !equal              == not equal

    ///                        equal

    ///                        greater

    ///                        greater || equal

    /*

    */

    //!      - - funky comment block - -
    /*
        heres a question, would this pointer be declared as volatile

        even though it may never get re-initialized?  (compare)

        (see vTable.h, fTable.h, aTable.h for proper use of volatile)
    */


    #endif // COMPARABLE_H_INCLUDED
                                                    //CWP
#endif // FACTORYTABLESINGLETON
