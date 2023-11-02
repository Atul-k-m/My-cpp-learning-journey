/*print sum of elements of an array*/
#include<iostream>
int main(){
    int arr1[100] = {1,2,3};
    int arr2[100]= {1,4,6};
    int arr3[100];
    int  i= 0 , j = 0  , k = 0 ;
    while(i<3  && j<3){
       if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
        k++;
       }
       else{
        arr3[k]=arr2[j];
        j++;
        k++;
       } 
    while(i<3){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
      while(j<3){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    }
    for(int i =0;i<6;i++){
       std::cout<<arr3[i];
      
    }

}