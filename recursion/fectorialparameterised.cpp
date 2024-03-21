#include<iostream>
int factorial =1, n; 
void factorialparam(int factorial,int n){
    if(n==0){
        return;
    }
    factorial *= n;
    std::cout<<factorial<<std::endl;
    factorialparam(factorial,n-1);
}

int main(){
    std::cin>>n;
    factorialparam(factorial,n);
}