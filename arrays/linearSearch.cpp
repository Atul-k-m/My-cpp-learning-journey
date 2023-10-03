#include<iostream>
bool search(int arr[], int n ,int key){
    for(int i =0 ; i<n;i++){
        if(arr[i]==key){
            return 1;
        }  
    }
    return 0;
}
int main(){
    int n;
    std::cout<<"Enter no of elements in array";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int key;
    std::cout<<"enter the element to be searched"<<std::endl;
    std::cin>>key;
    bool linsearch =  search(arr,n,key);
    if(linsearch){
        std::cout<<"found";
    }
    else{
        std::cout<<"not found";
    }
}