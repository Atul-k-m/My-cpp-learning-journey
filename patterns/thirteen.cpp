/*sample input
3

sample output
A B C 
B C D
C D E

*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    char ch =  'A';
    for( int i = 1;i<=num;i++){
        
        for(int j=1;j<=num;j++){
      
            cout<<ch<<" ";
            ch++;
            
        }

       cout<<""<<endl;
        ch=ch-2;
      
    }
}