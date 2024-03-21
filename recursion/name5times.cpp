#include<iostream>
int count = 0 ; 
void nameprint(int count){
    if(count==6){
        return;
    }
    count++;
    std::cout<<("hi\n");
    nameprint(count);
}

int main(){
    nameprint(count);
}