#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED
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
[ 3 ]primary;
#endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    #include "../Object/Object.h"

    static void throwOutOfMemory(Object *);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||THE FACTORY C CLASS INFO HEAPS FOR THE FACTORY OBJECT|| *
     *                                                           *
     *             by Willy (??/??/2022)(04/17/2022)             *
     *                      (04/20/2022)(09/13/2022)             *
     * ||                                                     ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                            //(PROGRAM TO THE INFO HEAP)(Factory C)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                       //(PROGRAM TO THE INTERFACE HEAP)(Factory C)
    # define Array(type)type ## Array//template tool
    typedef void *       Array;//
  #if 0
    typedef void Info ;
  #endif // 0
    ///{
        typedef     cstring      Name;///
        typedef     Object *     Address;
        typedef  const Method *  Default;
        typedef     int          Offset;        /**SIGNED**/
        typedef     size_type    Pos;           /**UNSIGNED**/
        typedef     size_type    Index;
        typedef     bool         Boolean;

        typedef     cstring      Set;   ///
        typedef     cstring      Case;

        typedef     cstring      Cast;
        typedef     cstring      Stamp;//Cast
        typedef     size_type    SizeT;
        typedef     typePtr      What;

        typedef     cstring      Type;//
        typedef     cstring      Info;

        typedef     Object *     type;
        typedef     size_type    Bytes;

        typedef     ctorPtr      Ctor;//two for 2
        typedef     cstring      Cstr;

        typedef     const bool   cbool;
        typedef     bool *       Flag;//const

        typedef     bool *       Bool;
        typedef     jumpBuf *    JumpBuff;
        typedef     jumpBuf      JumpBuf;
        typename(Pair)(JumpBuff,Bool);
        typedef  Pair (JumpBuff,Bool) Jump;///Exception

        typedef     uint8_t      byte;///Multiple Inheritance Object
        typedef     uintptr_t    pointer;///Multiple Inheritance Interface

        typedef     methPtr      Meth;
        typedef     methPtr      Map;
        typedef     void *       List;
        typedef     void *       Heap;

        typedef struct PassNumber * Pass;//for exception

        typedef     string *     TypeID;//for factory method

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define DataType(Member)DataType ## Member

    typedef  void            StackControl;//for initializer
    typedef  void              StackTop; //for sequence
        ///{
    typedef  Object *    DataType;//good token   Object
    typedef              DataType ()(*Function)( StackTop *, ... ) ;
                                              ///Container
        typedef              bool () (*Insert)( Object *, ... );
        typedef              void (*Execute)( Object * );///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define FactoryArray(Member)FactoryArray ## Member
      # define Factory(Member)Factory ## Member
        typedef  Object *    Return;///Container Not Object
        typename(Pair)(Function,Return);    /**Factory**//*implement:
                                                          (Factory)*/
        typedef  Pair (Function,Return)        Factory; /*<---*/
        typedef  Factory *   Array(Factory); //FactoryFunction
        typename(Array)    (Factory);

     /**              (Command.h included)     Command**//*alternate:
                                                          (Command)*/
        #include "../Control/Command.h"

    # define CommandArray(Member)CommandArray ## Member

        typedef  Command *   Array(Command);
        typename(Array)    (Command);

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                                                               //[0] [1]
        typename   (Pair) (Name, Address);       /**Overload**///key val
        typedef     Pair  (Name, Address)Overload,  Strategy;  ///#1
                                                        //          //[0] [1] [2] [3]
        typename   (Grid)(Name,Offset,Offset,Type);/**Inheritance**///key val col end
        typedef     Grid (Name,Offset,Offset,Type)  Polymorph; ///#2
                                                             //[0] [1] [2] [3]
        typename   (Grid)(Name,Pos,Default,Type);/**Method**///key val col end
        typedef     Grid (Name,Pos,Default,Type)    Virtual;   ///#3
                                                            //[0] [1] [2] [3]
        typename   (Grid)(Name,Pos,Bytes,Type);  /**Value**///key val col end
        typedef     Grid (Name,Pos,Bytes,Type)Value,Complex;   ///#4
                                                        //                [0] [1] [2]
        typename   (Pair) (Name,Command) ;       /**Template(Command)**///key val ...
        typedef     Pair  (Name,Command)            Control ;  ///#5
                                                                        //[0] [1] [2]
        typename   (Table)(Name,Function,Return);/**Template(Factory)**///key val end
        typedef     Table (Name,Function,Return)    Builder ;  ///#6
                                                          //[0]
                                                 /**Key**///key
        typedef struct Key{cstring key}Key,         Security ; ///#7
                                                               //[0] [1]
        typename   (Pair)(Type, Info) ;          /**TypeInfo**///key val
        typedef     Pair (Type, Info)               Adapter;   ///#8

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        typename   (Table)(Name, Map, List) ;    /**(demo)**/
        typedef     Table (Name, Map, List)      FactoryMethod;///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /**+---------------------------------+
     * @brief struct class interface heap|
     * +---------------------------------+
     */     //
    # define InterfaceArray(Member)InterfaceArray ## Member
      # define Interface(Member)Interface ## Member
        typedef     Interface *  Array(Interface); ///     ///#MAIN
        typename   (Array)    (Interface);
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)//
        ( Interface,  //
                string(equal)( ((typePtr*)array[*mid])[0](),
                    ((typePtr*)key)[0]() ),
                string(greater)( ((typePtr*)array[*mid])[0](),
                    ((typePtr*)key)[0]() )
        );typename(QSort)   /// /// /// ///
        (                       Interface,
            string(equal)(   ((typePtr*)array[i])[0](),
                          ((typePtr*)array[left])[0]() ),
            string(greater)( ((typePtr*)array[i])[0](),
                          ((typePtr*)array[left])[0]() ),
            typename(Swap)(Interface)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /**+---------------------------------+
     * @brief struct class info heaps    |
     * +---------------------------------+
     */     //
    # define StrategyArray(Member)StrategyArray ## Member
      # define Strategy(Member)Strategy ## Member
        typedef     Strategy *  Array(Strategy); ///Overload   ///#1
        typename   (Array)    (Strategy);
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                        ///Strategy
        ( /*Strategy*/          Strategy,
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)
        );typename(QSort)   /// /// /// ///
        (                       Strategy,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Strategy)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define PolymorphArray(Member)PolymorphArray ## Member
      # define Polymorph(Member)Polymorph ## Member
        typedef     Polymorph * Array(Polymorph);              ///#2
        typename   (Array)    (Polymorph); ///Inheritance
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                        ///Polymorph
        ( /*Polymorph*/         Polymorph,
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)
        );typename(QSort)
        (                       Polymorph,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Polymorph)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define VirtualArray(Member)VirtualArray ## Member
      # define Virtual(Member)Virtual ## Member
        typedef     Virtual *   Array(Virtual);///             ///#3
        typename   (Array)    (Virtual);
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                     ///VirtualTableTable
        ( /*Virtual*/           Virtual,
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)///Interface
        );typename(QSort)
        (                       Virtual,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Virtual)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define ComplexArray(Member)ComplexArray ## Member
      # define Complex(Member)Complex ## Member
        typedef     Value *     Array(Complex);                ///#4
        typename   (Array)    (Complex);///Complex
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                        ///Info
        ( /*Value*/             Complex,        ///Table
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)///Value
        );typename(QSort)                         ///Object
        (                       Complex,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Complex)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define ControlArray(Member)ControlArray ## Member
      # define Control(Member)Control ## Member
        typedef     Control *   Array(Control);///             ///#5
        typename   (Array)    (Control);
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                        ///+Command
        ( /*Control*/           Control,
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)
        );typename(QSort)
        (                       Control,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Control)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define BuilderArray(Member)BuilderArray ## Member
      # define Builder(Member)Builder ## Member
        typedef     Builder *   Array(Builder);///             ///#6
        typename   (Array)    (Builder);
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                        ///+Factory
        ( /*Builder*/           Builder,
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)
        );typename(QSort)
        (                       Builder,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Builder)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define SecurityArray(Member)SecurityArray ## Member
      # define Security(Member)Security ## Member
        typedef     Key *       Array(Security);               ///#7
        typename   (Array)    (Security);
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                        ///Security
        ( /*Security*/          Security,
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)
        );typename(QSort)                              ///Key
        (                       Security,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Security)
        );  /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define AdapterArray(Member)AdapterArray ## Member
      # define Adapter(Member)Adapter ## Member
        typedef     Adapter * Array(Adapter);                  ///#8
        typename   (Array)    (Adapter);
            /// /// /// /// /// /// /// /// /// /// /// ///
        typename (Search)                        ///Adapter
        ( /*Adapter*/          Adapter,
            string(equal)(array[*mid].key,key.key),
            string(greater)(array[*mid].key,key.key)
        );typename(QSort)                    ///TypeInfo Table
        (                       Adapter,
            string(equal)( array[i].key,array[left].key ),
            string(greater)( array[i].key,array[left].key ),
            typename(Swap)(Adapter)///+Security Key Set
        );  /// /// /// /// ///For Data Member Names/// ///

        /// ... (open for extension)

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief implement the Jump the Jump Stack (jstk) uses      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

       # define jumpBuf(Member)jumpBuf ## Member
        static cstring    jumpBuf(Type)();
        static jumpBuf *  jumpBuf(Init)( jumpBuf *, ... );
        static void       jumpBuf(Dtor)( jumpBuf * );

        static struct class (VirtualTable)
            jumpBuf(Interface) =
        { & jumpBuf(Type), & jumpBuf(Init), & jumpBuf(Dtor) } ;

        explicit jumpBuf * jumpBuf(Init)(jumpBuf * self,...)
            {return self;}
        explicit void jumpBuf(Dtor)( jumpBuf * self )  {}
        explicit cstring jumpBuf(Type)(){return"jumpBuf";}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief implement the object-oriented char *               *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static string *   string(Init)( string *, ... );
        static void       string(Dtor)( string * );
        static cstring    string(Type)();

        static struct class (VirtualTable)
            string(Interface) =
        { & string(Type), & string(Init), & string(Dtor) } ;

        explicit string * string(Init)( string * self, ... )
        { if( !self ){return 0;}
            Stack * stack = control();
            size_type size = arg(stack, size_type);
            (*self) = allocate(sizeof(char)*size)  ;
            throwOutOfMemory(*self);
            (*self)[0] = '\0';
            (*self)[size-1] = '\0';
            return self;}

        explicit void string(Dtor)( string * self )
        { deallocate(*self); }
        explicit cstring string(Type)(){return "string";}

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        ///}
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - - Polymorph might need another column and that is the typeid
        of the class object it is adjacent to on a stack when there
        is a multimple inheritance object (just so there is no
        confusion).

    - - virtual got a new column (to print the interface for one)
        thats a method typeid column.

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    ///}
    static friend (s) ; ;
    ///{

        enum  registrations

        {       zero        =       1,

                one         =       2,

                two         =       3,

                three       =       4,

                four        =       5,

                five        =       6,

                six         =       7,

                seven       =       8,

                eight       =       9,

                nine        =       10,

                ten         =       11,

                eleven      =       12,

                twelve      =       13,

                thirteen    =       14,

                fourteen    =       15,

                fifteen     =       16,

                sixteen     =       17,

                seventeen   =       18,

                eighteen    =       19,

                nineteen    =       20,

                twenty      =       21,

                twentyone   =       22,

                twentytwo   =       23,

                twentythree =       24,

                twentyfour  =       25,

                twentyfive  =       26,

                twentysix   =       27,

                twentyseven =       28,

                twentyeight =       29,

                twentynine  =       30,

                thirty      =       31,

                thirtyone   =       32,

                thirtytwo   =       33,

                thirtythree =       34,

                thirtyfour  =       35,

                thirtyfive  =       36,

                thirtysix   =       37,

                thirtyseven =       38,

                thirtyeight =       39,

                thirtynine  =       40,

                fourty      =       41,

                fourtyone   =       42,

                fourtytwo   =       43,

                fourtythree =       44,

                fourtyfour  =       45,

                fourtyfive  =       46,

                fourtysix   =       47,

                fourtyseven =       48,

                fourtyeight =       49,

                fourtynine  =       50,

                fifty       =       50 + 1,

                fiftyone    =       51 + 1,

                fiftytwo    =       52 + 1,

                fiftythree  =       53 + 1,

                fiftyfour   =       54 + 1,

                fiftyfive   =       55 + 1,

                fiftysix    =       56 + 1,

                fiftyseven  =       57 + 1,

                fiftyeight  =       58 + 1,

                fiftynine   =       59 + 1,

                sixty       =       60 + 1,

                sixtyone    =       61 + 1,

                sixtytwo    =       62 + 1,

                sixtythree  =       63 + 1,

                sixtyfour   =       64 + 1,

                sixtyfive   =       65 + 1,

                sixtysix    =       66 + 1,

                sixtyseven  =       67 + 1,

                sixtyeight  =       68 + 1,

                sixtynine   =       69 + 1,

                seventy     =       70 + 1,

                seventyone  =       71 + 1,

                seventytwo  =       72 + 1,

                seventythree=       73 + 1,

                seventyfour =       74 + 1,

                seventyfive =       75 + 1,

                seventysix  =       76 + 1,

                seventyseven=       77 + 1,

                seventyeight=       78 + 1,

                seventynine =       79 + 1,

                eighty      =       80 + 1,

                eightyone   =       82,

                eightytwo   =       83,

                eightythree =       84,

                eightyfour  =       84 + 1,

                eightyfive  =       85 + 1,

                eightysix   =       86 + 1,

                eightyseven =       88,

                eightyeight =       88 + 1,

                eightynine  =       89 + 1,

                ninety      =       90 + 1,

                ninetyone   =       91 + 1,

                ninetytwo   =       92 + 1,

                ninetythree =       93 + 1,

                ninetyfour  =       94 + 1,

                ninetyfive  =       95 + 1,

                ninetysix   =       96 + 1,

                ninetyseven =       97 + 1,

                ninetyeight =       98 + 1,

                ninetynine  =       99 + 1,

                onehundred  =       101,

                onehundredandone =  101 + 1   };


            static char Alphabet[twentysix] = {0} ;

    ///}
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
           Array(int) * array = new(Array(int))(this, ...);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

#endif // INFO_H_INCLUDED
