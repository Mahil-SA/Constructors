# Constructors
This repository contains experiments 11 which are related to constructors in C++.

# Constructors
# EXPERIMENT 9:
## Aim: 
To study and implement constructors.
## Theory: 
In C++, a constructor is a special member function of a class that is automatically invoked when an object of that class is created. Its primary role is to initialize objects by setting their initial state. 

Constructors have the same name as the class and do not have a return type, not even `void`. They can be overloaded, meaning a class can have multiple constructors with different parameter lists to handle various initialization scenarios. 

Constructors can be default (no parameters), parameterized (with parameters), or copy constructors (used to create a new object as a copy of an existing one). Properly using constructors ensures that objects start in a valid state and helps manage resources efficiently.
~~~
CODE:

//Program 1 (Default Constructors)
#include<iostream>
using namespace std;
class MyName{
    public:
    string a;
MyName(){

    cout<< "Enter your name: "<<endl;
    cin>>a;
    cout<<"Hello "<<a<< " from constructor!!"<<endl;

}
};
int main(){
    MyName obj;
    return 0;
}

//Program 2 (Parameterized Constructors)
#include<iostream>
using namespace std;
class MyNumber{
    public:
    int c;
    MyNumber(int val)
{
    c = val*val*val;
    cout<<"Cube of "<<val<<" is: "<<c<<endl;
    
}
};
int main() {
    MyNumber obj(4);
    return 0;
}

//Program 3 (Copy Construcor)
#include<iostream>
using namespace std;
class MyClass
{
    private:
    int value;
    public:
    MyClass(int val)
    {
        value = val;
        cout<<"(Parameterized constructor) Value of pi is: "<<value<<endl;
    }
    MyClass(const MyClass&obj)
    {
        value = obj.value;
        cout<<"Copy Constructor) Value of pi is: "<<value<<endl;
    }
};
int main()
{
    MyClass obj1(3.14);
    MyClass obj2 = obj1;
    return 0;
}

//Program 4 (Default Argument)
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value1;
    int value2;
    string str1;
    public:
    
    MyClass( int val1= 0, int val2= 0, string a = "none"){
        str1 = a;
        value1= val1;
        value2 = val2;
        cout<<str1<<" played "<<value1<<" ODI matches."<<endl;
        cout<<"He scored "<< value2 << " centuries."<<endl;

    }
};
int main()
{
   
    MyClass obj1(463,49, "Sachin");
    return 0;
    }

//Program 5 (Find area of rectangle using classes.)
#include<iostream>
using namespace std;
class MyClass{
    private:
    int l;
    int b;



    public:
int s,w;
void getinput()
         { 
            cout<<"Enter length and breadth"<<endl;
            cin>>s>>w;
         }

         void display()
         { int a;
         l=s;
         b=w;
    
            a = l*b;
         cout<<"Area of rectangle is: "<< a<< endl;
         }
};
int main(){
    
    MyClass obj1;
    obj1.getinput();
    obj1.display();

    return 0;
}

//Program 6 (Destructor)
#include<iostream>
using namespace std;
class MyClass
{
    public:
    ~MyClass()
    {
        cout<<"Destructor called!"<<endl;
    }
    MyClass()
    {
        cout<<"Constructor called!"<<endl;
    }
};
int main()
{
    MyClass obj;
    
    return 0;
}
~~~

## Conclusion
In C++ we have learnt about constructors and their types.

## Output
### Program 1
![image](https://github.com/user-attachments/assets/f0c8c0fb-3290-417a-a746-2d4b66187b07)

### Program 2
![image](https://github.com/user-attachments/assets/3049fe1d-501a-4c1f-bad2-14b7de247327)

### Program 3
![image](https://github.com/user-attachments/assets/b73e6dc9-7fdd-4207-8867-4b3ce093ef26)

### Program 4
![image](https://github.com/user-attachments/assets/423fc457-f882-4fc7-97b0-b301e43d31a2)

### Program 5
![image](https://github.com/user-attachments/assets/2fc54ce0-9a3c-4a08-9892-71f7093dab57)

### Program 6
![image](https://github.com/user-attachments/assets/34b1abc9-b973-4fcb-a489-8c32d91e031b)
