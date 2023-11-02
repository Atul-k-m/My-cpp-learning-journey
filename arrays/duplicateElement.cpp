#include <iostream>
#include <vector>

int findDuplicate(const std::vector<int>& arr) {
    int answer = 0;
    for (int i = 0; i < arr.size(); i++) {
        answer = answer ^ arr[i];
    }
    return answer;
}

int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    std::vector<int> arr(size);

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    int duplicateValue = findDuplicate(arr);
    std::cout << "Duplicate element is: " << duplicateValue << std::endl;

    return 0;
}

