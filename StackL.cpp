#include "StackL.h"

   int Stack::size()
   {
	   return num_elements;
   }

   void Stack::push(int item)
       {
		   List*newPtr = new Node{item};
		   if(num_elements==0)
		     {
				newPtr->link=frontPtr; 
				frontPtr=newPtr;
			   }
		   else
		   List*topPtr=frontPtr 
		   for(int i=0;i<num_elements-1;i++) //if top is not at the end of stack
		       {
				   topPtr=topPtr->link
				   newPtr->link=topPtr->link
				   topPtr->link=newPtr
			   }
			   
		 num_elements++;
       }

  void Stack::pop() //removes the element from a particular location in the linked list
{
	List*delPtr;
	
	if(num_elements==1)
	  {
		  delPtr=frontPtr;
		  frontPtr=frontPtr->nullptr; //->link
      } 
     else
     List*topPtr=frontPtr;
     for(int i=0; i<num_elements;i++)
         {
			 topPtr=topPtr->link
			 delPtr=topPtr->link
			 topPtr->link=delPtr->link
	     }
	delete delPtr;  //delete pointer
	num_elements--;//decrement the number of elements    
}
   
   int Stack::top()
       {
		    List*getPtr=frontPtr;
		      if(num_elements!=1)
			     
			     for(int k=1;k<num_elements;k++) 
			         {
		                getPtr=getPtr->
		             }
		      return getPtr->data; // Either element does not exist or no elements are in the list
	   }
   void Stack::clear()
       {
		   while(num_elements > 0)
		        pop();
	   }
