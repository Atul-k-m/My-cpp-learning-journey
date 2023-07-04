/*sample input
4

sample output

1 
22
333
4444

*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count = 1;
    for(int i = 1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
       cout<<" "<<endl;
       count++;
    }
}