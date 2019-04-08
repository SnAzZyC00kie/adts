#include "StackV.h"


Stack:: ~Stack()
      {
		  clear();
	  }

  int  Stack::size()
       {
		   return data.size(); //return front;
       }
	

   void Stack::push(int val) //set front to the top which is the last location in stack causing seg fault.
        {
		    /*for(auto i=0u;i<data.size();i++)
		        front++; */
		       data.push_back(val);
		        	  
       }
       
   void Stack::pop()
      {
		/*  if(front!=-1)
		     {*/
				 data.pop_back();
				  --front;
      }  

   int Stack::top()
      {
		   if(front>=0)
			 {
				 for(auto j=0u;j<data.size()-1;j++)
				  {
					 front=j;
				  }
				  return data[front];
			 }
		  else
			
		  if(front==data.size()-1)
			   return front;  
		  else
			  return-1;
     } 

   void Stack::clear()
        {
			while(front > 0)
			     pop();
	    }
