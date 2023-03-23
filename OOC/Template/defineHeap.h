#ifndef DEFINEHEAP_H_INCLUDED
#define DEFINEHEAP_H_INCLUDED
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
    /**||         C HEAP (THE FACTORY C BUILDER HEAPS)        || *
     *                                                           *
     *                   by Willy (02/11/2022)(09/18/2022)       *
     * ||                         (10/10/2022)(01/12/2023)    || */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

   # define Heap(type)type##Heap //template tool not namespace tool

    #define HeapNode(type)type##HeapNode

    #define pHeapNode(type)p##type##HeapNode

    #define newHeapNode(type) new##type##HeapNode//never parenthesized ## ... ##
                                                //not a(b)(c) (then always)
  #if 0 //for inst
    # define intHeap(Member)intHeap ## Member //namespace tool
  #endif // 0

    #define defineHeapNode(type)\
    \
        typedef struct HeapNode(type) HeapNode(type);\
    \
        struct HeapNode(type)\
        {\
            type             info;\
    \
            HeapNode(type) * left,\
                           * right;   };\
    \
    \
        static HeapNode(type) * newHeapNode(type)( type );\
    \
        explicit HeapNode(type) * newHeapNode(type)( type info )\
        { HeapNode(type) * self = (HeapNode(type)*)allocate \
          (sizeof(HeapNode(type)));\
          if( !self ){ return 0; }\
          self->left = 0;\
          self->right = 0;\
    \
          self->info\
           = info;\
          return(self); }


    static size_t HeapMax (size_t, size_t) ;


    #define defineHeap(type, equal, greater, comp)\
    \
        comp ;  \
    \
        typedef struct Heap(type)\
        {   Container base;\
    \
            HeapNode(type) * top;\
    \
            size_type length;\
    \
        } Heap(type);\
    \
        volatile static uint8_t Heap(type)(Imbalance) = 1 ;\
    \
        typedef struct Heap(type)(VirtualTable)\
        {   Container(VirtualTable)base;\
    \
            size_type () (*height) ( Heap(type) * );/*[9]*/\
    \
            void (*balance)( Heap(type) * );/*[10]*/\
    \
            size_t imbalance;/*[11]*/\
    \
        }Heap(type)(VirtualTable);\
    \
    \
        typedef HeapNode(type) * pHeapNode(type);\
    \
    \
        define(N)(pHeapNode(type));\
    \
        define(Iter)(pHeapNode(type), );\
    \
        define(Stk)(pHeapNode(type), );\
    \
    \
        static Heap(type) * Heap(type)(Init)( Heap(type) *, ... );\
    \
        static cstring typename(Type)(Heap(type));\
    \
        static void Heap(type)(Dtor)(Heap(type) *);\
    \
    \
        static ctorPtr Heap(type)(Ctor)();\
    \
    \
        static bool Heap(type)(Copy)(Heap(type) *, Heap(type) *);\
    \
        static bool Heap(type)(Insert)(Heap(type) *, type);\
    \
        static bool Heap(type)(Remove)(Heap(type) *, type);\
    \
        static type * Heap(type)(Search)(Heap(type) *, type);\
    \
        static size_type Heap(type)(Size)(Heap(type) *);\
    \
    \
        static Iter(pHeapNode(type)) * Heap(type)(Begin)(Heap(type) *);\
    \
    \
        static void Heap(type)(Balance)( Heap(type) * );\
    \
        static size_type Heap(type)(Height)( Heap(type) * );\
    \
        static type * Heap(type)(At)(Heap(type) *, size_type);\
    \
    \
        static bool Heap(type)(Equal)(const Heap(type) *, const Heap(type) *);\
    \
        static bool HeapNode(type)(Equal)\
            (const HeapNode(type) *, const HeapNode(type) *);\
    \
    \
        static bool HeapNode(type)(Copy)(HeapNode(type) * *, HeapNode(type) *);\
    \
        static bool HeapNode(type)(Insert)(HeapNode(type) * *, type);\
    \
        static bool HeapNode(type)(Remove)(HeapNode(type) * *, type);\
    \
        static type * HeapNode(type)(Search)(HeapNode(type) * *, type);\
    \
    \
        static HeapNode(type) * HeapNode(type)(Min)(HeapNode(type) * *);\
    \
        static HeapNode(type) * HeapNode(type)(Max)(HeapNode(type) * *);\
    \
    \
        static size_type HeapNode(type)(Height)(HeapNode(type) *);\
    \
        static void HeapNode(type)(Balance)( HeapNode(type) * * );\
    \
        static void HeapNode(type)(Destroy)( HeapNode(type) * * );\
    \
    \
        static void HeapNode(type)(LeftRotate)( HeapNode(type) * * );\
    \
        static void HeapNode(type)(DoubleLeft)( HeapNode(type) * * );\
    \
        static void HeapNode(type)(RightRotate)( HeapNode(type) * * );\
    \
        static void HeapNode(type)(DoubleRight)( HeapNode(type) * * );\
    \
    \
        static void HeapNode(type)(InOrder)(HeapNode(type) *,\
            Stk(pHeapNode(type)) * );\
    \
    \
        static Heap(type)(VirtualTable)\
    \
            Heap(type)(Interface) =\
    \
        {\
            {\
                {\
                    & Heap(type)(Type),\
    \
                    & Heap(type)(Init),\
    \
                    & Heap(type)(Dtor)\
                },\
                & Heap(type)(Copy),\
    \
                & Heap(type)(Insert),\
    \
                & Heap(type)(Remove),\
    \
                & Heap(type)(Search),/*or (At)*/\
    \
                & Heap(type)(Size),\
    \
                & Heap(type)(Begin)\
            },\
            & Heap(type)(Height),\
    \
            & Heap(type)(Balance),\
    \
            0\
        };\
        explicit ctorPtr Heap(type)(Ctor)(){return new(Heap(type));}\
    \
    \
        explicit Heap(type) * Heap(type)(Init)\
    \
        ( Heap(type) * self, ... )\
        {\
            Stack * stack = control();\
    \
            size_t c = arg(stack, size_t);\
            switch(c)\
            {\
                case 0:\
                    self->top = nullptr;\
                    self->length = 0;\
                break;\
                case 1:      ;\
                    Heap(type) * heap = arg(stack, Heap(type)*);\
    \
                    self->top = nullptr;\
                    self->length = 0;\
                    Heap(type)(Copy)(self, heap);\
                break;\
            }\
    \
        return self; }\
    \
    \
        explicit void Heap(type)(Dtor)(Heap(type) * self)\
        {\
            HeapNode(type)(Destroy)(&self->top); self->length = 0; }\
    \
    \
        explicit bool Heap(type)(Copy)(Heap(type) * self, Heap(type) * heap)\
        {\
            if( self->top != nullptr )\
            {\
                HeapNode(type)(Destroy)(&self->top);\
                self->length = 0;\
            }\
            if( self != heap )\
            {\
                if( heap->top == nullptr )\
                {\
                    self->top = nullptr;\
                    self->length = 0;\
                }\
                else\
                {\
                    HeapNode(type)(Copy)( & self->top, heap->top );\
                    self->length = heap->length;\
                }\
            }\
            return true;\
        }\
    \
    \
        explicit bool Heap(type)(Insert)(Heap(type) * self, type info)\
        {\
            if( !HeapNode(type)(Insert)(&self->top, info) )\
            {\
                return false;\
            }\
            self->length++;\
    \
            HeapNode(type)(Balance)( &self->top );\
    \
            return true;\
        }\
    \
    \
        explicit bool Heap(type)(Remove)(Heap(type) * self, type info)\
        {\
            if( !HeapNode(type)(Remove)(&self->top, info) )\
            {\
                return false;\
            }\
            self->length--;\
    \
            HeapNode(type)(Balance)( &self->top );\
    \
            return true;\
        }\
    \
    \
        explicit type * Heap(type)(Search)(Heap(type) * self, type info)\
        {\
            return HeapNode(type)(Search)(&self->top, info);\
        }\
    \
    \
        explicit size_type Heap(type)(Size)(Heap(type) * self)\
        {\
            return self->length;\
        }\
    \
    \
        explicit Iter(pHeapNode(type)) * Heap(type)(Begin)(Heap(type) * self)\
        {\
            Stk(pHeapNode(type)) stk;\
            Stk(pHeapNode(type))(Init)(&stk);\
            HeapNode(type)(InOrder)( & stk, self->top );\
            return new(Iter(pHeapNode(type)))(this, stk.stktop);\
        }\
    \
    \
        explicit void Heap(type)(Balance)( Heap(type) * self )\
        {\
            HeapNode(type)(Balance)( &(self->top) );\
        }\
    \
    \
        explicit size_type Heap(type)(Height)( Heap(type) * self )\
        {\
            return 1 + HeapNode(type)(Height)(self->top);\
        }\
    \
    \
        explicit type * Heap(type)(At)(Heap(type) * self, size_type index)\
        {\
            if( index >= self->length || index < 0 )\
            {\
                throw(new(OutOfBounds))(this, "Heap(" #type ")(Index)");\
            }\
            Stk(pHeapNode(type)) stk;\
            Stk(pHeapNode(type))(Init)(&stk);\
            HeapNode(type)(InOrder)( self->top, & stk );\
            return( Stk(pHeapNode(type))(At)( & stk, self->length - 1 - index ) );\
        }\
    \
    \
        explicit bool Heap(type)(Equal)\
            (const Heap(type) * self, const Heap(type) * heap)\
        {\
            return (self->top == nullptr && heap->top == nullptr)\
            || (self->top != nullptr && heap->top != nullptr &&\
            HeapNode(type)(Equal)(self->top, heap->top));\
        }\
    \
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        explicit bool HeapNode(type)(Equal)\
            (const HeapNode(type) * lhs, const HeapNode(type) * rhs)\
        {\
    \
            const HeapNode(type) * * pnode = &lhs;\
            const type info = rhs->info;\
    \
            return( equal/*string(equal)( ((typePtr*)(*pnode)->info)[0](),

                ((typePtr*)info)[0]() )*/ )/*equal( lhs->info, rhs->info )*/\
    \
            && (( lhs->left == nullptr && rhs->left == nullptr )\
    \
            || ( lhs->left != nullptr && rhs->left != nullptr\
    \
                && HeapNode(type)(Equal)( lhs->left , rhs->left ) ) )\
    \
            && (( lhs->right == nullptr && rhs->right == nullptr )\
    \
            || ( lhs->right != nullptr && rhs->right != nullptr\
    \
                && HeapNode(type)(Equal)( lhs->left , rhs->left ) ));\
        }\
    \
    \
        explicit bool HeapNode(type)(Copy)\
    \
            (HeapNode(type) * * pnode, HeapNode(type) * node)\
        {\
            if( node == nullptr )\
            {\
                (*pnode) = nullptr;\
            }\
            else\
            {\
                (*pnode) = newHeapNode(type)(node->info);\
                if( !(*pnode) ){ return false; }\
                HeapNode(type)(Copy)(&(*pnode)->left, node->left);\
                HeapNode(type)(Copy)(&(*pnode)->right, node->right);\
            }\
            return true;\
        }\
    \
    \
        explicit bool HeapNode(type)(Insert)\
    \
            (HeapNode(type) * * pnode, type info)\
        {\
            if( (*pnode) == nullptr )\
            {\
                (*pnode) = newHeapNode(type)(info);\
                /*length++;*/\
                return true;\
            }\
            else if( equal/*string(equal)( ((typePtr*)(*pnode)->info)[0](),

                    ((typePtr*)info)[0]() )*/ )/*node->info == info*/\
            {\
                return false;\
            }\
            else if( greater/*string(greater)( ((typePtr*)(*pnode)->info)[0](),

                    ((typePtr*)info)[0]() )*/ )/*node->info > info*/\
            {\
                return HeapNode(type)(Insert)( &(*pnode)->left, info );\
            }\
            else/*if( node->info < info )*/\
            {\
                return HeapNode(type)(Insert)( &(*pnode)->right, info );\
            }\
        }\
    \
    \
        explicit bool HeapNode(type)(Remove)\
    \
            (HeapNode(type) * * pnode, type info)\
        {\
            if( (*pnode) == nullptr )\
            {\
                return false;\
            }\
            else if( greater/*string(greater)( ((typePtr*)(*pnode)->info)[0](),

                    ((typePtr*)info)[0]() )*/ )/*(*pnode)->info > info*/\
            {\
                return HeapNode(type)(Remove)( &(*pnode)->left, info );\
            }\
            else if( !equal/*string(equal)( ((typePtr*)(*pnode)->info)[0](),

                    ((typePtr*)info)[0]() )*/\
    \
            && !greater/*string(greater)( ((typePtr*)(*pnode)->info)[0](),

                ((typePtr*)info)[0]() )*/ )/*info > (*pnode)->info*/\
            {\
                return HeapNode(type)(Remove)( &(*pnode)->right, info );\
            }\
            else if( (*pnode)->left != nullptr && (*pnode)->right != nullptr )/*==*/\
            {\
                (*pnode)->info = HeapNode(type)(Min)( &(*pnode)->right )->info;\
                return HeapNode(type)(Remove)( &(*pnode)->right, (*pnode)->info );\
            }\
            else\
            {\
                HeapNode(type) * old = (*pnode);\
                (*pnode) = ( (*pnode)->left != nullptr )\
                ? (*pnode)->left : (*pnode)->right;\
                /*length--;*/\
                deallocate( old );\
    \
                return true;\
            }\
        }\
    \
    \
        explicit type * HeapNode(type)(Search)\
    \
            (HeapNode(type) * * pnode, type info)\
        {\
            if( (*pnode) == nullptr )\
            {\
                return nullptr;\
            }\
            if( equal/*string(equal)( ((typePtr*)(*pnode)->info)[0](),

                ((typePtr*)info)[0]() )*/ ) /*node->info == info*/\
            {\
                return (*pnode);\
            }\
            if( greater/*string(greater)( ((typePtr*)(*pnode)->info)[0](),

                ((typePtr*)info)[0]() )*/ ) /*node->info > info*/\
            {\
                return HeapNode(type)(Search)(&(*pnode)->left, info);\
            }\
            else\
            {\
                return HeapNode(type)(Search)(&(*pnode)->right, info);\
            }\
        }\
    \
    \
        explicit HeapNode(type) * HeapNode(type)(Min)(HeapNode(type) * * pnode)\
        {\
            if( (*pnode) == nullptr )\
            {\
                return nullptr;\
            }\
            if( (*pnode)->left == nullptr )\
            {\
                return (*pnode);\
            }\
            return HeapNode(type)(Min)(&(*pnode)->left);\
        }\
    \
    \
        explicit HeapNode(type) * HeapNode(type)(Max)(HeapNode(type) * * pnode)\
        {\
            if( (*pnode) == nullptr )\
            {\
                return nullptr;\
            }\
            if( (*pnode)->right == nullptr )\
            {\
                return (*pnode);\
            }\
            return HeapNode(type)(Max)(&(*pnode)->right);\
        }\
    \
    \
        explicit size_type HeapNode(type)(Height)(HeapNode(type) * node)\
        {\
            if( node == nullptr )\
            {\
                return 0; /* -1 */\
            } /*return 0 */\
            else\
            {\
                return 1 + HeapMax(\
                HeapNode(type)(Height)(node->left),\
                HeapNode(type)(Height)(node->right) );\
            }\
        }\
    \
    \
        explicit void HeapNode(type)(Balance)( HeapNode(type) * * pnode )\
        {\
            if( (*pnode) == nullptr )\
            {\
                return;\
            }\
            if( HeapNode(type)(Height)( (*pnode)->left ) -\
    \
                HeapNode(type)(Height)( (*pnode)->right )\
    \
               > Heap(type)(Imbalance) )\
            { /*height might still need to return - 1 (done)*/\
                if( (*pnode)->left ){if( HeapNode(type)(Height)( (*pnode)->left->left )\
    \
                   >= HeapNode(type)(Height)( (*pnode)->left->right ) )\
                {  /*rotatewithleftchild*/\
                    HeapNode(type)(LeftRotate)(pnode);\
                }\
                else\
                { /*doublewithleftchild*/\
                    HeapNode(type)(DoubleLeft)(pnode);\
                }}\
            }\
            else if( HeapNode(type)(Height)( (*pnode)->right )\
    \
               - HeapNode(type)(Height)( (*pnode)->left ) > Heap(type)(Imbalance) )\
            {\
                if( (*pnode)->right ){if( HeapNode(type)(Height)( (*pnode)->right->right )\
    \
                   >=  HeapNode(type)(Height)( (*pnode)->right->left ) )\
                { /*rotatewithrightchild*/\
                    HeapNode(type)(RightRotate)(pnode);\
                }\
                else\
                { /*doublewithrightchild*/\
                    HeapNode(type)(DoubleRight)(pnode);\
                }}\
            }\
        }\
    \
    \
        explicit void HeapNode(type)(Destroy)( HeapNode(type) * * pnode )\
        {\
            if( (*pnode) == nullptr )\
            {\
                return;\
            }\
            HeapNode(type)(Destroy)(&(*pnode)->left);\
            HeapNode(type)(Destroy)(&(*pnode)->right);\
            deallocate( (*pnode) );/*dtor works in postorder*/\
            (*pnode) = nullptr;\
        }\
    \
    \
        explicit void HeapNode(type)(LeftRotate)( HeapNode(type) * * pk2 )\
        {\
            HeapNode(type) * k1 = (*pk2)->left;\
    \
            (*pk2)->left = k1->right;\
    \
            k1->right = (*pk2);\
    \
            (*pk2) = k1;\
        }\
    \
    \
        explicit void HeapNode(type)(DoubleLeft)( HeapNode(type) * * pk3 )\
        {\
            HeapNode(type)(RightRotate)(&(*pk3)->left);\
            HeapNode(type)(LeftRotate)(pk3);\
        }\
    \
    \
        explicit void HeapNode(type)(RightRotate)( HeapNode(type) * * pk2 )\
        {\
            HeapNode(type) * k1 = (*pk2)->right;\
    \
            (*pk2)->right = k1->left;\
    \
            k1->left = (*pk2);\
    \
            (*pk2) = k1;\
        }\
    \
    \
        explicit void HeapNode(type)(DoubleRight)( HeapNode(type) * * pk3 )\
        {\
            HeapNode(type)(LeftRotate)(&(*pk3)->right);\
            HeapNode(type)(RightRotate)(pk3);\
        }\
    \
    \
        explicit void HeapNode(type)(InOrder)(HeapNode(type) * node,\
    \
            Stk(pHeapNode(type)) * stk )\
        {\
            if( node == nullptr )\
            {\
                return;\
            }\
            HeapNode(type)(InOrder)( ( node->left ), (stk) );\
    \
            Stk(pHeapNode(type))(Push)( stk, node );\
    \
            HeapNode(type)(InOrder)( ( node->right ), (stk) );\
        }\
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/\
    \
        static Virtual  /**Table( Name, Pos, Default, Type )**/\
    \
            Heap(type)(VirtualHeap)[twelve] = /**CLASS VIRTUAL TABLE TABLE**/\
        { /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            { "at",               6,      & Heap(type)(Search),   #type"*(*)(Heap("#type")*,"#type")"                },\
            { "balance",         10 ,     & Heap(type)(Balance) , "void(*)(HeapNode("#type")**)"                     },\
            { "begin",            8,      & Heap(type)(Begin),    "Iter(pHeapNode("#type"))*(*)(Heap("#type")*)"     },\
            { "copy",             3,      & Heap(type)(Copy),     "bool()(*)(Heap("#type")*,const Heap("#type")*)"   },\
            { "dtor",             2,      & Heap(type)(Dtor)  ,   "void(*)(Heap("#type")*)"                          },\
            { "height",           9,      & Heap(type)(Height)  , "size_type()(*)(HeapNode("#type")*)"               },\
            { "imbalance",       11,      0  ,    "size_t"                                                        },\
            { "init",             1,      & Heap(type)(Init) ,    "Heap("#type")*(*)(Heap("#type")*,...)"            },\
            { "insert",           4,      & Heap(type)(Insert),   "bool()(*)(Heap("#type")*,"#type")"                },\
            { "remove",           5,      & Heap(type)(Remove) ,  "bool()(*)(Heap("#type")*,"#type")"                },\
            { "size",             7,      & Heap(type)(Size)  ,   "size_type()(*)(Heap("#type")*)"                   },\
            { "type",             0,      & Heap(type)(Type)   ,  "cstring(*)()"                                     },\
    \
            { "", 0, 0, "" }\
    \
        };static Virtual * \
        typename(SubFactoryMethod)(Heap(type),Virtual,Virtual,0,11);\
    \
        static struct class(VirtualHeap)\
    \
            Heap(type)(Virtual) =   \
    \
        { &class(VirtualHeap)(Type), &Heap(type)(VirtualSearch), Heap(type)(VirtualHeap) };\
    \
    \
        static Complex\
    \
            Heap(type)(ComplexHeap)[two] =\
        {   {"length",1,sizeof(size_type),"size_type"},\
            {"top",0,sizeof(void*),"HeapNode("#type")*"},\
    \
            {"",0,0,""}\
        };static Complex *\
        typename(SubFactoryMethod)(Heap(type),Complex,Complex,0,1)\
    \
    \
        static struct class(ComplexHeap)\
    \
            Heap(type)(Complex) =\
    \
        { &class(ComplexHeap)(Type), &Heap(type)(ComplexSearch), Heap(type)(ComplexHeap) };\
    \
    \
        static Polymorph  /**Table( Name, Offset, Offset, Type )**/\
    \
            Heap(type)(PolymorphHeap)[two] = \
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
            { "Container",                 0,              0, "" },\
            { "class",                     0,              0, "" },\
    \
            { "", 0, 0, "" }\
        };static Polymorph *\
        typename(SubFactoryMethod)(Heap(type),Polymorph,Polymorph,0,1);\
    \
    \
        static struct class(PolymorphHeap)\
    \
            Heap(type)(Polymorph) = \
    \
        { &class(PolymorphHeap)(Type),\
    \
          &Heap(type)(PolymorphSearch),\
    \
           Heap(type)(PolymorphHeap) };\
    \
    \
        static struct class(FactoryTable)\
    \
            Heap(type)(Factory) = \
    \
        { &class(FactoryTable)(Type), &Heap(type)(Ctor), 0 };\
    \
    \
        static int Heap(type)(ConsoleIn)(Heap(type) *, ...);\
    \
        static int Heap(type)(ConsoleOut)(const Heap(type) *, ...);\
    \
        static struct class(ConsoleTable)\
    \
            Heap(type)(Console) = \
    \
        { &class(ConsoleTable)(Type), \
    \
        &Heap(type)(ConsoleIn), &Heap(type)(ConsoleOut) };\
    \
    \
        static int Heap(type)(StandardIn)(Heap(type) *, ...);\
    \
        static int Heap(type)(StandardOut)(const Heap(type) *, ...);\
    \
        static struct class(StandardTable)\
    \
            Heap(type)(Standard) = \
    \
        { &class(StandardTable)(Type), \
    \
        &Heap(type)(StandardIn), &Heap(type)(StandardOut) };\
    \
    \
        static int Heap(type)(FileIn)(Heap(type) *, ...);\
    \
        static int Heap(type)(FileOut)(const Heap(type) *, ...);\
    \
        static struct class(FileTable)\
    \
            Heap(type)(File) = \
    \
        { &class(FileTable)(Type), \
    \
        &Heap(type)(FileIn), &Heap(type)(FileOut) };\
    \
    \
        static struct pass(SecurityHeap)\
    \
            Heap(type)(Security) = \
    \
        { { & pass(SecurityHeap)(Type), 0, 0 },\
    \
            & Heap(Security)(ID), 0 };\
    \
    \
        static type Heap(type)\
    \
            (InterfaceHeap)[nine] = \
    \
        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/\
    \
            &Heap(type)(Interface),\
    \
            &Heap(type)(Complex),  \
    \
            &Heap(type)(Console),\
    \
            &Heap(type)(Factory),\
    \
            &Heap(type)(File),\
    \
            &Heap(type)(Polymorph),\
    \
            &Heap(type)(Standard),\
    \
            &Heap(type)(Virtual),\
    \
            &Heap(type)(Security), \
    \
            nullptr\
        } ;\
        static Interface\
        typename(ClassFactoryMethod)(Heap(type),0,8);\
    \
    \
        static void typename(Setup)(Heap(type))\
        {((Interface)&Heap(type)(Security))\
        [2] = Heap(type)(InterfaceHeap) ;}\
    \
        static void typename(Abort)(Heap(type)){}\
    \
    \
        define(FactoryIter)(pHeapNode(type), );\
    \
        define(FactoryStk)(pHeapNode(type), );

    #if 0
        explicit int Heap(type)(ConsoleIn)
        (Heap(type) * self, ...){}
        explicit int Heap(type)(ConsoleOut)
        (const Heap(type) * self, ...){}

        explicit int Heap(type)(StandardIn)
        (Heap(type) * self, ...){}
        explicit int Heap(type)(StandardOut)
        (const Heap(type) * self, ...){}

        explicit int Heap(type)(FileIn)
        (Heap(type) * self, ...){}
        explicit int Heap(type)(FileOut)
        (const Heap(type) * self, ...){}


        explicit int Iter(pHeapNode(type))(ConsoleOut)
        (const Heap(type) * self, ...){}

        explicit int Iter(pHeapNode(type))(StandardOut)
        (const Heap(type) * self, ...){}

        explicit int Iter(pHeapNode(type))(FileOut)
        (const Heap(type) * self, ...){}


        explicit int Stk(pHeapNode(type))(ConsoleIn)
        (Heap(type) * self, ...){}
        explicit int Stk(pHeapNode(type))(ConsoleOut)
        (const Heap(type) * self, ...){}

        explicit int Stk(pHeapNode(type))(StandardIn)
        (Heap(type) * self, ...){}
        explicit int Stk(pHeapNode(type))(StandardOut)
        (const Heap(type) * self, ...){}

        explicit int Stk(pHeapNode(type))(FileIn)
        (Heap(type) * self, ...){}
        explicit int Stk(pHeapNode(type))(FileOut)
        (const Heap(type) * self, ...){}
    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 1
    #define HeapIterator(type) type##HeapIterator

    #define defineHeapIterator(type, ref)\
    \
        typedef struct HeapIterator(type)\
        {   Stk(pHeapNode(type)) stk;\
        }HeapIterator(type);\
    \
        typedef struct HeapIterator(type)(VirtualTable)\
        {   Iterator(VirtualTable)base;\
        }HeapIterator(type)(VirtualTable) ;\
    \
    \
        static HeapIterator(type) * HeapIterator(type)(Init)\
            ( HeapIterator(type) *, Heap(type) * );\
    \
        static void HeapIterator(type)(Dtor)(HeapIterator(type) *);\
    \
        explicit void HeapIterator(type)(Dtor)(HeapIterator(type) * self){}\
    \
        static cstring HeapIterator(type)(Type)();\
    \
        static ctorPtr HeapIterator(type)(Ctor)();\
    \
        explicit cstring HeapIterator(type)(Type)()\
            {return "HeapIterator(" #type ")";}\
    \
    \
        static Object * * HeapIterator(type)(Get)( HeapIterator(type) * );\
    \
        static bool () HeapIterator(type)(Equal)\
            ( const HeapIterator(type) *, const HeapIterator(type) * );\
    \
        static bool () HeapIterator(type)(Next)( HeapIterator(type) * );\
    \
    \
        static HeapIterator(type)(VirtualTable)\
    \
            HeapIterator(type)(Interface) =\
        {\
            {\
                {\
                    & HeapIterator(type)(Type),\
        \
                    & HeapIterator(type)(Init),\
        \
                    & HeapIterator(type)(Dtor)\
                },\
                & HeapIterator(type)(Get),\
        \
                & HeapIterator(type)(Equal),\
        \
                & HeapIterator(type)(Next)\
            }\
        };\
        explicit ctorPtr HeapIterator(type)(Ctor)()\
            {return accumulate(HeapIterator(type));}\
    \
    \
        explicit HeapIterator(type) * HeapIterator(type)(Init)\
            ( HeapIterator(type) * self, Heap(type) * heap )\
        {\
            Stk(pHeapNode(type))(Init)(& self->stk);\
            HeapNode(type)(InOrder)( heap->top, & self->stk );\
            Stk(pHeapNode(type))(Reverse)(& self->stk);\
            return self;\
        }\
    \
    \
        explicit Object * * HeapIterator(type)(Get)( HeapIterator(type) * self )\
        { if( Stk(pHeapNode(type))(Top)(&self->stk) )\
          {return ref Stk(pHeapNode(type))(Pop)(&self->stk)->info;\
          }else{throw(new(NullPointer))(this, "NullIterator");}\
        }\
    \
        explicit bool () HeapIterator(type)(Equal)\
        ( const HeapIterator(type) * self, const HeapIterator(type) * objt )\
        {}\
    \
        explicit bool () HeapIterator(type)(Next)( HeapIterator(type) * self )\
        { if( Stk(pHeapNode(type))(Top)(&self->stk) ){return true;}else{return false;}\
        }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    #define ArrayIterator(type) type##ArrayIterator

    #define defineArrayIterator(type, func)\
    \
        typedef struct ArrayIterator(type)\
        {   type * p;\
        }ArrayIterator(type);\
    \
        typedef struct ArrayIterator(type)(VirtualTable)\
        {   Iterator(VirtualTable)base;\
        }ArrayIterator(type)(VirtualTable) ;\
    \
    \
        static ArrayIterator(type) * ArrayIterator(type)(Init)\
            ( ArrayIterator(type) *, type * );\
    \
        static void ArrayIterator(type)(Dtor)(ArrayIterator(type) *);\
    \
        explicit void ArrayIterator(type)(Dtor)(ArrayIterator(type) * self){}\
    \
        static cstring ArrayIterator(type)(Type)();\
    \
        static ctorPtr ArrayIterator(type)(Ctor)();\
    \
        explicit cstring ArrayIterator(type)(Type)()\
            {return "ArrayIterator(" #type ")";}\
    \
    \
        static Object * * ArrayIterator(type)(Get)( ArrayIterator(type) * );\
    \
        static bool () ArrayIterator(type)(Equal)\
            ( const ArrayIterator(type) *, const ArrayIterator(type) * );\
    \
        static bool () ArrayIterator(type)(Next)( ArrayIterator(type) * );\
    \
    \
        static ArrayIterator(type)(VirtualTable)\
    \
            ArrayIterator(type)(Interface) =\
        {\
            {\
                {\
                    & ArrayIterator(type)(Type),\
        \
                    & ArrayIterator(type)(Init),\
        \
                    & ArrayIterator(type)(Dtor)\
                },\
                & ArrayIterator(type)(Get),\
        \
                & ArrayIterator(type)(Equal),\
        \
                & ArrayIterator(type)(Next)\
            }\
        };\
        explicit ctorPtr ArrayIterator(type)(Ctor)()\
            {return accumulate(ArrayIterator(type));}\
    \
    \
        explicit ArrayIterator(type) * ArrayIterator(type)(Init)\
            ( ArrayIterator(type) * self, type * p )\
        {\
            self->p = p;\
            return self;\
        }\
    \
        func  ;

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    #define defineArrayIteratorInterface(type)\
    \
        explicit Object * * ArrayIterator(type)(Get)( ArrayIterator(type) * self )\
        { if( *self->p )\
          { return * (self->p++);\
          }else{throw(new(NullPointer))(this, "NullIterator");}\
        }\
    \
        explicit bool () ArrayIterator(type)(Equal)\
        ( const ArrayIterator(type) * self, const ArrayIterator(type) * objt )\
        {}\
    \
        explicit bool () ArrayIterator(type)(Next)( ArrayIterator(type) * self )\
        { if( * self->p ){return true;}else{return false;}\
        }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    #define defineArrayIteratorInfo(type)\
    \
        explicit Object * * ArrayIterator(type)(Get)( ArrayIterator(type) * self )\
        { if( !string(equal)(self->p->key, "") )\
          { return (self->p++);\
          }else{throw(new(NullPointer))(this, "NullIterator");}\
        }\
    \
        explicit bool () ArrayIterator(type)(Equal)\
        ( const ArrayIterator(type) * self, const ArrayIterator(type) * objt )\
        {}\
    \
        explicit bool () ArrayIterator(type)(Next)( ArrayIterator(type) * self )\
        { if( !string(equal)(self->p->key, "") ){return true;}else{return false;}\
        }

    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/


    explicit size_t HeapMax (size_t x, size_t y)
    {
        if( x >= y )
        {
            return x;
        }
        else
        {
            return y;
        }
    }

    #define SecurityHeap(Member)SecurityHeap ## Member
    static cstring typename(PassNumber)(Heap, Security);

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

  #if 0 // 1 DEBUG

  #undef size_type
  #define size_type uint16_t

   # define InterfaceHeap(Member)InterfaceHeap ## Member
    #define InterfaceHeapNode(Member)InterfaceHeapNode ## Member

   # define pInterfaceHeapNode(Member)pInterfaceHeapNode ## Member

   # define pInterfaceHeapNodeN(Member)\
        pInterfaceHeapNodeN ## Member

    #define pInterfaceHeapNodeIter(Member)\
        pInterfaceHeapNodeIter ## Member

    #define pInterfaceHeapNodeStk(Member)\
        pInterfaceHeapNodeStk ## Member


        typedef struct HeapNode(Interface) HeapNode(Interface);

        struct HeapNode(Interface)
        {
            Interface             info;

            HeapNode(Interface) * left,
                           * right;   };


        static HeapNode(Interface) * newHeapNode(Interface)( Interface );

        explicit HeapNode(Interface) * newHeapNode(Interface)( Interface info )
        { HeapNode(Interface) * self = (HeapNode(Interface)*)allocate
          (sizeof(HeapNode(Interface)));
          if( !self ){ return 0; }
          self->left = 0;
          self->right = 0;

          self->info
           = info;
          return(self); }




        typedef struct Heap(Interface)
        {   Container base;

            HeapNode(Interface) * top;

            size_type length;

        } Heap(Interface);

        volatile static uint8_t Heap(Interface)(Imbalance) = 1 ;

        typedef struct Heap(Interface)(VirtualTable)
        {   Container(VirtualTable)base;

            size_type () (*height) ( Heap(Interface) * );/*[9]*/

            void (*balance)( Heap(Interface) * );/*[10]*/

            size_t imbalance;/*[11]*/

        }Heap(Interface)(VirtualTable); ; ;


        typedef HeapNode(Interface) * pInterfaceHeapNode;


        define(N)(pInterfaceHeapNode);

        define(Iter)(pInterfaceHeapNode, );

        define(Stk)(pInterfaceHeapNode, );


        static Heap(Interface) * Heap(Interface)(Init)( Heap(Interface) *, ... );

        static cstring typename(Type)(Heap(Interface));

        static void Heap(Interface)(Dtor)(Heap(Interface) *);


        static ctorPtr Heap(Interface)(Ctor)();


        static bool Heap(Interface)(Copy)(Heap(Interface) *, Heap(Interface) *);

        static bool Heap(Interface)(Insert)(Heap(Interface) *, Interface);

        static bool Heap(Interface)(Remove)(Heap(Interface) *, Interface);

        static Interface * Heap(Interface)(Search)(Heap(Interface) *, Interface);

        static size_type Heap(Interface)(Size)(Heap(Interface) *);


        static Iter(pHeapNode(Interface)) * Heap(Interface)(Begin)(Heap(Interface) *);


        static void Heap(Interface)(Balance)( Heap(Interface) * );

        static size_type Heap(Interface)(Height)( Heap(Interface) * );

        static Interface * Heap(Interface)(At)(Heap(Interface) *, size_type);


        static bool Heap(Interface)(Equal)(const Heap(Interface) *, const Heap(Interface) *);

        static bool HeapNode(Interface)(Equal)
            (const HeapNode(Interface) *, const HeapNode(Interface) *);


        static bool HeapNode(Interface)(Copy)(HeapNode(Interface) * *, HeapNode(Interface) *);

        static bool HeapNode(Interface)(Insert)(HeapNode(Interface) * *, Interface);

        static bool HeapNode(Interface)(Remove)(HeapNode(Interface) * *, Interface);

        static Interface * HeapNode(Interface)(Search)(HeapNode(Interface) * *, Interface);


        static HeapNode(Interface) * HeapNode(Interface)(Min)(HeapNode(Interface) * *);

        static HeapNode(Interface) * HeapNode(Interface)(Max)(HeapNode(Interface) * *);


        static size_type HeapNode(Interface)(Height)(HeapNode(Interface) *);

        static void HeapNode(Interface)(Balance)( HeapNode(Interface) * * );

        static void HeapNode(Interface)(Destroy)( HeapNode(Interface) * * );


        static void HeapNode(Interface)(LeftRotate)( HeapNode(Interface) * * );

        static void HeapNode(Interface)(DoubleLeft)( HeapNode(Interface) * * );

        static void HeapNode(Interface)(RightRotate)( HeapNode(Interface) * * );

        static void HeapNode(Interface)(DoubleRight)( HeapNode(Interface) * * );


        static void HeapNode(Interface)(InOrder)(HeapNode(Interface) *,
            Stk(pHeapNode(Interface)) * );


        static Heap(Interface)(VirtualTable)

            Heap(Interface)(Interface) =

        {
            {
                {
                    & Heap(Interface)(Type),

                    & Heap(Interface)(Init),

                    & Heap(Interface)(Dtor)
                },
                & Heap(Interface)(Copy),

                & Heap(Interface)(Insert),

                & Heap(Interface)(Remove),

                & Heap(Interface)(Search),/*or (At)*/

                & Heap(Interface)(Size),

                & Heap(Interface)(Begin)
            },
            & Heap(Interface)(Height),

            & Heap(Interface)(Balance),

            0
        };
        explicit ctorPtr Heap(Interface)(Ctor)(){return new(Heap(Interface));}


        explicit Heap(Interface) * Heap(Interface)(Init)

        ( Heap(Interface) * self, ... )
        {
            Stack * stack = control();

            size_t c = arg(stack, size_t);
            switch(c)
            {
                case 0:
                    self->top = nullptr;
                    self->length = 0;
                break;
                case 1:      ;
                    Heap(Interface) * heap = arg(stack, Heap(Interface)*);

                    self->top = nullptr;
                    self->length = 0;
                    Heap(Interface)(Copy)(self, heap);
                break;
            }

        return self; }


        explicit void Heap(Interface)(Dtor)(Heap(Interface) * self)
        {
            HeapNode(Interface)(Destroy)(&self->top); self->length = 0; }


        explicit bool Heap(Interface)(Copy)(Heap(Interface) * self, Heap(Interface) * heap)
        {
            if( self->top != nullptr )
            {
                HeapNode(Interface)(Destroy)(&self->top);
                self->length = 0;
            }
            if( self != heap )
            {
                if( heap->top == nullptr )
                {
                    self->top = nullptr;
                    self->length = 0;
                }
                else
                {
                    HeapNode(Interface)(Copy)( & self->top, heap->top );
                    self->length = heap->length;
                }
            }
            return true;
        }


        explicit bool Heap(Interface)(Insert)(Heap(Interface) * self, Interface info)
        {
            if( !HeapNode(Interface)(Insert)(&self->top, info) )
            {
                return false;
            }
            self->length++;

            HeapNode(Interface)(Balance)( &self->top );

            return true;
        }


        explicit bool Heap(Interface)(Remove)(Heap(Interface) * self, Interface info)
        {
            if( !HeapNode(Interface)(Remove)(&self->top, info) )
            {
                return false;
            }
            self->length--;

            HeapNode(Interface)(Balance)( &self->top );

            return true;
        }


        explicit Interface * Heap(Interface)(Search)(Heap(Interface) * self, Interface info)
        {
            return HeapNode(Interface)(Search)(&self->top, info);
        }


        explicit size_type Heap(Interface)(Size)(Heap(Interface) * self)
        {
            return self->length;
        }


        explicit Iter(pHeapNode(Interface)) * Heap(Interface)(Begin)(Heap(Interface) * self)
        {
            Stk(pHeapNode(Interface)) stk;
            Stk(pHeapNode(Interface))(Init)(&stk);
            HeapNode(Interface)(InOrder)( & stk, self->top );
            return new(Iter(pHeapNode(Interface)))(this, stk.stktop);
        }


        explicit void Heap(Interface)(Balance)( Heap(Interface) * self )
        {
            HeapNode(Interface)(Balance)( &(self->top) );
        }


        explicit size_type Heap(Interface)(Height)( Heap(Interface) * self )
        {
            return 1 + HeapNode(Interface)(Height)(self->top);
        }


        explicit Interface * Heap(Interface)(At)(Heap(Interface) * self, size_type index)
        {
            if( index >= self->length || index < 0 )
            {
                throw(new(OutOfBounds))(this, "Heap(" "Interface" ")(Index)")
            }
            Stk(pHeapNode(Interface)) stk;
            Stk(pHeapNode(Interface))(Init)(&stk);
            HeapNode(Interface)(InOrder)( self->top, & stk );
            return( Stk(pHeapNode(Interface))(At)( & stk, self->length - 1 - index ) );
        }


        explicit bool Heap(Interface)(Equal)
            (const Heap(Interface) * self, const Heap(Interface) * heap)
        {
            return (self->top == nullptr && heap->top == nullptr)
            || (self->top != nullptr && heap->top != nullptr &&
            HeapNode(Interface)(Equal)(self->top, heap->top));
        }

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

        explicit bool HeapNode(Interface)(Equal)
            (const HeapNode(Interface) * lhs, const HeapNode(Interface) * rhs)
        {

            const HeapNode(Interface) * * pnode = &lhs;
            const Interface info = rhs->info;

            return( string(equal)( ((typePtr*)(*pnode)->info)[0](),((typePtr*)info)[0]() ) )/*equal( lhs->info, rhs->info )*/

            && (( lhs->left == nullptr && rhs->left == nullptr )

            || ( lhs->left != nullptr && rhs->left != nullptr

                && HeapNode(Interface)(Equal)( lhs->left , rhs->left ) ) )

            && (( lhs->right == nullptr && rhs->right == nullptr )

            || ( lhs->right != nullptr && rhs->right != nullptr

                && HeapNode(Interface)(Equal)( lhs->left , rhs->left ) ));
        }


        explicit bool HeapNode(Interface)(Copy)

            (HeapNode(Interface) * * pnode, HeapNode(Interface) * node)
        {
            if( node == nullptr )
            {
                (*pnode) = nullptr;
            }
            else
            {
                (*pnode) = newHeapNode(Interface)(node->info);
                if( !(*pnode) ){ return false; }
                HeapNode(Interface)(Copy)(&(*pnode)->left, node->left);
                HeapNode(Interface)(Copy)(&(*pnode)->right, node->right);
            }
            return true;
        }


        explicit bool HeapNode(Interface)(Insert)

            (HeapNode(Interface) * * pnode, Interface info)
        {
            if( (*pnode) == nullptr )
            {
                (*pnode) = newHeapNode(Interface)(info);
                /*length++;*/
                return true;
            }
            else if( string(equal)( ((typePtr*)(*pnode)->info)[0](), ((typePtr*)info)[0]() ) )/*node->info == info*/
            {
                return false;
            }
            else if( string(greater)( ((typePtr*)(*pnode)->info)[0](), ((typePtr*)info)[0]() ) )/*node->info > info*/
            {
                return HeapNode(Interface)(Insert)( &(*pnode)->left, info );
            }
            else/*if( node->info < info )*/
            {
                return HeapNode(Interface)(Insert)( &(*pnode)->right, info );
            }
        }


        explicit bool HeapNode(Interface)(Remove)

            (HeapNode(Interface) * * pnode, Interface info)
        {
            if( (*pnode) == nullptr )
            {
                return false;
            }
            else if( string(greater)( ((typePtr*)(*pnode)->info)[0](), ((typePtr*)info)[0]() ) )/*(*pnode)->info > info*/
            {
                return HeapNode(Interface)(Remove)( &(*pnode)->left, info );
            }
            else if( !string(equal)( ((typePtr*)(*pnode)->info)[0](), ((typePtr*)info)[0]() )

            && !string(greater)( ((typePtr*)(*pnode)->info)[0](), ((typePtr*)info)[0]() ) )/*info > (*pnode)->info*/
            {
                return HeapNode(Interface)(Remove)( &(*pnode)->right, info );
            }
            else if( (*pnode)->left != nullptr && (*pnode)->right != nullptr )/*==*/
            {
                (*pnode)->info = HeapNode(Interface)(Min)( &(*pnode)->right )->info;
                return HeapNode(Interface)(Remove)( &(*pnode)->right, (*pnode)->info );
            }
            else
            {
                HeapNode(Interface) * old = (*pnode);
                (*pnode) = ( (*pnode)->left != nullptr )
                ? (*pnode)->left : (*pnode)->right;
                /*length--;*/
                deallocate( old );

                return true;
            }
        }


        explicit Interface * HeapNode(Interface)(Search)

            (HeapNode(Interface) * * pnode, Interface info)
        {
            if( (*pnode) == nullptr )
            {
                return nullptr;
            }
            if( string(equal)( ((typePtr*)(*pnode)->info)[0](), ((typePtr*)info)[0]() ) ) /*node->info == info*/
            {
                return (*pnode);
            }
            if( string(greater)( ((typePtr*)(*pnode)->info)[0](), ((typePtr*)info)[0]() ) ) /*node->info > info*/
            {
                return HeapNode(Interface)(Search)(&(*pnode)->left, info);
            }
            else
            {
                return HeapNode(Interface)(Search)(&(*pnode)->right, info);
            }
        }


        explicit HeapNode(Interface) * HeapNode(Interface)(Min)(HeapNode(Interface) * * pnode)
        {
            if( (*pnode) == nullptr )
            {
                return nullptr;
            }
            if( (*pnode)->left == nullptr )
            {
                return (*pnode);
            }
            return HeapNode(Interface)(Min)(&(*pnode)->left);
        }


        explicit HeapNode(Interface) * HeapNode(Interface)(Max)(HeapNode(Interface) * * pnode)
        {
            if( (*pnode) == nullptr )
            {
                return nullptr;
            }
            if( (*pnode)->right == nullptr )
            {
                return (*pnode);
            }
            return HeapNode(Interface)(Max)(&(*pnode)->right);
        }


        explicit size_type HeapNode(Interface)(Height)(HeapNode(Interface) * node)
        {
            if( node == nullptr )
            {
                return 0; /* -1 */
            } /*return 0 */
            else
            {
                return 1 + HeapMax(
                HeapNode(Interface)(Height)(node->left),
                HeapNode(Interface)(Height)(node->right) );
            }
        }


        explicit void HeapNode(Interface)(Balance)( HeapNode(Interface) * * pnode )
        {
            if( (*pnode) == nullptr )
            {
                return;
            }
            if( HeapNode(Interface)(Height)( (*pnode)->left ) -

                HeapNode(Interface)(Height)( (*pnode)->right )

               > Heap(Interface)(Imbalance) )
            { /*height might still need to return - 1 (done)*/
                if( (*pnode)->left ){if( HeapNode(Interface)(Height)( (*pnode)->left->left )

                   >= HeapNode(Interface)(Height)( (*pnode)->left->right ) )
                {  /*rotatewithleftchild*/
                    HeapNode(Interface)(LeftRotate)(pnode);
                }
                else
                { /*doublewithleftchild*/
                    HeapNode(Interface)(DoubleLeft)(pnode);
                }}
            }
            else if( HeapNode(Interface)(Height)( (*pnode)->right )

               - HeapNode(Interface)(Height)( (*pnode)->left ) > Heap(Interface)(Imbalance) )
            {
                if( (*pnode)->right ){if( HeapNode(Interface)(Height)( (*pnode)->right->right )

                   >=  HeapNode(Interface)(Height)( (*pnode)->right->left ) )
                { /*rotatewithrightchild*/
                    HeapNode(Interface)(RightRotate)(pnode);
                }
                else
                { /*doublewithrightchild*/
                    HeapNode(Interface)(DoubleRight)(pnode);
                }}
            }
        }


        explicit void HeapNode(Interface)(Destroy)( HeapNode(Interface) * * pnode )
        {
            if( (*pnode) == nullptr )
            {
                return;
            }
            HeapNode(Interface)(Destroy)(&(*pnode)->left);
            HeapNode(Interface)(Destroy)(&(*pnode)->right);
            deallocate( (*pnode) );/*dtor works in postorder*/
            (*pnode) = nullptr;
        }


        explicit void HeapNode(Interface)(LeftRotate)( HeapNode(Interface) * * pk2 )
        {
            HeapNode(Interface) * k1 = (*pk2)->left;

            (*pk2)->left = k1->right;

            k1->right = (*pk2);

            (*pk2) = k1;
        }


        explicit void HeapNode(Interface)(DoubleLeft)( HeapNode(Interface) * * pk3 )
        {
            HeapNode(Interface)(RightRotate)(&(*pk3)->left);
            HeapNode(Interface)(LeftRotate)(pk3);
        }


        explicit void HeapNode(Interface)(RightRotate)( HeapNode(Interface) * * pk2 )
        {
            HeapNode(Interface) * k1 = (*pk2)->right;

            (*pk2)->right = k1->left;

            k1->left = (*pk2);

            (*pk2) = k1;
        }


        explicit void HeapNode(Interface)(DoubleRight)( HeapNode(Interface) * * pk3 )
        {
            HeapNode(Interface)(LeftRotate)(&(*pk3)->right);
            HeapNode(Interface)(RightRotate)(pk3);
        }


        explicit void HeapNode(Interface)(InOrder)(HeapNode(Interface) * node,

            Stk(pHeapNode(Interface)) * stk )
        {
            if( node == nullptr )
            {
                return;
            }
            HeapNode(Interface)(InOrder)( ( node->left ), (stk) );

            Stk(pHeapNode(Interface))(Push)( stk, node );

            HeapNode(Interface)(InOrder)( ( node->right ), (stk) );
        }


        static Virtual  /**Table( Name, Pos, Default, Type )**/

            Heap(Interface)(VirtualHeap)[twelve] = /**CLASS VIRTUAL TABLE TABLE**/
        { /**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
            { "at",               6,      & Heap(Interface)(Search),   "Interface*(*)(Heap(Interface)*,Interface)"                },
            { "balance",         10 ,     & Heap(Interface)(Balance) , "void(*)(HeapNode(Interface)**)"                     },
            { "begin",            8,      & Heap(Interface)(Begin),    "Iter(pHeapNode(Interface))*(*)(Heap(Interface)*)"     },
            { "copy",             3,      & Heap(Interface)(Copy),     "bool()(*)(Heap(Interface)*,const Heap(Interface)*)"   },
            { "dtor",             2,      & Heap(Interface)(Dtor)  ,   "void(*)(Heap(Interface)*)"                          },
            { "height",           9,      & Heap(Interface)(Height)  , "size_type()(*)(HeapNode(Interface)*)"               },
            { "imbalance",       11,      0  ,    "size_t"                                                        },
            { "init",             1,      & Heap(Interface)(Init) ,    "Heap(Interface)*(*)(Heap(Interface)*,...)"            },
            { "insert",           4,      & Heap(Interface)(Insert),   "bool()(*)(Heap(Interface)*,Interface)"                },
            { "remove",           5,      & Heap(Interface)(Remove) ,  "bool()(*)(Heap(Interface)*,Interface)"                },
            { "size",             7,      & Heap(Interface)(Size)  ,   "size_type()(*)(Heap(Interface)*)"                   },
            { "type",             0,      & Heap(Interface)(Type)   ,  "cstring(*)()"                                     },

            { "", 0, 0, "" }

        };static Virtual *
        typename(SubFactoryMethod)(Heap(Interface),Virtual,Virtual,0,11);

        static struct class(VirtualHeap)

            Heap(Interface)(Virtual) =

        { &class(VirtualHeap)(Type), &Heap(Interface)(VirtualSearch), Heap(Interface)(VirtualHeap) };


        static Complex

            Heap(Interface)(ComplexHeap)[two] =
        {   {"length",1,sizeof(size_type),"size_type"},
            {"top",0,sizeof(void*),"HeapNode(Interface)*"},

            {"",0,0,""}
        };static Complex *
        typename(SubFactoryMethod)(Heap(Interface),Complex,Complex,0,1)


        static struct class(ComplexHeap)

            Heap(Interface)(Complex) =

        { &class(ComplexHeap)(Type), &Heap(Interface)(ComplexSearch), Heap(Interface)(ComplexHeap) };


        static Polymorph  /**Table( Name, Offset, Offset, Type )**/

            Heap(Interface)(PolymorphHeap)[two] =

        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/
            { "Container",                 0,              0, "" },
            { "class",                     0,              0, "" },

            { "", 0, 0, "" }
        };static Polymorph *
        typename(SubFactoryMethod)(Heap(Interface),Polymorph,Polymorph,0,1);


        static struct class(PolymorphHeap)

            Heap(Interface)(Polymorph) =

        { &class(PolymorphHeap)(Type),

          &Heap(Interface)(PolymorphSearch),

           Heap(Interface)(PolymorphHeap) };


        static struct class(FactoryTable)

            Heap(Interface)(Factory) =

        { &class(FactoryTable)(Type), &Heap(Interface)(Ctor), 0 };


        static int Heap(Interface)(ConsoleIn)(Heap(Interface) *, ...);

        static int Heap(Interface)(ConsoleOut)(const Heap(Interface) *, ...);

        static struct class(ConsoleTable)

            Heap(Interface)(Console) =

        { &class(ConsoleTable)(Type),

        &Heap(Interface)(ConsoleIn), &Heap(Interface)(ConsoleOut) };


        static int Heap(Interface)(StandardIn)(Heap(Interface) *, ...);

        static int Heap(Interface)(StandardOut)(const Heap(Interface) *, ...);

        static struct class(StandardTable)

            Heap(Interface)(Standard) =

        { &class(StandardTable)(Type),

        &Heap(Interface)(StandardIn), &Heap(Interface)(StandardOut) };


        static int Heap(Interface)(FileIn)(Heap(Interface) *, ...);

        static int Heap(Interface)(FileOut)(const Heap(Interface) *, ...);

        static struct class(FileTable)

            Heap(Interface)(File) =

        { &class(FileTable)(Type),

        &Heap(Interface)(FileIn), &Heap(Interface)(FileOut) };


        static struct pass(SecurityHeap)

            Heap(Interface)(Security) =

        { { & pass(SecurityHeap)(Type), 0, 0 },

            & Heap(Security)(ID), 0 };


        static Interface Heap(Interface)

            (InterfaceHeap)[nine] =

        {/**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**/

            &Heap(Interface)(Interface),

            &Heap(Interface)(Complex),

            &Heap(Interface)(Console),

            &Heap(Interface)(Factory),

            &Heap(Interface)(File),

            &Heap(Interface)(Polymorph),

            &Heap(Interface)(Standard),

            &Heap(Interface)(Virtual),

            &Heap(Interface)(Security),

            nullptr
        } ;
        static Interface
        typename(ClassFactoryMethod)(Heap(Interface),0,8);


        static void typename(Setup)(Heap(Interface))
        {((Interface)&Heap(Interface)(Security))
        [2] = Heap(Interface)(InterfaceHeap) ;}

        static void typename(Abort)(Heap(Interface)){}


        define(FactoryIter)(pHeapNode(Interface), );

        define(FactoryStk)(pHeapNode(Interface), );

    #if 1
        explicit int Heap(Interface)(ConsoleIn)
        (Heap(Interface) * self, ...)           {}
        explicit int Heap(Interface)(ConsoleOut)
        (const Heap(Interface) * self, ...)     {}

        explicit int Heap(Interface)(StandardIn)
        (Heap(Interface) * self, ...)           {}
        explicit int Heap(Interface)(StandardOut)
        (const Heap(Interface) * self, ...)     {}

        explicit int Heap(Interface)(FileIn)
        (Heap(Interface) * self, ...)           {}
        explicit int Heap(Interface)(FileOut)
        (const Heap(Interface) * self, ...)     {}


        explicit int Iter(pHeapNode(Interface))(ConsoleOut)
        (const Iter(pHeapNode(Interface)) * self, ...)     {}

        explicit int Iter(pHeapNode(Interface))(StandardOut)
        (const Iter(pHeapNode(Interface)) * self, ...)     {}

        explicit int Iter(pHeapNode(Interface))(FileOut)
        (const Iter(pHeapNode(Interface)) * self, ...)     {}


        explicit int Stk(pHeapNode(Interface))(ConsoleIn)
        (Stk(pHeapNode(Interface)) * self, ...)           {}
        explicit int Stk(pHeapNode(Interface))(ConsoleOut)
        (const Stk(pHeapNode(Interface)) * self, ...)     {}

        explicit int Stk(pHeapNode(Interface))(StandardIn)
        (Stk(pHeapNode(Interface)) * self, ...)           {}
        explicit int Stk(pHeapNode(Interface))(StandardOut)
        (const Stk(pHeapNode(Interface)) * self, ...)     {}

        explicit int Stk(pHeapNode(Interface))(FileIn)
        (Stk(pHeapNode(Interface)) * self, ...)           {}
        explicit int Stk(pHeapNode(Interface))(FileOut)
        (const Stk(pHeapNode(Interface)) * self, ...)     {}

    #endif // 0 MUST_INCLUDE_AFTER_TYPENAME

        static void Heap(Interface)
        (CopyFromArray)( Heap(Interface) *, Interface * );

        static void HeapNode(Interface)
        (InterfaceDestroy)( HeapNode(Interface) * * );

        static void Heap(Interface)
        (InterfaceDtor)( Heap(Interface) * );

  #undef size_type
  #define size_type size_t

  #endif // DEBUG

#endif // DEFINEHEAP_H_INCLUDED
