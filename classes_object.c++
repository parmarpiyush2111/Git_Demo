#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        void setData(int x,int y){
            real=x;
            imag=y;
        }
        void showData(){
            cout<<"Real : "<<real<<endl;
            cout<<"Imaginary : "<<imag<<endl;
        }
};

int main(){
    Complex c1;
    c1.setData(10,20);
    c1.showData();

    return 0;
}