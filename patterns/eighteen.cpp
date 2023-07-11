/*sample input
4

sample output

    *
   **
  ***
 ****

*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = 1;i<=num;i++){
        for(int space = num - i;space>=0;space--){
        
        cout<<" ";
        }
    
        for(int j=1;j<=i;j++){
            cout<<"*";
           
        }
        

      cout<<""<<endl;
        
       
    }
}