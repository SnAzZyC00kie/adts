#include "StackL.h"

   int Stack::size()
   {
	   return num_elements;
   }

   void Stack::push(int item)
       {
			List*newPtr = new Node{item}; //assign a pointer  to a new node which contains the desired value to be added to the list
			newPtr->link=frontPtr;
			frontPtr=newPtr;
			num_elements++;
       }

  void Stack::pop() //removes the element from a particular location in the linked list
{
	if(frontPtr==nullptr)
	   { 
		   cout<<"Stack is empty"<<endl;
	   }
	else
	
	{
	  List*delPtr = frontPtr; //assign deleted pointer to front pointer 
	  frontPtr = frontPtr->link; //accessing the data of the front pointer
	}
	delete delPtr;  //delete pointer
	num_elements--;//decrement the number of elements    
}
   
   int Stack::top()
       {
		    int element=1;
		   while(frontPtr!=nullptr)
		      {
			        if(element==)
		           {   
					   return frontPtr->data;
				   }  
				   frontPtr=frontPtr->link;
				   element++;
		      }
		      return -1; // Either element does not exist or no elements are in the list
	   }
   void Stack::clear()
       {
		   while(num_elements > 0)
		        pop();
	   }
