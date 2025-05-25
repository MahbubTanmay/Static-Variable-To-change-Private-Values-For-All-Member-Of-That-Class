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


 int MainClass::a ;  //Outside that Class, it is compulsary to Initialize those static variables
 int MainClass::b ; 

 int main() {

    MainClass m1,m2;
   

m1.SetValues(10, 20);   //Just Update those static variables once and it will work for all member of the class that contain those Static Variable/s  
m1.Display();
m2.Display();

    return 0;
}
