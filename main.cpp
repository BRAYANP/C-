#include <iostream>
#include <cmath>



using namespace std;


int sumar(int x ,  int  y){
    return  x + y;
}

int main() {
    float base, height , area  ;

    area = base * height / 2;
    cout<< " Enter The Base" ;
    cin>> base;
    cout<<"Enter The Height";
    cin>>height;
    cout << "The triangle Zone is : "<<area << endl;
    cout << "The sum(3,4) : "<< sumar( 3,4) << endl;



    return 0;
}



