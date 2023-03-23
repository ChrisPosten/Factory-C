about:     The Factory C library or Object-Oriented C (Factory C) (OOC)
version:   1.4.3
author:    Christopher Posten

todo: inside your CodeBlocks/MinGW/lib/gcc/mingw32/5.1.0/include folder
	  you place your OOC folder. inside your OOC folder you place
	  your Factory/obj/Debug/OOC/OOC.o object file and remove the OOC.c
	  file (with the .o file in its place). this turns the Factory
	  project (C project) or the OOC portion of it into a library
	  you include with a single file.

	  this includes everything OOC offers. this includes a basic set
	  of datastructures needed to implement the factory, a vector, a
	  stack as a single-linked-list, a hashtable, and a heap as a 
	  binary-search-tree are all included and ready to be typenamed
	  for whatever type you choose to use them for.
	  
	  the factory itself is comprised of multiple singletons working
	  in conjunction with one another to operate an object-oriented 
	  C program. you must also include the program constructor and
	  program destructor for Factory C inside your main.c so:
	  
	  
#include <OOC/OOC.h>

void typename(constructor) ({}) ;///Object-Oriented C (Factory C)

int main()
{   
    String * obj = factory("String")(this, 2, "HelloWorld");

    cout(obj)endl cend;

    delete(obj);

    return 0;
}

void typename(destructor) ({}) ;


      is placed inside your main.c.

	  
	  don't forget to try out the class builder
	  for a class thats dynamic at runtime, inside Factory/DesignPatterns/...
	  (adjacent to Factory/OOC) are examples of things like adapters and
	  inside Factory/Workspace/Workspace.h is examples of everything
	  including the class builder example. also don't forget that Factory is
	  a CodeBlocks project folder you can open using CodeBlocks 5.1.0 or
	  something (OOC is a subfolder of Factory). for 64 bit pointers,
	  only the files vTable.h and aTable.h need to be updated, with each 
	  occurence of 32 replaced by 64 in those two files.
	  
	  
    /* note: the 3 primary tables

     */
    cout(vtable)(ftable)(atable)cend;
	
    /* also: there is 2 secondary tables (stable, and btable)
             found inside the factory table and so accessed by:

             multimap()()()()
     */
	 
	Updates:
	
	
			- - 		version 1.2.1			- - 
					
					
			- includes all the template types used to implement Factory C
			inside the FactoryTable.
			
			
			- - 		version 1.3.1			- - 


            - reimplemented is_polymorphic.

            - added thrown exceptions for null pointer in the factory methods.

            - added the macro: class(multimap).

            - made the adapter table able to downsize itself like the
              vtable and in a way parallel to the vtable like it is
              (by vstk).

            - finally made it so printf doesn't need to be used,
              when all the parameters passed into cout are passed
			  straight through to printf (including sprintf, fprintf).

            - re-implemented override.

            - fixed standard output for cout.

			
			- - 		version 1.4.1			- - 
			

            - reimplemented is_polymorphic. this time using an iterator.
			
			- implemented an iterator to go with multimap for
			polymorphism between implemented structclass and builder
			class.
			
			- fixed the copy constructor for the class builder multimap.
			
			- hooked things up to the factory table directly so everything
			should be changeable by reassigning heaps, factory methods, etc...
			(class(Builder), struct(Bunker), multimap).
			
			
			- - 		version 1.4.2			- - 
			
			
			- udapted/fixed the union multi method to use adapter factory
            table classes default interface from the class interface heap
			(so it works without using a class(AdapterTable)).
			
			- fixed the return in the output function(s)  in Exception.h so 
			it/they return 0.
			
			
			
			- - 		version 1.4.3			- - 
			
			- fixed the control factory for loop to deaccumulate its 
			strategic command instead, solving the problem with multiples
			of the same digit.
	 
	 