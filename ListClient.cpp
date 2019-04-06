#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
 
 cout << "Size of L1 is " <<L1.size()<<endl; //sptr -> L1.size();
 L1.insert(13,1); // Assign 13 to the 3rd node in the Linked list L1
 L1.insert(12,2);
 L2.insert(5,1);
 L2.insert(10,2);
 cout << "L1 contains the following elements: "<<L1.getAt(1)<<endl;
 cout<< "L2 contains the following elements :"<<L2.getAt(2)<<endl;
 cout << "Size of L1 is :" <<L1.size()<<endl;
 L1.remove(2);
 L1.remove(1);
 cout << "Size of L1 is:" <<L1.size()<<endl;
 L2.clear();
 return 0;
}
