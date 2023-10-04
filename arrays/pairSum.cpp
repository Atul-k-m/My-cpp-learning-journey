#include<iostream>
#include<vector>
#include<math.h>
std::vector<std::vector<int>> pairSum(int arr[], int size, int sum) {
    std::vector<std::vector<int>> ans;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                std::vector<int> temp;
                temp.push_back(std::min(arr[i], arr[j]));
                temp.push_back(std::max(arr[i], arr[j]));
                ans.push_back(temp);
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

    std::vector<std::vector<int>> pairsummation = pairSum(arr, size, sum);

    std::cout << "Pairs that sum to " << sum << ": ";
    for (int i = 0; i < pairsummation.size(); i++) {
        std::cout << "(" << pairsummation[i][0] << ", " << pairsummation[i][1] << ") ";
    }
    std::cout << std::endl;
}
