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

    /*
        IF THE CONSOLE OUT OBJECT object(cout) IS INITIALIZED TO NULL THEN COUT

        PRINTS TO A CONSOLE. PASSING A NEW FILE OBJECT new(File)(this,...) INTO

        COUT WILL INITIALIZE THAT OBJECT. ALSO A STRING OBJECT USING ITS DEFAULT

        CONSTRUCTOR IS FOR USE WITH COUT/CIN ONLY BECAUSE A GLOBAL FLAG default(x)

        GETS RAISED AND SO CIN/COUT EXPECTS A STRING OBJECT THEN new(String)(this, 0)

        PASSING DELETE IN WILL DELETE THE CIN OR COUT OBJECT. WHAT THAT OBJECT IS

        INITIALIZED TO WILL DETERMINE WHERE COUT PRINTS TO POLYMORPHICALLY. SO NOT

        ONLY DO THE PARAMETERS GET PASSED STRAIGHT INTO printf WHEN ITS NOT A VIRTUAL

        TABLE OBJECT PASSED. WHEN IT IS A VIRTUAL TABLE OBJECT PASSED, THE CLASS

        CONSOLE TABLE, OR FILE TABLE, OR STANDARD TABLE ARE USED BY THE REGISTERED

        CLASS. IN FACTORY C WE REGISTER OUR DATATYPES register(Class) AND drop(Class)

        BEFORE THEY ARE USED IN TOO MANY DYNAMIC OVERLOADS IT PAYS TO RESTRICT HOW

        DYNAMIC IT REALLY IS IN PLACES BEFORE LETTING EVERYTHING TIP OVER. JUST TRY

        TO IMAGINE HOW TALL THE CLASS BUILDER IS WHEN I SAY THAT. BUT ANYWAYS, THIS WAS

        ABOUT COUT. DON'T FORGET THAT IT CAN BE USED TO BUILD A STRING USING STANDARD

        PRINTING TO CONSOLE AT THE SAME TIME, FOR A DEPLOYED PROGRAM, JUST TRAIN YOUR

        CONSOLE WINDOW TO SIT BEHINDD THE OTHER WINDOW, IF ITS THERE AT ALL. (COUT).\
     */
    #ifndef COUT_H_INCLUDED
    #define COUT_H_INCLUDED
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
     * @brief           cout(" ")(object)(".");                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    // // // // // // // // // // // // // // // //
    # define ConsoleOut(Member)ConsoleOut ## Member
    /* * * * * * * * * * */
    #define cout \
    \
        ConsoleOut(Init)()

    #define endl \
    \
        ("\n")

    #define tab \
    \
        ("\t")

    #define objectcout ConsoleOut(Object)
    #define arraycout Array(ConsoleOut)

  #if 0
    #define print ConsoleOut(Base)
  #endif // 0
    /* * * * * * * * * * */
    // // // // // // // // // // // // // // // //

    #define defineConsoleOut( self, type, print, end )\
    \
            register size_t retval = 0;\
    \
             if( self == vtable )\
             { if( default(0) ){ default(0) = false; }\
               retval = ((factPtr*)multimap(false)("VirtualTable")\
             ( # type ))[2]( self ); } else \
    \
             if( self == ftable )\
             { if( default(0) ){ default(0) = false; }\
               retval = ((factPtr*)multimap(false)("FactoryTable")\
             ( # type ))[2]( self ); } else \
    \
             if( self == atable )\
             { if( default(0) ){ default(0) = false; }\
               retval = ((factPtr*)multimap(false)("AdapterTable")\
             ( # type ))[2]( self ); } else \
    \
    \
            if( !instance(self) )\
            {\
             retval = print self end;\
            }\
            else \
            {\
                if( default(0) ){ default(0) = false; }\
              retval = ((factPtr*)multimap(false)(typeid(self))\
              ( #type ))[2]( self );\
            }\
            return retval;


    volatile static Array(Factory) volatile *
      volatile Array(ConsoleOut) = nullptr;

    typedef Factory * StartConsoleOut;

  #if 0
    volatile static Object * volatile * volatile ConsoleOut(Object) = nullptr;
  #endif // DEFINED_STRUCTCLASS_H_(MAYBE)

  #define object(member)object ## member
  #define objectcout ConsoleOut(Object) /// object(cout) = ... ;

    static Factory(00) * ConsoleOut(Init)(void);

    static int ConsoleOut(Base)( const Object *, ... );

    explicit Factory(00) * ConsoleOut(Init)(void)
    {
        if( Array(ConsoleOut) == nullptr )
          { Array(ConsoleOut) = accumulate (Array(Factory))(this,1);

            default(4) = true;
            default(5) = false;
            default(7) = true;

            using template(Array(ConsoleOut))
                (&ConsoleOut(Base), accumulate (Stk(int))(this))cend; }

        ///default(7) = false; //initializer off
        ///default(2) = true;  //halt iterator

                    default(0) = false;
                    default(1) = true;
                    default(2) = true; /*false default*/
                    default(3) = false; /*pri or sec vtable, false sec*/
                    default(4) = true;
                    default(5) = false;
                    default(6) = false;
                    default(7) = false;/*true default*/

                    Skip = 0;

        return using template(Array(ConsoleOut));
    }

    explicit int ConsoleOut(Base)( const Object * self, ... )

    {
        if( String(Flag) )
        {if( instanceof( self, String ) )
         {String(Flag) = false;
            if( ConsoleOut(Object) )
            {
                throw(new(IllegalOperation))
                (this, "ConsoleOutObjectInitialized");
            }
            ConsoleOut(Object) = self;

            return 0;
         }else{throw(new(IllegalOperation))
         (this, "ExpectedStringForConsoleOut\n"
          "when: \t\tnew(String)(this, 0)");}

        } else
        if( instanceof( self, File ) )
        {
            if( ConsoleOut(Object) )
            {
                throw(new(IllegalOperation))
                (this, "ConsoleOutObjectInitialized");
            }
            ConsoleOut(Object) = self;

            return 0;
        } else
        if( self == 0 )
        {
            if( instanceof( ConsoleOut(Object), String ) )
            {if( ConsoleOut(String) ){ ConsoleOut(String) = 0; }}

            delete(ConsoleOut(Object)); // = 0; if delete passed

            return 0;
        } else
        if( !ConsoleOut(Object) )
        {
            typename(ConsoleOut)
            ( self, class(ConsoleTable), _cPrint(), cEnd() );
        } else
        if( ConsoleOut(Object)

           && string(equal)(

            typeid(ConsoleOut(Object)), "String" ) )
        {
            if(!ConsoleOut(String)){ ConsoleOut(String) = ConsoleOut(Object)[0]; }

            default(24) = true;

            register size_type retval = 0;

             if( self == vtable )
             { if( default(0) ){ default(0) = false; }
               retval = (size_type)
               ((factPtr*)multimap(false)("VirtualTable")
             ("class(StandardTable)"))[2]( self ); } else

             if( self == ftable )
             { if( default(0) ){ default(0) = false; }
               retval = (size_type)
               ((factPtr*)multimap(false)("FactoryTable")
             ("class(StandardTable)"))[2]( self ); } else

             if( self == atable )
             { if( default(0) ){ default(0) = false; }
               retval = (size_type)
               ((factPtr*)multimap(false)("AdapterTable")
             ("class(StandardTable)"))[2]( self ); } else

            if( !instance(self) )
            {
              retval = sprintf(ConsoleOut(String), self);// "%s", self
            }
            else
            {
                //if( default(0) ){ default(0) = false; }
              retval = (size_type)
              ((factPtr*)multimap(false)(typeid(self))
              ("class(StandardTable)"))[2]( self );
            }

            default(24) = false;
            return retval;
        } else//
        if( ConsoleOut(Object)

           && string(equal)(

            typeid(ConsoleOut(Object)), "File" ) )
        {
            typename(ConsoleOut)
            ( self, class(FileTable),

              _fPrint(ConsoleOut(Object)), fEnd() );
        }
    }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        CONSTRUCTION;        CONSTRUCTION;        CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                         Settings:

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
    /**                         printf:
    __mingw_stdio_redirect__
    int printf (const char *__format, ...)
    {
      register int __retval;
      __builtin_va_list __local_argv;
      __builtin_va_start( __local_argv, __format );
      __retval = __mingw_vprintf( __format, __local_argv );
      __builtin_va_end( __local_argv );
      return __retval;
    }

    TODO:

        add the case needed for the parameters passed into cout

        to pass straight thru the function into the printf function

        being called inside cout. this has been an endeavor and if

        i am going to submit or offer my precious Factory C to

        be made a part of GCC then maybe i can relax and let some

        one else do something for once, (that includes getting

        standard to work properly with cout). c05(). but if anything

        is not fully implemented your looking at it, so:


          #1) if(!default(0)){default(0)=true;ControlSlot[0][0]=&self;}


          #2)(call the function that needs all the parameters passed straight in)


          #3) default(0) = false;


          and inside the factory function thats encapsulated:


          #1) stack(control)(); //(from Stack.h)


          #2) Object * obj = stack(arg)(Object*);

            //... (as many times as needed)


          now im used to working in my own functions and i can do

          everything but as soon as im trying to work inside printf

          i get a problem, i don't have the implementation to

          the meat and potatoes of the printf (the implementation)

          so its hard for me to get in there with my pointers

          and it just requires another case similar to control()

          from Control/Stack.h is all. (then the only thing is

          making standard work for me/cout/cin).


    DONE: now that i am finished, only cin needs to be able to have

          all its parameters passed into scanf is all. i don't have

          access to the scanf family, i will look online and see if

          i cant find anything.
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       WARNING;WARNING;       INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
         cout(square)(", ")(rectangle)(", ")(circle)(".")cend;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       WARNING;WARNING;       INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                       cout("%d\n", var)cend;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
       WARNING;WARNING;       INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #endif // COUT_H_INCLUDED
#endif // COMMAND_CONTROL_FACTORY_TEMPLATE__STRATEGIC_COMMAND__01
