/*sample input
4

sample output
A B C D 
A B C D
A B C D
A B C D

*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
   // char ch =  'A';
    for( int i = 1;i<=num;i++){
        
        for(int j=1;j<=num;j++){
        char ch = 'A' + j - 1;
            cout<<ch<<" ";
           // ch++;
            
        }

       cout<<""<<endl;
        
      
    }
}