
//Implementing a Stack ADT With a List ADT

#ifndef STACK_H
#define STACK_H


#include "List.h"

class Stack
{
  private:
    
    int val=0;
    List data;
    List*link= nullptr; 
    List*frontPtr=nullptr; //behaves as the top pointer
    
    List(int val)
        {
			item=val;
	     }
   

public:

// No default c'tor needs to be declared 
// the List "knows" how to initialize itself

// No default d'tor needs to be declared 
// the List "knows" how to destroy itself

   int size();

   void push(int item);

   void pop();

   int top();

   void clear();

};

#endif
