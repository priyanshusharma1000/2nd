#include<iostream>
using namespace std;
class demo{
string name;
int marks;
char grade;
public:
demo(demo& abc){
   
}
demo(string name,int marks,char grade){
   this->grade=grade;
   this->marks=marks;
   this->name=name;
}
void getname(string name ){
  this->name=name; 
}
void display(){
cout<<"name  :"<<name<<endl;
cout<<"marks :"<<marks<<endl;
cout<<"grade :"<<grade<<endl;
}
};
int main(){
   demo d1("priyanshu",45,'b');
   d1.getname("sharma");
   demo d2(d1);//copy constructor;
   d1.display();
   d2.display();
  
   return 0;



}