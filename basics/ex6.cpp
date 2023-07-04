/*What does the following for loop do? What is the final value of sum?
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;*/

#include<iostream>
int main(){
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i;
    std::cout<<sum;
} 
//ans 0