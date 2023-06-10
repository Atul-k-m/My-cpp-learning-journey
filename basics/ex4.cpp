//Use the decrement operator to write a while that prints the numbers from ten down to zero.
#include<iostream>
int main(){
    int num=10;
    while(num>=0){  
     std::cout<<num<<std::endl;
     --num;
    }
   
    return 0;
}
