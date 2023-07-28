#include<iostream>
#include<string.h>
using namespace std;
class hero{
int health;
public:
char* name;
char level;

hero(){
    name = new char[100];
}
void sethealth(int health){
    this->health =health;
}
void setlevel(char level){
    this->level=level;
}
void setname(char name[]){
    strcpy(this->name,name);
}

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

};
int main(){
hero hero1;
hero1.sethealth(12);
hero1.setlevel('D');
char name[7] = "Babbar";
hero1.setname(name);
hero1.print();
//use default copy constructor
 hero hero2(hero1);
 hero2.print();
// Hero hero2 = hero1;
 hero1.name[0] = 'G';
 hero1.print();
 hero2.print();
return 0;








}