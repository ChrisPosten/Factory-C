#ifndef DEFINEHASHTABLE_H_INCLUDED
#define DEFINEHASHTABLE_H_INCLUDED
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

    #include "defineVector.h"//please document the constructor


    #include "../Library/hash.h"


    typedef uint32_t uint_t;  //for string hash also


    static Strategy * HashSearch( cstring );///Factory Method for strategy table
                                           ///(but hardly used like a real one)
                                          ///(the table itself) (hardly)
    static uint_t _hash(const char *);   //string hash (32 bit)


    static uint8_t  _hash8(uint8_t); //prototype   (not implemented)


    static uint16_t _hash16(uint16_t); //          (not implemented)


    static uint32_t _hash32(uint32_t);


    static uint64_t _hash64(uint64_t);



    volatile static bool found = false;


    volatile static bool StackFlag = false;

    /*               Hold down [ctrl] and move mouse wheel to preference                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /**||                      C HASHSET                      || *
                 *                                                           *
                 * ||                      by Willy                       || */
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief 32 and 64 bit hash set, 8 and 16 bit also after                            *
     *        prototyped functions above are implemented                                 *
     *                                                                                   *
     * @author  willy (using imported hash functions)                                    *
     * @version (2017/05/08)  (2018/06/05)  (2021/02/01)  (2022/01/06)                   *
     *                                                                                   *
     * note: Quadratic functions that go into the interface                              *
     *       can have their pointers re-initialized to functions                         *
     *       that get written separately for a different style                           *
     *       hash table by interface (strategy)                                          *
     *                                                                                   *
     * also: to further extend that note would be to make use                            *
     *       of an adapter configuration without adding to the                           *
     *       adapter table so:   adapter(typeHashSetBits, BinsAndBalls)(this, ...)       *
     *                                                                                   *
     *       search()   -q probe + calls self->hash()                                    *
     *       insert()   -calls self->search()                                            *
     *       remove()   -calls self->search()                                            *
     *       findsize() -returns a prime number                                          *
     *       hash()                                                                      *
     *                                                                                   *
     * note: there is an array allocation error when creating a                          *
     *       hashset of sizes over 100 000 000 or 200 000 000 maybe the                  *
     *       built-in allocator function could be replaced with something from           *
     *       another library... (not a problem with this file but                        *
     *       allocate() in clibrary.h could be changed to another impl.)                 *
     *       (assuming that since the allocate() function stopped working there)         *
     *                                                                                   *
     *       this needs:                                                                 *
     *                                                                                   *
     *              remove function with index that doesn't move everything over         *
     *                                                                                   *
     *              hash set iterator that overrides next() to skip nulls                *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* [ctrl] - z for undo, [ctrl - x for cut, [ctrl] - c for copy, [ctrl] - v for paste */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /**                                                          *
                 * @brief  hashset                                           *
                 *                      (constructor)                        *
                 * @param                 n = size                           *
                 *      case 0:                                              *
                 * HashSet(type, bits)* s = new(typeHashSetBits)(this, 0, n);*
                 *      case 1:                                              *
                 * HashSet(type, bits)* s = new(typeHashSetBits)(this, 1, s2)*
                 *      case n:                                              *
                 * HashSet(type, bits)* s = new(typeHashSetBits)(this, n);   *
                 *                                                           *
                 *  note: case 1 for copy constructor                        *
                 *                                                           *
                 * @return  new hashset                                      *
                 *                                                           */
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineAbstractHashSet(type, bits, comp)\
    \
        comp /*defineBasicVector(type, comp);*/\
    \
        typedef struct HashSet(type,bits) \
        {   Vector(type) base;\
    \
            uint##bits##_t () (*hash)( uint##bits##_t , ... );/* strategic */\
    \
        }HashSet(type,bits);\
    \
    \
        typedef struct HashSet(type,bits)(VirtualTable) \
        {   Vector(type)(VirtualTable) base;\
    \
            type * (*search)( const HashSet(type,bits) *, /**type,**/ ... );\
    \
            size_type () (*findsize)( size_type );\
    \
        }HashSet(type,bits)(VirtualTable);\
    \
    \
        typedef size_type HashSet(type,bits)(SizeType);\
    \
    \
        static HashSet(type,bits) * HashSet(type,bits)(Init)( HashSet(type,bits) *, ... );\
    \
        /*static void HashSet(type,bits)(Dtor)( HashSet(type,bits) * );*/ \
    \
        static cstring HashSet(type,bits)(Type)();\
    \
    \
        static void HashSet(type,bits)(InitArray)( HashSet(type,bits) * );\
    \
        static bool HashSet(type,bits)(Resize)( HashSet(type,bits) *, size_type );\
    \
        static bool type##QuadraticProbe##bits##Insert( HashSet(type,bits) *, type );\
    \
        static bool type##QuadraticProbe##bits##Remove( HashSet(type,bits) *, type );\
    \
        static type * type##QuadraticProbe##bits##QProbe( const HashSet(type,bits) *, type );\
    \
        static size_type findPrime##bits##Bit( size_type );\
    \
    \
        explicit cstring HashSet(type,bits)(Type)(){ return "HashSet(" #type "," #bits ")" ; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * THIS IS WHAT IT WOULD LOOK LIKE IF THERE WAS AN INTERFACE DECLARED. YOU CAN LOOK  *
     *                                                                                   *
     * AT THE 0'S IN IT AND THIS IS NOT AN ABSTRACT CLASS BUT AN IMPLEMENTED CLASS THAT  *
     *                                                                                   *
     * DOES NOT INCLUDE VIRTUAL TABLE IMPLEMENTATIONS. I TELL YOU THIS INTERFACE DECLARED*
     *                                                                                   *
     * IN THE COMMENT SECTION BELOW IS NOT FOR AN ABSTRACT TYPE, JUST A TYPE THATS NOT   *
     *                                                                                   *
     * A VIRTUAL TABLE TYPE (THAT USES new(Class) AND delete(object) IN ITS IMPLEMENTATIONS).*
     *                                                                                   *
     *                                                                                   *
     * GIVEN THE AREA OF SUBJECT, WHEN WE CAN LOOK AND SEE 0'S IN OUR CLASS VIRTUAL TABLE*
     *                                                                                   *
     * THIS WAY, THIS WOULD BE THE PLACE WHERE WE WOULD NORMALLY SIT AND TELL OURSELVES  *
     *                                                                                   *
     * THAT IT IS AN ABSTRACT CLASS BECAUSE OF THE 0'S HERE (JUST NOT SO MUCH IN THIS CASE).*
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /*  static type##HashSet##bits##VirtualTable

            type##AbstractHashSet##bits##Interface = \
        {\
            {\
                {\
                    {\
                        &type##VectorType,\
    \
                        &type##VectorInit,\
    \
                        &type##VectorDtor\
                    },\
    \
                    &type##VectorCopy,\
    \
                    &type##QuadraticProbe##bits##Insert,\
    \
                    &type##QuadraticProbe##bits##Remove,\
    \
                    &type##QuadraticProbe##bits##QProbe,\
    \
                    &type##VectorSize,\
    \
                    0 \
                },\
    \
                &type##HashSet##bits##Resize,\
    \
                &type##VectorClear,\
    \
                &type##VectorFront,\
    \
                &type##VectorBack,\
    \
                &type##VectorMax,\
    \
                0 \
            },\
    \
            &type##HashSet##bits##InitArray,\
    \
            &type##QuadraticProbe##bits##QProbe,\
    \
            &type##HashSet##bits##FindPrime \
        };\
    \
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                for Set:                                          *
     *                                                                                   *
     * defineHashSetInitArray(type, bits, (*self).base.array[ count ] = 0;)              *
     *                                 for Table:                                        *
     *                                                                                   *
     * defineHashSetInitArray(type, bits, (*self).base.array[ count ].key = 0;           *
     *                                    (*self).base.array[ count ].val = 0;)          *
     *                                                                                  **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashSetInitArray(type, bits, init)\
    \
        explicit void HashSet(type,bits)(InitArray)( HashSet(type,bits) * self )\
        {\
            size_type count = 0;\
    \
            while(true)\
            {\
                if( count >= (*self).base.maxsize )\
                {\
                    return;\
                }\
    \
                init;\
    \
                ++count;\
            }\
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                           for Set:                                               *
     * defineHashSetResize(type, bits, *iter,               iref                         *
     *                                                                                   *
     *                                 *p,                  pref                         *
     *                                                                                   *
     *                                 *p = *iter;,         asgn                         *
     *                                                                                   *
     *                                 *p == *iter          comp                         *
     *                    )                                                              *
     *                           for Table:                                              *
     * defineHashSetResize(type, bits, (*iter).key,                                      *
     *                                                                                   *
     *                                 (*p).key,                                         *
     *                                                                                   *
     *                                 (*p).key = (*iter).key;                           *
     *                                                                                   *
     *                                 (*p).val = (*iter).val;,  //shallow copy//        *
     *                                                                                   *
     *                                 (*p).key == (*iter).key                           *
     *                    )                                                              *
     *                           for string Set:                                         *
     * defineHashSetResize(type, bits, *iter,                                            *
     *                                                                                   *
     *                                 *p,                                               *
     *                                                                                   *
     *                                 *p = allocate( string(size)(*iter) + 1 );         *
     *                                                                                   *
     *                                 if( *p == 0 ){ return false; }                    *
     *                                                                                   *
     *                                 string(fill)(*p, *iter);,                         *
     *                                                                                   *
     *                                 string(equal)(*p, *iter)                          *
     *                    )                                                              *
     *                           for string Table:                                       *
     * defineHashSetResize(type, bits, (*iter).key,                                      *
     *                                                                                   *
     *                                 (*p).key,                                         *
     *                                                                                   *
     *                                 (*p).key = allocate( string(size)(                *
     *                                            (*iter).key ) + 1 );                   *
     *                                                                                   *
     *                                 if( (*p).key == 0 ){ return false; }              *
     *                                                                                   *
     *                                 string(fill)( (*p).key , (*iter).key );           *
     *                                                                                   *
     *                                 (*p).val = (*iter).val, //shallow copy            *
     *                                                                                   *
     *                                 string(equal)( *p, *iter)                         *
     *                    )                                                              *
     *                                                                                  **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashSetResize(type, bits, iref, pref, asgn, comp)\
    \
        explicit bool HashSet(type,bits)(Resize)(\
    \
            HashSet(type,bits) * self, size_type size )\
    \
        { if( PrintFlags[5] ) { printf("\n" #type "HashSet" #bits "Resize\n"); }\
    \
            if( ((type##Vector*)self)->maxsize == size )\
            {\
                return true;\
            }\
    \
            type * oldarray = ((type##Vector*)self)->array;\
    \
                ((type##Vector*)self)->array = allocate(size * sizeof(type));\
    \
    \
            if( ((type##Vector*)self)->array == nullptr )\
            {\
                ((type##Vector*)self)->array = oldarray;\
    \
                return false;/*OutOfMemoryError*/\
            }\
    \
    \
            type##HashSet##bits##SizeType maxsize\
    \
                = ((type##Vector*)self)->maxsize;\
    \
    \
            ((type##Vector*)self)->maxsize = size;\
    \
    \
    \
            if( PrintFlags[5] ){ printf("\nNewMax: %u\n", self->base.maxsize); }   \
    \
    \
    \
            type##HashSet##bits##SizeType length\
    \
                = ((type##Vector*)self)->length;\
    \
    \
            ((type##Vector*)self)->length = 0;\
    \
    \
            type##HashSet##bits##InitArray( self );\
    \
    \
            bool flag   = false;\
    \
            type * iter = oldarray,\
    \
                 * back = oldarray + maxsize,\
    \
                 * p    = nullptr;\
    \
    \
            while( iter != back )\
            {\
    \
    \
                if( iref != 0 )\
                {\
                    \
    \
                    p = type##QuadraticProbe##bits##QProbe( self, *iter );\
    \
    \
    \
                    if( p == nullptr )\
                    {\
                        flag = true;\
    \
                        break;\
                    }\
                    else \
    \
    \
    \
                    if( pref == 0 )\
                    {\
                        asgn;\
    \
                        ((type##Vector*)self)->length++;\
                    }\
                    else \
    \
    \
    \
                    if( comp ) { printf("..."); }\
    \
    \
    \
                }\
    \
    \
    \
                do \
                {\
                    iter++;\
    \
                    if( iter == back )\
                    {\
                        break;\
                    }\
                }\
                while( iref == 0 );\
            }\
    \
    \
    \
            if( ((type##Vector*)self)->length != length || flag == true )\
            {\
    \
                deallocate( ((type##Vector*)self)->array );\
    \
                ((type##Vector*)self)->array   = oldarray;\
    \
                ((type##Vector*)self)->maxsize = maxsize;\
    \
                ((type##Vector*)self)->length  = length;\
    \
                if( PrintFlags[4] ){ printf("\nResizeFailed\n"); }\
    \
                return false;\
            }\
    \
            if( PrintFlags[5] ){ printf("\nMax: %u\n", self->base.maxsize); }   \
    \
            deallocate(oldarray);\
    \
            return true;\
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                       for Set:                                                   *
     *                                                                                   *
     * defineHashSetAdd(type, bits, *p,   *//* *p == 0, *//**                            *
     *                                                                                   *
     *                              *p = info;,                                          *
     *                                                                                   *
     *                              *p == info                                           *
     *                 )                                                                 *
     *                        for Table:                                                 *
     *                                                                                   *
     * defineHashSetAdd(type, bits, (*p).key,    *//* (*p).key == 0, *//**               *
     *                                                                                   *
     *                              (*p).key = info.key;                                 *
     *                              (*p).val = info.val;,  // shallow copy               *
     *                                                                                   *
     *                              (*p).key == info.key                                 *
     *                 )                                                                 *
     *                                                                                  **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashSetAdd(type, bits, pref, asgn, comp)\
    \
        explicit bool type##QuadraticProbe##bits##Insert(\
    \
            HashSet(type,bits) * self, type info )\
    \
        {if( PrintFlags[1] ) { printf("\n" #type "HashSet" #bits "Add\n"); }\
    \
            type * p = type##QuadraticProbe##bits##QProbe( self, info );\
    \
            top: \
    \
            while( p == nullptr && !found )\
            {\
    \
                if( !(HashSet(type,bits)(Resize)( self, findPrime##bits##Bit(\
    \
                    ((type##Vector*)self)->maxsize * multiplier ) ) ) )\
                {\
    \
                    multiplier++; goto top;\
                }\
                multiplier = 2;\
    \
    \
                p = type##QuadraticProbe##bits##QProbe( self, info );\
    \
            }\
    \
    \
    \
    \
    \
            if( found || comp )/* && found*/\
            {\
                return false;\
            }\
            else \
    \
            if( pref == 0 )\
            {\
    \
                asgn;\
    \
                ((type##Vector*)self)->length++;\
    \
                return true;\
            }\
    \
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                                                  *
     * defineHashSetRemove(type, bits, *p,                                               *
     *                                                                                   *
     *                                 *p = 0;                                           *
     *                    )                                                              *
     *                                                                                   *
     * defineHashSetRemove(type, bits, (*p).key,                                         *
     *                                                                                   *
     *                                 (*p).key = 0;                                     *
     *                                 (*p).val = 0;                                     *
     *                    )                                                              *
     *                                                                                   *
     * TODO: use resize here to downsize or just call destroy() and init() for vtable    *
     *                                                                                   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashSetRemove(type, bits, pref, asgn)\
    \
        static void type##QuadraticProbe##bits##ResizeHelper( HashSet(type,bits) * );\
    \
        explicit bool type##QuadraticProbe##bits##Remove(\
    \
            HashSet(type,bits) * self, type info )\
    \
        {if( PrintFlags[1] ) { printf("\n" #type "HashSet" #bits "Remove\n"); }\
    \
            type * p = type##QuadraticProbe##bits##QProbe( self, info );\
    \
    \
    \
            if( ( p == nullptr ) && !found )\
            {\
                return false;\
            }\
            else \
    \
            if( pref == 0 )\
            {\
                return false;\
            }\
            else \
            {\
                asgn;\
    \
                ((type##Vector*)self)->length--;\
    \
                type##QuadraticProbe##bits##ResizeHelper( self );\
    \
                return true;\
            }\
    \
    \
        }\
    \
        explicit void type##QuadraticProbe##bits##ResizeHelper(\
    \
            type##HashSet##bits * self )\
    \
        {\
                if( ((type##Vector*)self)->length < \
    \
                    ( ( ( ((type##Vector*)self)->maxsize / multiplier ) \
    \
                  / multiplier ) / multiplier ) )\
    \
                {\
                multiplier = 2;\
    \
                    if( !(HashSet(type,bits)(Resize)( self, findPrime##bits##Bit(\
    \
                        ((type##Vector*)self)->maxsize / multiplier ) ) ) )   {}\
    \
            \
                }\
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                          for Set:                                                *
     * defineHashSetQProbe(type, bits, self->base.array[probe],                          *
     *                                                                                   *
     *                                 info,                                             *
     *                                                                                   *
     *                                 self->base.array[probe] != info                   *
     *                    )                                                              *
     *                           for Table:                                              *
     * defineHashSetQProbe(type, bits, self->base.array[probe].key,                      *
     *                                                                                   *
     *                                 info.key,                                         *
     *                                                                                   *
     *                                 self->base.array[probe].key != info.key           *
     *                    )                                                              *
     *                                                                                   *
     * @brief this is the quadratic probe for the vtable, ftable, ... this probe         *
     *        is an upgraded version of the quadratic probe solution provided            *
     *        for the purposes education in i believe it was either machine              *
     *        architecture or data structures. (data structures) this probe is           *
     *        a qProbe that uses a pivot as to whether or not it should search           *
     *        backwards or forewards (if its close to the end it searches backwards)     *
     *        it then resets itself to the last qProbe case after going out              *
     *        of bounds, from there if makes a careful offset, attempting first          *
     *        to make the offset an increment of 1 when probing forewards,               *
     *        thats a decrement of 1 probing backwards, if it cant make the              *
     *        offset because its out of bounds, it offsets in the opposite               *
     *        direction from the original attempt to offset. it then probes in           *
     *        the opposite direction as before, resetting the quadratic counter          *
     *        as it begins to do so. in short, this is a quadratic probe,                *
     *        (double probe) that operates using a pivot and an offset so: O( q n 2 )    *
     *        now its possible to full the table past 50% full, averaging 75-90% full.   *
     *        (01/06/2022)  OOC                                                          *
     *                                                                                   *
     * also:  if the offset itself were to become quadratic with its own counter then    *
     *        even just one more probe in each direction would make the hashtable 100%   *
     *        full but O( n / 4 q ) or especially O( n / 6 q ) might be worse than       *
     *        logarithmic time... ( O( log n ) ) even if its not worse that sequential   *
     *        time ever just it would equate to sequential time maybe                    *
     *                                                                                   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashSetQProbe(type, bits, iref, comp, eqls, ineq, icmp, move, prnt)\
    \
        explicit type * type##QuadraticProbe##bits##QProbe(\
    \
            const HashSet(type,bits) * self, type info )\
    \
        {if( PrintFlags[1] ) { puts("\n" #type "HashSet" #bits "QProbe\n"); }\
    \
            type                       * slot = nullptr;\
    \
            const size_type           maxsize = self->base.maxsize;\
    \
            uint32_t                        i = 0,/*<---  (i = 1)*/\
    \
                                            h = (self->hash(iref) % maxsize),\
    \
                                        probe = h;/*<---*/\
    \
            bool                        pivot = false,\
    \
                                        flag  = false;\
    \
                                        found = false;\
    \
    \
    \
            if( probe < ( maxsize / 2 ) ) { pivot = true; }/**pivot*/\
    \
    \
    \
            for( uint8_t index = 0; index < 2; index ++ )\
            {\
    \
    \
    \
    \
    \
                i = 0;/*<---  (i = 1)*/\
    \
                probe = h;/*<---*/\
    \
    \
    \
    \
    \
                while ( true )\
                {\
        /**
                while(  (  self->base.array[probe].key         !=    0  )
                    *//*((type##Vector*)self)->array[probe]    !=    0*//**
                    &&  (  self->base.array[probe].key         !=    info.key  )
                    *//*((type##Vector*)self)->array[probe]    !=    info*//**
                     )
                {}
         */\
    \
    \
    \
    \
            if( PrintFlags[4] ){ if ( pivot ){ printf("\nprobe+: %u", probe); ifOutOfBounds(\
                                           maxsize, probe, printf(" (OutOfBounds)") );\
                                           printf("\n"); }\
                                    else { printf("\nprobe-: %u", probe); ifOutOfBounds(\
                                           maxsize, probe, printf(" (OutOfBounds)") );\
                                           printf("\n"); } } \
    \
    \
    \
    \
                    /** TRYING TO ADD BUT ALREADY THERE (SHOULDN'T HAPPEN) */\
                    if( ( eqls ) && ( ineq ) )\
                            {  found = true;  return nullptr;  }\
    \
                    /** COMING OUT (FOUND) */\
                    if( ( eqls ) )\
                            {  found = true;  break;  }\
    \
                    /** GOING IN (STOP LOOKING) */\
                    if( ( comp ) && ( ineq ) )\
                            {  break;  }\
    \
                    /** COMING OUT (KEEP LOOKING) */\
                    if( ( comp ) && ( icmp ) )\
                            {  if(!slot){ slot = & self->base.array[probe]; }  }\
    \
    \
    \
    \
    \
                    i++;/**quadratic counter*/\
    \
    \
    \
    \
                                         /**(uint32_t)*/\
                    if( pivot ){ probe = h + (uint32_t) pow(i, 2) + 1; }/* + 1 */\
                    else       { probe = h - (uint32_t) pow(i, 2) - 1; }/* - 1 */\
    \
    \
    \
    \
    \
                    /*i++;*/\
    \
    \
    \
    \
    \
                    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
                    /**                   CheckForOutOfBounds                    */\
                    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
                    if( ( typemax(size_type) - maxsize ) < ( typemax(size_type) / 2 ) )\
                    { if( pivot )\
                      { if( probe < ( typemax(size_type) / 2 ) ){ flag = true; break; } }\
                      else\
                      { if( probe > ( typemax(size_type) / 2 ) ){ flag = true; break; } }\
                    }\
                    else\
                    { if( probe > maxsize - 1 )\
                      { flag = true; break; } }\
                    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */\
    \
    \
    \
    \
    \
                }/** IF OBJECT FOUND OR FOUND SLOT TO PUT NEW ONE */\
                if( found || !flag )\
                {\
    \
    \
                    prnt ;\
    \
    \
                     /** IF OBJECT FOUND AND FOUND SLOT (AND IS ALREADY IN TABLE)
                         AND NULL INFO INTERFACE SO JUST SEARCHING */\
                    if( found && slot )\
                    {\
    \
    \
                        move;\
    \
    \
                        /** RETURN SLOT WITH OBJECT */\
                        return slot;\
    \
                    }\
    \
                    /** RETURN SLOT WITH OBJECT OR NO */\
                    return & self->base.array[ probe ];\
    \
                }\
                else if( index == 0 )\
                {\
    \
                    if( pivot )\
                    { pivot = false;\
    \
    \
                      h = h + (uint32_t) pow(i - 1, 2) + 1;/** + 1*/\
                        /*h = h + (uint##bits##_t) pow(i - 1, 2);*/\
    \
    \
                      if( h + 1 < maxsize )\
                      { h += 1; } else { h -= 1; }/**offset*/\
    \
    \
                    } else\
                    { pivot = true;\
    \
    \
                      h = h - (uint32_t) pow(i - 1, 2) - 1;/** - 1*/\
                        /*h = h - (uint##bits##_t) pow(i - 1, 2);*/\
    \
    \
                      if( h - 1 < maxsize )\
                      { h -= 1; } else { h += 1; }/**offset*/\
    \
    \
                    }\
                    flag = false;\
                    ifOutOfBounds( maxsize, h, break );\
                }\
    \
            }\
            ifOutOfBounds( maxsize, probe,\
    \
                /*if( PrintFlags[4] ){ printf("\nnull return\nfound: %s\n",\
    \
                    ( found ? "true" : "false" ) ); }*/ \
            /** LOOKED FOR AS LONG AS IT COULD GIVEN O( n / 2 q ) */\
            return nullptr; ); return nullptr;\
        }

            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
            /**                   CheckForOutOfBounds                    */
            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /**     if( ( typemax(size_type) - maxsize ) < ( typemax(size_type) / 2 ) )\
            { if( pivot )\
              { if( probe < ( typemax(size_type) / 2 ) ){ flag = true; break; } }\
              else\
              { if( probe > ( typemax(size_type) / 2 ) ){ flag = true; break; } }\
            }\
            else\
            { if( probe > maxsize - 1 )\
              { flag = true; break; } }\                                        */
            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


            /** TRYING TO ADD BUT ALREADY THERE (SHOULDN'T HAPPEN) *//*
            if( ( self->base.array[probe].key    ==    info.key ) && ( info.val != 0 ) )
                {  return nullptr;  }

            *//** COMING OUT (FOUND) *//*
            if( ( self->base.array[probe].key    ==    info.key ) )
                {  found = true;  break;  }

            *//** GOING IN (STOP LOOKING) *//*
            if( ( self->base.array[probe].key    ==    0 ) && ( info.val != 0 ) )
                {  break;  }

            *//** COMING OUT (KEEP LOOKING) *//*
            if( ( self->base.array[probe].key    ==    0 ) && ( info.val == 0 ) )
                {  if(!slot){ slot = & self->base.array[probe]; }  } */

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                                                  *
     * @brief this function uses the size_type macro for size is the only real reason    *
     *        this function is contained inside a macro itself still                     *
     *                                                                                   *
     *  update: this function only uses a bits argument and is implemented               *
     *          using each possible implementation type here infile                      *
     *                                                                                   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineFindPrime(bits)\
    \
        static uint##bits##_t findPrime##bits##Bit( uint##bits##_t );\
    \
        explicit uint##bits##_t findPrime##bits##Bit( uint##bits##_t size )\
        {\
            while(true)\
            {\
                if( size == 1 || size == 0 )\
                {\
                    return 1;\
                }\
    \
                uint##bits##_t count = 0, i;\
    \
                for( i = size; i > 0; i-- )\
                {\
                    if( size % i == 0 )\
                    {\
                        count++;\
                    }\
                    else \
    \
                    if( count > 2 )\
                    {\
                        break;\
                    }\
                }\
                if( count == 2 )\
                {\
                    return size;\
                }\
                --size;\
            }\
    \
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    typename(FindPrime)(); //FOR STRING ...  32 BIT

    typename(FindPrime)(8);

    typename(FindPrime)(16);

    typename(FindPrime)(32);

    typename(FindPrime)(64);

    /// ...

        /** look towards the fTable for ways to use: */
    /**
        @brief THIS IS ONE OF THE STATIC TABLES REQUIRED FOR 100% DYNAMIC

        PROGRAMMING INVOLVING THE FACTORY TABLE + CLASS FACTORY METHOD.
    */
    # define Hash(Member)Hash ## Member

    static Strategy  /**Pair(Name, Address)*/

        Hash(StrategyHeap)[four] =
    {/**  */
        {"_hash",            &_hash},
        {"_hash32",          &_hash32},
        {"_hash64",          &_hash64},
        {"_hash_string",     &_hash_string},

        {"", 0}
    };

    /**
        @brief THIS IS A SUB-FACTORY METHOD TO THE CLASS FACTORY METHOD.
     */
    static Strategy *
    typename(SubFactoryMethod)(Hash,Strategy,Strategy,0,3);
    /*
    explicit Object * Hash(Search)( cstring key )
    {
        Pair(Name, Address) pair = { key, 0 },
                          * p;
        size_t              i;

        p = Search(Strategy)( Hash(StrategyTable), pair, & i, 0, 3 );

        if ( p ) { return p->val; } else { return 0; }
    }
    */

    /**
        @brief THIS IS A REGISTRATION FOR A REGISTRATION LIST
    */
    /*
    static struct class (StrategyTable)

        Hash(Strategy) =

    {
        &class(StrategyTable)(Type),

        &Hash(Search),

        &HashStrategyTable
    };
    */
    /**

    @brief NOT ONLY THIS TYPE OF TABLE BUT ONE THAT INCLUDES

    AN INDEX THAT MAPS ITSELF TO THE DATAFIELD POSITION OF THE INTERFACE

    THAT FUNCTION INITIALIZES, SO IT CAN BE FOUND OR RE INITIALIZED. THAT WAY EVERY

    INTERFACE IS 100% DYNAMIC AND CAN HAVE ANY DATAFIELD POSITION RE-INITIALIZED

    TO ANY OTHER FUNCTION IN THE PROGRAM. REMEMBER THAT IN ORDER TO DO SO YOU HAVE

    TO THROW AWAY STRUCTURED DATATYPES AND USE THEM AS ARRAYS. WHEN THEY ARE USED

    AS INTERFACES WHERE THEY ARE USED THEY WOULD THEN USE THAT FUNCTION. IMPROPER

    DATATYPING WHEN CALLING A FUNCTION FROM A POINTER HAS ITS CASES WHERE THE PROGRAM

    WILL GET TERMINATED BECAUSE OF THAT.


    @brief REMEMBER THAT THIS STATIC TABLE LIKE EVERY STATIC TABLE HAS TO MAKE ITS WAY

    TO ONE OF THE VOLATILE TABLES IN THE PROGRAM, ITS HASH TABLES. PROBABLY AT SOME

    POINT EVEN THOUGH I WOULD EVEN CONSIDER A STATIC TABLE THATS MANUALLY SORTED TO

    REPLACE EVEN THE VOLATILE FACTORY TABLE, AS THAT STATIC TABLE WOULD USE A BINARY

    SEARCH ON A MANUALLY SORTED STATIC TABLE. I WOULD CONSIDER THIS BECAUSE THE AMOUNT

    OF IMPLEMENTATIONS A PROGRAM HAS IS NEVER DYNAMIC. THE MORE IMPLEMENTATIONS THERE

    ARE AT THE INTERFACE LEVEL FOR EVERY CLASS THE MORE DYNAMIC THE RESULTING PROGRAM.

    (USING A POINTER TO POINT TO ANY STATIC TABLE/INTERFACE IS WHAT MAKES IT DYNAMIC)

    (see structclass.h for more responsibilities)

    */

    /*
            size_t probe, h = 25;

                probe = h + (uint32_t) pow(1, 2) + 1 ;
        printf("\n\n(in f14)probe: %u\n", probe);
                probe = h - (uint32_t) pow(1, 2) + 1 ;      *//** - 1 *//*
        printf("\n\n(in f14)probe: %u\n", probe);
                probe = h - (uint32_t) pow(1, 2) - 1 ;      *//** - 1 *//*
        printf("\n\n(in f14)probe: %u\n", probe);
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define HashSet(type, bits)   type(HashSet##bits)   //   type(HashSet)bits

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
                __    __                    __        _____            __
               /\ \  /\ \                  /\ \      / ____\          /\ \__
               \ \ \_\_\ \    ___      ____\ \ \___ /\ \___/     ___ /\__  _\
                \ \  ___  \  / __`\   / ____\ \  __`\ \_____`\  / __`\/_/\ \/
                 \ \ \__/\ \/\ \/\.\_/\_____`\ \ \/\ \/____/\ \/\  __/_ \ \ \/\
                  \ \_\ \ \_\ \___/\_\/\_____/\ \_\ \_\/\_____/\ \_____\ \ \__/
                   \/_/  \/_/\/__/\/_/\/____/  \/_/\/_/\/____/  \/_____/  \/_/

                                                                                         */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #include "defineVector.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief x-macro for the HashSet(type, bits)                                        *
     *                                                                                   *
     * @author willy                                                                     *
     *                                                                                   *
     * @version (2021 - 03 - 06)                                                         *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashSetInit(type, bits, comp)\
    \
        comp;  /*defineVectorInit(type, );*/  \
    \
        static HashSet(type,bits)(VirtualTable) \
    \
            HashSet(type,bits)(Interface) = \
        {\
            {\
                {\
                    {\
                        &type##HashSet##bits##Type,\
    \
                        &type##HashSet##bits##Init,\
    \
                        &type##VectorDtor\
                    },\
                    &type##VectorCopy,\
    \
                    &type##QuadraticProbe##bits##Insert,/*override*/\
    \
                    &type##QuadraticProbe##bits##Remove,/*override*/\
    \
                    &type##QuadraticProbe##bits##QProbe,/*override*/\
    \
                    &type##VectorSize,\
    \
                    &type##VectorBegin \
                },\
                &type##HashSet##bits##Resize,/*override*/\
    \
                &type##VectorReplace,\
    \
                &type##VectorClear,\
    \
                &type##VectorFront,\
    \
                &type##VectorBack,\
    \
                &type##VectorMax,\
    \
                &type##VectorEnd \
            },\
            &type##QuadraticProbe##bits##QProbe,\
    \
            &findPrime##bits##Bit \
        };\
        static ctorPtr typename(Ctor)(HashSet(type,bits));\
    \
    \
        explicit type##HashSet##bits * type##HashSet##bits##Init\
    \
            ( type##HashSet##bits* self, ... )\
    \
        { if( !self ){ return 0; }\
    \
          if( !(*Flags[0]) ){flags(0)=1;ControlSlot[0][0]=&self;}\
    \
            self = type##VectorInit(self);\
    \
          (*Flags[0]) = false ;\
    \
          if( !self ){ return 0; }\
    \
    \
          type##HashSet##bits##InitArray( self );\
    \
    \
          self->hash = &_hash##bits;/* like ctor using new()() */\
    \
          return self; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    volatile static bool HashSetFlag = false;

    #define defineHashSet(type, bits, comp)\
    \
        defineHashSetInit(type, bits, defineAbstractHashSet(type, bits, comp);\
    \
            defineHashSetInitArray(type, bits, (*self).base.array[ count ] = 0;)\
    \
            defineHashSetResize(type, bits, *iter,\
    \
                                            *p,\
    \
                                            *p = *iter;,\
    \
                                            *p == *iter\
            );\
            defineHashSetAdd(type, bits,    *p,\
    \
                                            *p = info;\
    \
                                            *p == info\
            );\
            defineHashSetRemove(type, bits, *p,\
    \
                                            *p = 0;\
            );\
            defineHashSetQProbe(type, bits, info,\
    \
                                      self->base.array[probe] == 0,\
    \
                                      self->base.array[probe] != info,\
    \
                                      true,\
    \
                                      true,\
                                   /**THIS WILL NOT GET A CHANCE TO GO**/\
                                      (*slot) = self->base.array[probe];\
                                      self->base.array[probe] = 0;,\
    \
                                      /**defineHashSetQProbePrint**/; \
    \
            );\
        )

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    //#include "defineAbstractHashSet.h"

    #include "definePair.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /**||                 C HASH TABLE MACRO                  || *
                 *                                                           *
                 * ||                      by Willy                       || */
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                                                   *
     * @brief x-macro for HashTable(Key, Value, Bits) minus the initializer needed for   *
     *        new(Class) and functions that encapsulate new(Class)                       *
     *                                                                                   *
     * @author willy                                                                     *
     *                                                                                   *
     * @version (2021 - 03 - 06)                                                         *
     *                                                                                   */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineBasicHashTable(Key, Value, Bits, Components)\
    \
      /*define(BasicVector)(type, define(Iterator)(type)); */\
    \
        Components;\
    \
        defineAbstractHashSet(Key##Value##Pair, Bits, );/**...**/\
    \
        defineHashSetInitArray(Key##Value##Pair, Bits, (*self).base.array[ count ].key = 0;\
                                                       (*self).base.array[ count ].val = 0;\
        );\
        defineHashSetResize(Key##Value##Pair, Bits,    (*iter).key,\
    \
                                                       (*p).key,\
    \
                                                       (*p).key = (*iter).key;\
                                                       (*p).val = (*iter).val;,/*pointer copy (assign)*/\
    \
                                                       (*p).key == (*iter).key\
        );\
        defineHashSetAdd(Key##Value##Pair, Bits,       (*p).key,\
    \
                                                       (*p).key = info.key;\
                                                       (*p).val = info.val;,/*pointer copy (assign)*/\
    \
                                                       (*p).key == info.key\
        );\
        defineHashSetRemove(Key##Value##Pair, Bits,    (*p).key,\
    \
                                                       (*p).key = 0;\
                                                       (*p).val = 0;\
        );\
    \
        defineHashSetQProbe(Key##Value##Pair, Bits,    info.key,\
    \
                                                       self->base.array[probe].key == 0,\
    \
                                                       self->base.array[probe].key == info.key,\
    \
                                                       info.val != 0,\
    \
                                                       info.val == 0,\
    \
                                                       (*slot) = self->base.array[probe];\
                                                       self->base.array[probe].key = 0;\
                                                       self->base.array[probe].val = 0;,\
    \
                                                       /**defineHashSetQProbePrint*/; \
    \
        );

    #define defineHashSetQProbePrint \
    \
                    if( PrintFlags[4] )\
                    {\
                        printf("\nprobe return: %u", probe);\
    \
                        ifOutOfBounds( maxsize, probe, printf(" (OutOfBounds)") );\
    \
                        printf("\nfound: %s\n", ( found ? "true" : "false" ) );\
    \
                        if ( found ) {\
    \
                            printf("(coming out)\ntypeid: %s\n",\
    \
                                   self->base.array[ probe ].val->what()  ); }\
                        else\
    \
                        if ( info.val != 0 ) {\
    \
                            printf("(going in)\ntypeid: %s\n",  info.val->what()  );\
                    } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define HashTable(Key, Value, Bits)   Key##Value##PairHashSet##Bits

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //#include "../Virtual/vTable.h"  /// #include "defineAbstractHashSet.h"
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* [ctrl] - z for undo, [ctrl - x for cut, [ctrl] - c for copy, [ctrl] - v for paste */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                /**                                                          *
                 * @brief  string hash table                                 *
                 *                      (constructor)                        *
                 * @param                 n = size                           *
                 *      case 0:                                              *
                 * StringHashSet(type)* s = new(StringHashSet)(this, 0, n);  *
                 *      case 1:                                              *
                 * StringHashSet(type)* s = new(StringHashSet)(this, 1, s2)  *
                 *      case n:                                              *
                 * StringHashSet(type)* s = new(StringHashSet)(this, n);     *
                 *                                                           *
                 *  note: case 1 for copy constructor                        *
                 *                                                           *
                 * @return  new string hash table                            *
                 *                                                           */
                /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineStringHashTable(Key, Value, Components)\
    \
        ;\
    \
        defineHashSetInit(Key##Value##Pair, , \
    \
            defineAbstractHashSet( Key##Value##Pair, , Components);\
    \
            defineHashSetInitArray( Key##Value##Pair, , (*self).base.array[ count ].key = 0;\
                                                        (*self).base.array[ count ].val = 0; \
            );\
            defineHashSetResize(Key##Value##Pair, , (*iter).key,\
    \
                                                    (*p).key,\
    \
                                                    defineHashSetResizeParamFive,\
    \
                                                    defineHashSetResizeParamSix\
            );\
    \
            defineHashSetAdd(Key##Value##Pair, , (*p).key,\
    \
                                                 defineHashSetAddParamFour,\
    \
                                                 defineHashSetAddParamFive\
            )   ;\
    \
            defineHashSetRemove(Key##Value##Pair, , (*p).key,\
    \
                                                    deallocate( (*p).key );\
    \
                                                    (*p).key = "";\
    \
                                                    (*p).val = 0;\
            ) ;\
    \
            defineHashSetQProbe(Key##Value##Pair, ,     info.key,\
    \
                                                        self->base.array[probe].key == 0,\
    \
                                                        defineHashSetQProbeParamFive,\
    \
                                                        info.val != 0,\
    \
                                                        info.val == 0,\
    \
                                                        (*slot) = self->base.array[probe];\
                                                        self->base.array[probe].key = 0;\
                                                        self->base.array[probe].val = 0;,\
    \
                                                        /**defineHashSetQProbePrint*/;\
    \
            );\
        );

    #define defineHashSetQProbeParamFive      string(equal)( self->base.array[probe].key, info.key )


    #define defineHashSetAddParamFour         (*p).key = allocate( string(size)(\
    \
                                              info.key ) );\
    \
                                              if( (*p).key == 0 ){ /*return false;*/\
                                                throw(new(OutOfMemory))\
                                                (this,"StringHashSetInsert");}\
    \
                                              string(fill)( (*p).key, info.key );\
    \
                                              (*p).val = info.val;

    #define defineHashSetAddParamFive         string(equal)( (*p).key, info.key )


    #define defineHashSetResizeParamFive      (*p).key = allocate( string(size)(\
    \
                                              (*iter).key ) );\
    \
                                              if( (*p).key == 0 ){ /*return false;*/\
                                                throw(new(OutOfMemory))\
                                                (this, "StringHashSetResize");}\
    \
                                              string(fill)( (*p).key, (*iter).key );\
    \
                                              (*p).val = (*iter).val


    #define defineHashSetResizeParamSix       string(equal)( (*p).key, (*iter).key )

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    //#include "defineHashSet.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief x-macro for the HashTable(Key, Value, Bits)                                *
     *                                                                                   *
     * @author willy                                                                     *
     *                                                                                   *
     * @version (2021 - 03 - 06)                                                         *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashTableInit(Key, Value, Bits, Components)\
    \
        defineHashSetInit(Key##Value##Pair, Bits, Components)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineHashTable(Key, Value, Bits, Components)\
    \
        defineHashTableInit(Key, Value, Bits, defineBasicHashTable(Key, Value, Bits, Components))

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 1 // Factory
    #define defineFactoryHashTable(Key, Value, Bits, Components)\
    \
        defineFactoryHashSet(Key##Value##Pair, Bits, Components)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief x-macro for the factory table class components for hash set/table          *
     *                                                                                   *
     * @author willy                                                                     *
     *                                                                                   *
     * @version (2023 - 01 - 16)                                                         *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineFactoryHashSet(type, bits, comp)\
    \
        comp ;\
    \
        static Virtual  /**Table(Name, Pos, Default, Type)**/\
    \
            HashSet(type,bits)(VirtualHeap)[eighteen] = /**CLASS VIRTUAL TABLE TABLE**/\
        {/**A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z**/\
            { "at",               6,      &type##QuadraticProbe##bits##QProbe\
            ,#type"*(*)(const HashSet("#type","#bits")*,...)"                },\
            { "back",             13,     &Vector(type)(Back)\
            ,#type"*(*)(Vector("#type")*)"                                   },\
            { "begin",            8,      &Vector(type)(Begin)\
            ,"Iterator("#type")*(*)(const Vector("#type")*)"                 },\
            { "clear",            11,     &Vector(type)(Clear)\
            ,"bool()(*)(Vector("#type")*)"                                   },\
            { "copy",             3,      &Vector(type)(Copy)\
            ,"bool()(*)(Vector("#type")*,...)"                               },\
            { "dtor",             2,      &Vector(type)(Dtor)\
            ,"void(*)(HashSet("#type","#bits")*)"                            },\
            { "end",              15,     &Vector(type)(End)\
            ,"Iterator("#type")*(*)(const Vector("#type")*)"                 },\
            { "findsize",         17,     &findPrime(bits)\
            ,"uint"#bits"_t()(*)(uint"#bits"_t)"                             },\
            { "front",            12,     &Vector(type)(Front)\
            ,#type"*(*)(Vector("#type")*)"                                   },\
            { "init",             1,      &HashSet(type,bits)(Init)\
            ,"HashSet("#type","#bits")*(*)(HashSet("#type","#bits")*,...)"   },\
            { "insert",           4,      &type##QuadraticProbe##bits##Insert\
            ,"bool()(*)(HashSet("#type","#bits")*,...)"                      },\
            { "max",              14,     &Vector(type)(Max)\
            ,"size_type(*)(const Vector("#type")*)"                          },\
            { "remove",           5,      &type##QuadraticProbe##bits##Remove\
            ,"bool()(*)(HashSet("#type","#bits")*,...)"                      },\
            { "replace",          10,     &Vector(type)(Replace)\
            ,"bool()(*)(Vector("#type")*,size_type,...)"                     },\
            { "resize",           9,      &HashSet(type,bits)(Resize)\
            ,"bool()(*)(HashSet("#type","#bits")*,size_type)"                },\
            { "search",           16,     &type##QuadraticProbe##bits##QProbe\
            ,#type"* (*)(const HashSet("#type","#bits")*,...)"               },\
            { "size",             7,      &Vector(type)(Size)\
            ,"size_type(*)(const Vector("#type")*)"                          },\
            { "type",             0,      &HashSet(type,bits)(Type)\
            ,"cstring(*)()"                                                  },\
    \
            { "", 0, 0, "" }\
        };static Virtual *\
        typename(SubFactoryMethod)(HashSet(type,bits),Virtual,Virtual,0,17);\
    \
    \
        static struct class(VirtualHeap)\
            HashSet(type,bits)(Virtual) =\
    \
        { &class(VirtualHeap)(Type),\
        &HashSet(type,bits)(VirtualSearch),\
        HashSet(type,bits)(VirtualHeap) };\
    \
        /* note: beware if the size_type or bits is anything other than 32 here
         *       so re-initialize those positions if that is the case.
         */\
        static Complex  /**Table( Name, Pos, Bytes, Type )**/\
    \
            HashSet(type,bits)(ComplexHeap)[four] =\
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            { "array",       0,     sizeof(void*),      #type"*"           },\
            { "hash",        3,     sizeof(void*),      "uint"#bits"_t()(*)(uint"#bits"_t,...)"},\
            { "length",      1,     sizeof(size_type),  "size_type"                    },\
            { "maxsize",     2,     sizeof(size_type),  "size_type"                    },\
    \
            { "", 0, 0, "" }\
        };static Complex *\
        typename(SubFactoryMethod)(HashSet(type,bits),Complex,Complex,0,3);\
    \
    \
        static struct class(ComplexHeap)\
    \
            HashSet(type,bits)(Complex) =\
    \
        { &class(ComplexHeap)(Type),\
        &HashSet(type,bits)(ComplexSearch),\
        HashSet(type,bits)(ComplexHeap) };\
    \
    \
        static Polymorph  /**Table( Name, Offset, Offset, Type )**/\
    \
            HashSet(type,bits)(PolymorphHeap)[four] =\
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            { "Container",                      0,              0, "" },\
            { "Vector("#type")",                        0,              0, "" },\
            { "class",                          0,              0, "" },\
            /** THESE OFFSETS ARE IMPORTANT FOR WHEN THE
                OBJECT IS ADJACENT TO ANOTHER ON A STACK
                   (TO SUPPORT MULTIPLE INHERITANCE)**/\
            { "", 0, 0, "" }\
        };static Polymorph *\
        typename(SubFactoryMethod)(HashSet(type,bits),Polymorph,Polymorph,0,2);\
    \
    \
        static struct class(PolymorphHeap)\
    \
            HashSet(type,bits)(Polymorph) =\
    \
        { &class(PolymorphHeap)(Type),\
    \
          &HashSet(type,bits)(PolymorphSearch),\
    \
           HashSet(type,bits)(PolymorphHeap) };\
    \
    \
        static struct class(FactoryTable)\
    \
            HashSet(type,bits)(Factory) =\
    \
        { &class(FactoryTable)(Type), &HashSet(type,bits)(Ctor), 0 } ;\
    \
    \
        static int HashSet(type,bits)(ConsoleIn)(HashSet(type,bits) *, ...);\
    \
        static int HashSet(type,bits)(ConsoleOut)(const HashSet(type,bits) *, ...);\
    \
        static struct class(ConsoleTable)\
    \
            HashSet(type,bits)(Console) =\
    \
        { &class(ConsoleTable)(Type), \
    \
        &HashSet(type,bits)(ConsoleIn), &HashSet(type,bits)(ConsoleOut) };\
    \
    \
        static int HashSet(type,bits)(StandardIn)(HashSet(type,bits) *, ...);\
    \
        static int HashSet(type,bits)(StandardOut)(const HashSet(type,bits) *, ...);\
    \
        static struct class(StandardTable)\
    \
            HashSet(type,bits)(Standard) =\
    \
        { &class(StandardTable)(Type), \
    \
        &HashSet(type,bits)(StandardIn), &HashSet(type,bits)(StandardOut) };\
    \
    \
        static int HashSet(type,bits)(FileIn)(HashSet(type,bits) *, ...);\
    \
        static int HashSet(type,bits)(FileOut)(const HashSet(type,bits) *, ...);\
    \
        static struct class(FileTable)\
    \
            HashSet(type,bits)(File) =\
    \
        { &class(FileTable)(Type), \
    \
        &HashSet(type,bits)(FileIn), &HashSet(type,bits)(FileOut) };\
    \
    \
        static struct pass(SecurityHeap)\
            HashSet(type,bits)(Security) =\
    \
        { { & pass(SecurityHeap)(Type), 0,\
            0 /*HashSet(type,bits)(InterfaceHeap)*/ },\
            0 /*& HashSet(type,bits)(Security)(ID)*/, 0 } ;\
    \
    \
        static Interface HashSet(type,bits)\
    \
            (InterfaceHeap)[nine] =\
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            &HashSet(type,bits)(Interface),\
    \
            &HashSet(type,bits)(Complex), \
    \
            &HashSet(type,bits)(Console), \
    \
            &HashSet(type,bits)(Factory),\
    \
            &HashSet(type,bits)(File),\
    \
            &HashSet(type,bits)(Polymorph),\
    \
            &HashSet(type,bits)(Standard),\
    \
            &HashSet(type,bits)(Virtual), \
    \
            &HashSet(type,bits)(Security), \
    \
            nullptr\
    \
        } ;\
        static Interface\
        typename(ClassFactoryMethod)(HashSet(type,bits),0,8);\
    \
    \
        static void typename(Setup)(HashSet(type,bits))\
        {((Interface)&HashSet(type,bits)(Security))\
        [2] = HashSet(type,bits)(InterfaceHeap) ;}\
    \
        static void typename(Abort)(HashSet(type,bits)){}

    #endif // 0 FACTORY_TABLE_CLASS 1
    #if 0
        explicit int HashSet(type,bits)(ConsoleIn)
        (HashSet(type,bits) * self, ...){}
        explicit int HashSet(type,bits)(ConsoleOut)
        (const HashSet(type,bits) * self, ...){}

        explicit int HashSet(type,bits)(StandardIn)
        (HashSet(type,bits) * self, ...){}
        explicit int HashSet(type,bits)(StandardOut)
        (const HashSet(type,bits) * self, ...){}

        explicit int HashSet(type,bits)(FileIn)
        (HashSet(type,bits) * self, ...){}
        explicit int HashSet(type,bits)(FileOut)
        (const HashSet(type,bits) * self, ...){}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief debug version (incomplete)                                                 *
     *                                                                                   *
     * - - for some reason this debug version thats a copy and paste doesn't work - -    *
     *              - - because of its location maybe so be careful - -                  *
     *                                                                                   *
     * - - DEBUGGING THE "DEBUG VERSION" CAN/WILL BE LAST ON MY LIST - -                 *
     * @author willy                                                                     *
     *                                                                                   *
     * @version (2023 - 01 - 16)                                                         *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

  #if DEBUG_HASH_TABLE == 1

  #if 1
    #define ClassClassVirtualTablePairHashSet32(Member)\
    \
        ClassClassVirtualTablePairHashSet32(Member)

    #define ClassClassVirtualTablePairHashSetType(Bits)\
    \
        ClassClassVirtualTablePairHashSet##Bits##Type

    #define ClassClassVirtualTable(Member)\
    \
        ClassClassVirtualTable##Member ///Pair

    #define ClassClassVirtualTablePair(Member)\
    \
        ClassClassVirtualTablePair##Member

    #define ClassClassVirtualTablePairIterator(Member)\
    \
        ClassClassVirtualTablePairIterator##Member

    #define ClassClassVirtualTablePairVector(Member)\
    \
        ClassClassVirtualTablePairVector##Member

    #define ClassClassVirtualTablePairHashSet32(Member)\
    \
        ClassClassVirtualTablePairHashSet32##Member
  #endif // 0 DEFINED_INSIDE_VTABLE_H
        volatile typename(Iterator)(ClassClassVirtualTablePair);

        volatile typename(BasicVector)(ClassClassVirtualTablePair, );

        volatile defineAbstractHashSet(ClassClassVirtualTablePair, 32, );/**...**/


        explicit void HashSet(ClassClassVirtualTablePair,32)(InitArray)

            ( HashSet(ClassClassVirtualTablePair,32) * self )
        {
            size_type count = 0;

            while(true)
            {
                if( count >= (*self).base.maxsize )
                {
                    return;
                }

                (*self).base.array[ count ].key = 0;
                (*self).base.array[ count ].val = 0;

                ++count;
            }
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit bool HashSet(ClassClassVirtualTablePair,32)(Resize)(

            HashSet(ClassClassVirtualTablePair,32) * self, size_type size )

        {

            if( ((ClassClassVirtualTablePairVector*)self)->maxsize == size )
            {
                return true;
            }

            ClassClassVirtualTablePair * oldarray = ((ClassClassVirtualTablePairVector*)self)->array;

                ((ClassClassVirtualTablePairVector*)self)->array = allocate(size * sizeof(type));


            if( ((ClassClassVirtualTablePairVector*)self)->array == nullptr )
            {
                ((ClassClassVirtualTablePairVector*)self)->array = oldarray;

                return false;/*OutOfMemoryError*/
            }


            ClassClassVirtualTablePairHashSet32SizeType maxsize

                = ((ClassClassVirtualTablePairVector*)self)->maxsize;


            ((ClassClassVirtualTablePairVector*)self)->maxsize = size;







            ClassClassVirtualTablePairHashSet32SizeType length

                = ((ClassClassVirtualTablePairVector*)self)->length;


            ((ClassClassVirtualTablePairVector*)self)->length = 0;


            ClassClassVirtualTablePairHashSet32InitArray( self );


            bool flag   = false;

            ClassClassVirtualTablePair * iter = oldarray,

                 * back = oldarray + maxsize,

                 * p    = nullptr;


            while( iter != back )
            {


                if( (*iter).key != 0 )
                {


                    p = ClassClassVirtualTablePairQuadraticProbe32QProbe( self, *iter );



                    if( p == nullptr )
                    {
                        flag = true;

                        break;
                    }
                    else



                    if( (*p).key == 0 )
                    {
                        (*p).key = (*iter).key;
                        (*p).val = (*iter).val;

                        ((ClassClassVirtualTablePairVector*)self)->length++;
                    }
                    else



                    if( (*p).key == (*iter).key ) {  }



                }



                do
                {
                    iter++;

                    if( iter == back )
                    {
                        break;
                    }
                }
                while( (*iter).key == 0 );
            }



            if( ((ClassClassVirtualTablePairVector*)self)->length != length || flag == true )
            {

                deallocate( ((ClassClassVirtualTablePairVector*)self)->array );

                ((ClassClassVirtualTablePairVector*)self)->array   = oldarray;

                ((ClassClassVirtualTablePairVector*)self)->maxsize = maxsize;

                ((ClassClassVirtualTablePairVector*)self)->length  = length;


                return false;
            }


            deallocate(oldarray);

            return true;
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit bool ClassClassVirtualTablePairQuadraticProbe32Insert(

            HashSet(ClassClassVirtualTablePair,32) * self, ClassClassVirtualTablePair info )

        {

            ClassClassVirtualTablePair * p = ClassClassVirtualTablePairQuadraticProbe32QProbe( self, info );

            top:

            while( p == nullptr && !found )
            {

                if( !(HashSet(ClassClassVirtualTablePair,32)(Resize)( self, findPrime32Bit(

                    ((ClassClassVirtualTablePairVector*)self)->maxsize * multiplier ) ) ) )
                {

                    multiplier++; goto top;
                }
                multiplier = 2;


                p = ClassClassVirtualTablePairQuadraticProbe32QProbe( self, info );

            }





            if( found || (*p).key == info.key )/* && found*/
            {
                return false;
            }
            else

            if( (*p).key == 0 )
            {

                (*p).key = info.key;
                (*p).val = info.val;

                ((ClassClassVirtualTablePairVector*)self)->length++;

                return true;
            }

        }


    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static void ClassClassVirtualTablePairQuadraticProbe32ResizeHelper

        ( HashSet(ClassClassVirtualTablePair,32) * );

        explicit bool ClassClassVirtualTablePairQuadraticProbe32Remove(

            HashSet(ClassClassVirtualTablePair,32) * self, ClassClassVirtualTablePair info )

        {

            ClassClassVirtualTablePair * p = ClassClassVirtualTablePairQuadraticProbe32QProbe( self, info );



            if( ( p == nullptr ) && !found )
            {
                return false;
            }
            else

            if( (*p).key == 0 )
            {
                return false;
            }
            else
            {
                (*p).key = 0;
                (*p).val = 0;

                ((ClassClassVirtualTablePairVector*)self)->length--;

                ClassClassVirtualTablePairQuadraticProbe32ResizeHelper( self );

                return true;
            }


        }

        explicit void ClassClassVirtualTablePairQuadraticProbe32ResizeHelper(

            ClassClassVirtualTablePairHashSet32 * self )

        {
                if( ((ClassClassVirtualTablePairVector*)self)->length <

                    ( ( ( ((ClassClassVirtualTablePairVector*)self)->maxsize / multiplier )

                  / multiplier ) / multiplier ) )

                {
                multiplier = 2;

                    if( !(HashSet(ClassClassVirtualTablePair,32)(Resize)( self, findPrime32Bit(

                        ((ClassClassVirtualTablePairVector*)self)->maxsize / multiplier ) ) ) )   {}


                }
        }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        explicit ClassClassVirtualTablePair * ClassClassVirtualTablePairQuadraticProbe32QProbe(

            const HashSet(ClassClassVirtualTablePair,32) * self, ClassClassVirtualTablePair info )

        {

            ClassClassVirtualTablePair * slot = nullptr;

            const size_type           maxsize = self->base.maxsize;

            uint32_t                        i = 0,/*<---  (i = 1)*/

                                            h = (self->hash(info.key) % maxsize),

                                        probe = h;/*<---*/

            bool                        pivot = false,

                                        flag  = false;

                                        found = false;



            if( probe < ( maxsize / 2 ) ) { pivot = true; }/**pivot*/



            for( uint8_t index = 0; index < 2; index ++ )
            {





                i = 0;/*<---  (i = 1)*/

                probe = h;/*<---*/





                while ( true )
                {
        /**
                while(  (  self->base.array[probe].key         !=    0  )
                    *//*((type##Vector*)self)->array[probe]    !=    0*//**
                    &&  (  self->base.array[probe].key         !=    info.key  )
                    *//*((type##Vector*)self)->array[probe]    !=    info*//**
                     )
                {}
         */




            if( PrintFlags[4] ){ if ( pivot ){ printf("\nprobe+: %u", probe); ifOutOfBounds(
                                           maxsize, probe, printf(" (OutOfBounds)") );
                                           printf("\n"); }
                                    else { printf("\nprobe-: %u", probe); ifOutOfBounds(
                                           maxsize, probe, printf(" (OutOfBounds)") );
                                           printf("\n"); } }




                    /** TRYING TO ADD BUT ALREADY THERE (SHOULDN'T HAPPEN) */
                    if( ( self->base.array[probe].key == info.key ) && ( info.val != 0 ) )
                            {  found = true;  return nullptr;  }

                    /** COMING OUT (FOUND) */
                    if( ( self->base.array[probe].key == info.key ) )
                            {  found = true;  break;  }

                    /** GOING IN (STOP LOOKING) */
                    if( ( self->base.array[probe].key == 0 ) && ( info.val != 0 ) )
                            {  break;  }

                    /** COMING OUT (KEEP LOOKING) */
                    if( ( self->base.array[probe].key == 0 ) && ( info.val == 0 ) )
                            {  if(!slot){ slot = & self->base.array[probe]; }  }





                    i++;/**quadratic counter*/




                                         /**(uint32_t)*/
                    if( pivot ){ probe = h + (uint32_t) pow(i, 2) + 1; }/* + 1 */
                    else       { probe = h - (uint32_t) pow(i, 2) - 1; }/* - 1 */





                    /*i++;*/





                    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
                    /**                   CheckForOutOfBounds                    */
                    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
                    if( ( typemax(size_type) - maxsize ) < ( typemax(size_type) / 2 ) )
                    { if( pivot )
                      { if( probe < ( typemax(size_type) / 2 ) ){ flag = true; break; } }
                      else
                      { if( probe > ( typemax(size_type) / 2 ) ){ flag = true; break; } }
                    }
                    else
                    { if( probe > maxsize - 1 )
                      { flag = true; break; } }
                    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */





                }/** IF OBJECT FOUND OR FOUND SLOT TO PUT NEW ONE */
                if( found || !flag )
                {


                    //prnt ;


                     /** IF OBJECT FOUND AND FOUND SLOT (AND IS ALREADY IN TABLE)
                         AND NULL INFO INTERFACE SO JUST SEARCHING */
                    if( found && slot )
                    {


                        (*slot) = self->base.array[probe];
                        self->base.array[probe].key = 0;
                        self->base.array[probe].val = 0;


                        /** RETURN SLOT WITH OBJECT */
                        return slot;

                    }

                    /** RETURN SLOT WITH OBJECT OR NO */
                    return & self->base.array[ probe ];

                }
                else if( index == 0 )
                {

                    if( pivot )
                    { pivot = false;


                      h = h + (uint32_t) pow(i - 1, 2) + 1;/** + 1*/
                        /*h = h + (uint##bits##_t) pow(i - 1, 2);*/


                      if( h + 1 < maxsize )
                      { h += 1; } else { h -= 1; }/**offset*/


                    } else
                    { pivot = true;


                      h = h - (uint32_t) pow(i - 1, 2) - 1;/** - 1*/
                        /*h = h - (uint##bits##_t) pow(i - 1, 2);*/


                      if( h - 1 < maxsize )
                      { h -= 1; } else { h += 1; }/**offset*/


                    }
                    flag = false;
                    ifOutOfBounds( maxsize, h, break );
                }

            }
            ifOutOfBounds( maxsize, probe,

                /*if( PrintFlags[4] ){ printf("\nnull return\nfound: %s\n",

                    ( found ? "true" : "false" ) ); }*/
            /** LOOKED FOR AS LONG AS IT COULD GIVEN O( n / 2 q ) */
            return nullptr; ); return nullptr;
        }

  #endif // 0 HASH_TABLE_DEBUG 1

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
          __    __                    __      ________        __      __
         /\ \  /\ \                  /\ \    /\___  __\      /\ \    /\ \
         \ \ \_\_\ \    ___      ____\ \ \___\/__/\ \_/  ___ \ \ \___\ \ \    ___
          \ \  ___  \  / __`\   / ____\ \  __`\  \ \ \  / __`\\ \  __`\ \ \  / __`\
           \ \ \__/\ \/\ \/\.\_/\_____`\ \ \/\ \  \ \ \/\ \/\.\_ \ \/\ \ \ \/\  __/_
            \ \_\ \ \_\ \___/\_\/\_____/\ \_\ \_\  \ \_\ \___/\_\ \____/\ \_\ \_____\
             \/_/  \/_/\/__/\/_/\/____/  \/_/\/_/   \/_/\/__/\/_/\/___/  \/_/\/_____/

                                                                                         */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

            /* DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED */
            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
             * <library that defines void-Oriented essentials in C (Factory C)>  *
             *                                                                   *
             * Copyright (C) <2017 - 2022>  <Christopher Posten>                   *
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
             * Also: <https://www.fsf.org>. (Free Software Foundation).          *
             *                                                                   *
             * The author may be reached at: <jb.bee250@gmail.com>.              *
             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
            /* DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED DISCLAIMED */
                                                                                    //CWP
#endif // DEFINEHASHTABLE_H_INCLUDED
