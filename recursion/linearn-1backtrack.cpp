#include<iostream>
int count, n; 
void nameprint(int count,int n){
    if(count<1){
        return;
    }
    std::cout<<count<<std::endl;
    nameprint(count-1,n);
}

int main(){
    std::cin>>n;
    nameprint(n,n);
}