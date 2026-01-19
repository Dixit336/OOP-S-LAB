#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float img;
    public:
    void setComplex(float r,float i){
        real=r;
        img=i;
    }
    void displayComplex(){
        cout<<"Complex number is:"<<real<<" +i"<<img<<endl;

    }
    int sumOfTWoComplex(Complex c){
        float real_sum=real + c.real;
        float img_sum=img +c.img;
        cout<<"Sum of real part is:"<<real_sum<<endl;
        cout<<"Sum of imaginary part is:"<<img_sum<<endl;
        return real_sum + img_sum;

    }
    

};
int main(){
    Complex c1;
    float r,i;
    cout<<"Enter real and imaginary part of complex number:"<<endl;
    cin>>r>>i;
    c1.setComplex(r,i);
    c1.displayComplex();
    int sum_result=c1.sumOfTWoComplex(c1);
    cout<<"Sum of complex number is:"<<sum_result<<endl;
    return 0;
}