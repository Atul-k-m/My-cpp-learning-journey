#include<iostream>
#include<vector>
std::vector<int> arrayintersect(int arr1[], int arr2[],int sizeOne , int sizeTwo){
   std::vector<int> ans;
   int i = 0 , j =0;
   while(i<sizeOne && j<sizeTwo){
    if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j]){
        i++;
    }
    else{
        j++;
    }
   }
  return ans;
}

int main(){
   
    int sizeOne;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> sizeOne;
    int arr1[sizeOne];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < sizeOne; i++) {
        std::cin >> arr1[i];
    }
    int sizeTwo ;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> sizeTwo;
    int arr2[sizeTwo];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < sizeTwo; i++) {
        std::cin >> arr2[i];
    } 
    
   
    std::vector<int> intersection = arrayintersect(arr1, arr2, sizeOne, sizeTwo);

    std::cout << "Intersection of the two arrays: ";
    for (int i = 0; i < intersection.size(); i++) {
        std::cout << intersection[i] << " ";
    }
    std::cout << std::endl;


}