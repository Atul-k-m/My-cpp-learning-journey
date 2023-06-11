#include<iostream>
int main(){
    int currValue = 0 , val = 0;
    if(std::cin>>currValue){
        int cnt = 1;
        while(std::cin>>val){
            if(currValue==val){
                ++cnt;
            }
            else{
                std::cout<<"no of"<<currValue<<"are"<<cnt<<std::endl;
                currValue = val;
                cnt = 1;
            }
        }
          std::cout<<"no of"<<currValue<<"are"<<cnt<<std::endl;
    }
}