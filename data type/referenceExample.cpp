#include<iostream>
int main(){
int i, &ri = i;
i = 95; ri = 10;
 std::cout << i << " " << ri << std::endl;
}