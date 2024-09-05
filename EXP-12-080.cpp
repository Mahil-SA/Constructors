//Experiment 11 - To study and implement constructors.
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

//Output
/*
(Parameterized constructor) Value of pi is: 3
Copy Constructor) Value of pi is: 3
*/

//Program 4 (
