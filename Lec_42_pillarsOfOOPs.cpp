#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
        int height;

    public:
        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }
        
        int getHeight(){
            return height;
        }

};

class Human{
    public:
    int height;
    int weight;
    private :
    int age;

    public:
    int getAge(){
        return age;
    }
    void setweight(int weight){
        this->weight = weight;
    }
};

class Male:public Human{
    public :
    string color; 

    void sleep(){
        cout<<"Male zzzzzz" <<endl;
    }
};

class A{
    public:
    void func1(){
        cout<<"Func1\n";
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"Func2\n";
    }
};
class C:public A{
    public:
    void func3(){
        cout<<"Func3\n";
    }
};
class D:public B{
    public:
    void func4(){
        cout<<"Func4\n";
    }
};
class E:public C{
    public:
    void func5(){
        cout<<"Func5\n";
    }
};

class c1{
    public:
    void func1(){
        cout<<"i'm func1 in c1\n";
    }
};
class c2{
    public:
    void func1(){
        cout<<"i'm func1 in c2\n";
    }
};

class c3:public c1,public c2{

};

class opOverloading{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+ (opOverloading obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output: "<<value1-value2<<endl; 
    }
};


class Animal{
    public:
    void speak(){
        cout<<"speaking";
    }
};

class Dog: public Animal{
    public: void speak(){
        cout<<"bark";
    }
};
int main(){
   /* Male obj1;
   // cout<< obj1.age << endl;
    cout<< obj1.height << endl;
    obj1.setweight(100);
    cout<< obj1.weight << endl;
    cout<< obj1.color << endl;
    obj1.sleep();
   */
  // to understand types of inheritance:
  /*
  A o1;
  B o2;
  C o3;
  D o4;
  E o5;

  o4.func1();
  o4.func4();
  o4.func2();

  o5.func1();
  o5.func3();
  
  o5.func5();
  */
 /*
 // to understand inheritance ambiguity:
  c3 obj1;
  
  //obj1.func1();
  obj1.c1::func1();
  obj1.c2::func1();

*/
    opOverloading obj1,obj2;
    obj1.a = 10;
    obj2.a = 20;
    obj1 + obj2 ;

    Dog d1;
    d1.speak();


}