/*Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.*/
#include<iostream>
int main(){
    int numOne , numTwo;
    std::cout<<"enter two nos"<<std::endl;
    std::cin>>numOne>>numTwo;
    if(numOne>numTwo){
      while(numOne>=numTwo){
        std::cout<<numTwo<<std::endl;
        ++numTwo;
      }
    }
    else if (numOne==numTwo)  {
        std::cout<<"both are same nos"<<std::endl;
    }
    else{
        while(numOne<=numTwo){
        std::cout<<numTwo<<std::endl;
        --numTwo;
      }
    }
    

}
