#ifndef DEFINEOBJECT_H_INCLUDED
#define DEFINEOBJECT_H_INCLUDED
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
    #if 0
        #include "../Virtual/vTable.h"
    #endif // 0

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||         C PRIMITIVE AS VIRTUAL TABLE OBJECT         || *
     *                                                           *
     *                    by Willy (01/08/2022)                  *
     * ||                                                     ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*   X-LEVEL MACRO FOR ENCAPSULATING PRIMITIVE TYPES PT.1    */
    #define defineObject(type)\
    \
    /** * * * * * * * * * * *  structures * * * * * * * * * * * **/\
    \
        /*typedef struct type(VirtualTable)\
        {struct class (VirtualTable)base;\
    \
            void (*swap)( type *, ... );\
    \
            type * (*plus)( type *, ... );\
    \
            type * (*minus)( type *, ... );\
    \
            type * (*multiplies)( type *, ... );\
    \
            type * (*divides)( type *, ... );\
    \
            type * (*modulus)( type *, ... );\
    \
        }type(VirtualTable);*/\
    \
    /** * * * * * * * * * * *  prototypes * * * * * * * * * * * **/\
    \
        static type *     type(Init)( type *, ... );\
    \
        static void       type(Dtor)( type * );\
    \
        static cstring    type(Type)();\
    \
    \
        /*static void type(swap)( type *, ... );\
    \
        static type * type(plus)( type *, ... );\
    \
        static type * type(minus)( type *, ... );\
    \
        static type * type(multiplies)( type *, ... );\
    \
        static type * type(divides)( type *, ... );\
    \
        static type * type(modulus)( type *, ... );*/\
    \
    /** * * * * * * * * * * * *interface* * * * * * * * * * * * **/\
    \
        /*
         * virtual table object interface
         */\
        /*static type(VirtualTable) \
    \
            type(Interface) = \
        {\
            {   \
                & type(Type), \
    \
                & type(Init), \
    \
                & type(Dtor) \
    \
            },\
    \
            & type(swap),\
    \
            & type(plus),\
    \
            & type(minus),\
    \
            & type(multiplies),\
    \
            & type(divides),\
    \
            & type(modulus)\
        };*/\
    \
    \
        static struct class(VirtualTable) \
    \
            type(Interface) = \
    \
        {   \
            & type(Type), \
    \
            & type(Init), \
    \
            & type(Dtor) \
    \
        };\
    \
    /** * * * * * * * * * * implementations * * * * * * * * * * **/\
    \
        /*
         * virtual table object constructor/initializer
         *
         * plus destructor and type function (factory table key).
         *
         *
         * remember this because the file File wasn't working for
         *
         * its initializer because it wasn't declaring variables
         *
         * to get initialized to stack arg, laying it out for the
         *
         * assembler to mis-assemble the code and produce an
         *
         * incorrect result.
         */\
        explicit type * type(Init)( type * self, .../**type info**/ )\
    \
        { if( !self ){return 0;}\
    \
            Stack * stack = control(); \
    \
            type info = arg(stack, type);/*declare var first*/\
    \
            (*self) = info;/*then init (for the assembler)*/\
    \
            return self;}\
    \
    \
        explicit void type(Dtor)( type * self )  {}\
    \
        explicit cstring type(Type)(){return #type;}

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||           C ARRAY AS VIRTUAL TABLE OBJECT           || *
     *                                                           *
     *                    by Willy (01/08/2022)                  *
     * ||                                                     ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*       X-LEVEL MACRO FOR ENCAPSULATING ARRAYS PT.1         */
    #define defineArray(type)\
    \
    /** * * * * * * * * * * *  structures * * * * * * * * * * * **/\
    \
    /** * * * * * * * * * * *  prototypes * * * * * * * * * * * **/\
    \
        static Array(type) * Array(type)(Init)( Array(type) *, ... );\
    \
        static void       Array(type)(Dtor)( Array(type) * );\
    \
        static cstring    Array(type)(Type)();\
    \
    /** * * * * * * * * * * * *interface* * * * * * * * * * * * **/\
    \
        /*
         * virtual table object interface base
         */\
        static struct class (VirtualTable) \
    \
            Array(type)(Interface) = \
    \
        { & Array(type)(Type), \
    \
          & Array(type)(Init), \
    \
          & Array(type)(Dtor) } ;\
    \
    /** * * * * * * * * * * implementations * * * * * * * * * * **/\
    \
        explicit Array(type) * Array(type)(Init)( Array(type) * self, ...\
                                                 /**size_type**/ )\
    \
        { if( !self ){return 0;}\
    \
            Stack * stack = control(); \
    \
            size_type size = arg(stack, size_type);\
    \
            (*self)  = allocate(sizeof(type)*size)  ;\
    \
            throwOutOfMemory(*self);\
    \
            return self;}\
    \
    \
        explicit void Array(type)(Dtor)( Array(type) * self )\
    \
        { deallocate(*self); }\
    \
        explicit cstring Array(type)(Type)(){return "Array("#type")";}

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    #if 0
        #include "../Factory/fTable.h"
    #endif // 0
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||          C PRIMITIVE AS FACTORY TABLE CLASS         || *
     *                                                           *
     *                    by Willy (03/16/2022)                  *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /*   X-LEVEL MACRO FOR ENCAPSULATING PRIMITIVE TYPES PT.2    */
    #define defineFactoryObject(\
  /*c = console, f = file, s = standard, comp = components(utility)*/\
        type, cscan, cprint, fscan, fprint, sscan, sprint, comp)\
    \
        comp ; /*utilities-components*/\
    \
        static void type(Setup)(void);\
    \
        static void type(Abort)(void);\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    /**                                                          *
     * @brief  virtual registration                              *
     *                                                           *
     * @param  cstring key                                       *
     *                                                           *
     * - - there is some thinking to do about what these are     *
     *  supposed to do - -                                       *
     *                                                           *
     * @return Object *                                          *
     *                                                           */\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
      /*explicit void type(swap)( type * self, ... )\
        {\
            Stack * stack = control();\
    \
            type * temp = self, * objt = arg(stack, type*);\
            self = objt;\
            objt = temp;\
        }\
    \
    \
        explicit type * type(plus)( type * self, ... )\
        {\
            Stack * stack = control();\
            return new(type)(this, (*self) + (*arg(stack, type*)));\
        }\
    \
    \
        explicit type * type(minus)( type * self, ... )\
        {\
            Stack * stack = control();\
            return new(type)(this, (*self) - (*arg(stack, type*)));\
        }\
    \
    \
        explicit type * type(multiplies)( type * self, ... )\
        {\
            Stack * stack = control();\
            return new(type)(this, (*self) * (*arg(stack, type*)));\
        }\
    \
    \
        explicit type * type(divides)( type * self, ... )\
        {\
            Stack * stack = control();\
            return new(type)(this, (*self) / (*arg(stack, type*)));\
        }\
    \
    \
        explicit type * type(modulus)( type * self, ... )\
        {\
            Stack * stack = control();\
            return new(type)(this, (*self) % (*arg(stack, type*)));\
        }\
    \
    \
        static Virtual \
    \
            type(VirtualHeap)[nine] = \
        *//*a b c d e f g h i j k l m n o p q r s t u v w x y z*//*\
        { {"divides",   7,&type(divides)},\
          {"dtor",      2,&type(Dtor)},\
          {"init",      1,&type(Init)},\
          {"minus",     5,&type(minus)},\
          {"modulus",   8,&type(modulus)},\
          {"multiplies",6,&type(multiplies)},\
          {"plus",      4,&type(plus)},\
          {"swap",      3,&type(swap)},\
          {"type",      0,&type(Type)},{"",0,0} } ;\
    \
        static Virtual * \
        typename(SubFactoryMethod)(type,Virtual,Virtual,0,8);\
    \
    \
        static struct class(VirtualHeap)\
    \
            type(Virtual) = \
        {\
            &class(VirtualHeap)(Type), \
    \
            &type(VirtualSearch),\
    \
            type(VirtualHeap)};*/\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    /**                                                          *
     * @brief  factory registration                              *
     *                                                           *
     * @param  cstring key                                       *
     *                                                           *
     * @return Object *                                          *
     *                                                           */\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        static ctorPtr type(Ctor)(void) ;\
    \
        explicit ctorPtr type(Ctor)(void) {return new(type);} \
    \
    \
        static struct class (FactoryTable)\
    \
            type(Factory) =\
        { &class(FactoryTable)(Type), &type(Ctor), 0 };\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    /**                                                          *
     * @brief   comparable registration                          *
     *                                                           *
     *                                                           *
     * @param   self, object                                     *
     *                                                           *
     *                                                           *
     * @return  true or false                                    *
     *                                                           */\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        explicit bool type(Equal)\
    \
            ( const type * self, ... )\
    \
        { Stack * stack = control();\
    \
            const type * objt = arg(stack, const type *);\
    \
            return (*self) == (*objt) ;  \
        }\
    \
    \
        explicit bool type(Greater)\
    \
            ( const type * self, ... )\
    \
        { Stack * stack = control();\
    \
            const type * objt = arg(stack, const type *);\
    \
            return (*self) > (*objt) ;  \
        }\
    \
    \
        static struct class (CompareTable)\
    \
            type(Compare) = \
    \
        {   &class(CompareTable)(Type), \
    \
            &type(Equal), \
    \
            &type(Greater)   };\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    /**                                                          *
     * @brief   console io                                       *
     *                                                           *
     *                                                           *
     * @param   self                                             *
     *                                                           *
     *                                                           *
     * @return                                                   *
     *                                                           */\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        explicit int type(ConsoleIn) \
    \
            ( type * self )\
    \
        { return scanf cscan; }\
    \
    \
        explicit int type(ConsoleOut) \
    \
            ( const type * self )\
    \
        { return printf cprint; }\
    \
    \
        static class(ConsoleTable)\
    \
            type(Console) = \
    \
        {   &class(ConsoleTable)(Type),\
    \
            &type(ConsoleIn),\
    \
            &type(ConsoleOut)   };\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    /**                                                          *
     * @brief  file io                                           *
     *                                                           *
     *                                                           *
     * @param  self                                              *
     *                                                           *
     *                                                           *
     * @return                                                   *
     *                                                           */\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        explicit int type(FileIn) ( type * self, ... )\
    \
        { Stack * stack = control();\
    \
            File * file = ConsoleIn(Object);\
    \
            return fscanf fscan; }\
    \
    \
        explicit int type(FileOut) ( type * self, ... )\
    \
        { Stack * stack = control();\
    \
            File * file = ConsoleOut(Object);\
    \
            return fprintf fprint; }\
    \
    \
        static class(FileTable)\
    \
            type(File) = \
    \
        {   &class(FileTable)(Type),\
    \
            &type(FileIn),\
    \
            &type(FileOut)   };\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    /**                                                          *
     * @brief  standard io                                       *
     *                                                           *
     *                                                           *
     * @param  self                                              *
     *                                                           *
     *                                                           *
     * @return                                                   *
     *                                                           */\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        explicit int type(StandardIn) ( type * self, ... )\
    \
            { Stack * stack = control();\
    \
            string str = ConsoleIn(String);\
    \
            return sscanf sscan; }\
    \
    \
        explicit int type(StandardOut) ( type * self, ... )\
    \
            { Stack * stack = control();\
    \
            string str = ConsoleOut(String);\
    \
            return sprintf sprint; }\
    \
    \
        static class(StandardTable)\
    \
            type(Standard) = \
    \
        {   &class(StandardTable)(Type),\
    \
            &type(StandardIn),\
    \
            &type(StandardOut)   };\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    /**                                                          *
     * @brief  class factory method + reg list                   *
     *                                                           *
     *                                                           *
     * @param  cstring reg                                       *
     *                                                           *
     *                                                           *
     * @return Reg                                               *
     *                                                           */\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        static struct pass(SecurityHeap)\
    \
            type(Security) = \
    \
        { { & pass(SecurityHeap)(Type), 0,\
    \
            0 /*type(InterfaceHeap)*/ }, 0, 0 };\
    \
    \
        static Interface type \
    \
            (InterfaceHeap)[six] = \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
    \
            &type(Compare),\
    \
            &type(Console),\
    \
            &type(Factory),\
    \
            &type(File),\
    \
            &type(Standard),\
    \
            /*&type(Virtual),*/\
    \
            &type(Security),/*pass(...) 0x*/\
    \
            nullptr /*(null termination required)*/ };\
    \
        /**
         * @brief primitive type class factory method (Factory C)(OOC)(C+)
         *//*  Class(FactoryMethod)  */\
        static Interface \
        typename(ClassFactoryMethod)(type, 0, 5);\
    \
    \
        static void typename(Setup)(type) \
        {((Interface)&type(Security))\
        [2] = type(InterfaceHeap) ;}\
    \
        static void typename(Abort)(type) {}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||           C ARRAY AS FACTORY TABLE CLASS            || *
     *                                                           *
     *                    by Willy (XX/XX/XXXX)                  *
     * ||                                                     || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*        X-LEVEL MACRO FOR ENCAPSULATING ARRAYS PT.2        */
    #define defineFactoryArray(\
  /*c = console, f = file, s = standard, comp = components(utility)*/\
        type, cscan, cprint, fscan, fprint, sscan, sprint, comp)

                                                            //CWP
#endif // DEFINEOBJECT_H_INCLUDED
