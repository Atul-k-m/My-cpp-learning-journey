#include<iostream>
using namespace std;
class Hero{
  public:
  int a = 5 ;
};

int main(){
    Hero *thor = new Hero;
    cout<<thor->a<<endl;
    Hero spidey;
    cout<<spidey.a;
}