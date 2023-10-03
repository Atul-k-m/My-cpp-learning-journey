/*print sum of elements of an array*/
#include<iostream>
int main(){
    int n , sum=0;
    std::cout<<"no of elements"<<std::endl;
    std::cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        std::cin>>arr[i];
        sum += arr[i];
    }
   
    std::cout<<sum;
}