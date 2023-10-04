#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> tripletSum(int arr[], int size, int sum) {
    std::vector<std::vector<int>> ans;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    std::vector<int> temp;
                    temp.push_back(std::min({arr[i], arr[j], arr[k]}));
                    temp.push_back(arr[i] + arr[j] + arr[k] - temp[0] - std::max({arr[i], arr[j], arr[k]}));
                    temp.push_back(std::max({arr[i], arr[j], arr[k]}));
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    int arr[size];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    int sum;
    std::cout << "Enter the target sum: ";
    std::cin >> sum;

    std::vector<std::vector<int>> tripletSummation = tripletSum(arr, size, sum);

    std::cout << "Triplets that sum to " << sum << ": ";
    for (int i = 0; i < tripletSummation.size(); i++) {
        std::cout << "(" << tripletSummation[i][0] << ", " << tripletSummation[i][1] << ", " << tripletSummation[i][2] << ") ";
    }
    std::cout << std::endl;
}
