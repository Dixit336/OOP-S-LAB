/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Name-Dixit Sharma;Roll no-1024150232;Batch-2O24


// Q1
#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World";

    return 0;
}

// Q2
#include<iostream>
using namespace std;
int main(){
    int n;
    float p;
    char y;
    cout<<"Enter the integer"<<endl;
    cin>>n;
     cout<<"Enter the float number"<<endl;
    cin>>p;
     cout<<"Enter the Character"<<endl;
    cin>>y;
    cout<<"The integer,decimal and character is:"<<n<<endl<<p<<endl<<y<<endl;
    return 0;
}

// Q3
#include<iostream>
using namespace std;
int main(){
    int a,b,add,subtract,multiply,divide;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    add=a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/b;
    cout<<add<<endl;
    cout<<subtract<<endl;
    cout<<multiply<<endl;
    cout<<divide<<endl;
return 0;
}

// Q4
#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the temperature in celsius"<<endl;
    cin>>t;
    float f;
    f=(float)((9*t)/5)+32;
    cout<<f<<endl;
return 0;
}

// Q5
#include<iostream>
using namespace std;
int main(){
 int n;
 char y;
 cout<<"Enter the number\n";
 cin>>n;
  cout<<"Enter the character\n";
 cin>>y;
 cout<<"The number is \t"<<n;
 cout<<"The character is \b"<<y;
 cout<<"The number is:"<<n<<endl;
return 0;
}

// Q6
#include<iostream>
using namespace std;
int main(){
    int n,m;
    int sum=10;
    int subtract=90;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    sum+=n;
    subtract-=n;
    cout<<"The sum and subtract is:"<<sum<<endl<<subtract<<endl;
    return 0;
}

// Q7
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"The numbers after swapping is:"<<a<<endl<<b<<endl;

    return 0;
}

// Q8
#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"Enter the days after which books are submit"<<endl;
    cin>>days;
    if(days<=5){
        cout<<"The fine is 50 paise"<<endl;
}
else if(days>5 && days<=10){
    cout<<"The fine is 1 rupee"<<endl;
}
else if(days>10 && days<=30){
    cout<<"The fine is 5 rupee"<<endl;
}
else{
    cout<<"Your membership is cancelled"<<endl;
}
return 0;
}

// Q9
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    int op;
    cout<<"Enter the operation to perform"<<endl;
    cin>>op;
    switch(op){
        case 1:
        cout<<"Sum of a and b is:"<<a+b<<endl;
        break;
        case 2:
        cout<<"Subtract of a and b is:"<<a-b<<endl;
        break;
        case 3:
        cout<<"Division of a and b is:"<<a/b<<endl;
        break;
        case 4:
        cout<<"Multiplication of a and b is:"<<a*b<<endl;
        break;
    }
    return 0;
}

// Q10

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"It is a even number"<<endl;
    }
    else{
        cout<<"It is a odd number"<<endl;
    }
    return 0;
}