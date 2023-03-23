#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED
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
    /**||                      HASH BAG                       || *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief                  Hash Bag                          *
     *                                                           *
     *    mixed functions accumulated from stackoverflow.com,    *
     *    these are mid-to-high level functions for              *
     *    professionalism.                                       *
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    static uint32_t _hash(const char *);///string hash

    static uint8_t  _hash8(uint8_t);

    static uint16_t _hash16(uint16_t);
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                  FROM STACKOVERFLOW.COM:                  *
     *                       - (32 bit) -                        *
     *   @brief I found the following algorithm provides a very  *
     *   good statistical distribution. Each input bit           *
     *   affects each output bit with about 50% probability.     *
     *   There are no collisions (each input results in a        *
     *   different output). The algorithm is fast except         *
     *   if the CPU doesn't have a built-in integer              *
     *   multiplication unit. C code, assuming int is 32 bit     *
     *                                                           *
     *  (for Java, replace >> with >>> and remove unsigned):     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static uint32_t _hash32(uint32_t);

    explicit uint32_t _hash32(uint32_t x)//used by vTable, aTable
    {
        x = ((x >> 16) ^ x) * 0x45d9f3b;
        x = ((x >> 16) ^ x) * 0x45d9f3b;
        x =  (x >> 16) ^ x;
        return x;
    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                  FROM STACKOVERFLOW.COM:                  *
     *                        - (64 bit) -                       *
     *   @brief For 64-bit numbers, I suggest to use the         *
     *   following, even though it might not be the fastest.     *
     *   This one is based on splitmix64, which seems to be      *
     *   based on the blog article Better Bit Mixing (mix 13):   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    #define _UINT64_C(CONSTANT)                     CONSTANT##ULL
    static uint64_t _hash64(uint64_t);

    explicit uint64_t _hash64(uint64_t x)//ready to use with vTable
    {                                      //(when bits arg is 64)
        x = (x ^ (x >> 30)) * _UINT64_C(0xbf58476d1ce4e5b9);
        x = (x ^ (x >> 27)) * _UINT64_C(0x94d049bb133111eb);
        x =  x ^ (x >> 31);
        return x;
    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                  FROM STACKOVERFLOW.COM:                  *
     *                       - (32 bit) -                        *
     * @brief professional hash by microsoft.                    *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static uint32_t _hash( const char * ) ;//used by fTable

    explicit uint32_t _hash( const char * s ) ///,uint32_t salt )
    {
        uint32_t h = 0x45d9f3b;///salt;//salt id unique key into table

        while(*s)
        {
            h = h * 101 + (uint32_t) *s++;
        }
        return h;
    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                  FROM STACKOVERFLOW.COM:                  *
     *                       - (32 bit) -                        *
     * @brief good hash function, ...                  (32 bit)  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static size_t _hash_string( const char * );//unused
    static void hash_str( size_t *, const char * );

    explicit size_t _hash_string( const char * key ) /*, size_t size */
    {   void hash_str( size_t *, const char * );/// , size_t

        size_t val = 0xffff; /*= 0*/ //0x45d9f3b;

        hash_str( &val, &key[0] );

        return val;///  (% size) double mod at FactoryTable
    }
    explicit void hash_str( size_t * val, const char * ch )/*, size_t size */
    {/** for me to consider this function it should work with a '\0' */
        if( !(*ch) )
        {
            return;
        }
        *val = 37 * *val + (*ch);
     /**size--;*/
        ch++;
        hash_str( val, ch ); /*, size*/
    }

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *         pointer-to-string converter for hashing!   yay!   *
     *                       - (32 bit) -                        *
     * @brief good hash function, ...                  (32 bit)  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    static string ItoaHex(char[], unsigned int);//used by fTable

    explicit string ItoaHex(char b[], unsigned int i)
    {
        char const hex[] = "0123456789abcdef";

        string p = b;

        p[0] = '0' ; ++p ;
        p[0] = 'x' ; ++p ;

        int shifter = i;

        do{
            ++p;
            shifter = shifter/16; //10
        }while(shifter);

        *p = '\0';
        do{
            *--p = hex[i%16]; //10     //digit
            i = i/16; //10
        }while(i);

        return b;
    }

    ///...

#endif // HASH_H_INCLUDED
