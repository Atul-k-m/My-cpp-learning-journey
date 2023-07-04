/*Write code to change the value of a pointer. Write code to change the value to which the pointer points.*/
#include<iostream>
int main(){
    int valOne = 738;
    int valTwo = 342;
    int *p = &valOne;
    std::cout<<*p<<std::endl;
    p = &valTwo ;
    std::cout<<*p<<std::endl;
    *p = 467;
    std::cout<<valTwo<<std::endl;
}