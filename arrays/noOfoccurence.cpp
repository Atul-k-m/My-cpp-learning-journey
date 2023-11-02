#include <iostream>
#include <vector>

int firstOccurence(std::vector<int>& arr, int key) {
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
       mid = start + (end - start) / 2;

    }
    return ans;
}

int lastOccurence(std::vector<int>& arr, int key) {
    int start = 0, end = arr.size() - 1;
    int  mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
       
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
       mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    int size, key;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    std::vector<int> arr(size);

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter element to be searched: ";
    std::cin >> key;
    int indexoffirst = firstOccurence(arr, key);
    int indexoflast = lastOccurence(arr, key);
    int occurences = (indexoflast-indexoffirst)+1;
    if (indexoffirst != -1) {
        std::cout << "First occurrence index is " << indexoffirst << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }
    if (indexoflast != -1) {
        std::cout << "Last occurrence index is " << indexoflast << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }
    std::cout<<occurences;
    return 0;
}
