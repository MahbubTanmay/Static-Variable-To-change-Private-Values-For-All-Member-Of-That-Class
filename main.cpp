#include <iostream>
using namespace std;


//30





class MainClass{

static int a;
static int b;


public:

void SetValues(int x, int y) {
    a = x;
    b = y;
}

void Display() {
    cout << "a : " << a << " , b : " << b << endl;

}
};


 int MainClass::a ; 
 int MainClass::b ; 

 int main() {

    MainClass m1,m2;
   

m1.SetValues(10, 20);    
m1.Display();
m2.Display();

    return 0;
}
