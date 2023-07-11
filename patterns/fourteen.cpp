/*sample input
4

sample output

A 
BB
CCC
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
        for(int j=1;j<=i;j++){
           
            cout<<ch;
            
        }
       cout<<" "<<endl;
       ch++;
      
    }
}