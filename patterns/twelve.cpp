/*sample input
4

sample output
A B C D 
E F G H
I J K L
M N O P

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
        //ch++;
      
    }
}