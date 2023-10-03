#include <iostream>

int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    int arr[size];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        int count = 0;

    
        bool processed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                processed = true;
                break; 
            }
        }

        if (!processed) {
            for (int j = 0; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            std::cout << arr[i] << " occurs " << count << " times" << std::endl;
        }
    }

    return 0;
}
