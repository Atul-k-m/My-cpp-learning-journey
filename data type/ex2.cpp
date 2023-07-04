/*whats the output 
int i = 100, sum = 0;
 for (int i = 0; i != 10; ++i)
   sum += i;
 std::cout << i << " " <<sum << std::endl;
 std::cout<<::sum; 

*/
#include<iostream>
int sum = 67;
int main(){
 int i = 100, sum = 0;
 for (int i = 0; i != 10; ++i)
   sum += i;
 std::cout << i << " " <<sum << std::endl; //45 100
 std::cout<<::sum; //67

}
