#include<iostream>
int count=0, n; 
void nameprint(int count,int n){
    if(count==n){
        return;
    }
    count++;
    std::cout<<count<<std::endl;
    nameprint(count,n);
}

int main(){
    std::cin>>n;
    nameprint(count,n);
}