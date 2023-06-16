#include<iostream>
int main(){
    int randomVal = 77;
    int &rf = randomVal;
    int *pv = &randomVal;
    rf = 75;
   // *pv = 88;
    std::cout<<randomVal<<std::endl;
    std::cout<<rf<<std::endl;
    std::cout<<&rf<<std::endl;
    std::cout<<pv<<std::endl; 
     std::cout<<*pv<<std::endl;   

}