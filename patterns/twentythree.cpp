/*sample input
4

sample output

    1
   222
  33333
 4444444

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

           cout<<i;
        
         }
          for(int thirdRow = 2 ; thirdRow<=i;++thirdRow){
            
            cout<<i;
         }
        
        
        cout<<endl;
       
        
    }
}