#include<iostream>
int main(){
    int val = 8;
    int valTwo = 117;
    int *p1 =  &val;
    std::cout<<*p1<<std::endl; //output  8
    *p1 = 71 ;
    std::cout<<*p1<<std::endl;// output 71 value of val is changed 
    p1 = &valTwo;
    std::cout<<*p1<<std::endl;// output 117 p1 now points to valTwo
    std::cout<<val<<std::endl;// output 71
    int *p2 =0 ;
    int *p3 = 0;
    std::cout<<*p2<<*p3<<std::endl; //output NULL
} 