/*Is the following code legal or not? If not, how might you make it legal?
int null = 0, *p = null;*/
#include<iostream>
int main(){
  //legal code method 1 
   int null = 0, *p = nullptr;
 //legal code method 2
   int nullTWO = 0;
   const int *p2 = &nullTWO;


}
