/*Write a program that uses a for to sum the numbers from 50 to 100*/
#include<iostream>
int main(){
    int sum =0;
    for(int val=50; val<=100;++val){
        sum += val;

    }
    std::cout<<sum;

}