#include<iostream>
#include<vector>
int getpivot(std::vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end) {
        
       if ( arr[mid]>=arr[0]) {
            start = mid + 1;
        } else {
            end = mid ;
        }
       mid = start + (end - start) / 2;
       
    }
    return start;
}

int binarySearch(std::vector<int>& arr,int start ,int end, int key){
    start = 0 ;
    end = arr.size() - 1;
    int mid = start + (end-start)/2;
    for(int i=0 ; i < arr.size();i++){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] <key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
        return -1;
} 

int findIndex(std::vector<int>& arr,int size, int key){
    int pivot = getpivot(arr);
    if(key>=arr[pivot] && key<=arr[size-1]){
      return   binarySearch(arr,pivot,size-1,key);
   }
   else{
     return   binarySearch(arr,0,pivot-1,key);
   }
}

int main(){
    int size,key;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    std::vector<int> arr(size);

   
    for (int i = 0; i < size; i++) {
     std::cout << "Enter the elements of the array: ";
        std::cin >> arr[i];
    }
   
   std::cout<<"enter elements to be searched ";
   std::cin>>key;
   int searchedindex = findIndex(arr,size,key);
   std::cout<<"sol: "<<searchedindex;
}