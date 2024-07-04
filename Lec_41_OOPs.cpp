#include <iostream>
#include<string.h>
#include "Hero.cpp"
using namespace std;
class Hero2{
    
    //properties
    private:
    int hp;

    public:
    
    string name;
    char *ch[10];
    static int timer;

    Hero2(){
        cout<<"object created\n";
    }
    Hero2(int hp){
        this->hp=hp;
        cout<<"object created\n";
    }
    Hero2(int hp,string name){
        this->hp=hp;
        this->name=name;
        cout<<"object created\n";
    }
    Hero2(int hp,string name,char &temp){
        this->hp=hp;
        this->name=name;
        *this->ch = &temp;
        cout<<"object created\n";
    }
    //destructor
    ~Hero2(){
        cout<<name<<" ko tod udnga fod dunga \n";
    }
    // static functions :
    static int rando(){
        return timer;
    }

    /// copy constructor
    /*
    Hero2(Hero2& temp){
        this->ch = &temp.ch;
        this->hp = temp.hp;
        this->name = temp.name;
        cout<<"invoking copy constructor\n";
    }
    */

    void print(){
        cout<<name;
    }
    int getHealth(){
        return hp;
    }
    
    string getName(){
        return name;
    }
    void setHealth(int hp){
        this->hp=hp;
    }
    
    void setName(string n){
        name = n;
    }
    
};  

int Hero2::timer = 25;
int main(){
    //Hero2 h1;
    //Hero h2;
    //h1.hp=70;

    /*
    h1.name="ramesh";
    h1.setName("ramesh dalle");

    //cout<<" "<<sizeof(h1);
    //cout<<"Hp:"<<h1.hp<<endl;
    h1.setHealth(25)   ;  // health can be set despite being private attribute
    cout<<"Hp:"<<h1.getHealth()<<endl;;

    cout<<"Name:"<<h1.name<<endl;
    h1.print();
    */
/*x
    Hero2 *alom = new Hero2; // dynamically alloted hero
    (*alom).name="ramesh2";
    (*alom).setName("Mahesh Dalle");

    (*alom).setHealth(25)   ;  // health can be set despite being private attribute
    cout<<"Hp:"<<(*alom).getHealth()<<endl;;

    cout<<"Name:"<<(*alom).name<<endl;
    cout<<"Name:"<<alom->getName()<<endl;
    (*alom).print();
    delete alom;

    Hero2 h1(50,"gabbar");

    Hero2 *h2 = new Hero2(10,"babbar");
    delete h2;
*/
    cout<<Hero2::timer<<endl;
    Hero2 h9(70,"rubber");

    cout<<Hero2::rando();
    cout<<h9.timer<<endl; // doesnt belong to class so not recommended to do this 

}