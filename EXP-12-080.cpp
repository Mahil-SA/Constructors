//Experiment 12 - To study and implement constructors.
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

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

//Output
/*
Enter your name: 
Mahil
Hello Mahil from constructor!!
*/

//Program 2 (Parameterized Constructor)
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

//Output
/*
Cube of 4 is: 64
*/

//Program 3 (Copy Construcor)
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Pink Floyd were established in the year "<<value<<endl;
    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<"Second Indo-Pak war happened in the year "<<value<<endl;
    }
};
int main(){
    MyClass obj1(1965);
    MyClass obj2 = obj1 ;
    return 0;
    }

//Output
/*
(Parameterized constructor) Value of pi is: 3
Copy Constructor) Value of pi is: 3
*/

//Program 4 (Default argument)
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

//Output
/*
Sachin played 463 ODI matches.
He scored 49 centuries.
*/

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

//Output
/*
Enter length and breadth
2 5
Area of rectangle is: 10
*/

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
