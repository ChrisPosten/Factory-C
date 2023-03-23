#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
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
    #include "../Template/defineVector.h"

    #include "../Virtual/vTable.h"

    #include "../Factory/fTable.h"
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||                       C STRING                      || *
     *                                                           *
     *              by Willy (04/07/2021)(12/23/2021)            *
     *                       (12/26/2021)(02/11/2022)            *
     * ||                    (09/24/2022)                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    implement base type                    */
    ///     String(Member) == String##Member == StringMember    ///

   # define StringID String(Security)(ID)()

    #undef  size_type
    #define size_type size_t

    typename(Copy)(char);

    typename(Swap)(char);

   #define charIterator(Member)charIterator ## Member
    typename(Iterator)(char);

    typename(FactoryIterator)(char, );

    explicit int Iterator(char)(ConsoleOut)
    (const Iterator(char) * self, ...)   {}

    explicit int Iterator(char)(StandardOut)
    (const Iterator(char) * self, ...)   {}

    explicit int Iterator(char)(FileOut)
    (const Iterator(char) * self, ...)   {}

   #define charVector(Member)charVector ## Member
    typename(Vector)(char, );

    typename(FactoryVector)(char, );

    explicit int Vector(char)(ConsoleIn)
    (Vector(char) * self, ...)           {}

    explicit int Vector(char)(ConsoleOut)
    (const Vector(char) * self, ...)     {}


    explicit int Vector(char)(StandardIn)
    (Vector(char) * self, ...)           {}

    explicit int Vector(char)(StandardOut)
    (const Vector(char) * self, ...)     {}


    explicit int Vector(char)(FileIn)
    (Vector(char) * self, ...)           {}

    explicit int Vector(char)(FileOut)
    (const Vector(char) * self, ...)     {}

  #if 1
    # define CString(Member)CString ## Member
    typedef cstring CString;
  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                        implement                          */
   # define String(Member)String ## Member
    typedef struct String {Vector(char)base;} String;

    typedef struct String(VirtualTable)
    {   Vector(char)(VirtualTable)base;//

        bool () (*concat)( Vector(char) *, ... );

        Vector(char) * (*substr)( const Vector(char) *, ... );

        CString () (*toString)( const Vector(char) * );

    }String(VirtualTable);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *   THIS MAY BE FOR THE DIFFERENT VERSIONS OF AN OVERLOAD   *
     *                                                           *
     *   FUNCTION TO GO, WHERE THE CENTRAL OVERLOAD FUNCTION     *
     *                                                           *
     *   WOULD EVEN STAY IN FILE HERE AND BECOME AN INTERFACE METHOD*
     *                                                           *
     *   FOR THE INTERFACE ASSIGNED AT THE VIRTUAL TABLE. AGAIN, *
     *                                                           *
     *   THAT WOULD MEAN THAT JUST FOR THAT SPECIFIC OVERLOAD    *
     *                                                           *
     *   FUNCTION, ALL ITS DIFFERENT VERSIONS WOULD GO INSIDE    *
     *                                                           *
     *   THIS FACTORY TABLE STRUCT Class(FactoryTable). THERE    *
     *                                                           *
     *   MAY BE OTHER THINGS THAT GO HERE BUT THEN AGAIN THERE   *
     *                                                           *
     *   ARE MORE THAN ENOUGH INTERFACES THAT GO INTO THE HEAP   *
     *                                                           *
     *   (FACTORY TABLE CLASS INTERFACE HEAP) SO THERE ARE MORE  *
     *                                                           *
     *   THAN ENOUGH INTERFACES TO PUT MORE THAN ENOUGH THINGS   *
     *                                                           *
     *   IN A WAY THAT EVERYTHING CAN BE ACCESSED IN MORE THAN   *
     *                                                           *
     *   ENOUGH WAYS.                                            *
     *                                                           *
     *                                                           *
     *   NOW THAT I THINK ABOUT IT, THE OVERLOAD FUNCTIONS ONLY  *
     *                                                           *
     *   USE THE METHODS TABLE FOR THE ACTUAL INTERFACE. THERE   *
     *                                                           *
     *   IS ROOM FOR THE DEFINITION OF A PATTERN THAT INCLUDES   *
     *                                                           *
     *   A LOWER LEVEL OF AN OVERLOAD FUNCTION, ONE THAT HAS A   *
     *                                                           *
     *   POINTER TO THE CENTRAL FUNCTION AT THE ASSIGNED         *
     *                                                           *
     *   INTERFACE AT THE VIRTUAL TABLE FOR AN OBJECT, AND THE   *
     *                                                           *
     *   Class(FactoryTable) MAY HAVE POINTERS FOR THOSE FUNCTIONS,*
     *                                                           *
     *   THEY WOULD ONLY BE FOR CALLING THE METHODS BY NAME, SO  *
     *                                                           *
     *   NOT DESIREABLE, INSTEAD I FEEL THAT I MIGHT STILL LEAVE *
     *                                                           *
     *   THE FACTORY TABLE CLASS CLASS FACTORY TABLE EMPTY ...   *
     *                                                           *
     *   FOR NOW. INSTEAD, THERE CAN BE A STRATEGY TABLE FOR EVERY*
     *                                                           *
     *   OVERLOAD FUNCTION ALONG WITH THERE BEING ONE FOR EVERY  *
     *                                                           *
     *   STRATEGIC FUNCTION POINTER FOR, OR TO HELP SUPPORT      *
     *                                                           *
     *   FULLY DYNAMIC PROGRAMMING IN FACTORY C (03/12/2022).    *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    typedef struct String(FactoryTable)
    {   struct class(FactoryTable)base;
    #if 0
        String(Helper) (*operator [])( String *, SizeType );
    #endif // 0
    }String(FactoryTable);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                       prototypes                          */
    static String * String(Init)( String * self, ... );

    static void String(Dtor)( String * );

  #if 0
    static cstring String(Type)(void);

    explicit cstring String(Type)(void){return"String";}
  #else
    static cstring typename(Type)(String) ;
  #endif // 0

    explicit void String(Dtor)( String * self )

        {Vector(char)(Dtor)(self);}


    static bool String(Resize)( Vector(char) *, ... );

    static bool String(Concat)( Vector(char) *, ... );


    static Vector(char) * String(SubStr)( const Vector(char) *, ... );

    static cstring String(ToString)( const Vector(char) * );

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*              factory table class prototypes               */
    static ctorPtr String(Ctor)(void);

    static String(VirtualTable) * String(Virt)( String * );


    static void String(Setup)(void);

    static void String(Abort)(void);


    static bool String(Equal)(const Vector(char) *, const Vector(char) *);

    static bool String(Greater)(const Vector(char) *, const Vector(char) *);


    static int String(ConsoleIn) (Vector(char) *);

    static int String(ConsoleOut) (const Vector(char) *);


    static int String(StandardIn) (Vector(char) *);

    static int String(StandardOut) (const Vector(char) *);

    volatile static bool String(Flag) = false;//Standard Helper


    static int String(FileIn) (Vector(char) *);

    static int String(FileOut) (const Vector(char) *);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static String(FactoryTable)

        String(Factory) =

    {
        { &class(FactoryTable)(Type),

          &String(Ctor), 0 },   };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                 declare static interface(s)               */
    static String(VirtualTable)//volatile?  NO  (should be no need)

        String(Interface) =
    {///
        {///
            {///
                {///
                    &String(Type),/* updated: struct class model */

                    &String(Init),

                    &String(Dtor)
                },

                &Vector(char)(Copy),

                &Vector(char)(Insert),

                &Vector(char)(Remove),

                &Vector(char)(At),

                &Vector(char)(Size),

                &Vector(char)(Begin)
            },///

            &String(Resize),

            &Vector(char)(Replace),

            &Vector(char)(Clear),

            &Vector(char)(Front),

            &Vector(char)(Back),

            &Vector(char)(Max),

            &Vector(char)(End)
        },///

        &String(Concat),

        &String(SubStr),

        &String(ToString)
    };
    explicit ctorPtr String(Ctor)(void) { return new(String); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Complex

        String(ComplexHeap)[three] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "array",       0,     sizeof(char*),   "char*"         },
        { "length",      1,     sizeof(size_t),  "size_t"        },
        { "maxsize",     2,     sizeof(size_t),  "size_t"        },

        { "", 0, 0 }
    };static Complex *
    typename(SubFactoryMethod)(String,Complex,Complex,0,2);

    static struct class (ComplexHeap)

        String(Complex) =

    {   &class(ComplexHeap)(Type),

        &String(ComplexSearch),

         String(ComplexHeap) };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Virtual  /**Table(Name, Pos, Default)**/

        String(VirtualHeap)[nineteen] = /**CLASS VIRTUAL TABLE TABLE**/
    { /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "at",               6,      &Vector(char)(At),
        "char*(*)(Vector(char)*,...)"                         },
        { "back",             13,     &Vector(char)(Back),
        "char*(*)(Vector(char)*)"                             },
        { "begin",            8,      &Vector(char)(Begin),
        "Iterator(char)*(*)(Vector(char)*)"                   },
        { "clear",            11,     &Vector(char)(Clear),
        "void(*)(Vector(char)*)"                              },
        { "concat",           16 ,    &String(Concat),
        "bool()(*)(Vector(char)*,...)"                        },
        { "copy",             3,      &Vector(char)(Copy),
        "bool()(*)(Vector(char)*,...)"                        },
        { "dtor",             2,      &String(Dtor),
        "void(*)(String*)"                                    },
        { "end",              15,     &Vector(char)(End),
        "Iterator(char)*(*)(const Vector(char)*)"             },
        { "front",            12,     &Vector(char)(Front),
        "char*(*)(Vector(char)*)"                             },
        { "init",             1,      &String(Init),
        "Vector(char)*(*)(Vector(char)*,...)"                 },
        { "insert",           4,      &Vector(char)(Insert),
        "bool()(*)(Vector(char)*,size_type,char)"             },
        { "max",              14,     &Vector(char)(Max),
        "size_type()(*)(const Vector(char)*)"                 },
        { "remove",           5,      &Vector(char)(Remove),
        "bool()(*)(Vector(char)*,size_type)"                  },
        { "replace",          10,     &Vector(char)(Replace),
        "bool()(*)(Vector(char)*,size_type,char)"             },
        { "resize",           9,      &String(Resize),
        "bool()(*)(Vector(char)*,size_type)"                  },
        { "size",             7,      &Vector(char)(Size),
        "size_type()(*)(const Vector(char)*)"                 },
        { "substr",           17,     &String(SubStr),
        "Vector(char)*(*)(const Vector(char)*,...)"           },
        { "toString",         18,     &String(ToString),
        "cstring(*)(const Vector(char)*)"                     },
        { "type",             0,      &String(Type),
        "cstring(*)()"                                        },

        { "", 0, 0 }
    };static Virtual * /** STRING SUB FACTORY METHOD(S) **/
    typename(SubFactoryMethod)(String,Virtual,Virtual,0,18);

    static struct class (VirtualHeap)

        String(Virtual) = ///Interface AS Registration

    {   &class(VirtualHeap)(Type),

        &String(VirtualSearch),

         String(VirtualHeap)   };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Polymorph  /**Table( Name, Offset, Offset )**/

        String(PolymorphHeap)[three] =

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "Container",          0,              0, "" },
        { "Vector(char)",       0,              0, "" },
        { "class",              0,              0, "" },
        /** THESE OFFSETS ARE IMPORTANT FOR WHEN THE
            OBJECT IS ADJACENT TO ANOTHER ON A STACK
               (TO SUPPORT MULTIPLE INHERITANCE)**/
        { "", 0, 0 }
    };static Polymorph *
    typename(SubFactoryMethod)(String,Polymorph,Polymorph,0,2);

    static struct class (PolymorphHeap)

        String(Polymorph) =

    {   &class(PolymorphHeap)(Type),

        &String(PolymorphSearch),  /// = 0
    ///
         String(PolymorphHeap)  };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
    # define classBasicsHeap(Member)classBasicsHeap ## Member
    static cstring class    (BasicsHeap)(Type)(void);    ///(DEMO)
  #endif // 0
    static Strategy /**Pair(Name, Address)**/

        String(BasicsHeap)[four] =
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        { "string(equal)",       &string(equal)     },
        { "string(fill)",        &string(fill)      },
        { "string(greater)",     &string(greater)   },
        { "string(size)",        &string(size)      },

        { "", 0 }
    };static Strategy *
    typename(SubFactoryMethod)(String,Strategy,Basics,0,3);
  #if 0
  explicit
    cstring class(BasicsHeap)(Type)(void)
    { return "class(BasicsHeap)"; }
  #endif // 0
    static struct class(StrategyHeap)

        String(Basics) =

    {   &class(BasicsHeap)(Type),

        &String(BasicsSearch),

         String(BasicsHeap)   };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief    string library table                            *
     *                                                           *
     *                                                           *
     * @param                                                    *
     *                                                           *
     *                                                           *
     * @return                                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
    # define classLibraryHeap(Member)classLibraryHeap ## Member
    static cstring class    (LibraryHeap)(Type)(void);   ///(DEMO)
  #endif // 0
    static Strategy /**Pair(Name, Address)**/

        String(LibraryHeap)[eightythree] =  ///83 + NULL

    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        {"_memccpy",  &_memccpy},    {"_memicmp",  &_memicmp},
        {"_strcmpi",  &_strcmpi},    {"_strdup",    &_strdup},
        {"_strerror",&_strerror},    {"_stricmp",  &_stricmp},
        {"_stricoll",&_stricoll},    {"_strlwr",    &_strlwr},
        {"_strnicmp",&_strnicmp},    {"_strnset",  &_strnset},
        {"_strrev",    &_strrev},    {"_strset",    &_strset},
        {"_strupr",    &_strupr},    {"_swab",        &_swab},
        {"_wcsdup",    &_wcsdup},    {"_wcsicmp",  &_wcsicmp},
        {"_wcsnset",  &_wcsnset},    {"_wcsrev",    &_wcsrev},
        {"_wcsset",    &_wcsset},    {"_wcsupr",    &_wcsupr},
        {"memccpy",    &memccpy},    {"memchr",      &memchr},
        {"memcmp",      &memcmp},    {"memcpy",      &memcpy},
        {"memicmp",    &memicmp},    {"memmove",    &memmove},
        {"memset",      &memset},    {"strcasecmp",&strcasecmp},
        {"strcat",      &strcat},    {"strchr",      &strchr},
        {"strcmp",      &strcmp},    {"strcmpi",    &strcmpi},
        {"strcoll",    &strcoll},    {"strcpy",      &strcpy},
        {"strcspn",    &strcspn},    {"strdup",      &strdup},
        {"strerror",  &strerror},    {"stricmp",    &stricmp},
        {"stricoll",  &stricoll},    {"strlen",      &strlen},
        {"strlwr",      &strlwr},    {"strncasecmp",&strncasecmp},
        {"strncat",    &strncat},    {"strncmp",    &strncmp},
        {"strncpy",    &strncpy},    {"strnicmp",  &strnicmp},
        {"strnset",    &strnset},    {"strpbrk",    &strpbrk},
        {"strrchr",    &strrchr},    {"strrev",      &strrev},
        {"strset",      &strset},    {"strspn",      &strspn},
        {"strstr",      &strstr},    {"strtok",      &strtok},
        {"strupr",      &strupr},    {"strxfrm",    &strxfrm},
        {"swab",          &swab},    {"wcscat",      &wcscat},
        {"wcschr",      &wcschr},    {"wcscmp",      &wcscmp},
        {"wcscmpi",    &wcscmpi},    {"wcscoll",    &wcscoll},
        {"wcscpy",      &wcscpy},    {"wcscspn",    &wcscspn},
        {"wcsdup",      &wcsdup},    {"wcsicmp",    &wcsicmp},
        {"wcsicoll",  &wcsicoll},    {"wcslen",      &wcslen},
        {"wcslwr",      &wcslwr},    {"wcsncat",    &wcsncat},
        {"wcsncmp",    &wcsncmp},    {"wcsncpy",    &wcsncpy},
        {"wcsnicmp",  &wcsnicmp},    {"wcsnset",    &wcsnset},
        {"wcspbrk",    &wcspbrk},    {"wcsrchr",    &wcsrchr},
        {"wcsrev",      &wcsrev},    {"wcsset",      &wcsset},
        {"wcsspn",      &wcsspn},    {"wcsstr",      &wcsstr},
        {"wcstok",      &wcstok},    {"wcsupr",      &wcsupr},
        {"wcsxfrm",    &wcsxfrm},

        {"",0}///GOOD AS NULL
    };static Strategy *
    typename(SubFactoryMethod)(String,Strategy,Library,0,82);
  #if 0
  explicit
    cstring class(LibraryHeap)(Type)(void)
    { return "class(LibraryHeap)"; }
  #endif // 0
    static struct class (StrategyHeap)

        String(Library) =

    {   &class(LibraryHeap)(Type),

        &String(LibrarySearch),

         String(LibraryHeap)   };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*              ... registrations (advanced)                 */
    static bool String(Equal)(const Vector(char) *, const Vector(char) *);

    static bool String(Greater)(const Vector(char) *, const Vector(char) *);

    static struct class (CompareTable)

        String (Compare) =

    { &class(CompareTable)(Type), &String(Equal), &String(Greater) };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static int String(ConsoleIn) (Vector(char) *);

    static int String(ConsoleOut) (const Vector(char) *);

    static class(ConsoleTable)

        String(Console) =

    {   &class(ConsoleTable)(Type),

      &String(ConsoleIn), &String(ConsoleOut)   };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static int String(StandardIn) (Vector(char) *);

    static int String(StandardOut) (const Vector(char) *);

    static class(StandardTable)

        String(Standard) =

    {   &class(StandardTable)(Type),

      &String(StandardIn), &String(StandardOut)   };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static int String(FileIn) (Vector(char) *);

    static int String(FileOut) (const Vector(char) *);

    static class(FileTable)

        String(File) =

    {   &class(FileTable)(Type),

      &String(FileIn), &String(FileOut)   };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

   # define StringSecurity(Member)StringSecurity ## Member
    static cstring typename(PassNumber)(String, Security);

    static struct pass(SecurityHeap)

        String(Security) =

    { { & pass(SecurityHeap)(Type), 0, 0 },

        & String(Security)(ID), 0 };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief    registration list and class factory method      *
     *                                                           *
     * @param    cstring registration name similar to but not    *
     *           available by object typeid(obj)                 *
     *                                                           *
     * @return   reg from registration list                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                         /// twelve
    static Interface String(InterfaceHeap)[twelve] = /// Reg - istrations
    {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
        &String(Interface),

        &String(Basics),    //+strategy

        &String(Compare),

        &String(Complex),

        &String(Console),

        &String(Factory),

        &String(File),

        &String(Library),   //+strategy

        &String(Polymorph),

        &String(Standard),

        &String(Virtual),   //full sized heap + 2 strategy + compare

        &String(Security),  // "pass(...)" not "0xffffffff" here

        nullptr /*(null termination required)*/ };// FACTORY HEAP +1

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief c String class factory method (Factory C)(OOC)(C+) *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Interface typename(ClassFactoryMethod)(String, 0, 11);//twelve

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief c String class setup and class abort               *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static void typename(Setup)(String)   //used by register(String)
    {String(Security)(ID)();

     ((Interface)&String(Security))[2] = String(InterfaceHeap) ;

     register(Vector(char));
    }

    static void typename(Abort)(String){drop(Vector(char));} //used by drop(String)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  String                                            *
     *                      (constructor)                        *
     * @param                 n = size                           *
     *      case 0:                                              *
     *          String * s = new(String)(this, 0); //[0] = '\0'  *
     *      case 1:                                              *
     *          String * s = new(String)(this, 1, obj);          *
     *      case 2:                                              *
     *          String * s = new(String)(this, 2, "Hello World");*
     *      case 3:                                              *
     *          String * s = new(String)(this, 3, n);            *
     *      case 4:                                              *
     *          String * s = new(String)(this, 4, s1,..., "");   *
     *      case n:                                              *
     *          String * s = new(String)(this, n); //(n > 5)     *
     *                                                           *
     *  note: case 1 for copy constructor                        *
     *                                                           *
     *  the null termination character is counted with the       *
     *  length for the String to work properly as a Vector(char) *
     *                                                           *
     * @return  new(String)(this, ...);                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                   implement functions                     */
    explicit String * String(Init)(String * self, ...)
    {
        /*if( self == nullptr ){ return nullptr; }*/

        Stack * stack       =   control();

        size_type   c       =   arg(stack, size_type);//case number


        switch(c)
        {
            case 0:     //default constr (standard ctor)

                self = Vector(char)(Init)(self, 0, 1);

                if( self == nullptr ){ throw(new(OutOfMemory))
                    (this, "StringVectorFailure"); }

                ((Vector(char)*)self) -> array [ 0 ] = '\0';

                ((Vector(char)*)self) -> length++;

                String(Flag) = true;//for cout

            break;
            case 1:     ;//copy

                String * str = stack(arg)(String*);

                self = Vector(char)(Init)(self, 1, str);

                if( self == nullptr ){ throw(new(OutOfMemory))
                    (this, "StringVectorFailure"); }

            break ;
            case 2:     ;//cstring ""

                cstring cstr = arg(stack, cstring);

                size_type length = string(size)(cstr);

                self = Vector(char)(Init)(self, 0, length);

                if( self == nullptr ){ throw(new(OutOfMemory))
                    (this, "StringVectorFailure"); }


                ((Vector(char)*)self)->length = length;


                char(Copy)(((Vector(char)*)self)->array, cstr,

                         &((Vector(char)*)self)->array[ length - 1 ],

                         &cstr[ length - 1 ]);

                ((Vector(char)*)self)->array[

                    ((Vector(char)*)self)->maxsize - 1 ] = '\0';

            break ;
            case 3:     ;//size (null terminated at either end)

                size_type size = arg(stack, size_type);

                self = Vector(char)(Init)(self, 0, size);

                if( self == nullptr ){ throw(new(OutOfMemory))
                    (this, "StringVectorFailure"); }

                ((Vector(char)*)self)->array[0] = '\0';

                ((Vector(char)*)self)->array[

                ((Vector(char)*)self)->maxsize - 1 ] = '\0';
                                                       //
                ((Vector(char)*)self)->length++;

            break;
            case 4:      ; //(chicken scratch) (null terminated)

                cstring _str = arg(stack, cstring);

                while( !string(equal)( _str, "" ) )//empty string
                {
                    String * temp = new(String)(this, 2, _str);

                    _str = arg(stack, cstring);

                    if( !String(Concat)( self, temp ) )

            { throw(new(Exception))(this, "!String(Concat)"); }

                    delete  (temp);
                }

            break;
            //case 5:
                //sprintf()
            //break;
            default:    //case = maxsize

                self = Vector(char)(Init)(self, 0, c);

                if( self == nullptr ){ throw(new(OutOfMemory))
                    (this, "StringVectorFailure"); }

                ((Vector(char)*)self)->array[0] = '\0';

                ((Vector(char)*)self)->array[

                ((Vector(char)*)self)->maxsize - 1 ] = '\0';
                                                       //
                ((Vector(char)*)self)->length++;
                                          //
        }
        return self;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief    inheritance table search                        *
     *                                                           *
     * this table needs to be updated to support a second offset *
     * for the interface type that is to be stored inside the    *
     * factory table as a runtime-object.(second offset per row) *
     * (interface type as in classVirtualTable type)             *
     *                                                           *
     * @param   static table factory method cstring parameter    *
     *                                                           *
     *                                                           *
     * @return  Object *                                         *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                                                    *
     *    - - now this can go into a reg list and sent to the    *
     *        factory table in some way or get added to          *
     *        another static table somewhere something more      *
     *        like a static program table if not the factory     *
     *        table                                              *
     * @param                                                    *
     *                                                           *
     * @return                                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief    default compile-time method initializations     *
     *                                                           *
     *                                                           *
     * @param    method name key                                 *
     *                                                           *
     *                                                           *
     * @return   single slot: Table(Key, Val, Col, End)          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * I MIGHT MAKE IT A REQUIREMENT OF A FACTORY TABLE CLASS    *
     *                                                           *
     * TO IMPLEMENT THIS SETUP FUNCTION FOR ANYTHING LIKE        *
     *                                                           *
     * SORTING STATIC TABLES, TO A REGISTER STATEMENT FOR ITS    *
     *                                                           *
     * BASE TYPE, ETC... (DONE) (02/26/2022)                     *
     *                                                           *
     *                                                           *
     * BUBBLE SORT CAN BE USED (POSSIBLY PUT INTO THE OOC FOLDER)*
     *                                                           *
     * TO MAKE A SORT CHECK!! I HAVE A NEW MECHANISM TO WORK WITH*
     *                                                           *
     * AND ITS CALLED A SORT CHECK FUNCTION (BUBBLE SORT)        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                                                    *
     *                                                           *
     *  - -   this will work with the inheritance tables or - -  *
     *         - - the ClassPolymorphTable for this class - -    *
     *   - - when this function happens to be the function - -   *
     *  - -  that gets called inside the global equal(..), - -   *
     *    - - greater(...) or also: compare(...) that is  - -    *
     *            - - equal to the function equal's - -          *
     *                                                           *
     * @param                                                    *
     *                                                           *
     * @return                                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  I CAME TO THE CONCLUSION THAT ONLY THE LENGTH            *
     *                                                           *
     * AND NOT THE MAXSIZE WILL BE A FACTOR AS TO WHETHER OR NOT *
     *                                                           *
     * BOTH ARE EQUAL. IT STILL WILL RETURN FALSE FOR THE CASE   *
     *                                                           *
     * THATS WHERE A VECTOR IS THE SAME BUT DOES NOT INCLUDE A   *
     *                                                           *
     * NULL TERMINATION CHARACTER, THATS ALSO ADDED TO THE LENGTH*
     *                                                           *
     * OF THE STRING IF IT WERE IN A STRING HERE. CONSIDER EXTRA *
     *                                                           *
     * ADDED CASES THAT MAKE IT SO THERES NO NEED FOR THE VECTOR *
     *                                                           *
     * BEING COMPARED TO HAVE THE NULL TERMINATION CHARACTER     *
     *                                                           *
     * INCLUDED AND INCLUDED IN THE LENGTH. OTHERWISE I FIND THIS*
     *                                                           *
     * TO BE ACCEPTIBLE. (SIMPLE IS GOOD)                        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   console io                                       *
     *                                                           *
     * @param   self                                             *
     *                                                           *
     * @return  int                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    //DONT FORGET TO FULLY DOCUMENT THIS FUNCTION (FACTORY FUNCTION)
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   file io                                          *
     *                                                           *
     *                                                           *
     * @param                                                    *
     *                                                           *
     *                                                           *
     * @return                                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  DONT FORGET THAT IF THIS TABLE RETURNED DATA MEMBERS     *
     *                                                           *
     *  OF THE StringInterface INSTEAD OF THE GLOBAL FUNCTION    *
     *                                                           *
     *  BEING USED TO RETURN ITS ADDRESS AS A CONSTANT VALUE     *
     *                                                           *
     *  AT EACH SLOT IN THE INTERFACE (Methods) TABLE THAT       *
     *                                                           *
     *  ACCESS TO THE FUNCTION ITSELF WOULD BE GONE FROM THE     *
     *                                                           *
     *  PROGRAM AT RUNTIME IF THE CENTRAL OVERRIDE METHOD        *
     *                                                           *
     *  RE-INITIALIZED THE DATAFIELD POSITION THAT WAS OTHERWISE *
     *                                                           *
     *  RESERVED FOR THAT FUNCTION.                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit int String(ConsoleIn) ( Vector(char) * self )
    { return scanf( "%s", self->array ); }


    explicit int String(ConsoleOut) ( const Vector(char) * self )
    { return printf( "%s", self->array ); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit int String(StandardIn) ( Vector(char) * self )
    { if( instanceof( ConsoleIn(Object), String ) )
      {return fscanf( ConsoleIn(String), "%s", self->array );}
      else{
        throw(new(IllegalOperation))(this, "NoInString");} }


    explicit int String(StandardOut) ( const Vector(char) * self )
    { if( instanceof( ConsoleOut(Object), String ) )
      {return fscanf( ConsoleOut(String), "%s", self->array );}
      else{
        throw(new(IllegalOperation))(this, "NoOutString");} }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit int String(FileIn) ( Vector(char) * self )
    { if( instanceof( ConsoleIn(Object), File ) )
      {return fscanf( *ConsoleIn(Object), "%s", self->array );}
      else{
        throw(new(IllegalOperation))(this, "NoInFile");} }


    explicit int String(FileOut) ( const Vector(char) * self )
    { if( instanceof( ConsoleOut(Object), File ) )
      {return fprintf( *ConsoleOut(Object), "%s", self->array );}
      else{
        throw(new(IllegalOperation))(this, "NoOutFile");} }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit bool String(Equal)

        ( const Vector(char) * self, const Vector(char) * objt )

    {   if( self->length == objt->length )
        {
            return string(equal)( self->array, objt->array );
        }
        else
        {
            return false;
        }   }

    explicit bool String(Greater)

        ( const Vector(char) * self, const Vector(char) * objt )

    {   if( true )
        {
            return string(greater)( self->array, objt->array );
        }
        else
        {
            return false;
        }   }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   concat                                           *
     *                                                           *
     * @param   self                                             *
     *                                                           *
     * @return  bool                                             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit bool String(Concat)( Vector(char) * self, ...

        /**const Vector(char)**/ )
    {
        Stack * stack = control();

        const Vector(char) * objt = arg(stack, const Vector(char) *);


        size_type length = self->length + objt->length - 1;

        if( !StringResize( self, length ) ) { return false; }
        else  {}

        char(Copy)( &self->array[ self->length - 1 ],

                    &objt->array[ 0 ],

                    &self->array[ length - 1 ],

                    &objt->array[ objt->length - 1 ]

                  );

        self->length = length;

        self->array[ self->maxsize - 1 ] = '\0';//safety

        return true;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   substr                                           *
     *                                                           *
     * @param   self                                             *
     *                                                           *
     * @return  Vector(char) *                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit Vector(char) * String(SubStr)( const Vector(char) * self, ...

        /**size_type index, size_type length*/ )

    { Stack * stack = control();

        size_type index  = arg(stack, size_type),

                  length = arg(stack, size_type);

        Vector(char) * str = new(String)(this,3,length+1);

        size_t i;
        for( i = 0 ; i < length ; i ++ )
        {
            str->array[i] = self->array[index + i];
        }str->array[i] = '\0';

        return str;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   resize                                           *
     *                                                           *
     * @param   self, newsize                                    *
     *                                                           *
     * @return  bool                                             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit bool String(Resize)( Vector(char) * self, ... )
    {
        Stack * stack = control();

        size_type newsize = arg(stack, size_type);


        if( self->maxsize == newsize )
        {
            return true;
        }
        string temp = self->array;

        self->array = allocate( newsize );

        if( !self->array ){ self->array = temp; return false; }


        self->maxsize = newsize;



        string(fill)(self->array, temp);



        deallocate(temp);


        self->array[ self->length - 1 ] = '\0';//

        self->array[ self->maxsize - 1 ] = '\0';//safety

        return true;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief   resize helper used with cout, cin                *
     *                                                           *
     * @param   self, size                                       *
     *                                                           *
     * @return  array pos to write into                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Object * StandardHelper( Object **, size_t ) ;

    explicit Object * StandardHelper( Object ** self, size_t size )
    {
        if ( self )
        {if( size > 0 )
        {self[1] += size;

        bool flag = default(0);


            default(0) = false;
         if( !String(Resize)( self, self[1] ) )
            {throw(new(OutOfMemory))(this, "StringResizeFailure");}
         ConsoleOut(String) = self[0] + (size_t)self[1] - 1 ;
            default(0) = flag;}

        return self[0] + (size_t)self[1] - 1 - size; } return 0;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  (string)virtual(self, charVector)->getptr(this);  *
     *                                                           *
     * @param                                                    *
     *                                                           *
     * @return                                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit cstring String(ToString)( const Vector(char) * self )
    {
        return self->array;
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                                                    *
     *                                                           *
     * @param                                                    *
     *                                                           *
     * @return                                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///



    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief define stringize code (files)                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineStringizeHeader( code, name )\
    \
        static void name();\
    \
        code\
    \
        explicit void name()\
        {\
            /*printf( #code );*/\
            String * str = new (String)(this, 2, #code);\
        \
            vPush(str);\
        }

    #define defineStringizeCode( code, name )\
    \
        static void name();\
    \
        code\
    \
        static void name()\
        {\
            /*printf( #code );*/\
            String * str = new (String)(this, 2, #code);\
        \
            vPush(str);\
        }

    /**

    typename(Stringize)(

        explicit void f24()
        {
            ClassClassVirtualTablePairIterator iterator;


            ClassClassVirtualTablePairIteratorInit(&iterator,


                vtable->base.base.array );




            for( size_t i = 0; i < vtable->base.base.maxsize; i++ )
            {
                printf( "0x%x\t" );


                if( i % 8 == 0 )
                {

                }
            }

            printf24();


        }, printf24 );
     */

    /*

    explicit Interface String(Search) (cstring reg)
    {
        Interface iterator[3] = { &Volatile(Type), 0, 0 };///

        fSizeType i;               volatile(type) = reg;

        InterfaceHeap p = Search(Interface)

            ( String(InterfaceHeap), iterator, & i, 0, 7 );

        if( p ){ return ((*p)) ; } else { return 0; } }


        (function implementation + struct variable)

        becomes:


      static Interface typename(ClassFactoryMethod)(String, 0, 7);

            size_t size = string(size)(typeid(self))

            + string(size)(typeid(friend(self))) + 2;// + 1 '\0'



           // return (new(String)(this, 4, typeid(self),"(",
                typeid(friend(self)), ")", ""))->base.array;
             //

            */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     *    string(equal)( self, objt )                            *
     *                                                           *
     *    string(greater)( self, objt )                          *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     *    String(cin)( self, objt )                              *
     *                                                           *
     *    String(cout)( self, objt )                             *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     *    String(fin)( self, objt )                              *
     *                                                           *
     *    String(fout)( self, objt )                             *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     *    string(equal)( self, objt )                            *
     *                                                           *
     *    string(greater)( self, objt )                          *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     *    String(cin)( self, objt )                              *
     *                                                           *
     *    String(cout)( self, objt )                             *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /**                                                          *
     *    String(in)( self, objt )                               *
     *                                                           *
     *    String(out)( self, objt )                              *
     *                                                           */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
  #if 1
    typename (Pair) (String, String) ;
    typedef   Pair  (String, String)  Document ; //key = title
                                                 //val = document
  #endif // 1 WISH_IT_COULD_GO_INTO_INFO_H 1
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**     _____    __           __
           / ____\  /\ \__       /\_\
          /\ \___/ /\__  _\  ____\/_/_    ___     ___
          \ \_____`\/_/\ \/ /\  _`\/\ \  / __`\  / __`\
           \/____/\ \ \ \ \/\ \ \_/\ \ \/\ \/\ \/\ \/\ \
             /\_____/  \ \__/\ \_\  \ \_\ \_\ \_\ \____ \
             \/____/    \/_/  \/_/   \/_/\/_/\/_/\/___/\ \
                                                   /\ \_\ \
                                                   \ \____/
                                                    \/___/
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                             //CWP
#endif // STRING_H_INCLUDED
