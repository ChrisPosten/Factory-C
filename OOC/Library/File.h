#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
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
    /**||       C FILE  (OBJECT-ORIENTED IMPLEMENTATIONS)     || *
     *                                                           *
     * ||                 by Willy (02/18/2022)(12/20/2022)   || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #include "../Virtual/vTable.h"
        ///finish making this a Factory Object File (fTable.h)
    #define File(Member) File##Member

    /**
        THE File STRUCT ITSELF (FILE FROM C LIBRARY)

        IS IMPLEMENTED BOTH IN stdio.h AND wchar.h
     */

    ///typedef struct
    ///{ struct class base;
    /**       FILE has:
        char *	        _ptr;
        int	            _cnt;
        char *	        _base;
        int	            _flag;
        int	            _file;
        int	            _charbuf;
        int	            _bufsiz;
        char *	        _tmpfname;
     */
    ///}File;

    #if 0
      #ifndef _STDIO_H_
        typedef struct File
        { struct class base;

            char *	        _ptr;
            int	            _cnt;
            char *	        _base;
            int	            _flag;
            int	            _file;
            int	            _charbuf;
            int	            _bufsiz;
            char *	        _tmpfname;

        }File;
      #endif // _STDIO_H_
    #endif // 0

    #if 0
    typedef FILE file;
    typedef struct File {file * self;}File;
    #else
    typedef FILE * File ;
    #endif //
    /**+---------------------------------+
     * @brief File Interface             |
     * +---------------------------------+
     */
    typedef struct File (VirtualTable)
    { struct class (VirtualTable);

        FILE *  (*open)  (cstring, cstring);

        FILE *  (*reopen)(cstring, cstring, FILE *);

        size_t()(*read)  (Object *, size_t, size_t, FILE *);

        size_t()(*write) (const Object *, size_t, size_t, FILE *);

        int ()  (*flush) (FILE *);

        int ()  (*close) (FILE *);

    }File (VirtualTable);


    static File * File(Init)( File *, ... );

    static void  File(Dtor)( File * );

    static cstring File(Type)(void);

    static ctorPtr File(Ctor)(void);


    explicit cstring File(Type)(void){return "File";}


    static File(VirtualTable)

        File(Interface) =

    {
        {
            &File(Type),

            &File(Init),

            &File(Dtor)
        },

        &fopen,

        &freopen,

        &fread,

        &fwrite,

        &fflush,

        &fclose

    };
    explicit ctorPtr File(Ctor)(void){return new(File);}


    static struct class(FactoryTable)

        File(Factory) =
    { &class(FactoryTable)(Type), &File(Ctor), 0 };

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief   FACTORY C FUNCTION TABLE FOR C FUNCTIONS         *
     * @param      cstring for factory method                    *
     * @return     void                                          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
    static Strategy
      File(LibraryHeap)[85] =
    /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
    { {"fopen", & fopen},
      {"freopen", & freopen},
      {"fflush", & fflush},
      {"fclose", & fclose},
      {"remove", &remove},
      {"rename", &rename},
      {"tmpfile", &tmpfile},
      {"tmpnam", &tmpnam},
      {"_tempnam", &_tempnam},
      {"_rmtmp", &_rmtmp},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},
      {"", 0},{"", 0},

      {"", 0}
    };
    Strategy *
    typename(SubFactoryMethod)(File,Strategy,Strategy,0,84);

    static struct class(LibraryHeap)
        File(Library) =

    {&class(LibraryHeap)(Type),
    &File(LibrarySearch),File(LibraryHeap)};

  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    static Virtual

        File(VirtualHeap)[nine] =
      /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/
      {
          {"close",  8,&fclose,""}, {"dtor",   2,&File(Dtor),""},
          {"flush",  7,&fflush,""}, {"init",   1,&File(Init),""},
          {"open",   3,&fopen,""},  {"read",   5,&fread,""},
          {"reopen", 4,&freopen,""},{"type",   0,&File(Type),""},
          {"write",  6,&fwrite,""},

        {"",0,0,""} };
    static Virtual *
    typename(SubFactoryMethod)(File,Virtual,Virtual,0,8);


    static struct class(VirtualHeap)

        File(Virtual) = {&class(VirtualHeap)(Type),
    &File(VirtualSearch), File(VirtualHeap)};


    static Interface File(InterfaceHeap)[two] =

    {
        &File(Factory),

        &File(Virtual),

        nullptr
    };
    static Interface typename(ClassFactoryMethod)(File,0,1);


    static void typename(Setup)(File){}

    static void typename(Abort)(File){}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief FACTORY C INITIALIZER THAT CONSTRUCTOR CAN POINT TO*
     * @param      self                                          *
     * @return     object                                        *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit File * File(Init)( File * self, ... )

    { if(!self){ return 0; }

        Stack * stack = control();

        size_t  c    = arg(stack, size_t);

        cstring name = arg(stack, cstring),

                mode = arg(stack, cstring);

        switch(c)
        {
            case 0:
                (*self) = fopen(name, mode);
            break;
            case 1:    ;
                FILE * file = arg(stack, FILE*);

                (*self) = freopen(name, mode, file);
            break;
        }

      return self;}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                                                          *
     * @brief FACTORY C DESTRUCTOR CALLED BY C VIRTUAL TABLE     *
     * @param      self                                          *
     * @return     void                                          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    explicit void  File(Dtor)( File * self )
    {
        fclose(*self);
    }

#endif // FILE_H_INCLUDED
