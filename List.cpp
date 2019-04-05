#include "List.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


class List::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)   
	};//end Node class definition (can only be seen by the List class)


List::~List() //Destructor which removes memory from the heap
{
    while(num_elements > 0)
      remove(1);
}
	
int List::size()
 {
    return num_elements;
 }

void List::insert(int val, int k)
{
	if (k < 1 or k > num_elements +1) //if the location is invalid
	     throw out_of_range("List::insert("+to_string(val)+", " +to_string(k)+") failed. (valid indices are 1 to "+to_string(num_elements+1)+")");//throw an "out_of_range" exception
	
	Node* newPtr = new Node{val}; //assign a pointer  to a new node which contains the desired value to be added to the list
	
	if(k == 1) // If the list exist
	{
	  newPtr->link = frontPtr; // assign the new pointer plus it's data to the front pointer
	  frontPtr = newPtr;// therefore the new pointer "points" towards the front pointer
	 }
	else
	 {  
	
	  Node* tmpPtr = frontPtr; //create a temporary pointer which points to the front pointer of the list
	  int loc = 1; 
	  
	    while( loc != k-1) //get pointer to (k-1)th node
	     {
		tmpPtr = tmpPtr->link;
		loc++;
	     }
	
	  newPtr->link = tmpPtr->link;
	  tmpPtr->link = newPtr;  
        }//end else

     num_elements++;
 }

void List::remove(int k)
{
	if (k < 1 or k > num_elements)//if the location is invalid 
	     throw out_of_range("List::remove(" +to_string(k)+") failed. (valid indices are 1 to "+to_string(num_elements)+")");//throw an "out_of_range" exception // going outside of the scope of the list
	
	Node* delPtr; // delete the Pointer
	
	if(k == 1)
	{
	  delPtr = frontPtr; //assign deleted pointer to front pointer 
	  frontPtr = frontPtr->link; //accessing the data of the front pointer
	 }
	 else
	 {
	    Node* tmpPtr = frontPtr;// assign front pointet to temporary pointer
		
	    int loc = 1;
            
            while(loc != k-1)//get pointer to (k-1)th node
	    {
	       tmpPtr = tmpPtr->link; //assign temporary pointer to (k-1)th node
		loc++;
	    }
	
	    delPtr = tmpPtr->link; //assign the data within temporary 
	    tmpPtr->link = delPtr->link;//delete data and pointer at k-1
	  }
	
	delete delPtr;  //delete pointer
	num_elements--;//decrement the number of elements 
	k++;
	}
	
	//Implementations of missing operations
 int List::getAt(int k) // Allows user to view all the contents within the linked list
	   {
		   int element=1;
		   while(frontPtr!=nullptr)
		      {
			        if(element==k)
		           {   
					   return frontPtr->data;
				   }  
				   frontPtr=frontPtr->link;
				   element++;
		      }
		      return -1; // Either element does not exist or no elements are in the list
		}
void List::clear()
        {
			Node*delPtr;
			int k=1;
		 
		 while(frontPtr!=nullptr)
		  { 
			while(num_elements!=k)
			{
			  delPtr = frontPtr; //assign deleted pointer to front pointer 
			  frontPtr = frontPtr->link; //accessing the data of the front pointer
			  delete delPtr;
			  }
			  //delete pointer
			num_elements--;//decrement the number of elements 
			k++;
			}
	}
	 
