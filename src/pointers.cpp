#include <iostream>

using namespace std;

void myswap(int  ptr1, int ptr2)
{
  auto temp = ptr1;
  ptr1 = ptr2;
  ptr2 = temp;
  cout<< "a = "<<ptr1<< ", b = "<<ptr2<<endl;
}


int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

//swap(a,b); //why does theirs work????   
 
  myswap(a, b); // but mine doesn't ?!?!?!?!!!???

  //cout<<"a = "<<a<<", b = "<<b<<endl;
  
  //this doesn't work since this function (myswap) is a void function and this doesn't return 
  //maanything so to solve this problem you would print the values inside of the function and the "*" should be taken out of the arguements


}
