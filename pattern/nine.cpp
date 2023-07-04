/*sample input
4

sample output
1 
21
321
4321

*/



#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    for(int i = 1;i<=num;i++){
       for(int j = i ; j>=1;j--){
       cout<<j;

    }
    cout<<" "<<endl;
}
}