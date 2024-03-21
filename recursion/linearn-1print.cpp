#include<iostream>
int  n; 
void nameprint(int n){
    if(n==0){
        return;
    }
    std::cout<<n<<std::endl;
    nameprint(n-1);
}

int main(){
    std::cin>>n;
    nameprint(n);
}