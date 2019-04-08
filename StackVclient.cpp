#include <iostream> 
#include <string> 
#include "StackV.h"//Use vector implementation of Stack

using namespace std;
        
        
string reverseString(string str)
{
     string res; //reversed string
     Stack stk; //object 

   for (auto ch : str ) 
      stk.push(ch); //push the characters  onto stack

    
    while( stk.size() > 0)
       {
	  res +=  stk.top(); //add string to the top of stack
	   stk.pop();   //pop the stack
       }

   return res;  //return the reversed string
}


int main()
{         
    string a_string = "COMP2115 here we come!!!";
     
    cout<<"\""<<a_string<<"\""<<endl<<"\""<<reverseString(a_string)<<"\"" <<endl;
	    
    return 0;
        
}
