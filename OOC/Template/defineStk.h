#ifndef DEFINESTK_H_INCLUDED
#define DEFINESTK_H_INCLUDED
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

    //#include "../Virtual/vTable.h"

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||            C STACK (SINGLE LINKED-LIST)             || *
     *                                                           *
     *             by Willy (11/06/2018)(01/17/2021)             *
     * ||                   (01/14/2023)                      || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * @brief linked-list stack template                         *
     *                                                           *
     * t(type):     int (typedef types using a qualifier or *    *
     *                   to create a valid identifier token)     *
     *                                                           *
     * @author willy                                             *
     * @date    (2017 - 01 - 31), (2017 - 02 - 07),              *
     *          (2017 - 04 - 26), (2018 - 05 - 14),              *
     *          (2021 - 02 - 25), (2021 - 03 - 04)               *
     *                                                           *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     *                                                           *
     * updated the file to accept the new arrangement for        *
     * new(Class) that includes implementing the dtor and type   *
     *                                                           *
     * so the updated pattern calls for implementing the type    *
     * function yourself (too many extra macro arguments)        *
     *                                                           *
     * new(Class) is encapsulated by the function begin()        *
     * that returns an iterator                                  *
     *                                                           *
     * the dtor for the iterator is implemented                  *
     *                                                           *
     * [t] = type                                                *
     * [c] = components (iterator and node)                      *
     *                                                           *
     *           [copy and paste this into your file:]           *
     *                                                           *
     * #undef size_type                                          *
     * #define size_type unsigned short                          *
     *                                                           *
     * define(Stk)([t], define(Iter)([t], define(N)([t])));      *
     *                                                           *
     * cstring [t]IterType(){ return "[t]Iter"; }  X             *
     *                                                           *
     * cstring [t]StkType(){ return "[t]Stk"; }    X             *
     *                                                           *
     * the stack needs:                                          *
     *                                                           *
     *       t##StkInsert - no index, with index, pointer        *
     *                                                           *
     *       t##StkRemove - no index, index                      *
     *                                                           *
     *                                                           *
     *     i = info, s = self, l = link, n = node,               *
     *     i = iter,                                             *
     *     i = index ... so watch out                            *
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineN(t)\
    \
        typedef struct N(t)\
        {\
            t              info;\
            struct N(t)*   link;\
    \
        }N(t);\
    \
        static N(t) * newN(t)( t );\
    \
        explicit N(t) * newN(t)( t info )\
        { N(t) * self = (N(t)*)allocate(sizeof(N(t)));\
          if( !self ){ return 0; }\
          self->link = 0;\
    \
          self->info\
           = info;\
          return(self); }

    #if 0
        /* note: this is all good until realizing that the type
                 needs to be a pointer type, then again just make
                 sure to only register nodes of a pointer type
                 (OBJECT-ORIENTED) ... hmmm
         */
        static ctorPtr N(t)(Ctor)();\
    \
        explicit ctorPtr N(t)(Ctor)(){ return &newN(t); }\
    \
        /// N(t) * n = factory("N(t)")(info); (maybe)
    #endif // GOOD_IDEA

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define N(t)                                         t(N)// t(N)

    #define newN(t)                    t(Nnew)  //new##t##N//

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineIter(t, c)\
    \
        c \
    \
        typedef struct Iter(t)\
        {   Iterator base;\
    \
            N(t) * node;\
        }Iter(t);\
    \
    \
        typedef struct Iter(t)(VirtualTable)\
        {   Iterator(VirtualTable) base;\
        }Iter(t)(VirtualTable);\
    \
    \
        static Iter(t) * Iter(t)(Init)( Iter(t) *, .../*N(t) * */ );\
    \
        static void Iter(t)(Dtor)( Iter(t) * );\
    \
        static cstring Iter(t)(Type)(void);\
    \
        static ctorPtr Iter(t)(Ctor)(void);\
    \
    \
        static t * Iter(t)(Get)( Iter(t) * );\
    \
        static bool Iter(t)(Equal)( const Iter(t) *, .../*const Iter(t) * */ );\
    \
        static bool Iter(t)(Next)( Iter(t) * );\
    \
    \
        explicit void Iter(t)(Dtor)( Iter(t) * self )  {}\
    \
        explicit cstring Iter(t)(Type)(){ return "Iter(" #t ")"; }\
    \
    \
        static Iter(t)(VirtualTable) \
    \
            Iter(t)(Interface) = \
        {\
            {\
                {\
                    &Iter(t)(Type),\
    \
                    &Iter(t)(Init),\
    \
                    &Iter(t)(Dtor)\
                },\
    \
                &Iter(t)(Get),  \
    \
                &Iter(t)(Equal),\
    \
                &Iter(t)(Next)\
            }\
        };\
        explicit ctorPtr Iter(t)(Ctor)(){ return new(Iter(t)); }\
    \
    \
        explicit Iter(t) * Iter(t)(Init)( Iter(t) * self, .../*N(t) * node*/ )\
        { if( !self ){ return 0; }\
          else \
          { stack(control)();\
    \
            N(t) * node = stack(arg)(N(t)*);\
    \
              self->node = node; return self; } }\
    \
    \
        explicit t * Iter(t)(Get)( Iter(t) * self )\
        { if( !self->node )\
        { return 0; } else { return &(self->node->info); } }\
    \
    \
        explicit bool Iter(t)(Equal)(const Iter(t) * self, ...\
            /*const Iter(t) * iter*/)\
        { stack(control)();\
    \
            const Iter(t) * iter = stack(arg)(const Iter(t)*);\
    \
            if( self->node == iter->node )\
          { return true; } else { return false; } }\
    \
    \
        explicit bool Iter(t)(Next)( Iter(t) * self )\
        { if( !self->node )\
          { return false; }\
          else { self->node = self->node->link; return true; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define Iter(t)                              t(Iter)//  t##Iter//

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define defineStk(t, c)\
    \
        c\
    \
        typedef struct Stk(t)\
        {   Container base;\
    \
            N(t) * stktop;\
        }Stk(t);\
    \
    \
        typedef struct Stk(t)(VirtualTable)\
        {   Container (VirtualTable) base;\
    \
            bool () (*push)( Stk(t) *, t );\
    \
            t () (*pop)( Stk(t) * );\
    \
            t * (*top)( Stk(t) * );\
    \
        }Stk(t)(VirtualTable);\
    \
    \
        static Stk(t) * Stk(t)(Init)( Stk(t) * );\
    \
        static void Stk(t)(Dtor)( Stk(t) * );\
    \
        static cstring Stk(t)(Type)();\
    \
        static ctorPtr Stk(t)(Ctor)();\
    \
    \
        static bool Stk(t)(Push)( Stk(t) *, t );\
    \
        static t Stk(t)(Pop)( Stk(t) * );\
    \
        static t * Stk(t)(Top)( Stk(t) * );\
    \
    \
        static bool Stk(t)(Reverse)( N(t) ** );\
    \
        static bool Stk(t)(Copy)( Stk(t) *, .../*const Stk(t) * */ );\
    \
    \
        static bool Stk(t)(RemoveNoIndex)( Stk(t) * );\
    \
    \
        static t * Stk(t)(At)( const Stk(t) *, .../*size_type*/ );\
    \
        static size_type Stk(t)(Size)( const Stk(t) * );\
    \
        static Iter(t) * Stk(t)(Begin)( const Stk(t) * );\
    \
    \
        static size_type Stk(t)(GetLength)( const N(t) * );\
    \
        static N(t) * Stk(t)(Traverse)( size_type, N(t) * );\
    \
    \
        /*static int print##t##Stk( Stk(t) *, ... );*/\
    \
    \
        explicit cstring Stk(t)(Type)(){ return "Stk(" #t ")"; }\
    \
    \
        static Stk(t)(VirtualTable) \
    \
            Stk(t)(Interface) = \
        {\
            {\
                {\
                    &Stk(t)(Type),\
    \
                    &Stk(t)(Init),\
    \
                    &Stk(t)(Dtor)\
                },\
    \
                &Stk(t)(Copy),\
    \
                &Stk(t)(Push),\
    \
                &Stk(t)(RemoveNoIndex),\
    \
                &Stk(t)(Top),\
    \
                &Stk(t)(Size),\
    \
                &Stk(t)(Begin) \
            },\
    \
            &Stk(t)(Push),\
    \
            &Stk(t)(Pop),\
    \
            &Stk(t)(Top),\
    \
        };\
        explicit ctorPtr Stk(t)(Ctor)(void){ return new(Stk(t)); }\
    \
    \
        explicit Stk(t) * Stk(t)(Init)( Stk(t) * self )\
        { if( !self ) { return nullptr; }\
          else { self->stktop = nullptr; return self; } }\
    \
    \
        explicit void Stk(t)(Dtor)( Stk(t) * self )\
        { N(t) * node;\
          while( self->stktop )\
          { node = self->stktop;\
            self->stktop = self->stktop->link;\
            deallocate(node); } }\
    \
    \
        explicit bool Stk(t)(Push)( Stk(t) * self, t info )\
        {if(!self){return false;}\
    \
          N(t) * node = newN(t)(info);\
          if( !node ){ return false; }\
          node->link = self->stktop;\
          self->stktop = node; return true; }\
    \
    \
        explicit t Stk(t)(Pop)( Stk(t) * self )\
        {if(!self){static t temp; return temp;}\
    \
          if( !self->stktop )\
        { static t temp; return temp; }\
          N(t) * node = self->stktop;\
          t info = node->info;\
          self->stktop = self->stktop->link;\
          deallocate(node); return info; }\
    \
    \
        explicit t * Stk(t)(Top)( Stk(t) * self )\
        {if(!self){return nullptr;} \
            if( !self->stktop ){ return nullptr; }\
          return & self->stktop->info; }\
    \
    \
        explicit bool Stk(t)(Reverse)( N(t) ** ptop )\
        { if( *ptop == nullptr ) {return false;}\
          N(t)    * link,\
                  * prev = nullptr,\
                  * current = *ptop;\
            while( current )\
            { link = current->link;\
              current->link = prev;\
              prev = current;\
              current = link; }\
              *ptop = prev;\
              return true; }\
    \
    \
        explicit bool Stk(t)(Copy)( Stk(t) * self, .../*const Stk(t) * stk*/ )\
        { \
          stack(control)();\
    \
          const Stk(t) * stk = stack(arg)(const Stk(t)*);\
    \
          if( self->stktop )\
          { ((struct class (VirtualTable) *)&Stk(t)(Interface))->dtor(self); }\
            N(t) * node, * t_node, * current = self->stktop;\
            self->stktop = newN(t)(current->info);\
            if( !self->stktop )\
            { return false; }\
              t_node = self->stktop;\
              current = current->link;\
              while( current )\
              { node = newN(t)(current->info);\
                if( !node )\
                { ((struct class (VirtualTable) *)&Stk(t)(Interface))\
                    ->dtor(self); return false; }\
                else { t_node->link = node;\
                t_node = node; current = current->link; } }\
                return true; }\
    \
    \
        explicit bool Stk(t)(RemoveNoIndex)( Stk(t) * self )\
        { if( !self->stktop )\
        { return false; }\
          N(t) * node = self->stktop;\
    \
          self->stktop = self->stktop->link;\
          deallocate(node); return true; }\
    \
        /* note: this is a loosie, not given a place in the
         *       interface, a potential override case if it
         *       were still accessible at runtime by the multi
         *       method multimap.
         */\
        explicit t * Stk(t)(At)( const Stk(t) * self, .../*size_type index*/ )\
        { stack(control)();\
    \
          size_type index = stack(arg)(size_type);\
    \
            if( index < 0 ){ return nullptr; }\
          N(t) * node = Stk(t)(Traverse)(index, self->stktop);\
          if( !node ){ return nullptr; }\
          else { return(&node->info); } }\
    \
    \
        explicit size_type Stk(t)(Size)( const Stk(t) * self )\
        { return Stk(t)(GetLength)(self->stktop); }\
    \
    \
        explicit Iter(t) * Stk(t)(Begin)( const Stk(t) * self )\
        { return new(Iter(t))(this, self->stktop); }\
    \
    \
        explicit N(t) * Stk(t)(Traverse)( size_type index, N(t) * stktop )\
        { top: if( index <= 0 ){ return stktop; }\
          if( !stktop->link )\
          { return stktop; }\
          index--;\
          stktop = stktop->link;\
          goto top; }\
    \
    \
        explicit size_type Stk(t)(GetLength)( const N(t) * stktop )\
        { size_type count = 0;\
          top:\
          if( !stktop ) { return count; }\
          count++;\
          stktop = stktop->link;\
          goto top; }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    #define Stk(t)                                 t(Stk)//  t##Stk//

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 1
    #define defineFactoryIter(\
  /*c = console, f = file, s = standard, comp = components(utility)*/\
        t, /*cscan, cprint, fscan, fprint, sscan, sprint,*/ c)\
    \
        c ;\
    \
        static Virtual\
    \
            Iter(t)(VirtualHeap)[six] = \
      /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/\
        {\
            {"dtor", 2, &Iter(t)(Dtor),  "void(*)(Iter("#t")*)"                           },\
            {"equal",4, &Iter(t)(Equal), "bool()(*)(const Iter("#t")*,const Iter("#t")*)" },\
            {"get",  3, &Iter(t)(Get),   #t"*(*)(Iter("#t")*)"                            },\
            {"init", 1, &Iter(t)(Init),  "Iter("#t")*(*)(Iter("#t")*,N("#t")*)"           },\
            {"next", 5, &Iter(t)(Next),  "bool()(*)(Iter("#t")*)"                         },\
            {"type", 0, &Iter(t)(Type),  "cstring(*)()"                                   },\
    \
        {"",0,0,""}, };\
        static Virtual *\
        typename(SubFactoryMethod)(Iter(t),Virtual,Virtual,0,5);\
    \
    \
        static struct class(VirtualHeap)\
            Iter(t)(Virtual) = \
    \
        { &class(VirtualHeap)(Type),&Iter(t)(VirtualSearch), \
           Iter(t)(VirtualHeap) };\
    \
        static Complex \
    \
            Iter(t)(ComplexHeap)[one] = \
            { { "node", 0, sizeof(t*), "N("# t")*" },\
            { "", 0, 0, "" }, };\
        static Complex *\
        typename(SubFactoryMethod)(Iter(t),Complex,Complex,0,0);\
    \
    \
        static struct class(ComplexHeap)\
    \
            Iter(t)(Complex) = \
        { &class(ComplexHeap)(Type), &Iter(t)(ComplexSearch),\
        Iter(t)(ComplexHeap) };\
    \
    \
        static Polymorph  /**Table( Name, Offset, Offset )**/\
    \
            Iter(t)(PolymorphHeap)[two] =\
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            { "Iterator",            0,              0, "" },\
            { "class",               0,              0, "" },\
            { "", 0, 0, "" }\
        };static Polymorph *\
        typename(SubFactoryMethod)(Iter(t),Polymorph,Polymorph,0,1);\
    \
    \
        static struct class(PolymorphHeap)\
    \
            Iter(t)(Polymorph) = \
    \
        { &class(PolymorphHeap)(Type),\
    \
          &Iter(t)(PolymorphSearch),\
    \
           Iter(t)(PolymorphHeap) };\
    \
    \
        static struct class(FactoryTable)\
    \
            Iter(t)(Factory) = \
    \
        { &class(FactoryTable)(Type), &Iter(t)(Ctor), 0 };\
    \
    \
        static int Iter(t)(ConsoleOut)(const Iter(t) *, ...);\
    \
        static struct class(ConsoleTable)\
    \
            Iter(t)(Console) = \
    \
        { &class(ConsoleTable)(Type), 0, &Iter(t)(ConsoleOut) };\
    \
    \
        static int Iter(t)(StandardOut)(const Iter(t) *, ...);/*char * */\
    \
        static struct class(StandardTable)\
    \
            Iter(t)(Standard) = \
    \
        { &class(StandardTable)(Type), 0, &Iter(t)(StandardOut) };\
    \
    \
        static int Iter(t)(FileOut)(const Iter(t) *, ...);/*File * */\
    \
        static struct class(FileTable)\
    \
            Iter(t)(File) = \
    \
        { &class(FileTable)(Type), 0, &Iter(t)(FileOut) };\
    \
    \
        static struct pass(SecurityHeap)\
    \
            Iter(t)(Security) = \
    \
        { { & pass(SecurityHeap)(Type), 0,/*note: 0 for factory method for set
                                                 of available subfactory methods*/\
            0 /*Iter(t)(InterfaceHeap)*/ },\
    \
            0 /*& Iter(Security)(ID)*/, 0 };\
    \
    \
        static Interface Iter(t)\
    \
            (InterfaceHeap)[nine] = \
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            &Iter(t)(Interface),\
    \
            &Iter(t)(Complex),   /*+sub*/\
    \
            &Iter(t)(Console),\
    \
            &Iter(t)(Factory),\
    \
            &Iter(t)(File),\
    \
            &Iter(t)(Polymorph), /*+sub*/\
    \
            &Iter(t)(Standard),\
    \
            &Iter(t)(Virtual),   /*+sub (class(...))*/\
    \
            &Iter(t)(Security),  /*pass(...) 0xffffffff (passnum) */\
    \
            nullptr/* */\
        } ;\
        static Interface \
        typename(ClassFactoryMethod)(Iter(t),0,8);/*-1*/\
    \
        static void typename(Setup)(Iter(t))\
        {((Interface)&Iter(t)(Security))\
        [2] = Iter(t)(InterfaceHeap) ;}\
    \
        static void typename(Abort)(Iter(t)){}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
    explicit int Iter(t)(ConsoleOut)
    (const Iter(t) * self, ...){}

    explicit int Iter(t)(StandardOut)
    (const Iter(t) * self, ...){}

    explicit int Iter(t)(FileOut)
    (const Iter(t) * self, ...){}
    #endif // 0 MUST_IMPLEMENT_AFTER_TYPENAME

    #if 0
        #define SecurityIter(Member) SecurityIter ## Member
        static cstring typename(PassNumber)(Iter, Security);
    #endif // 0 INCLUDED_TOO_EARLY
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
  #endif // 0

  #if 1
    #define defineFactoryStk(\
  /*c = console, f = file, s = standard, comp = components(utility)*/\
        t, /*cscan, cprint, fscan, fprint, sscan, sprint,*/ c)\
    \
        c ;\
    \
        static Virtual\
    \
            Stk(t)(VirtualHeap)[nine] = \
      /*a b c d e f g h i j k l m n o p q r s t u v w x y z*/\
        {\
            {"at",    6,  &Stk(t)(Top),          #t"*(*)(Stk("#t")*)"                     },\
            {"begin", 8,  &Stk(t)(Begin),        "Iter("#t")*(*)(const Stk("#t")*)"       },\
            {"copy",  3,  &Stk(t)(Copy),         "bool()(*)(Stk("#t")*,const Stk("#t")*)" },\
            {"dtor",  2,  &Stk(t)(Dtor),         "void(*)(Stk("#t")*)"                    },\
            {"init",  1,  &Stk(t)(Init),         "Stk("#t")*(*)(Stk("#t")*)"              },\
            {"insert",4,  &Stk(t)(Push),         "bool()(*)(Stk("#t")*,"#t")"             },\
            {"remove",5,  &Stk(t)(RemoveNoIndex),"bool()(*)(Stk("#t")*)"                  },\
            {"size",  7,  &Stk(t)(Size),         "size_type()(*)(const Stk("#t")*)"       },\
            {"type",  0,  &Stk(t)(Type),         "cstring(*)()"                           },\
    \
        {"",0,0, ""}, };\
        static Virtual *\
        typename(SubFactoryMethod)(Stk(t),Virtual,Virtual,0,8);\
    \
    \
        static struct class(VirtualHeap)\
            Stk(t)(Virtual) = \
    \
        { &class(VirtualHeap)(Type),&Stk(t)(VirtualSearch), \
           Stk(t)(VirtualHeap) };\
    \
        static Complex \
    \
            Stk(t)(ComplexHeap)[one] = \
            { { "stktop", 0, sizeof(t*), "N("# t")*" },\
            { "", 0, 0, "" }, };\
        static Complex *\
        typename(SubFactoryMethod)(Stk(t),Complex,Complex,0,3);\
    \
    \
        static struct class(ComplexHeap)\
    \
            Stk(t)(Complex) = \
        { &class(ComplexHeap)(Type), &Stk(t)(ComplexSearch),\
        Stk(t)(ComplexHeap) };\
    \
    \
        static Polymorph  /**Table( Name, Offset, Offset )**/\
    \
            Stk(t)(PolymorphHeap)[two] =\
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            { "Container",          0,              0, "" },\
            { "class",              0,              0, "" },\
            { "", 0, 0, "" }\
        };static Polymorph *\
        typename(SubFactoryMethod)(Stk(t),Polymorph,Polymorph,0,1);\
    \
    \
        static struct class(PolymorphHeap)\
    \
            Stk(t)(Polymorph) = \
    \
        { &class(PolymorphHeap)(Type),\
    \
          &Stk(t)(PolymorphSearch),\
    \
           Stk(t)(PolymorphHeap) };\
    \
    \
        static struct class(FactoryTable)\
    \
            Stk(t)(Factory) = \
    \
        { &class(FactoryTable)(Type), &Stk(t)(Ctor), 0 };\
    \
    \
        static int Stk(t)(ConsoleIn)(Stk(t) *, ...);\
    \
        static int Stk(t)(ConsoleOut)(const Stk(t) *, ...);\
    \
        static struct class(ConsoleTable)\
    \
            Stk(t)(Console) = \
    \
        { &class(ConsoleTable)(Type), \
    \
        &Stk(t)(ConsoleIn), &Stk(t)(ConsoleOut) };\
    \
    \
        static int Stk(t)(StandardIn)(Stk(t) *, ...);\
    \
        static int Stk(t)(StandardOut)(const Stk(t) *, ...);\
    \
        static struct class(StandardTable)\
    \
            Stk(t)(Standard) = \
    \
        { &class(StandardTable)(Type), \
    \
        &Stk(t)(StandardIn), &Stk(t)(StandardOut) };\
    \
    \
        static int Stk(t)(FileIn)(Stk(t) *, ...);\
    \
        static int Stk(t)(FileOut)(const Stk(t) *, ...);\
    \
        static struct class(FileTable)\
    \
            Stk(t)(File) = \
    \
        { &class(FileTable)(Type), \
    \
        &Stk(t)(FileIn), &Stk(t)(FileOut) };\
    \
    \
        static struct pass(SecurityHeap)\
    \
            Stk(t)(Security) = \
    \
        { { & pass(SecurityHeap)(Type), 0,/*note: 0 for factory method for set
                                                 of available subfactory methods*/\
            0 /*Stk(t)(InterfaceHeap)*/ },\
    \
            0 /*& Stk(Security)(ID)*/, 0 };\
    \
    \
        static Interface Stk(t)\
    \
            (InterfaceHeap)[nine] = \
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            &Stk(t)(Interface),\
    \
            &Stk(t)(Complex),   /*+sub*/\
    \
            &Stk(t)(Console), \
    \
            &Stk(t)(Factory),\
    \
            &Stk(t)(File), \
    \
            &Stk(t)(Polymorph), /*+sub*/\
    \
            &Stk(t)(Standard), \
    \
            &Stk(t)(Virtual),   /*+sub*/\
    \
            &Stk(t)(Security),  /*pass(...) 0xffffffff (passnum) */\
    \
            nullptr/* */\
        } ;\
        static Interface \
        typename(ClassFactoryMethod)(Stk(t),0,8);/*-1*/\
    \
        static void typename(Setup)(Stk(t))\
        {((Interface)&Stk(t)(Security))\
        [2] = Stk(t)(InterfaceHeap) ;}\
    \
        static void typename(Abort)(Stk(t)){}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
    explicit int Stk(t)(ConsoleIn)
    (Stk(t) * self, ...){}
    explicit int Stk(t)(ConsoleOut)
    (const Stk(t) * self, ...){}

    explicit int Stk(t)(StandardIn)
    (Stk(t) * self, ...){}
    explicit int Stk(t)(StandardOut)
    (const Stk(t) * self, ...){}

    explicit int Stk(t)(FileIn)
    (Stk(t) * self, ...){}
    explicit int Stk(t)(FileOut)
    (const Stk(t) * self, ...){}
    #endif // 0 MUST_IMPLEMENT_AFTER_TYPENAME

    #if 0
        #define SecurityStk(Member) SecurityStk ## Member
        static cstring typename(PassNumber)(Stk, Security);
    #endif // 0 INCLUDED_TOO_EARLY
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

  #endif // 0

    #if 0 // 1 DEBUG
        typedef struct N(int)
        {
            int              info;
            struct N(int)*   link;

        }N(int);

        static N(int) * newN(int)( int );

        explicit N(int) * newN(int)( int info )
        { N(int) * self = (N(int)*)allocate(sizeof(N(int)));
          if( !self ){ return 0; }
          self->link = 0;

          self->info
           = info;
          return(self); }



        typedef struct Iter(int)
        {   Iterator base;

            N(int) * node;
        }Iter(int);


        typedef struct Iter(int)(VirtualTable)
        {   Iterator(VirtualTable) base;
        }Iter(int)(VirtualTable);


        static Iter(int) * Iter(int)(Init)( Iter(int) *, .../*N(int) * */ );

        static void Iter(int)(Dtor)( Iter(int) * );

        static cstring Iter(int)(Type)(void);

        static ctorPtr Iter(int)(Ctor)(void);


        static int * Iter(int)(Get)( Iter(int) * );

        static bool Iter(int)(Equal)( const Iter(int) *, .../*const Iter(int) * */ );

        static bool Iter(int)(Next)( Iter(int) * );


        explicit void Iter(int)(Dtor)( Iter(int) * self )  {}

        explicit cstring Iter(int)(Type)(){ return "Iter(int)"; }


        static Iter(int)(VirtualTable)

            Iter(int)(Interface) =
        {
            {
                {
                    &Iter(int)(Type),

                    &Iter(int)(Init),

                    &Iter(int)(Dtor)
                },

                &Iter(int)(Get),

                &Iter(int)(Equal),

                &Iter(int)(Next)
            }
        };
        explicit ctorPtr Iter(int)(Ctor)(){ return new(Iter(int)); }


        explicit Iter(int) * Iter(int)(Init)( Iter(int) * self, .../*N(int) * node*/ )
        { if( !self ){ return 0; }
          else
          { stack(control)();

            N(int) * node = stack(arg)(N(int)*);

              self->node = node; return self; } }


        explicit int * Iter(int)(Get)( Iter(int) * self )
        { if( !self->node )
        { return 0; } else { return &(self->node->info); } }


        explicit bool Iter(int)(Equal)(const Iter(int) * self, ...
            /*const Iter(int) * iter*/)
        { stack(control)();

            const Iter(int) * iter = stack(arg)(const Iter(int)*);

            if( self->node == iter->node )
          { return true; } else { return false; } }


        explicit bool Iter(int)(Next)( Iter(int) * self )
        { if( !self->node )
          { return false; }
          else { self->node = self->node->link; return true; } }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///


        typedef struct Stk(int)
        {   Container base;

            N(int) * stktop;
        }Stk(int);


        typedef struct Stk(int)(VirtualTable)
        {   Container (VirtualTable) base;

            bool () (*push)( Stk(int) *, int );

            int () (*pop)( Stk(int) * );

            int * (*top)( Stk(int) * );

        }Stk(int)(VirtualTable);


        static Stk(int) * Stk(int)(Init)( Stk(int) * );

        static void Stk(int)(Dtor)( Stk(int) * );

        static cstring Stk(int)(Type)();

        static ctorPtr Stk(int)(Ctor)();


        static bool Stk(int)(Push)( Stk(int) *, int );

        static int Stk(int)(Pop)( Stk(int) * );

        static int * Stk(int)(Top)( Stk(int) * );


        static bool Stk(int)(Reverse)( N(int) ** );

        static bool Stk(int)(Copy)( Stk(int) *, .../*const Stk(int) * */ );


        static bool Stk(int)(RemoveNoIndex)( Stk(int) * );


        static int * Stk(int)(At)( const Stk(int) *, .../*size_type*/ );

        static size_type Stk(int)(Size)( const Stk(int) * );

        static Iter(int) * Stk(int)(Begin)( const Stk(int) * );


        static size_type Stk(int)(GetLength)( const N(int) * );

        static N(int) * Stk(int)(Traverse)( size_type, N(int) * );



        explicit cstring Stk(int)(Type)(){ return "Stk(int)"; }


        static Stk(int)(VirtualTable)

            Stk(int)(Interface) =
        {
            {
                {
                    &Stk(int)(Type),

                    &Stk(int)(Init),

                    &Stk(int)(Dtor)
                },

                &Stk(int)(Copy),

                &Stk(int)(Push),

                &Stk(int)(RemoveNoIndex),

                &Stk(int)(Top),

                &Stk(int)(Size),

                &Stk(int)(Begin)
            },

            &Stk(int)(Push),

            &Stk(int)(Pop),

            &Stk(int)(Top),

        };
        explicit ctorPtr Stk(int)(Ctor)(void){ return new(Stk(int)); }


        explicit Stk(int) * Stk(int)(Init)( Stk(int) * self )
        { if( !self ) { return nullptr; }
          else { self->stktop = nullptr; return self; } }


        explicit void Stk(int)(Dtor)( Stk(int) * self )
        { N(int) * node;
          while( self->stktop )
          { node = self->stktop;
            self->stktop = self->stktop->link;
            deallocate(node); } }


        explicit bool Stk(int)(Push)( Stk(int) * self, int info )
        {
          N(int) * node = newN(int)(info);
          if( !node ){ return false; }
          node->link = self->stktop;
          self->stktop = node; return true; }


        explicit int Stk(int)(Pop)( Stk(int) * self )
        {
          if( !self->stktop )
        { static int temp; return temp; }
          N(int) * node = self->stktop;
          int info = node->info;
          self->stktop = self->stktop->link;
          deallocate(node); return info; }


        explicit int * Stk(int)(Top)( Stk(int) * self )
        { if( !self->stktop ){ return nullptr; }
          return & self->stktop->info; }


        explicit bool Stk(int)(Reverse)( N(int) ** ptop )
        { if( *ptop == nullptr ) {return false;}
          N(int)  * link,
                  * prev = nullptr,
                  * current = *ptop;
            while( current )
            { link = current->link;
              current->link = prev;
              prev = current;
              current = link; }
              *ptop = prev;
              return true; }


        explicit bool Stk(int)(Copy)( Stk(int) * self, .../*const Stk(int) * stk*/ )
        {
          stack(control)();

          const Stk(int) * stk = stack(arg)(const Stk(int)*);

          if( self->stktop )
          { ((struct class (VirtualTable) *)&Stk(int)(Interface))->dtor(self); }
            N(int) * node, * t_node, * current = self->stktop;
            self->stktop = newN(int)(current->info);
            if( !self->stktop )
            { return false; }
              t_node = self->stktop;
              current = current->link;
              while( current )
              { node = newN(int)(current->info);
                if( !node )
                { ((struct class (VirtualTable) *)&Stk(int)(Interface))
                    ->dtor(self); return false; }
                else { t_node->link = node;
                t_node = node; current = current->link; } }
                return true; }


        explicit bool Stk(int)(RemoveNoIndex)( Stk(int) * self )
        { if( !self->stktop )
        { return false; }
          N(int) * node = self->stktop;

          self->stktop = self->stktop->link;
          deallocate(node); return true; }

        /* note: this is a loosie, not given a place in the
         *       interface, a potential override case if it
         *       were still accessible at runtime by the multi
         *       method multimap.
         */
        explicit int * Stk(int)(At)( const Stk(int) * self, .../*size_type index*/ )
        { stack(control)();

          size_type index = stack(arg)(size_type);

            if( index < 0 ){ return nullptr; }
          N(int) * node = Stk(int)(Traverse)(index, self->stktop);
          if( !node ){ return nullptr; }
          else { return(&node->info); } }


        explicit size_type Stk(int)(Size)( const Stk(int) * self )
        { return Stk(int)(GetLength)(self->stktop); }


        explicit Iter(int) * Stk(int)(Begin)( const Stk(int) * self )
        { return new(Iter(int))(this, self->stktop); }


        explicit N(int) * Stk(int)(Traverse)( size_type index, N(int) * stktop )
        { top: if( index <= 0 ){ return stktop; }
          if( !stktop->link )
          { return stktop; }
          index--;
          stktop = stktop->link;
          goto top; }


        explicit size_type Stk(int)(GetLength)( const N(int) * stktop )
        { size_type count = 0;
          top:
          if( !stktop ) { return count; }
          count++;
          stktop = stktop->link;
          goto top; }

    #endif // DEBUG
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
                      __                    __
                     /\ \__                /\ \  __
                ____/\__  _\   ___      ___\ \ \/ /
               / ____\_/\ \/  / __`\   / ___\ \  /__
              /\_____`\\ \ \//\ \/\.\_/\ \__/_ \  _ \_
              \/\_____/ \ \__\ \___/\_\ \_____\ \_\\__\
               \/____/   \/_/ \/__/\/_/\/_____/\/_//__/

                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                            //CJWB
#endif // DEFINESTK_H_INCLUDED
