#include<iostream>
#include<string>
using namespace std;
class Hero{
  public:
  int power ;
  string place;
 Hero(int power,string place){
    this->power = power;
    this->place = place;
 }
 void print(){
    cout<<power<<endl;
    cout<<place<<endl;

 }
};

int main(){
    Hero *thor = new Hero(100,"hell");
    thor->print();
    Hero spidey(50, "earth");
    spidey.print();
    delete thor;
}