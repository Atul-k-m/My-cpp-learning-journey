#include<iostream>
using namespace std;
class Hero{
  private:
   int health;
  public:
   int  gethealth(){
     return health;
   }
   void sethealth(int h){
     health = h;
   } 
};

int main(){
    Hero *thor = new Hero;
    cout<<thor->gethealth()<<endl;
    thor->sethealth(45);
      cout<<thor->gethealth()<<endl;
    Hero spidey;
    cout<<spidey.gethealth()<<endl;
    spidey.sethealth(34);
    cout<<spidey.gethealth();
    delete thor;
}