
/*sample input
4

sample output


    *
   ***
  *****
 *******

*/
#include<iostream>
using namespace std;
int main(){
    int num ;
    cin>>num ;
    for(int i= 1;i<=num;i++){
        for(int firstRow = i ; firstRow<=num;++firstRow){
               cout<<" "; 
        }
         for(int secondRow = 1 ; secondRow<=i;++secondRow){

            cout<<"*";
         }
          for(int thirdRow = 2 ; thirdRow<=i;++thirdRow){

            cout<<"*";
         }
        
        
        cout<<endl;
        
    }
}