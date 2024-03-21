#include<iostream>
int n; 
int factorialparam(int n){
    if(n==0){
        return 1;
    }

    return n * factorialparam(n-1);
}

int main(){
    std::cin>>n;
    std::cout<<factorialparam(n);
}