#ifdef COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
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
    #ifndef CIN_H_INCLUDED
    #define CIN_H_INCLUDED
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *       1)  set control factory defaults.                   *
     *                                                           *
     *       2)  return the control factory.                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief                cin(object) ;                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define ConsoleIn(Member)ConsoleIn ## Member

    #define cin \
    \
        ConsoleIn(Init)()

    #define objectcin ConsoleIn(Object)
    #define arraycin Array(ConsoleIn)

  #if 0
    #define scan ConsoleIn(Base)
  #endif // 0
    // // // // // // // // // // // // // // // //

    #define defineConsoleIn( self, type/*, scan, end*/ )\
    \
            register size_t retval = 0;\
    \
             if( self == vtable )\
             { if( default(0) ){ default(0) = false; }\
               retval = ((factPtr*)multimap(false)("VirtualTable")\
             ( #type ))[1](self); }\
    \
             if( self == ftable )\
             { if( default(0) ){ default(0) = false; }\
               retval = ((factPtr*)multimap(false)("FactoryTable")\
             ( #type ))[1](self); }\
    \
             if( self == atable )\
             { if( default(0) ){ default(0) = false; }\
               retval = ((factPtr*)multimap(false)("AdapterTable")\
             ( #type ))[1](self); }\
    \
            /*if( !instance(self) )\
            {\
             retval = scan self end;\
            }\
            else \
            {*/\
                if( default(0) ){ default(0) = false; }\
                retval = ((factPtr*)multimap(false)\
                (typeid(self))\
                ( # type ))\
                [1](self);\
            /*}*/\
            return retval;

    // // // // // // // // // // // // // // // //

    volatile static Array(Factory) volatile *
      volatile Array(ConsoleIn) = nullptr;

    typedef Factory * StartConsoleIn;

  #if 0
    volatile static Object * volatile * volatile ConsoleIn(Object) = nullptr;
  #endif // 0
  #define object(member)object ## member
  #define objectcin ConsoleIn(Object) /// object(cout) = ... ;

    static Factory(00) * ConsoleIn(Init)(void);

    static int ConsoleIn(Base)( Object *, ... );

    explicit Factory(00) * ConsoleIn(Init)(void)
    {
        if( Array(ConsoleIn) == nullptr )
          { Array(ConsoleIn) = accumulate (Array(Factory))(this,1);

            default(4) = true;
            default(5) = false;
            default(7) = true;

            using template(Array(ConsoleIn))
                (&ConsoleIn(Base), accumulate (Stk(int))(this))cend; }

        ///default(7) = false; //initializer off
        ///default(2) = true;  //halt iterator

                    default(0) = false;
                    default(1) = true;
                    default(2) = true; /*false default*/
                    default(3) = false;
                    default(4) = true;
                    default(5) = false;
                    default(6) = false;
                    default(7) = false;/*true default*/

                    Skip = 0;


        return using template(Array(ConsoleIn));
    }

    explicit int ConsoleIn(Base)( Object * self, ... )
    {
        if( String(Flag) )
        {if( instanceof( self, String ) )
         {String(Flag) = false;
            if( ConsoleIn(Object) )
            {
                throw(new(IllegalOperation))
                (this, "ConsoleInObjectInitialized");
            }
            ConsoleIn(Object) = self;
         }else{throw(new(IllegalOperation))
         (this, "ExpectedStringForConsoleIn\n"
          "when: \t\tnew(String)(this, 0)");}

        } else
        if( instanceof( self, File ) )
        {
            if( ConsoleIn(Object) )
            {
                throw(new(IllegalOperation))
                (this, "ConsoleInObjectInitialized");
            }
            ConsoleIn(Object) = self;

            return 0;
        }
        if( self == nullptr )
        {
            if( instanceof( ConsoleIn(Object), String ) )
            {if( ConsoleIn(String) ){ ConsoleIn(String) = 0; }}

            delete(ConsoleIn(Object)); // = 0;

            return 0;
        }
        if( !ConsoleIn(Object) )
        {
            typename(ConsoleIn)( self, class(ConsoleTable) );
        }
        else
        if( ConsoleIn(Object)

           && string(equal)(

            typeid(ConsoleIn(Object)), "String" ) )
        {
            if(!ConsoleIn(String)){ ConsoleIn(String) = ConsoleIn(Object)[0]; }

            default(24) = true;

            register size_type retval = 0;

             if( self == vtable )
             { if( default(0) ){ default(0) = false; }
               retval = ((factPtr*)multimap(false)("VirtualTable")
             ("class(StandardTable)"))[1](self); }

             if( self == ftable )
             { if( default(0) ){ default(0) = false; }
               retval = ((factPtr*)multimap(false)("FactoryTable")
             ("class(StandardTable)"))[1](self); }

             if( self == atable )
             { if( default(0) ){ default(0) = false; }
               retval = ((factPtr*)multimap(false)("AdapterTable")
             ("class(StandardTable)"))[1](self); }

             /* note: this case can be re-added when scanf gets
              *       the case it needs thats like printf
              */
            /*if( !instance(self) )
            {
              retval = sscanf(ConsoleIn(String), self);// "%s", self
            }
            else
            {*/
                //if( default(0) ){ default(0) = false; }
              retval = (size_type)
              ((factPtr*)multimap(false)(typeid(self))
              ("class(StandardTable)"))[1]( self );
            /*}*/

            default(24) = false;
            return retval;
        }
        else
        if( ConsoleIn(Object)

           && string(equal)(

            typeid(ConsoleIn(Object)), "File" ) )
        {
            typename(ConsoleIn)( self, class(FileTable) );
        }
     }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                        Settings:

                    /*default(0) = false;* /\
                    /*default(1) = true;* /\
                      default(2) = true;/*false default* /\
                    /*default(3) = true;* /\
                    /*default(4) = true;* /\
                    /*default(5) = false;* /\
                    /*default(6) = false;* /\
                      default(7) = false;/*true default* /\
                                                                 */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**                        scanf:

        READ COUT.H AT AROUND THE SAME AREA OF THE OTHER FILE

        BECAUSE THIS DOESN'T EVEN DO THE FIRST THING THAT COUT

        DOES TO BLEND THIS TOGETHER WITH scanf AND RENDER SCANF

        OBSOLETE. (BOTH NEED TO BE THE SAME) (CIN & COUT).

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       WARNING;WARNING;       INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                    cin(square)(rectangle)(circle)cend;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       WARNING;WARNING;       INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                        cin(" %d", & var)cend;
    #endif // 0 TODO (READ COUT.H)
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       WARNING;WARNING;       INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // COUT_H_INCLUDED
#endif // COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
