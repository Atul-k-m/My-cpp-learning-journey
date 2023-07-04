/*What does the following program do?
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;*/
#include<iostream>
int main(){
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    //changes i value to 1764
}