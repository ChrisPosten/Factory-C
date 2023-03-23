#ifndef STRUCTCLASS_H_INCLUDED
#define STRUCTCLASS_H_INCLUDED
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
[ 2 ]primary;
#endif // TAG
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    initial preparation                    */
    #include "../Object/Object.h"
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*        OOC STRUCTCLASS PATTERN (OBJECT-ORIENTED C)        */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**||  THE FACTORY C VIRTUAL TABLE OBJECT INTERFACE BASE  || *
     *      AND INTERFACE BASES OF THE FACTORY TABLE CLASS       *
     *          INTERFACE HEAP FOR THE FACTORY OBJECT            *
     *                                                           *
     *              by Willy (11/06/2018)(01/13/2021)            *
     *                       (12/15/2021)(12/24/2021)            *
     *                       (12/25/2021)(01/20/2022)            *
     *                       (02/14/2022)(04/08/2022)            *
     *                       (04/20/2022)(09/11/2022)            *
     * ||                    (11/06/2022)(12/24/2022)         ||**/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*        OOC STRUCTCLASS PATTERN (OBJECT-ORIENTED C)        */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                       //(PROGRAM TO THE INTERFACE HEAP)(Factory C)
    struct class { }; // ;

    /**+---------------------------------+
     * @brief struct class interface     |
     * +---------------------------------+
     *///(basic) virtual table object interface (OOC)
    # define classVirtualTable(Member)classVirtualTable ## Member
    static cstring class    (VirtualTable)(Type)(void);   ///#1
    typedef struct class    (VirtualTable)/*DEFAULT (BASIC)*/
    {   /// /// /// ///     (non-automatic memory handling)
        typePtr type;//[0]   //+typeid(obj)+instance(obj) ;
        /// /// /// ///
        ctorPtr init;//[1]   //+new (Class)(this, ...) ;
        /// /// /// ///
        dtorPtr dtor;//[2]   //+delete(obj)+destroy() ;
        /// /// /// ///
    }class       (VirtualTable);//+virtual(obj,Class)->meth(this,...) ;
  explicit/*VIRTUAL TABLE (BASIC) ASSIGNED INTERFACE FOR OBJECT*/
    cstring class(VirtualTable)(Type)(void)          ///(Virtual C)
    { return "class(VirtualTable)"; }//+instanceof(obj, Class)  ;

    /**+---------------------------------+
     * @brief struct class registrations |
     * +---------------------------------+
     *///(advanced) factory table class interface heap (Factory C)
    # define classFactoryTable(Member)classFactoryTable ## Member
    static cstring class    (FactoryTable)(Type)(void);  ///#2
    typedef struct class    (FactoryTable)/*PRIMARY (ADVANCED)*/
    {   /// /// /// ///     (dynamic instances)
        typePtr type;//[0]   //(class-level overload)
        /// /// /// ///
        whatPtr ctor;//[1]   //+factory ("Class") (this, ...) ;
        /// /// /// ///
        hlprPtr init;//[2]   //UNUSED (see: Object.h class(Helper))
        /// /// /// ///
    }class       (FactoryTable);
  explicit/*FACTORY TABLE CLASS (PRIMARY) DYNAMIC INSTANCES TABLE*/
    cstring class(FactoryTable)(Type)(void)          ///(Factory C)
    { return "class(FactoryTable)"; }//((typePtr*)reg)[0]() ;



    # define classAdapterTable(Member)classAdapterTable ## Member
    static cstring class    (AdapterTable)(Type)(void);  ///#3
    typedef struct class    (AdapterTable)  /*SECONDARY (ADVANCED)*/
    {   /// /// /// ///     (dynamic object-to-adapter swap)
        typePtr type;//[0]   //+
        /// /// /// ///
        ctorPtr init;//[1]   //+union(true)("Class","Adapter")(...) ;
        /// /// /// ///
        intrPtr intr;//[2]   //+union(false)("Class")(...) ;
        /// /// /// ///
    }class       (AdapterTable);//(always uses a variant)
  explicit/*FACTORY TABLE CLASS (SECONDARY) OBJECT ADAPTER TABLE*/
    cstring class(AdapterTable)(Type)(void)          ///(Adapter C)
    { return "class(AdapterTable)"; }//WeatherStation(AdapterTable)



    # define classCompareTable(Member)classCompareTable ## Member
    static cstring class    (CompareTable)(Type)(void);   ///#4
    typedef struct class    (CompareTable)/*  */
    {   /// /// /// ///     (dynamic comparison)
        typePtr type;//[0]   //
        /// /// /// ///
        compPtr eqls;//[1]   //+equal(a, b) ;
        /// /// /// ///
        compPtr grtr;//[2]   //+greater(a, b)+less(a, b) ;
        /// /// /// ///
    }class       (CompareTable);
  explicit/*FACTORY TABLE CLASS (TERTIARY) COMPARABLE TABLE*/
    cstring class(CompareTable)(Type)(void)          //(Factory C)
    { return "class(CompareTable)"; }



    # define classConsoleTable(Member)classConsoleTable ## Member
    static cstring class    (ConsoleTable)(Type)(void);  ///#5
    typedef struct class    (ConsoleTable)  /*IO FACTORY*/
    {   /// /// /// ///     (dynamic console input-output)
        typePtr type;//[0]   //(the cin/cout overload table(s))
        /// /// /// ///
        factPtr inpt;//[1]   //+cin(a)(b)(c)cend;
        /// /// /// ///
        factPtr outp;//[2]   //+cout(a)(", ")(b)(", ")(c)(".")endl cend;
        /// /// /// ///
    }class       (ConsoleTable);  ///#1 (IO)
  explicit/*FACTORY TABLE CLASS INPUT OUTPUT TABLE*/
    cstring class(ConsoleTable)(Type)(void)
    { return "class(ConsoleTable)"; }



    # define classStandardTable(Member)classStandardTable ## Member
    static cstring class    (StandardTable)(Type)(void); ///#6
    typedef struct class    (StandardTable) /*IO FACTORY*/
    {   /// /// /// ///     (dynamic standard input-output)
        typePtr type;//[0]   //(the cin/cout overload table(s))
        /// /// /// ///
        factPtr inpt;//[1]   //object(cout) = new(String)(this, 101);
        /// /// /// ///
        factPtr outp;//[2]   //cout("...") cend;
        /// /// /// ///
    }class       (StandardTable); ///#2 (IO)
  explicit/*FACTORY TABLE CLASS INPUT OUTPUT TABLE*/
    cstring class(StandardTable)(Type)(void)
    { return "class(StandardTable)"; }



    # define classFileTable(Member)classFileTable ## Member
    static cstring class    (FileTable)(Type)(void);    ///#7
    typedef struct class    (FileTable)     /*IO FACTORY*/
    {   /// /// /// ///     (dynamic file input-output)
        typePtr type;//[0]   //(the cin/cout overload table(s))
        /// /// /// ///
        factPtr inpt;//[1]   //cin(new(File)(this,0,"",""))("...")cend;
        /// /// /// ///
        factPtr outp;//[2]   //cout(new(File)(this,0,"",""))("...")cend;
        /// /// /// ///
    }class       (FileTable);     ///#3 (IO)
  explicit/*FACTORY TABLE CLASS INPUT OUTPUT TABLE*/
    cstring class(FileTable)(Type)(void)
    { return "class(FileTable)"; }



    # define classStrategyHeap(Member)classStrategyHeap ## Member
    static cstring class    (StrategyHeap)(Type)(void);  ///#8
    typedef struct class    (StrategyHeap) /*INFO HEAP TABLE*///2col
    {   /// /// /// ///     (low-overload table)
        typePtr type;//[0]   //(datatype-level overload)
        /// /// /// ///     (strategic function table)
        methPtr find;//[1]   //
        /// /// /// ///
        tblePtr list;//[2]   //(known to have variants)
        /// /// /// ///
    }class       (StrategyHeap); ///#1 (SUB) (DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(StrategyHeap)(Type)(void)/*For Strategy Type*/
    { return "class(StrategyHeap)"; }



    # define classPolymorphHeap(Member)classPolymorphHeap ## Member
    static cstring class    (PolymorphHeap)(Type)(void);  ///#9
    typedef struct class    (PolymorphHeap)/*INFO HEAP TABLE*///3col
    {   /// /// /// ///     (multiple inheritance table)
        typePtr type;//[0]   //
        /// /// /// ///     (dynamic comparison)
        methPtr find;//[1]   //+is_polymorphic(a, b) ;
        /// /// /// ///
        tblePtr list;//[2]   //
        /// /// /// ///
    }class       (PolymorphHeap);///#2 (SUB) (DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(PolymorphHeap)(Type)(void)/*For Polymorph Type*/
    { return "class(PolymorphHeap)"; }



    # define classVirtualHeap(Member)classVirtualHeap ## Member
    static cstring class    (VirtualHeap)(Type)(void);   ///#10
    typedef struct class    (VirtualHeap)/*INFO HEAP TABLE*///3col
    {   /// /// /// ///     (complex object/runtime class table #1)
        typePtr type;//[0]   //(interface-level overload)
        /// /// /// ///     (high-overload table)
        methPtr find;//[1]   //+((cast)(*function(obj, "meth")))(this,...) ;
        /// /// /// ///     (runtime override table)
        tblePtr list;//[2]   //+override(true)(obj,"")(obj,"");
        /// /// /// ///
    }class       (VirtualHeap);  ///#3 (SUB) (DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(VirtualHeap)(Type)(void)           ///(Complex C)
    { return "class(VirtualHeap)"; }//+meth(obj);(High Overload)



    # define classComplexHeap(Member)classComplexHeap ## Member
    static cstring class    (ComplexHeap)(Type)(void);   ///#11
    typedef struct class    (ComplexHeap)/*INFO HEAP TABLE*///4col
    {   /// /// /// ///     (complex object/runtime class table #2)
        typePtr type;//[0]   //(class builder helper primary)
        /// /// /// ///
        methPtr find;//[1]   //+(*(int*)complex(obj, "a")) = ...;
        /// /// /// ///
        tblePtr list;//[2]   //TODO: #define cmplx(obj, "a", int)
        /// /// /// ///
    }class       (ComplexHeap);  ///#4 (SUB) (DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(ComplexHeap)(Type)(void)           ///(Complex C)
    { return "class(ComplexHeap)"; }// cmplx(obj, "a", int) = ...;



    # define classControlHeap(Member)classControlHeap ## Member
    static cstring class    (ControlHeap)(Type)(void);   ///#12
    typedef struct class    (ControlHeap)/*INFO HEAP TABLE*///3col
    {   /// /// /// ///     (dynamic access to commands)
        typePtr type;//[0]   //(template arrays table #1)
        /// /// /// ///
        methPtr find;//[1]   //+multimap(true)(typeid(obj))
        /// /// /// ///
        tblePtr list;//[2]   // ("class(ControlHeap)")("...")  ;
        /// /// /// ///
    }class       (ControlHeap);  ///#5 (SUB) (DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*///MAP("...")
    cstring class(ControlHeap)(Type)(void)///()
    { return "class(ControlHeap)"; }//const(template(array)) table



    # define classBuilderHeap(Member)classBuilderHeap ## Member
    static cstring class    (BuilderHeap)(Type)(void);   ///#13
    typedef struct class    (BuilderHeap)/*INFO HEAP TABLE*///3col
    {   /// /// /// ///     (dynamic access to factory functions)
        typePtr type;//[0]   //(template arrays table #2)
        /// /// /// ///
        methPtr find;//[1]   //+multimap(true)(typeid(obj))
        /// /// /// ///
        tblePtr list;//[2]   // ("class(BuilderHeap)")(...)  ;
        /// /// /// ///
    }class       (BuilderHeap);  ///#6 (SUB) (DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(BuilderHeap)(Type)(void)///()
    { return "class(BuilderHeap)"; }//const(template(array)) table



    # define classSecurityHeap(Member)classSecurityHeap ## Member
    static cstring class    (SecurityHeap)(Type)(void);  ///#14
    typedef struct class    (SecurityHeap)/*INFO HEAP TABLE*///1col
    {   /// /// /// ///     (restriction-on-dynamic)
        typePtr type;//[0]   //(security table "key set")
        /// /// /// ///
        methPtr find;//[1]   //+map(...) ; (for return 0)
        /// /// /// ///
        tblePtr list;//[2]   //(possible variants)
        /// /// /// ///
    }class       (SecurityHeap); ///#7 (SUB) (RESTRICT DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(SecurityHeap)(Type)(void)         ///(Security C)
    { return "class(SecurityHeap)"; }/*information hiding*/



    # define classSingletonTable(Member)classSingletonTable ## Member
    static cstring class    (SingletonTable)(Type)(void); ///#15
    volatile typedef struct class (SingletonTable)
    {   /// /// /// ///     (non-virtual table object)
        typePtr type;//[0]   //
        /// /// /// ///
        objtPtr self;//[1]   //
        /// /// /// ///
        intrPtr intr;//[2]   //
        /// /// /// ///
    }class       (SingletonTable);
  explicit/*OBJECT INFORMATION TABLE*/
    cstring class(SingletonTable)(Type)(void)
    { return "class(SingletonTable)"; }



    # define classSubjectTable(Member)classSubjectTable ## Member
    static cstring class    (SubjectTable)(Type)(void);   ///#16
    typedef struct class    (SubjectTable)
    {   /// /// /// ///     (complex object/runtime class helper)
        typePtr type;//[0]   //
        /// /// /// ///
        objtPtr self;//[1]   //+class(builder)(auto)
        /// /// /// ///
        intrPtr intr;//[2]   // (typeid(obj))(& obj) ;
        /// /// /// ///
    }class       (SubjectTable);
  explicit/*CLASS BUILDER COMPLEX UPDATE TABLE*/
    cstring class(SubjectTable)(Type)(void)///(Complex C)
    { return "class(SubjectTable)"; }



    # define classBasicsHeap(Member)classBasicsHeap ## Member
    static cstring class    (BasicsHeap)(Type)(void);     ///#17
    typedef struct class    (BasicsHeap)
    {   /// /// /// ///     (strategy variant)
        typePtr type;//[0]   //
        /// /// /// ///
        methPtr find;//[1]   //
        /// /// /// ///
        tblePtr list;//[2]   //
        /// /// /// ///
    }class       (BasicsHeap);
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(BasicsHeap)(Type)(void)
    { return "class(BasicsHeap)"; }//#X (SUB)



    # define classLibraryHeap(Member)classLibraryHeap ## Member
    static cstring class    (LibraryHeap)(Type)(void);    ///#18
    typedef struct class    (LibraryHeap)
    {   /// /// /// ///     (strategy variant)
        typePtr type;//[0]   //
        /// /// /// ///
        methPtr find;//[1]   //+
        /// /// /// ///
        tblePtr list;//[2]   //+
        /// /// /// ///
    }class       (LibraryHeap);
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(LibraryHeap)(Type)(void)
    { return "class(LibraryHeap)"; }//#X (SUB)



    # define classFactoryHeap(Member)classFactoryHeap ## Member
    static cstring class    (FactoryHeap)(Type)(void);    ///#19
    typedef struct class    (FactoryHeap)
    {   /// /// /// ///     (complex object/runtime class accessory)
        typePtr type;//[0]   //(factory table function heap) -or-
        /// /// /// ///
        methPtr find;//[1]   //(could be a security variant)
        /// /// /// ///
        tblePtr list;//[2]   //(builder needs to be modified if so)
        /// /// /// ///
    }class       (FactoryHeap);  ///#8 (SUB) (DYNAMIC)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(FactoryHeap)(Type)(void)           ///(Complex C)
    { return "class(FactoryHeap)"; }//#8 (SUB)



    # define classOverloadHeap(Member)classOverloadHeap ## Member
    static cstring class    (OverloadHeap)(Type)(void);   ///#20
    typedef struct class    (OverloadHeap)
    {   /// /// /// ///     (strategy variant)
        typePtr type;//[0]   //
        /// /// /// ///
        methPtr find;//[1]   //
        /// /// /// ///
        tblePtr list;//[2]   //
        /// /// /// ///
    }class       (OverloadHeap);
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(OverloadHeap)(Type)(void)
    { return "class(OverloadHeap)"; }//#X (SUB)



    # define classCommandArray(Member)classCommandArray ## Member
    static cstring class    (CommandArray)(Type)(void);  ///#21
    typedef struct class    (CommandArray)
    {   /// /// /// ///     (demo)
        typePtr type;//[0]   //
        /// /// /// ///
        commPtr at;  //[1]   //+array
        /// /// /// ///
        sizeTyp size;//[2]   //+
        /// /// /// ///
    }class       (CommandArray);
  explicit/*FACTORY TABLE CLASS VECTOR METHOD TABLE*/
    cstring class(CommandArray)(Type)(void)
    { return "class(CommandArray)"; }//#1 (SUB INDEX)



    # define classFactoryArray(Member)classFactoryArray ## Member
    static cstring class    (FactoryArray)(Type)(void);  ///#22
    typedef struct class    (FactoryArray)
    {   /// /// /// ///     (demo)
        typePtr type;//[0]   //
        /// /// /// ///
        commPtr at;  //[1]   //+array
        /// /// /// ///
        sizeTyp size;//[2]   //+
        /// /// /// ///
    }class       (FactoryArray);// *(((commPtr*)reg)[1] (index)) =
  explicit/*FACTORY TABLE CLASS VECTOR METHOD TABLE*/
    cstring class(FactoryArray)(Type)(void)
    { return "class(FactoryArray)"; }//#2 (SUB INDEX)



    # define classTemplateHeap(Member)classTemplateHeap ## Member
    static cstring class    (TemplateHeap)(Type)(void);    ///#23
    typedef struct class    (TemplateHeap)//(#24)
    {   /// /// /// ///     (strategy variant)
        typePtr type;//[0]   //()
        /// /// /// ///
        methPtr find;//[1]   //+
        /// /// /// ///
        tblePtr list;//[2]   //+
        /// /// /// ///
    }class       (TemplateHeap);
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(TemplateHeap)(Type)(void)
    { return "class(TemplateHeap)"; }//#X (SUB)



    # define classAdapterHeap(Member)classAdapterHeap ## Member
    static cstring class    (AdapterHeap)(Type)(void);  ///#24
    typedef struct class    (AdapterHeap)  /**/
    {   /// /// /// ///     (reveals what objects are adapters)
        typePtr type;//[0]   //(type info table)
        /// /// /// ///
        methPtr find;//[1]   //+type_info(adp)
        /// /// /// ///
        tblePtr list;//[2]   //+new(TypeInfo)(this,...)
        /// /// /// ///
    }class       (AdapterHeap);//(adaptee info table)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(AdapterHeap)(Type)(void)          ///(Subject C)
    { return "class(AdapterHeap)"; }///#9


        /// ... (open for extension)


   # define passSecurityHeap(Member)passSecurityHeap ## Member
    static cstring pass(SecurityHeap)(Type)(void);      ///#25
    typedef struct pass(SecurityHeap)/*information hiding*/
    {struct class      (SecurityHeap) base;
        /// /// /// ///      (pass number for class interface heap)
        typePtr type;//[3]   //+pass number interface type id (for)
        /// /// /// ///      (security set for sub-factory methods)
        strgPtr strg;//[4]
    }pass(SecurityHeap);     //+registration list
   explicit /// /// ///
    cstring pass(SecurityHeap)(Type)(void)         ///(Security C)
    {return"pass(SecurityHeap)";}//(if( a[0] = '0' ))

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           */
    /**+---------------------------------+
     * @brief struct class typename(s)   |
     * +---------------------------------+
     *///STRUCTCLASS PATTERN TEMPLATE (Factory C)
  #define defineClassTable(\
  \
      template, par1Ptr_par1, par2Ptr_par2, par2Ptr_par3 )/*, Table)*/\
    static cstring class    (template)(Type)(void);/*#number*/\
    typedef struct class    (template)/**information**/\
    {   /*/ /// /// /*/   /*(information)*/\
        par1Ptr_par1;/*[0]*/\
        /*/ /// /// /*/\
        par1Ptr_par2;/*[1]*/\
        /*/ /// /// /*/\
        par2Ptr_par3;/*[2]*/\
        /*/ /// /// /*/\
    }class       (template) ;\
  explicit/*INFORMATION*//**#number**/\
    cstring class(template)(Type)(void)\
    { return "class(" # template ")"; }*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* note:
                             class(Heap)
                             class(Table)
                             class(Array)

       todo: class(ObjectHeap)  //(strategy heap)
             class(FactoryHeap) //(Info.h implementations)



     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

  #define definePassTable(\
  \
      template )\
    static cstring pass(template)(Type)(void);\
    typedef struct pass(template)\
    {struct class      (template) base;\
        /*/ /// /// /*/\
        typePtr type;/*/[3]   //+/*/\
        /*/ /// /// /*/\
        strgPtr strg;/*/[4]   //+/*/\
    }pass(template);     /*/+/*/\
   explicit /*/ /// /*/\
    cstring pass(template)(Type)(void)\
    {return"pass(" # template ")";}/*/(if( a[0] = '0' ))/*/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND;POST;       COMMAND;POST;       COMMAND;POST;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
       # define passVirtualTable(Member)\
    passVirtualTable ## Member
    typename (PassTable)(VirtualTable) ;

   # define passFactoryTable(Member)\
    passFactoryTable ## Member
    typename (PassTable)(FactoryTable) ;

   # define passAdapterTable(Member)\
    passAdapterTable ## Member
    typename (PassTable)(AdapterTable) ;

   # define passCompareTable(Member)\
    passCompareTable ## Member
    typename (PassTable)(CompareTable) ;

   # define passConsoleTable(Member)\
    passConsoleTable ## Member
    typename (PassTable)(ConsoleTable) ;

   # define passStandardTable(Member)\
    passStandardTable ## Member
    typename (PassTable)(StandardTable) ;

   # define passFileTable(Member)\
    passFileTable ## Member
    typename (PassTable)(FileTable) ;

   # define passStrategyHeap(Member)\
    passStrategyHeap ## Member
    typename (PassTable)(StrategyHeap) ;

   # define passPolymorphHeap(Member)\
    passPolymorphHeap ## Member
    typename (PassTable)(PolymorphHeap) ;

   # define passVirtualHeap(Member)\
    passVirtualHeap ## Member
    typename (PassTable)(VirtualHeap) ;
#if 0
   # define passComplexHeap(Member)\
    passComplexHeap ## Member
    typename (PassTable)(ComplexHeap) ;
#endif // 0
   # define passBuilderHeap(Member)\
    passBuilderHeap ## Member
    typename (PassTable)(BuilderHeap) ;

   # define passControlHeap(Member)\
    passControlHeap ## Member
    typename (PassTable)(ControlHeap) ;

   # define passSingletonTable(Member)\
    passSingletonTable ## Member
    typename (PassTable)(SingletonTable) ;

   # define passFactoryHeap(Member)\
    passFactoryHeap ## Member
    typename (PassTable)(FactoryHeap) ;
  #endif // 0

        /// ... (open for extension)


    /* note: only 1 pass number per compile-time factory table
             class by default here (builder exception).

       important: this interface should (mostly) be of the
                  builder extension. an interface does not have
                  to be builder to be a runtime object, just if
                  it uses a sub-factory method. all interfaces
                  become runtime objects when there is a builder
                  factory method in place of the class factory
                  method (for deallocating).
     */
  #if 0
   # define passComplexHeap(Member)passComplexHeap ## Member
    static cstring pass(ComplexHeap)(Type)(void);
    typedef struct pass(ComplexHeap)
    {struct class      (ComplexHeap) base;
        /// /// /// ///(pass number for all private data members)
        typePtr type;//[3]   //+ use: break(true)( Class(Complex)(ID) )
        /// /// /// ///
        strgPtr strg;//[4]
    }pass(ComplexHeap);      //+ on:  *(type*)complex(self, "var") ;
   explicit /// /// ///
    cstring pass(ComplexHeap)(Type)(void)///(Security C)
    {return"pass(ComplexHeap)";}//(if( a[0] = '0' ))
  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND; POST;      COMMAND; POST;     COMMAND; POST;  ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *  THIS IS THE STRUCTURE THATS USED BY THE FACTORY TABLE    *
     *                                                           *
     *  TO HOOK ONTO A CLASS. THIS STRUCTURE MAY BE EXTENDED     *
     *                                                           *
     *  TO SUPPORT THINGS LIKE A LENGTH VARIABLE HIDDEN WITHIN   *
     *                                                           *
     *  THE EXTENDED VERSIONS MEMORY THAT THE IMPLEMENTATION     *
     *                                                           *
     *  OF THE CLASS FACTORY METHOD WOULD USE (LIKE A CLASS-     *
     *                                                           *
     *  LEVEL SINGLETON-LIST).                                   *
     *                                                           *
     *                                                           *
     *  THIS HAS LATER BEEN GIVEN THE EXTENSION OF BUILDER       *
     *                                                           *
     *  (BUILDER EXTENSION) NOT A CLASS-LEVEL EXTENSION AS MUCH. *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND; POST;      COMMAND; POST;     COMMAND; POST;  ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                    implement base type                    */
    /**+---------------------------------+
     * @brief struct class factory method|
     * +---------------------------------+
     *///(advanced) class factory method (OOC) (Factory C)
   # define classFactoryMethod(Member)classFactoryMethod ## Member
    static cstring class(FactoryMethod)(Type)(void);
    typedef struct class(FactoryMethod)     ///Class Factory Method
    { /// /// /// ///
      cstring () (*typeid)( void );   //[0]
      /// /// /// ///
      Object  *  (*search)( cstring );//[1]
      /// /// /// ///
      void       (*setup) ( void );   //[2]
      /// /// /// ///
      void       (*abort) ( void );   //[3]
      /// /// /// ///
      Object * registrations;         //[4]    +primary("class")[4]
      /// /// /// ///
    }class(FactoryMethod);         ///+
  explicit//
    cstring class(FactoryMethod)(Type)(void)
    {return"class(FactoryMethod)";}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         * @brief         volatile type function             *
         * - - this is used by the class factory method - -  *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
   # define volatile(member)volatile ## member
    volatile static cstring volatile volatile(type) = "";
    volatile static cstring volatile volatile(Type) (void)

        {return volatile(type);}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 1
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  typename macros for the class hooks               *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

        #define  defineType(Class)\
        \
            Class(Type)(void) ; \
          explicit cstring Class(Type)(void){return #Class;}


        #define  defineCtor(Class)\
        \
            Class(Ctor)(void) ; \
          explicit ctorPtr Class(Ctor)(void){return new(Class);}


        #define  defineDtor(Class)\
        \
            Class(Dtor)(Class *) ; \
          explicit void Class(Dtor)


        #define  defineSetup(Class)\
        \
            Class(Setup)(void) ; \
          explicit void Class(Setup)(void)


        #define  defineAbort(Class)\
        \
            Class(Abort)(void) ; \
          explicit void Class(Abort)(void)

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  *new* PassNumber Interface Type ID (ADVANCED)     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

        #define  definePassNumber(Class, Interface)\
        \
            /*static cstring*/ Class(Interface)(ID)();\
        \
            volatile static string * volatile \
        \
                Class(Interface)(Pass) = nullptr;\
        \
            explicit cstring Class(Interface)(ID)()\
        \
            { TypeID(PassNumber)(& Class(Interface)(Pass),\
        \
              & Class(Interface)(Pass)); /* *default*
                pass number address of id object */ \
              return (*Class(Interface)(Pass)); }

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 static cstring typename(Type)(Class);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 static ctorPtr typename(Ctor)(Class);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
           static void typename(Dtor)(Class)(Class * self){}
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 static void typename(Setup)(Class) {}
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 static void typename(Abort)(Class) {}
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  typename for class factory method                 *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

        #define defineClassFactoryMethod(Class, First, Last)\
        \
            Class (HeapSearch) (cstring);\
        \
          explicit Interface Class (HeapSearch) (cstring key)\
        \
          {   if(key == 0){return 0;}\
        \
              Interface iterator[3]  =  { &volatile(Type), 0, 0 };\
        \
              size_type i;                 volatile(type) = key;\
        \
              Interface * p  =  Search(Interface)(\
        \
                Class (InterfaceHeap), iterator, & i, First, Last );\
        \
              if ((p)) { return ((*p)) ; } else { return 0; }  }\
        \
          static void Class(Setup)(void);\
        \
          static void Class(Abort)(void);\
        \
          static class(FactoryMethod) /**THIS STRUCTURE IS EXTENDIBLE**/\
        \
            Class(Method) = \
        \
          { &class(FactoryMethod)(Type), &Class(HeapSearch), \
        \
            &Class(Setup), &Class(Abort), Class (InterfaceHeap) };

/**CLASS FACTORY METHOD WILL BE EXTENDED INTO BUILDER FACTORY METHOD**/

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  typename for sub-factory method(s)                *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

        #define defineSubFactoryMethod(Class, Type, Name, First, Last)\
        \
            Class (Name##Search) (cstring);\
        \
          explicit Type * Class (Name##Search) (cstring key)\
        /*structured datatype always using a .key (neat trick)*/\
          {   if(key == 0){return 0;}\
        \
              Type slot[1]; slot[0].key  =  key  ;\
        \
              size_type  i;\
        \
              Type * p  =  Search(Type)(\
        \
                Class (Name##Heap), slot[0], & i, First, Last );\
        \
              if ((p)) { return ((p)) ; } else { return 0; }  }

    #endif // 1
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
    static Type * typename (SubFactoryMethod)(Class,Type,Name,0,9);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
      static Interface typename (ClassFactoryMethod) (Class,0,0);
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
  #if 0
    #define define define //good work! (wont compile) amazing idea tho

    #define FactoryMethod  (ClassFactoryMethod)
  #else
    #define sub(Member) (Sub##Member)

    #define defineclass(member)defineclass ## member

    #define defineclassFactoryMethod
  #endif // _FACTORY_METHOD______________CONSTRUCTION____________01
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
    static Type * typename sub(FactoryMethod)(Class,Type,Name,0,9);
    #endif // MIGHT_NOT_WORK_ATM 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
    static class(Interface) * typename(class(FactoryMethod)) (Class,0,0);
    #endif // MIGHT_NOT_WORK_ATM 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
          static Interface typename FactoryMethod (Class,0,0);
    #endif // MIGHT_NOT_WORK_ATM (DEFINATELY) define define define X 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  construction macro for the class factory method   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

        #define  static(Class)\
        \
            Class (HeapSearch) _static

        #define _static( interface ) ( # interface ) __static

        #define _static //for class factory method only (hope)

        #define __static( info ) ( # info )

        #define __static //undefines the other...

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
               static(Vector(int))(class(FactoryTable));
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  construction macro for the factory table index    *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
  #if 1
    #define multidex(flag) multimap(flag) dex01

    #define dex01(class) (class) dex02

    #define dex02(interface) (#interface)
  #else
    #define multidex(Type) ( (Type*)FactoryTable(MultiMap)

    #define flag01(flag) (flag) dex01

    #define dex01(class) (class) dex02

    #define dex02(interface) (#interface) )
  #endif // 0
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
              multidex(true)("")(class(FactoryTable))("") ;
    #endif // DEFINED 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
         multidex(Strategy)(true)("")(class(FactoryTable))("") ;
    #endif // DEFINED 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
           multidex(methPtr)("")(class(VirtualHeap))[1]("")
    #endif // DEFINED 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         CONSTRUCTION;       CONSTRUCTION;       CONSTRUCTION;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND; POST;      COMMAND; POST;     COMMAND; POST;  ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    # define Class(Member)Class ## Member

    typedef Object *     Class; //
    ///{
        typedef     struct class(VirtualTable) *
                                 Class(VirtualTable);
        typedef     ctorPtr      Constructor;
        typedef     struct class(FactoryMethod) * Class(FactoryMethod) ;
  #if 0
        typedef     Object *     Adapter; //
  #endif // ADAPTER_ARRAY_DEFINED
        typedef     cstring      ClassName;//
  #if 1
        typedef     Object * * * RegistrationList;///ClassInterfaceHeap
        typedef     Object * *   Registration; ///

        typedef     Object * * * RegList;///         ClassInterfaceHeap
        typedef     Object * *   Reg; ///
  #endif // OLD_REG_LIST_DEFINITION___GOOD_WORK___
  #if 0
        typedef     Object * * * InterfaceHeap;
  #endif // BUILDER_HEAP___IMPLEMENTED___
        typedef     Object * *   Interface; ///      ClassInterfaceHeap
  #if 0
        typedef     Object * *   class(InterfaceHeap);// *
  #endif // BUILDER___IMPLEMENTED___
  #if 0
        typedef     Object *     class(Interface);// *
  #endif // CONCRETE_CLASS_IMPLEMENTED
        typedef     Object * * * Class(InterfaceHeap);
        typedef     Object * *   Class(Interface);///ClassInterfaceHeap
    ///}

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND; POST;      COMMAND; POST;     COMMAND; POST;  ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                implement builder extension                */
   # define builder(member)builder ## member
    volatile typename(Pair)(Class, ClassVirtualTable);
    volatile static Object * volatile volatile(heap) = 0;

    /**+---------------------------------+
     * @brief builder factory method     |
     * +---------------------------------+
     *///(complex) builder factory method (Complex C)
    # define builderFactoryMethod(Member)\
        builderFactoryMethod ## Member
    static cstring builder(FactoryMethod)(Type)(void);
    typedef struct builder(FactoryMethod)
        /// /// /// ///
    {   struct class(FactoryMethod)    base;//[0][1] + [2][3] + [4]?
        /// /// /// ///
        ClassVirtualTable              intr;//[5]
        /// /// /// ///
    }builder(FactoryMethod);
  explicit
    cstring builder(FactoryMethod)(Type)(void)
    {return"builder(FactoryMethod)";}

    /**+---------------------------------+
     * @brief builder registrations      |
     * +---------------------------------+
     *///(complex) builder heaps (Complex C)
  #define defineBuilder(template)\
  \
    static cstring builder(template)(Type)(void); /** ///#* */\
    typedef struct builder(template)\
    /*  /// /// /// ///  */\
    {   struct class(template)         base;/* //[0][1][2] */\
    /*  /// /// /// ///  */\
        ClassVirtualTable              intr;/* //[3] (interface)*/\
    /*  /// /// /// ///  */\
    }builder(template);/* // */\
  explicit \
    cstring builder(template)(Type)(void)\
    {return"builder(" # template ")";}


    # define builderStrategyHeap(Member)\
        builderStrategyHeap ## Member
    typename (Builder) (StrategyHeap)  ; ///#1

    # define builderPolymorphHeap(Member)\
        builderPolymorphHeap ## Member
    typename (Builder) (PolymorphHeap) ; ///#2

    # define builderVirtualHeap(Member)\
        builderVirtualHeap ## Member
    typename (Builder) (VirtualHeap)   ; ///#3

    # define builderComplexHeap(Member)\
        builderComplexHeap ## Member
    typename (Builder) (ComplexHeap)   ; ///#4

    # define builderControlHeap(Member)\
        builderControlHeap ## Member
    typename (Builder) (ControlHeap)   ; ///#5

    # define builderBuilderHeap(Member)\
        builderBuilderHeap ## Member
    typename (Builder) (BuilderHeap)   ; ///#6

    # define builderSecurityHeap(Member)\
        builderSecurityHeap ## Member
    typename (Builder) (SecurityHeap)  ; ///#7

    # define builderFactoryHeap(Member)\
        builderFactoryHeap ## Member
    typename (Builder) (FactoryHeap)   ; ///#8

    # define builderAdapterHeap(Member)\
        builderAdapterHeap ## Member
    typename (Builder) (AdapterHeap)   ; ///#9



    # define builderCommandArray(Member)\
        builderCommandArray ## Member
    typename (Builder) (CommandArray)  ;  ///#1

    # define builderFactoryArray(Member)\
        builderFactoryArray ## Member
    typename (Builder) (FactoryArray)   ; ///#2



    # define builderBasicsHeap(Member)\
        builderBasicsHeap ## Member
    typename (Builder) (BasicsHeap)   ;   ///#1

    # define builderLibraryHeap(Member)\
        builderLibraryHeap ## Member
    typename (Builder) (LibraryHeap)   ;  ///#2

    # define builderOverloadHeap(Member)\
        builderOverloadHeap ## Member
    typename (Builder) (OverloadHeap)   ; ///#3 (strategy variants)

    # define builderTemplateHeap(Member)\
        builderTemplateHeap ## Member
    typename (Builder) (TemplateHeap)   ; ///#4 (strategy variants)



        ///... (open for extension)



    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         * @brief           volatile objects                 *
         *          - - these are used by cin, cout - -      *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
   # define ConsoleOut(Member)ConsoleOut ## Member
    volatile static Object * volatile *
    volatile ConsoleOut(Object) = nullptr;
    volatile static char * volatile ConsoleOut(String) = 0;

   # define ConsoleIn(Member)ConsoleIn ## Member
    volatile static Object * volatile *
    volatile ConsoleIn(Object) = nullptr;
    volatile static char * volatile ConsoleIn(String) = 0;


    static Object * StandardHelper( Object **, size_t ) ;

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
         COMMAND; POST;      COMMAND; POST;     COMMAND; POST;  ///
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /* clipboard:

    - -

    - -

    - -

     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0

    #endif // 0
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;      WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *[-1]array                                                  *
     *    OPERATING THE STRUCT CLASS INTERFACE OBJECT/VARIABLE:  *
     *                                                           *
     *     note: the struct class registrations each add a case  *
     *           to the class factory method and possibly        *
     *           provide a sub-factory method. therefore each    *
     *           interface registration adds a case to multimap. *
     *                                                           *
     *     -when using an object, know than an object is non-    *
     *     automatic memory that the virtual table has a         *
     *     pointer to as a virtual table object. never forget    *
     *     where the object itself is in Factory C and there     *
     *     should be no problems for anyone who operates the     *
     *     Factory (Factory C).                                  *
     *                                                           *
     *     -the basic struct class is used as an automatic       *
     *     variable for... an interface (registration)           *
     *                                                           *
     *     -there is something known as the builder that creates *
     *     struct classes as runtime objects for a runtime class *
     *     interface heap.                                       *
     *                                                           *
     *     multimap(false)(typeid(obj))("class(FactoryTable)")   *
     *                                                           *
     *     ((factPtr*)multimap(false)(typeid(obj))               *
     *       ("class(ConsoleTable)"))[1](...)   ;                *
     *                                                           *
     *     note: the factPtr cast and array subscript data       *
     *           field position are both found in file           *
     *           (structclass.h) or Object.h so program to       *
     *           this file for the class interface heap (that).  *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *[0]array                                                   *
     *        THIS IS FOR A VIRTUAL TABLE OBJECT: (BASIC)        *
     *                                                           *
     *                   [  STRUCTURE(S)  ]          (.h)        *
     *                                                           *
     *     -the class member macro Class(Member)Class##Member    *
     *     is the namespace tool for the Class required by       *
     *     class construction macros like new()()                *
     *                                                           *
     *     -automatic memory of base type named base             *
     *     (simple inheritance by cast) placed at first          *
     *     data field position.                                  *
     *                                                           *
     *     -data member list here inside Class (object).         *
     *                                                           *
     *     -function pointer list here (1) inside                *
     *     Class(VirtualTable) (interface).                      *
     *                                                           *
     *     -separate data members and functions into two         *
     *     structs, one for the object type and one for the      *
     *     interface type, keeping functions of strategic        *
     *     significance in the struct with data members (Class). *
     *                                                           *
     *     -the object type or Class may/may not be extended     *
     *     from the struct class for the object type but the     *
     *     interface type needs to be extended from the          *
     *     class(VirtualTable) or struct class(VirtualTable) as  *
     *     an automatic struct variable named base (preferably). *
     *                                                           *
     *     -the interface type or Class(VirtualTable) needs      *
     *     to be extended from the struct class (VirtualTable).  *
     *                                                           *
     *                     [ PROTOTYPES ]            (.h)        *
     *                                                           *
     *     -make sure each function is within scope              *
     *     of each other function by prototyping.                *
     *                                                           *
     *     -function prototype list here (2).                    *
     *                                                           *
     *     -prototype list generally labeled as static.          *
     *                                                           *
     *                      [ INTERFACE ]            (.h or .c)  *
     *                                                           *
     *     -declare an automatic struct variable of the          *
     *     interface type and initialize each of its data        *
     *     field positions to the address of each global         *
     *     function here (3).                                    *
     *                                                           *
     *     -the interface is labeled as static.                  *
     *                                                           *
     *                    [ IMPLEMENTAIONS ]         (.h or .c)  *
     *                                                           *
     *     -implement function list here (4).                    *
     *                                                           *
     *     -the first parameter of every member function is      *
     *     reserved for a self pointer (also known as            *
     *     interface methods).                                   *
     *                                                           *
     *     -implementations labeled as explicit if implemented   *
     *     inside a header file.                                 *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *[1]array                                                   *
     *       THIS IS FOR A FACTORY TABLE CLASS: (ADVANCED)       *
     *                                                           *
     *                    [  STRUCTURE(S)  ]                     *
     *                                                           *
     *     -any of the other base interfaces or registration     *
     *     style interfaces of the class interface heap can be   *
     *     extended by structures implemented here               *
     *     (if not structclass.h) (can be but wont).             *
     *                                                           *
     *                      [ PROTOTYPES ]                       *
     *                                                           *
     *     -prototypes for other heap interface functions.       *
     *                                                           *
     *     -the factory methods are implemented using a typename *
     *     so therefore are implemented by prototyping, they may *
     *     have actual prototypes included here but no need to.  *
     *                                                           *
     *                       [ INTERFACE ]                       *
     *                                                           *
     *     -static class interface heap interface (registrations)*
     *     here.                                                 *
     *                                                           *
     *     -static arrays for interfaces with their own          *
     *     factory methods (sub-factory methods). these are      *
     *     manually sorted arrays (info heaps) subject to a      *
     *     binary search (or whatever u want without help).      *
     *                                                           *
     *     -class factory method typename prototype here.        *
     *                                                           *
     *     -sub-factory method typename prototype(s) here.       *
     *                                                           *
     *                     [ IMPLEMENTAIONS ]                    *
     *                                                           *
     *     -class setup and class abort functions.               *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *[2]array                                                   *
     *   THIS IS FOR AN OBJECT ADAPTER: (VIRTUAL TABLE OBJECT)   *
     *                                                           *
     *                       [ PROTOTYPES ]                      *
     *                                                           *
     *     -extra set of prototypes per class the adapter is     *
     *     an adapter for.                                       *
     *                                                           *
     *                        [ INTERFACE ]                      *
     *                                                           *
     *     -single extra static interface struct variable per    *
     *     class the adapter is an adapter for.                  *
     *                                                           *
     *                      [ IMPLEMENTAIONS ]                   *
     *                                                           *
     *     -extra set of implementations per class the adapter   *
     *     is an adapter for.                                    *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *[3]array                                                   *
     *    THIS IS FOR AN OBJECT ADAPTER: (FACTORY TABLE CLASS)   *
     *                                                           *
     *                       [ PROTOTYPES ]                      *
     *                                                           *
     *     -interface type function(s) prototypes.               *
     *                                                           *
     *                       [ INTERFACE ]                       *
     *                                                           *
     *     -interface heap interface for each adapter type. this *
     *     is a class adapter table that has both a constructor  *
     *     and a class virtual table interface pointer.          *
     *                                                           *
     *                     [ IMPLEMENTAIONS ]                    *
     *                                                           *
     *     -interface type function(s) implementations.          *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *              FACTORY INITIALIZER/CONSTRUCTOR              *
     *                                                           *
     *          use an initializer function with the same        *
     *      return type and first parameter, (the derived type)  *
     *      afterwards there can be any amount or type of        *
     *      parameters for the initializer function or it        *
     *      can be implemented as a factory function and         *
     *      the second parameter could be reserved for a         *
     *      switch case number and the case would determine      *
     *      what amount or types of parameters follow:           *
     *                                                           *
     *      (03/04/2022):                                        *
     *                                                           *
     *          don't forget that there should only be 1         *
     *      parameter for a factory function in Factory C        *
     *      (thats exactly one parameter before the              *
     *      ellipsis) because not only the control factory       *
     *      A.K.A. factory control sequence A.K.A. using         *
     *      but every central overload function whether          *
     *      its used from the control factory or not             *
     *      has the power to give all its parameters             *
     *      it takes in to its function it encapsulates          *
     *      and calls.                                           *
     *                                                           *
     *          inside the factory initializer function:         *
     *                                                           *
     *      Stack * stack = control();                           *
     *                                                           *
     *                                                           *
     *      size_t c = arg(stack, size_t);                       *
     *                                                           *
     *                                                           *
     *      declare variables before switch ...                  *
     *                                                           *
     *      (depends on compiler i think)                        *
     *                                                           *
     *      ; ; ; (or make chicken scratches)                    *
     *                                                           *
     *                                                           *
     *      switch(c)                                            *
     *      {                                                    *
     *          case 0:                                          *
     *                    ; (here)                               *
     *                                                           *
     *             return from list : arg(list, type)            *
     *                                                           *
     *             for 3rd parameter, return again for 4th,...   *
     *                                                           *
     *                                                           *
     *          break;                                           *
     *           case 1:                                         *
     *                                                           *
     *              ...  arg(list, type)                         *
     *                                                           *
     *          break;                                           *
     *                                                           *
     *                                                           *
     *          default:                                         *
     *                                                           *
     *              ...  arg(list, type)                         *
     *                                                           *
     *      }                                                    *
     *                                                           *
     *      vaEnd(list);                                         *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    #include "../Control/Stack.h"

    #include "../Template/defineObject.h"

    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
        /**                                                  *
         * @brief  primitive type as virtual table object    *
         *                                                   *
         *         implementations for primitive types as    *
         *         virtual table objects, this only includes *
         *         interface, constructor/initializer        *
         *         destructor, and type (typeid)             *
         *         function (basic virtual table object).    *
         *                                                   *
         *  note: these datatype tables might need to        *
         *        include const_types and volatile_types     *
         *        ... (but not least & fast) ?   NO          *
         *                                                   */
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  bool                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
  #if 0/* DEBUG DEFINEOBJECT_H  bool                             */
    # define        bool(member)\
                            bool ## member
    typename       (Object)             (bool) ;               //#1
  #endif/** * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int                                               *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          int                              */
    # define        int(member)\
                            int ## member
    typename       (Object)             (int) ;                //#2
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  float                                             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
  #if 0/* DEBUG DEFINEOBJECT_H  float                            */
    # define        float(member)\
                            float ## member
    typename       (Object)             (float);               //#3
  #endif/** * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  double                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          double                           */
    # define        double(member)\
                            double ## member
    typename       (Object)             (double);              //#4
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  char                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           char                            */
    # define        char(member)\
                            char ## member
    typename       (Object)             (char) ;               //#5
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  long                                              *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           long                            */
    # define        long(member)\
                            long ## member
    typename       (Object)             (long)  ;              //#6
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  short                                             *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           short                           */
    # define        short(member)\
                            short ## member
    typename       (Object)             (short);               //#7
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  unsigned                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          unsigned                         */
    # define        unsigned(member)\
                            unsigned ## member
    typename       (Object)             (unsigned);            //#8
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  signed                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           signed                          */
    # define        signed(member)\
                            signed ## member
    typename       (Object)             (signed);              //#9
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  size_t                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           size_t                          */
    # define        size_t(member)\
                            size_t ## member
    typename       (Object)             (size_t)  ;            //#10
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  wchar_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          wchar_t                          */
    # define        wchar_t(member)\
                            wchar_t ## member
    typename       (Object)             (wchar_t);             //#11
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  intptr_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          intptr_t                         */
    # define        intptr_t(member)\
                            intptr_t ## member
    typename       (Object)             (intptr_t);            //#12
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uintptr_t                                         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          uintptr_t                        */
    # define        uintptr_t(member)\
                            uintptr_t ## member
    typename       (Object)             (uintptr_t);           //#13
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  intmax_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          intmax_t                         */
    # define        intmax_t(member)\
 /*-define namespace macro*/intmax_t ## member
    defineObject                        (intmax_t);            //#14
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uintmax_t                                         *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          uintmax_t                        */
    # define        uintmax_t(member)\
 /*-typename label*/        uintmax_t ## member
    define         (Object)             (uintmax_t);           //#15
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  wctype_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          wctype_t                         */
    # define        wctype_t(member)\
 /*+typename label*/        wctype_t ## member
    typename       (Object)             (wctype_t);            //#16
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int8_t                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          int8_t                           */
    # define        int8_t(member)\
                            int8_t ## member
    typename       (Object)             (int8_t);              //#17
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint8_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          uint8_t                          */
    # define        uint8_t(member)\
                            uint8_t ## member
    typename       (Object)             (uint8_t);             //#18
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int16_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         int16_t                           */
    # define        int16_t(member)\
                            int16_t ## member
    typename       (Object)             (int16_t);             //#19
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint16_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uint16_t                          */
    # define        uint16_t(member)\
                            uint16_t ## member
    typename       (Object)             (uint16_t);            //#20
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int32_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         int32_t                           */
    # define        int32_t(member)\
                            int32_t ## member
    typename       (Object)             (int32_t);             //#21
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint32_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uint32_t                          */
    # define        uint32_t(member)\
                            uint32_t ## member
    typename       (Object)             (uint32_t) ;           //#22
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  int64_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         int64_t                           */
    # define        int64_t(member)\
                            int64_t ## member
    typename       (Object)             (int64_t);             //#23
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  uint32_t                                          *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                         uint64_t                          */
    # define        uint64_t(member)\
                            uint64_t ## member
    typename       (Object)             (uint64_t);            //#24
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_bool                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
  #if 0/*                     atomic_bool                        */
    # define        atomic_bool(member)\
                            atomic_bool ## member
    typename       (Object)             (atomic_bool);         //#25
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_char                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_char                        */
    # define        atomic_char(member)\
                            atomic_char ## member
    typename       (Object)             (atomic_char);         //#26
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_schar                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_schar                        */
    # define        atomic_schar(member)\
                            atomic_schar ## member
    typename       (Object)             (atomic_schar) ;       //#27
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uchar                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_uchar                        */
    # define        atomic_uchar(member)\
                            atomic_uchar ## member
    typename       (Object)             (atomic_uchar);        //#28
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_short                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_short                       */
    # define        atomic_short(member)\
                            atomic_short ## member
    typename       (Object)             (atomic_short);        //#29
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ushort                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_ushort                      */
    # define        atomic_ushort(member)\
                            atomic_ushort ## member
    typename       (Object)             (atomic_ushort) ;      //#30
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_int                                        *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_int                         */
    # define        atomic_int(member)\
                            atomic_int ## member
    typename       (Object)             (atomic_int) ;         //#31
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uint                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_uint                        */
    # define        atomic_uint(member)\
                            atomic_uint ## member
    typename       (Object)             (atomic_uint) ;        //#32
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_long                                       *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_long                        */
    # define        atomic_long(member)\
                            atomic_long ## member
    typename       (Object)             (atomic_long);         //#33
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ulong                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_ulong                       */
    # define        atomic_ulong(member)\
                            atomic_ulong ## member
    typename       (Object)             (atomic_ulong) ;       //#34
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_llong                                      *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_llong                       */
    # define        atomic_llong(member)\
                            atomic_llong ## member
    typename       (Object)             (atomic_llong);        //#35
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ullong                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_ullong                      */
    # define        atomic_ullong(member)\
                            atomic_ullong ## member
    typename       (Object)             (atomic_ullong);       //#36
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_char16_t                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_char16_t                     */
    # define        atomic_char16_t(member)\
                            atomic_char16_t ## member
    typename       (Object)             (atomic_char16_t);     //#37
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_char32_t                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                      atomic_char32_t                      */
    # define        atomic_char32_t(member)\
                            atomic_char32_t ## member
    typename       (Object)             (atomic_char32_t);     //#38
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_wchar_t                                    *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_wchar_t                      */
    # define        atomic_wchar_t(member)\
                            atomic_wchar_t ## member
    typename       (Object)             (atomic_wchar_t);      //#39
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_intptr_t                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                      atomic_intptr_t                      */
    # define        atomic_intptr_t(member)\
                            atomic_intptr_t ## member
    typename       (Object)             (atomic_intptr_t);     //#40
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uintptr_t                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                      atomic_uintptr_t                     */
    # define        atomic_uintptr_t(member)\
                            atomic_uintptr_t ## member
    typename       (Object)             (atomic_uintptr_t);    //#41
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_size_t                                     *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_size_t                      */
    # define        atomic_size_t(member)\
                            atomic_size_t ## member
    typename       (Object)             (atomic_size_t);       //#42
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_ptrdiff_t                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                      atomic_ptrdiff_t                     */
    # define        atomic_ptrdiff_t(member)\
                            atomic_ptrdiff_t ## member
    typename       (Object)             (atomic_ptrdiff_t);    //#43
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_intmax_t                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                       atomic_intmax_t                     */
    # define        atomic_intmax_t(member)\
                            atomic_intmax_t ## member
    typename       (Object)             (atomic_intmax_t);     //#44
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  atomic_uintmax_t                                  *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                        atomic_uintmax_t                   */
    # define        atomic_uintmax_t(member)\
                            atomic_uintmax_t ## member
    typename       (Object)             (atomic_uintmax_t);    //#45
  #endif/** * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  clock_t                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                          clock_t                          */
    # define        clock_t(member)\
                            clock_t ## member
    typename       (Object)             (clock_t);             //#46 (25)
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  time_t                                            *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /*                           time_t                          */
    # define        time_t(member)\
                            time_t ## member
    typename       (Object)             (time_t);              //#47 (26)
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /* note: these last two datatypes were having difficulty when
     *       it comes to their constructor being a factory function
     */
  #if 1
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    # define        bool(member)\
                            bool ## member
        static bool *     bool(Init)( bool *, .../*int*/ );
        static void       bool(Dtor)( bool * );
        static cstring    bool(Type)();


        static struct class(VirtualTable)
            bool(Interface) =
        {
            & bool(Type),
            & bool(Init),
            & bool(Dtor)
        };

        explicit bool * bool(Init)

            ( bool * self, .../*int info*/ )

        { stack(control)();

            size_t info = stack(arg)(size_t);

            (*self) = (bool)info;
             return self;}

        explicit void bool(Dtor)( bool * self )  {}

        explicit cstring bool(Type)(){return "bool";}

    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    # define        float(member)\
                            float ## member
        static float *    float(Init)( float *, .../*double*/ );
        static void       float(Dtor)( float * );
        static cstring    float(Type)();


        static struct class(VirtualTable)
            float(Interface) =
        {
            & float(Type),
            & float(Init),
            & float(Dtor)
        };

        explicit float * float(Init)

            ( float * self, .../*double info*/ )

        { stack(control)();

            double info = stack(arg)(double);

            (*self) = (float)info;
             return self;}

        explicit void float(Dtor)( float * self )  {}

        explicit cstring float(Type)(){return "float";}
  #endif // 0
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

    # define        uint_t(member)uint_t ## member

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    #if 0
                 int * obj = new(int)(this, val) ;
    #endif // 1
    /*/ /// /// /// /// /// /// /// /// /// /// /// /// /// /// /*/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        WARNING;WARNING;      INCOMPLETE;       WARNING;WARNING;
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     * @brief  Security pattern notes + brainstorm               *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #if 0
        static cstring Hash32Type(void) ;

        static cstring Hash0x45d9f3bType(void)  ;

        static cstring Hash0x94d049bType(void)  ;

        static cstring Hash64Type(void) ;

        static cstring Hash0x33111ebType ();

        static cstring Hash0x49bbaType ();

        static cstring Hash0xffffType ();


        static volatile cstring volatile SecurityType(void);

        static volatile cstring volatile class0x58476d1TableType();

  explicit
        cstring Hash32Type(void)  ///Information Hiding (Info)
        { return "0x45d9f3b" ; }
  explicit
        cstring Hash0x45d9f3bType(void)
        { return "0x45d9f3b" ; }
  explicit
        cstring Hash0x94d049bType(void)
        { return "0x94d049b" ; }
  explicit
        cstring Hash64Type(void)
      #if 0 /** IF A LIBRARY IS INCLUDED OR SOMETHING #if 0 **/
        { return "0xbf58476d1ce4e5b9"; }
      #else
        { return "0x94d049bb133111eb"; }
      #endif // 0

    /// /// /// /// /// /// ///

       #define defineType(Key)\
       \
       Hash##Key##Type(void)\
        { return #Key ; } ///grrrr (lol)

    #endif // 0
    /// /// /// /// /// /// ///
    /**
     *     cstring typename(Type) (0x33111eb);
     *
     *     cstring typename(Type) (0x49bba);
     *
     *     cstring typename(Type) (0xffff); **//*MAX 32*//**
    **/
    /*
     *
     *     ...   Hash0xffffType(void)
     *     { return "0xffff"; }
     *
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
        /** * * * * * * * * * * * * * * * * * * * * * * * * **
         *  THESE CAN ALL BE USED TO INITIALIZE THE Type     *
         *                                                   *
         *  FUNCTION FOR AN INTERFACE REGISTRATION THAT      *
         *                                                   *
         *  WOULD BE OTHERWISE UNFINDABLE WITHOUT THE        *
         *                                                   *
         *  EXACT KEY AS A STRING IF SOMETHING LIKE          *
         *                                                   *
         *  SECURITY IS AN ISSUE THEN THERE ARE SOME INFO    *
         *                                                   *
         *  (Information Hiding) TECHNIQUES I CAN LEAVE      *
         *                                                   *
         *  THERE FOR YOU TO HAVE (01/22/2022).              *
         *                                                   *
         *                                                   *
         *  DONT FORGET THAT THE FactoryTable(Method)        *
         *                                                   *
         *  STRUCTURE HAS A SINGLE METHOD POINTER DECLARED   *
         *                                                   *
         *  INSIDE IT. WITH EXTENDING THAT STRUCTURE         *
         *                                                   *
         *  BEFORE DECLARING A STRUCT VARIABLE (GLOBAL)      *
         *                                                   *
         *  OF IT IN THE INTERFACE AREA OF A CLASS FILE      *
         *                                                   *
         *  OR JUST BELOW THAT AREA THERE IS AN INFORMATION  *
         *                                                   *
         *  HIDING TECHNIQUE BEING USED THEN LIKE THE MODEL  *
         *                                                   *
         *  EXAMPLE OF HIDING DATAMEMBERS USING CLASS        *
         *                                                   *
         *  EXTENSION AND BASIC OO POLYMORPHISM (WITH OBJECTS)
         *                                                   *
         *  ClassList OR Class##List OR Class(List) IS       *
         *                                                   *
         *  Type THE MACRO register(Class) ASSIGNS TO BE     *
         *                                                   *
         *  ADDED TO THE FactoryTable ALSO, "Class" OR #Class*
         *                                                   *
         *  ALSO, FOR FULLY DYNAMIC USE OF THE FactoryTable  *
         *                                                   *
         *  AS A TABLE OF DATATYPES (PRIMARILY) DONT FORGET  *
         *                                                   *
         *  YOU CAN JUST ABANDON register(Class) THAT IS EVEN*
         *                                                   *
         *  ONLY MEANT FOR USE IN A PROGRAM CONSTRUCTOR.     *
         *                                                   *
         *  register(Class)  IS:                             *
         *                                                   *
         *      FactoryTable(Interface)                      *
         *         .insert( ftable, "Class", & ClassList )   *
         *                                                   *
         *                                                   *
         *  VolatileType IS A FUNCTION THAT RETURNS Type THE *
         *                                                   *
         *  CSTRING volatileType IS INITIALIZED TO ALSO BUT  *
         *                                                   *
         *  IF AN ATTEMPT WOULD BE MADE INSIDE THE PROGRAM   *
         *                                                   *
         *  CODE TO HIDE A REGISTRATION IN THE REGISTRATION  *
         *                                                   *
         *  LIST OF A FACTORY TABLE CLASS WITH THAT REGISTRATION
         *                                                   *
         *  HAVING A Type FUNCTION POINTER AT [0] THAT       *
         *                                                   *
         *  IS INITIALIZED TO &VolatileType THEN ALL THAT    *
         *                                                   *
         *  PERSON WOULD NEED TO DO IS PASS volatileType     *
         *                                                   *
         *  INTO THE CLASS FACTORY METHOD FOR THAT CLASS     *
         *                                                   *
         *  TO RETURN THAT REGISTRATION. I HAVE MY FEELINGS  *
         *                                                   *
         *  ABOUT THAT BUT INFORMATION COULD BE STOLEN       *
         *                                                   *
         *  SOMEHOW FROM OUTSIDE THE PROGRAM CODE ALSO.      *
         *                                                   *
         *  (01/22/2022)                                     *
         *                                                   *
         *                                                   *
         *  THAT CONCLUDES ANY DISCUSSION ABOUT INFORMATION  *
         *                                                   *
         *  SECURITY I MIGHT BE ABLE TO GIVE A HAND WITH     *
         *                                                   *
         *  CONSIDERING FUNCTIONS LIKE: Hash32Type() AND     *
         *                                                   *
         *  Hash0x45d9f3bType() IN FILE.                     *
         *                                                   *
         *                                                   *
         *  SORRY IT NEVER DAWNED ON ME UNTIL NOW BUT THERE  *
         *                                                   *
         *  ARE MICRO REASONS TO USE CERTAIN LABELS ON       *
         *                                                   *
         *  DATATYPES SO I WANT TO POINT THAT OUT.           *
         ** * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

        static   cstring   typename(Type) (0x1111);///cache?

        volatile cstring   typename(Type) (0x2222);///no cache?

        auto cstring       typename(Type) (0x3333);///cache?

        cstring const      typename(Type) (0x4444);///cache?

        atomic cstring     typename(Type) (0x4444);///cache?
        */
        ///       #define defineType(Key)\
                   \
                   Hash##Key##Type(void)\
                    { return #Key ; }

        /// #define typename define

        /// #define define(macro)  define##macro
    #if 0
    //volatile cstring volatile typename(Type)(0x58476d1);

    #define Security(Member)           Security##Member
    typedef volatile cstring volatile () (*volaPtr) (void);

        static struct class   (SecurityTable)     ///(0x58476d1)
        {   /// /// /// ///
            volaPtr type;/* ...                  **/
            /// /// /// ///
            methPtr meth;/* factory method: meth(cstring) */
            /// /// /// ///
            tblePtr info;/* = 0 to hide info */
            /// /// /// ///
        }class   (SecurityTable);         ///(0x58476d1);
    /*  see: Object.h *//* 2[ array ] = (reglPtr) info for regs*/
    explicit
        volatile cstring volatile class0x58476d1TableType()
        { return "class0x58476d1Table"; }


    volatile static cstring volatile securitywhat = "";

    explicit
        volatile cstring volatile SecurityType(void)
        { return securitywhat; }


        static struct class  (SecurityTable)  /// (0x58476d1)
         /**class0x58476d1**/
            Security(Security)  =    /// (0x58476d1) =

        { &class0x58476d1TableType, /*meth = */ 0, /* info = */ 0 };
    #endif // 0
    /*
    now, (08/05/2022) i finally have something to add to the security
    pattern i'm developing, string keys are good for many-to-one where
    many string keys are good for a single place i think, just that
    when one of those many keys are used and all go to one place,
    each key is given its value or case. by string keys i mean
    address keys or addresses as strings for the factory table

    i don't remember why, or how but that might be a lean/step in the
    right direction
     */



    /** NUMBER #1 SECURITY INFO BELOW:

        (Factory Table Interface Heap) **/
    /*
    static Interface FactoryTable(InterfaceHeap)[eight] =

    {*//**A B C D E F G H I J K L M N O P Q R S T U V W X Y Z**//*

        &FactoryTable(Complex),

        &FactoryTable(Console),

        &FactoryTable(Factory),

        &FactoryTable(File),

        &FactoryTable(Polymorph),

  *//** &FactoryTable(Security), **//*  (interface typeid ex: "0x58476d1")

        &FactoryTable(Singleton),

        &FactoryTable(Standard),

        &FactoryTable(Virtual),

        nullptr*//** #1 (Security Info)*//*(interface typeid security list)*//**

                    needs security for a set of the interface strings
                    give security there the hashed pointer string key
                    as each factory table class would use a security key
                    for its list and possibly one for the builder
                    as the interface typeid.

                    the bunker can have a "passnumber"
                    (hashed pointer string key) for its typeid
                    (not interface typeid but class typeid).

                    you can then have more fun and put all the
                    security keys into a strategy heap and put
                    it into the bunker interface heap.

                    and finally you can use info heap interface typeid
                    for security keys or something that involves
                    strategy.

                    you can have also info id if you put a pass

                    on the stack that matches a row in the
                    virtual/complex/... heap every time you access with:

                    protected(false)(false)(true);

                    thats not a pass against, but a pass for
                    info that is eaten up by multimap because
                    if protected(false)(false)(true) then ask
                    for a pass off the stack, i can only see its
                    pass number being the row address right now for
                    info id but its a start, if there are passes against
                    it on the stack, they might as well be for the
                    entire heap

                    **//*
    } ;
    static Interface typename(ClassFactoryMethod)(FactoryTable,0,7);*/
                 /** #2 (Security Info)*/
                 /**
                    remember you can put a lock on anything you
                    want just as long as you have a PassNumber
                    for a form of typeid, so you have a flag and
                    a stack and when flag raised security up
                    and u need to put a passnumber in to unlock
                    a factory method each time.

                    there should be a case where it stays
                    unlocked...

                    there needs to be an extended
                    security(SecurityHeap)...



                  */    ///Exception base
       /*typedef struct PassNumber * Pass;*/// Exception base


       /**...**/   //(for?)


                                            //(for interface?)
                                            //Interface Exception?
                                            //class(FactoryMethod) and

                                            //pass?

                                            //as "special interfaces" structclass
                                            //exceptions

                                            //a pass(Type) can be for any
                                            //individual interface as the
                                            //factory method for it would be put
                                            //on a stack

                                            //pass is an odd numbered datafield pos
                                            //interface type in
                                            //heap then, ...

                                            //holy shit, a pass can bee for anything
                                            //and belong to a class!

      /* typedef     string *     TypeID; *///for factory method


      ///Pass/PassNumber
      ///TypeID
      ///pass(Type)

    /** * * * * * * * * * * * * * * * * * * * * * * **
     * @brief Security (address-to-string) Function  *
     * note : don't forget to add "0x" to the front  *
     *        for pass number style typeid           *
     ** * * * * * * * * * * * * * * * * * * * * * * **/\
  #if 0 //(Library/hash.h)
    static string ItoaHex(unsigned int, char[]);

    explicit string ItoaHex(unsigned int i, char b[])
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
  #endif // 0
    /**
     * @brief this is for taking a table that uses a passnumber
     *
     * and converting its "typeid" or interface type id (not class
     *
     * type id) back into its normal thing, the interface type
     *
     * not passnumber.
     */
  #if 0 //(this file, up)
    typedef struct pass(SecurityHeap)
    {struct class (SecurityHeap)base;
        /// /// /// ///
        typePtr type;//[3]  // if( a[0] = '0' )
    }pass(SecurityHeap);
  #endif // 0
    /**
        THIS IS WHERE SECURITY IS IN EFFECT, ALL PATTERNS,

        PRACTICES, AND PRINCIPLES CAN BE PUT TO USE INSIDE

        THIS TYPE ID FUNCTION. THE TYPEID IS FOR A CLASS OR

        INTERFACE. (THE class(FactoryHeap) NEEDS TYPEID FOR

        FUNCTION) THIS FUNCTION CAN USE AN ALLOCATOR FOR A

        STRING THAT CAN BE STORED IN THE SIDE TABLE.
     */
  #if 0
    /** * * * * * * * * * * * * * * * * * * * * * * **
     * @brief Security (struct bunker key)           *
     ** * * * * * * * * * * * * * * * * * * * * * * **/
   # define Bunker(Member)Bunker ## Member //struct(Bunker)
    volatile static string * volatile Bunker(ID) = nullptr;

        explicit cstring struct(Bunker)(TypeID)()
        { TypeID(PassNumber)(& Bunker(ID), & vtable);// & vtable =
            return (*Bunker(ID)) ; }//default secret passnumber

  #endif // DEFINED_INSIDE_BUNKER_H
  #if 0
    /** * * * * * * * * * * * * * * * * * * * * * * **
     * @brief Security (class builder key)           *
     ** * * * * * * * * * * * * * * * * * * * * * * **/
   # define Builder(Member)Builder ## Member//FactoryTable(Builder)
    volatile static string * volatile Builder(ID) = nullptr;

        explicit cstring FactoryTable(Builder)(TypeID)()//
        { TypeID(PassNumber)(& Builder(ID), & ftable);//
            return (*Builder(ID)) ; }//

  #endif // DEFINED_INSIDE_BUILDER_H
    /**
    THIS IS WHERE SECURITY IS IN EFFECT, ALL PATTERNS,

    PRACTICES, AND PRINCIPLES CAN BE PUT TO USE INSIDE

    THIS TYPE FUNCTION. THE TYPEID IS FOR A CLASS OR INTERFACE.

    (THE class(FactoryHeap) NEEDS TYPEID FOR FUNCTION)

    THIS FUNCTION CAN USE AN ALLOCATOR FOR A STRING

    THAT CAN BE STORED INSIDE THE SIDE TABLE.
     */
  #if 0
    volatile static string * volatile
        FactoryTable(Builder)(TypeID) = nullptr;



    explicit cstring FactoryTable(Builder)(Type)()
    {
        if( !FactoryTable(Builder)(TypeID) )
        {
            FactoryTable(Builder)(TypeID) = new(string)(this, 15);

            (*FactoryTable(Builder)(TypeID)) = '0';
            (*FactoryTable(Builder)(TypeID)) = 'x';

            void * passnum  = & ftable  ; // default secret pass

            Itoa( passnum, (*FactoryTable(Builder)(TypeID)) + 2 );
        }
        return (*FactoryTable(Builder)(TypeID)) ;   }
  #endif // 0




        /**

        THIS ALL GETS INCLUDED AFTER THE FACTORY TABLE GETS INCLUDED.

         **/
        /**
        static Reg Security(Regs) [one] =

        { &Security(Security), **//*..., ..., ..., *//**nullptr };


        typedef struct Security(Method)
        {   FactoryTable(Method)base;

            cstring * pSecuritywhat ; **//*volatile?, const?, ...?*//**

            ///...

        }Security(Method);

        Object * Security(Search) ( cstring );


        static Security(Method)

            Security(List) =

        { { &Security(Search) }, &securitytype };


        explicit Object * Security(Search) ( cstring key )
        {
    **//*   if( *(Security(List).pSecuritytype) == key )  {}   *//**


            Reg iterator[3] = { &SecurityType, 0, 0 };

            size_type i ;  securitywhat = key;**/ /* = "0x58476d1" *//**


                                    **/ /* LENGTH STORED HERE: 0 *//**
            RegList p = RegSearch( Security(Regs), iterator, &i, 0, 0 ) ;
                                    **/ /*        = 1 *//**

            return  ((p))  **//*PHAT FARM*//**;
        }
        **/
        /**
        int main()
        {

            register(Security);

        }
        **/
  #if 0
    # define classSecurityHeap(Member)classSecurityHeap ## Member
    static cstring class    (SecurityHeap)(Type)(void);     ///#14
    typedef struct class    (SecurityHeap)/*INFO HEAP TABLE*///1col
    {   /// /// /// ///
        typePtr type;//[0]
        /// /// /// ///
        methPtr find;//[1]  //+list of sub-factory method(s) for heap
        /// /// /// ///
        tblePtr list;//[2]  //
        /// /// /// ///
    }class       (SecurityHeap); ///#7 (SUB)
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(SecurityHeap)(Type)(void)///()
    { return "class(SecurityHeap)"; }
  #endif // 0
    ///}
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**
        Interface-Level Responsibilities: (Class Responsibility)

        **//**

      DONT FORGET THAT THE STATIC TABLES THAT ARE NULL TERMINATED

      ARRAYS ARE SORTED MANUALLY IN FILE AND NEED TO BE ADDED

      TO A REGISTRATION USING A POINTER BEFORE THEY ARE INCLUDED

      IN THE FACTORY TABLE CLASS AS REGISTRATIONS. DONT FORGET

      THAT A FACTORY OBJECT IS NOT ONLY A VIRTUAL TABLE OBJECT

      BUT AN OBJECT OF A FACTORY TABLE CLASS.

        **//**

       Registration List:
     1[ array ]

            explicit ctorPtr Class(Ctor)(){ return new(Class); }


            static struct class (FactoryTable)

                Class(Factory) =
            {
                &class(FactoryTable)(Type),

                &Class(Ctor),

                0 **//* optional like dtor (see String.h) *//**
            };

        **//*

             the thing about the registration list itself is
             that most of the Class Tables should even be put
             inside Regs and put inside a Class registration
             list ClassRegistrations, here's one thats for
             the implementation of a single function or two
             functions again (nevermind ClassTables for a sec):

             *//**

            explicit bool Class(Equal)

                ( const Object * self, const Object * objt )

                {}

            explicit bool Class(Greater)

                ( const Object * self, const Object * objt )

                {}


            static struct class (CompareTable)

                Class(Compare) =

            {
                &class(CompareTable)(Type),

                &Class(Equal),

                &Class(Greater) **//* this one optional too so: 0 *//**
            };


            explicit int Class(ConsoleOut)( Object * self )

            { return printf(...); }


            static struct class (ConsoleTable)

                Class(Console) =

            {
                &class(ConsoleTable)(Type),

                0,

                &Class(ConsoleOut)
            };


            **//*

            now: this is the registration list with two things
                 in it, ClassFactory for factory("Class")(this,...)
                 and ClassCompare for equal(a,b) and greater(a,b)
                 the FactoryTable itself comes with its default
                 classFactoryTable Reg or Registration-Style
                 Single-Purpose Interface for each classes
                 encapsulation of new(Class), if that was the only
                 reason why there's a FactoryTable then it wouldn't
                 be as extensible as it is.

                 *//** (Interface == Reg)   (ClassInterfaceHeap)

            static Interface Class(InterfaceHeap)[three] =
          *//*ABCDEFGHIJKLMNOPQRSTUVWXYZ*//**
            {
                &Class(Factory),

                &Class(Compare),

                &Class(Console),

                nullptr         } ;



        Factory Method Heap:
     2[ array ]

            static Security

                Class(SecurityHeap)[five] =
            {
                {"Token1"},

                {"Token2"}, **//* use these to concatenate onto
                               more strings for Factory Method*//**
                {"Token3"},

                {"Token4"}, **//*  *//**

                {"Token5"},

                ""
            };

        Strategy Heap: **//*(for any Class with strategic function)*//**
     3[ array ]

            static Strategy

                Class(StrategyHeap)[three] =

            {
                {"Function1",   &Function1},

                {"Function2",   &Function2},

                {"Function3",   &Function3},

                {"",            0}
            };

        Command Table: (+Control)
     4[ array ]       **//*this one is one for copying its section
                           into a larger array at runtime where the
                           0's get the address of an object then
                           (maybe).
      *//**
            static Command

                Class(CommandArray)[three] =
            {
                { {}, 0, &Function1 },

                { {}, 0, &Function2 },

                { {}, 0, &Function3 },

                { {}, 0, &Function4 }
            }

        Factory Table: (+Builder)
     5[ array ]

            static Factory

                Class(FactoryArray)[three] =
            {
                { &Function1, 0 },**//* this one is adjacent to the
                other and differs in the way that its a Container
                that gets allocated to the 0 positions at runtime
                for return stacks of functions encapsulated by
                the factory control sequence at the command center*//**

                { &Function2, 0 },

                { &Function3, 0 },

                { 0, 0 }
            }

        Boolean Table:
     6[ array ]

            0 0
            0 1
            1 0
            1 1

        Adapter Table:
     7[ array ]

                ... maybe this can be used for storing spare
                    intefaces or a swap function


        Control Heap:
     8[ array ]

                ... if this isnt just a BooleanTable or
                    a place to store flag pointers like
                    Flags[8] (should be null terminated
                    then or really do include length var)

                ...


        Template Heap:     (structured datatype template)
     9[ array ]

            enum SetEnum
            {
                CharA = 0,
                CharB = 1,
                CharC = 2,
                CharD = 3,
                IntA  = 1
            }

            typedef char * CharAClass;

            typedef char * CharBClass;

            typedef char * CharCClass;

            typedef char * CharDClass;

            typedef int *  IntA;

            Object * ClassArray[2] = { 0 };

            ... something like that at least for more than just
                void * (which is easy) ...


                  ...
                  {
                        *template(Class, CharA) = 'a';
                  }


        Observer Table:
    10[ array ]

            /// ... AdapterTable ...

        Polymorph Heap:
    11[ array ]

            /// inheritance table (includes adjacencies in multi)

        Methods Table:  (Virtual)
    12[ array ]

            /// used in conjunction with assigned interface for
                overloads between classes

            /// complex object/runtime class heap 1

        Info Table:    (Complex)
    13[ array ]

            ///... security?


            /// complex object/runtime class heap 2

        Security Table:
    14[ array ]

            ///... this one is related to an override table(s)

                   considering information hiding

    **/

/**

    struct Display;

    typedef struct Display(VirtualTable)
    {   struct class (VirtualTable) base;
    } Display(VirtualTable);

    Object * display( cstring );//DYNAMIC INITIALIZER

    typedef struct
    {   struct class base;

        Observer * self;

        void (*display)( Observer * );

    }Display;


        THIS IS A BINARY SEARCH FOR ANY STATIC TABLE THAT IS MANUALLY

        SORTED, SPECIFICALLY ONE FOR THE STRATEGY TABLE WHICH THIS

        CLASS HAS THE RESPONSIBILITY OF FILLING THIS ONE OUT SINCE IT

        USES A SINGLE STRATEGIC FUNCTION POINTER. HERE ARE ALL THE

        AVAILABLE INITIALIZATIONS IN A SINGLE TABLE HERE. THESE KIND OF

        STATIC TABLES GIVE THE PROGRAM THE OPPORTUNITY TO BE FULLY

        DYNAMIC ESPECIALLY WHEN THEY ALL MAKE THEIR WAY TO ONE OF THE

        VOLATILE PROGRAM TABLES SPECIFICALLY THE FACTORY TABLE.


        STATIC CLASS TABLE STRATEGY PLUS SEARCH:


    typename(Search)      **//* (PUT INSIDE COMMAND CENTER FILE)  *//**
    (**//*macro implementation found inside basic define c vector file:

         defineSearch(type, equal, greater)
        *//**
        Strategy,

        string(equal)(array[*mid].key,key.key),

        string(greater)(array[*mid].key,key.key)
    );
*//**
    void Forecast(Display)( Forecast * );

    void CurrentConditions(Display)( CurrentConditions * );

    void Statistics(Display)( Statistics * );

    void HeatIndex(Display)( HeatIndex * );


    static Strategy

        Display(StrategyHeap) =

    { **//* A B C D E F G H I J K L M N O P Q R S T U V W X Y Z *//**
        { "CurrentConditions",      &CurrentConditionsDisplay },

        { "Forecast",               &ForecastDisplay },

        { "HeatIndex",              &HeatIndexDisplay },

        { "Statistics",             &StatisticsDisplay },

        { "", 0 }**//* NULL TERMINATED AT THE KEY*//**
    };

    **/
    /**
        THIS SEARCH FUNCTION SERVES THE PURPOSE OF BEING THE PLACE

        WHERE AN AUTOMATIC PAIR VARIABLE IS DECLARED SO IT CAN BE

        USED MANUALLY WITH THE FUNCTION THAT IS IMPLEMENTED TO TAKE

        AN AUTOMATIC PAIR AND RETURN A POINTER TO A PAIR IN ITS MEMORY.

        IT SERVES THE PURPOSE OF A SEARCH FUNCTION FOR A SINGLE TABLE

        THATS A CONSTANT VALUE BEING PASSED INTO THE STRATEGY ARRAY

        SEARCH FUNCTION
    **/
   /**
    Object * display( cstring key )
    {
        Strategy pair = { key, 0 }, * p;

        size_t * mid = nullptr;

        p = StrategySearch( DisplayStrategyTable, pair, mid, 0, 3 );

        return p->val;**//* check for p == null first *//**
    }**/
    /**
        THERE NEEDS TO BE INHERITANCE TABLES FILLED OUT

        AS PREPERATION FOR A MULTIPLE INHERITANCE SOLUTION

        THAT INVOLVES THE FACTORY TABLE.


            static Polymorph

                String(PolymorphHeap)[four] =

            {**//* ABCDEFGHIJKLMNOPQRSTUVWXYZ *//**
                {"charVector",  0,0,""},
                {"class",       0,0,""},
                {"Container",   0,0,""},
                {"String",      0,0,""},
                {"",0,0,""}
            };
            static Polymorph *
            typename(SubFactoryMethod)(String,Polymorph,Polymorph,0,3);

            **//*

            IN ORDER FOR THERE TO BE MULTIPLE INHERITANCE ALL

            INHERITANCE TABLES NEED TO BE FULLY FILLED OUT IN A WAY

            THAT EACH INHERITANCE TABLE HAS EACH THING IT WAS

            EXTENDED FROM (AND EACH THING IT WAS EXTENDED TO?).

            THAT EVEN INCLUDES THINGS IT IS PLACED ON A STACK WITH

            (ADJACENCIES) FOR A MULTIPLE INHERITANCE OBJECT.

             *//**

        TO MAKE THE FACTORY TABLE FACTORY METHOD METHOD FULLY DYNAMIC

        AND STILL ONLY ENCAPSULATE THE FACTORY METHOD FOR THE VOLATILE

        FACTORY TABLE THERE NEEDS TO BE THE ADDITIONAL INTERFACE -

        LEVEL RESPONSIBILITY OF A TABLE OF REGISTRATIONS. I THINK I MIGHT

        TAKE THIS OPPORTUNITY TO DISPLAY AN INFORMATION HIDING TECHNIQUE


        NEXT THING:


    **//* PRIMARY SINGLETON SEARCH FUNCTION FOR FACTORY OBJECT*//**
    Reg FactoryTable(Search) ( RegName reg )
    {**//*SPACE TO DECLARE MANUAL ITERATOR: LIKE PAIR*//**
        Reg iterator[3] = { &VolatileType, 0, 0 };
     **//*SPACE TO DECLARE INDEX VARIABLE*//**
        fSizeType i;

        volatilewhat = reg;
     **//*SPACE TO PASS REGISTRATION LIST, SPACE FOR FIRST + LAST INDEX*//**
        RegList p = RegSearch( FactoryTable(Regs), iterator, &i, 0, 1 );

        return ((*p)) ;
    }

    *//*
    static Interface typename(ClassFactoryMethod)(Display, 0, 1);   //VOILA
    */
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                                                                   *
     *  THIS IS THE BASIC CONFIGURATION FOR A FACTORY OBJECT THAT USES   *
     *                                                                   *
     *  THE FACTORY TABLE. THE PREVIOUS EXAMPLE IS ADDED TO A STATIC     *
     *                                                                   *
     *  TABLE ITSELF THAT IS A TABLE OF AN INTERFACE TYPE THAT GIVES     *
     *                                                                   *
     *  ITS TYPEID: typeid(obj) (OR STRING DESCRIPTION) FROM THE ADDRESS *
     *                                                                   *
     *  OF THE FUNCTION POINTER AT ITS FIRST DATAFIELD POSITION. THIS    *
     *                                                                   *
     *  CONTINUES AN EXAMPLE FROM EARLIER IN A WAY THAT IT IS FULLY      *
     *                                                                   *
     *  IMPLEMENTED TO START BEING A FACTORY OBJECT, ALL THAT IS NEEDED  *
     *                                                                   *
     *   IS MORE THINGS GET FILLED OUT AT THE INTERFACE LEVEL FOR FULLY  *
     *                                                                   *
     *  DYNAMIC PROGRAMMING.                                             *
     *                                                                   *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /**
    static struct class (StrategyHeap)

        Display(Strategy) =

    { &class(StrategyHeap)(Type),

      &Display(Display),

       Display(StrategyHeap) };


    explicit ctorPtr Display(Ctor){ return new(Display); }


    static struct class (FactoryTable)

        Display(Factory) =

    { &class(FactoryTable)(Type), &Display(Ctor), 0 };


    static Interface Display(InterfaceHeap)[two] =
    **//*A B C D E F G H I J K L M N O P Q R S T U V W X Y Z*/
    /*FACTORY OBJECT LIST*//**
    { &Display(Factory), &Display(Strategy),**//*..., *//** nullptr };

    *//*
    Reg Display(Search) ( cstring reg )
    {
        Reg iterator[3] = { &Volatile(Type), 0, 0 };**//**SINGLE SLOT*//*

        size_t i;   volatilewhat = reg;

        RegList p = RegSearch( Display(Regs), iterator, &i, 0, 2 );

        return ((*p)) ; //PHAT FARM
    }*//**

    static Interface typename(ClassFactoryMethod)(Display, 0, 2);   //VOILA

    **//* ClassList like ClassInit and ClassInterface *//*
    static FactoryTable(Method)
     **//**  Class##Method == Class(Method)  *//*
        Display(Meth) =

    { &Display(Search) };



    **//**

    Composite IS A PATTERN THAT IS DISPLAYED WITH THE CLASS FACTORY

    METHOD AND HAVING ONE THAT CAN RETURN AN INTERFACE WITH ITS OWN

    SUB-FACTORY METHOD (MAY OR MAY NOT) SO Composite BY Head First:

    Design Patterns DEFINITIONS.

     **/
    /**
    #define                              control()\
    \
           (*Flags[1]?ControlSlot[0]:&self);stack=((void**)stack)+1
     **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*
    note: functions of strategic significance would still be placed
          with proper data members in Class not ClassVirtualTable
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    ///#define VIRTUALTABLE_H(VIRTUALTABLE)
    ///#if VIRTUALTABLE == 1

    ///#ifdef VIRTUALTABLE //VTABLE_H_INCLUDED
    ///#
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                                                           *
     *              typedef struct class    (InputTable)         *
     *              {                                            *
     *                   typePtr type;   [0]                     *
     *                                                           *
     *                   // ...          [1]                     *
     *                                                           *
     *                   // ...          [2]                     *
     *                                                           *
     *              }class    (InputTable);                      *
     *                                                           *
     *              cstring classInputTableType()                *
     *              { return "classInputTable"; }                *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
     *                                                           *
     *    void * * * p               =               ...;        *
     *                                                           *
     *    ((typePtr*)(*p))[0](); //return the "interface"        *
     *                           //name of registration          *
     *                                                           *
     *    call function without inheritance declared, type()     *
     *    will always be the first data member, consider         *
     *    type() as base; for everything here (registrations)    *
     *    or more like it, you abandon structured datatypes      *
     *    and their . or -> by then is what (so count the        *
     *    positions is all)                                      *
     *                                                           *
     *    void * * p               =               ...;          *
     *                                                           *
     *    ((typePtr*)(p))[0](); //return the "interface"         *
     *                         //name of registration            *
     *                                                           *
     *    Reg reg               =               ...;             *
     *                                                           *
     *    ((typePtr*)(reg))[0](); //return the "interface"       *
     *                           //name of registration          *
     *                                                           *
     ** * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

    /**

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*   this is the basic configuration for a factory object    * /
    /**
     * @brief #1 (class info heap types)
     * /
    //Polymorph

    //Interface   (Virtual)

    //Object      (Complex)

    //Strategy    (Overload)

    //Security

    //Control

    //Builder

    //Factory     (Function Tables) (FactoryMethod)

    //Adapter

    /**
     * @brief #2 (class setup function)
     * ////(register base types & sort)(maybe sort)(?)(or put last?)
    static void typename(Setup)(FactoryTable)

        {register(HashTable(ClassName,ClassFactoryMethod,));}

    /**
     * @brief #3 (class structure variables)
     * /
    static FactoryTable(FactoryTable)

        FactoryTable(Factory) =

    { { &class(FactoryTableType), &FactoryTable(Ctor), 0 } , };

    /**
     * @brief #4 (class interface heap)
     * /
    static Interface FactoryTable(InterfaceHeap)[one] =

    { &FactoryTable(Factory), nullptr };

    /**
     * @brief #5 (class factory method)
     * /
    static Interface typename(ClassFactoryMethod)(FactoryTable, 0, 0);


  *//*
     * @brief #6 (struct/variable for method)
     * ///NOT GIVEN THE OPTIONAL STRUCT EXTENSION
    static class (FactoryMethod)

        FactoryTable(Method) =

    { & FactoryTable(Heap) };*//**

    #define cmplx(obj, var, type) \
    \
        (*(type*)complex(obj, var))
     **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*                                                           *
     * MY THOUGHTS OR OPINIONS ABOUT THIS ONE IS THAT ITS EITHER *
     *                                                           *
     * THIS OR A TABLE FOR ALL THE... ? (CANT REMEMBER)          *
     *                                                           */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /*

    typedef struct class    (MethodTable)
    {   /// /// /// ///
        whatPtr what;//   this one
        /// /// /// ///
        methPtr meth;//
        /// /// /// ///
        reglPtr regl;//tblePtr list;// static or = null for private
        /// /// /// ///
    }class   (MethodTable);
  explicit
    cstring classMethodTableType()
    { return "classMethodTable"; }

     */
  #if 0
    # define classInterfaceHeap(Member)classInterfaceHeap ## Member
    static cstring class    (InterfaceHeap)(Type)(void);    ///#X
    typedef struct class    (InterfaceHeap)
    {   /// /// /// ///     (Strategy Variant)
        typePtr type;//[0]   //(interface OOC components)
        /// /// /// ///
        methPtr find;//[1]   //+interface IO, type method address
        /// /// /// ///
        tblePtr list;//[2]   //+
        /// /// /// ///
    }class       (InterfaceHeap);
  explicit/*MINI FACTORY TABLE FOR INTERFACE BASE(S)*/
    cstring class(InterfaceHeap)(Type)(void)
    { return "class(InterfaceHeap)"; }//#X (SUB)
  #endif // DUPLICATE


    # define classCertificateHeap(Member)classCertificateHeap ## Member
    static cstring class    (CertificateHeap)(Type)(void); ///#X
    typedef struct class    (CertificateHeap)
    {   /// /// /// ///     (Security Variant)
        typePtr type;//[0]   //(heap of available )
        /// /// /// ///
        methPtr find;//[1]   //+
        /// /// /// ///
        tblePtr list;//[2]   //+
        /// /// /// ///
    }class       (CertificateHeap);//Overload?
  explicit/*FACTORY TABLE CLASS SUB FACTORY METHOD TABLE*/
    cstring class(CertificateHeap)(Type)(void)///(SECURITY SET?)
    { return "class(CertificateHeap)"; }//#X (SUB)



    # define classAbortTable(Member)classAbortTable ## Member
    static cstring class    (AbortTable)(Type)(void);  ///#X
    typedef struct class    (AbortTable)  /**/
    {   /// /// /// ///     (builder pass for abort clearance)
        typePtr type;//[0]   //(get security key to compare)
        /// /// /// ///
        cstring pass;//[1]   //+pass for bunker
        /// /// /// ///
        hlprPtr init;//[2]   //+setup and abort helper
        /// /// /// ///
    }class       (AbortTable);//()
  explicit/*FACTORY TABLE COMPLEX*/
    cstring class(AbortTable)(Type)(void)          ///(Complex C)
    { return "class(AbortTable)"; }///#

    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    /**            __                              __
                  /\ \__                          /\ \__
            ____ /\__  _\  ____   __  __     ___ /\__  _\
           / ____\/_/\ \/ /\  _`\/\ \/\ \   / ___\/_/\ \/
          /\_____`\ \ \ \/\ \ \_/\ \ \_\.\_/\ \__/_ \ \ \/\
          \/\_____/  \ \__/\ \_\  \ \___/\_\ \_____\ \ \__/
           \/____/    \/_/  \/_/   \/__/\/_/\/_____/  \/_/
                                                                **/
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
    #include "../Object/Info.h"//info heaps (don't forget builder.h)
    /* note: on an important note, to add to the list of interfaces
             here fully and properly, not only should Object.h,
             structclass.h, and Array.h be updated (Array.h if you
             create a new sub factory method type) but builder.h
             and multimap.h have info heaps that need to be updated,
             if this code is compiled/library, you can always re-
             initialize the factory methods those heaps point to,
             making them point to new info heaps in new files.

             (the builder has the heaps that handle interfaces)
     */
    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

                                                    //whatitismang
#endif // STRUCTCLASS_H_INCLUDED
