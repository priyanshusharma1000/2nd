#include<iostream>
using namespace std;
class Hero{
int health;
public:
char value;
char* name;
static int totaltime;
static int random(){
   return totaltime;
}
};
int Hero::totaltime;
int main(){
cout<<Hero::totaltime<<endl;
Hero::totaltime=10;
cout<<Hero::totaltime<<endl;
Hero h;
cout<<h.totaltime<<endl;
cout<<Hero::random()<<endl;


return 0;
}