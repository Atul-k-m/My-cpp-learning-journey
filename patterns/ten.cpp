/*sample input
4

sample output

AAAA
BBBB
CCCC
DDDD

*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i = 0;
    char ch = 'A';
    for( i = 1;i<=num;i++){
       // char ch = 'A' + i;
        for(int j=1;j<num;j++){
           
            cout<<ch;
            
        }
       cout<<ch<<endl;
       ch++;
      
    }
}