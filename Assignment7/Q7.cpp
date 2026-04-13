#include<iostream>
using namespace std;
class Matrix{
    private:
    int a[2][2];
    public:
    void input(int m,int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
            
        }
    }
    void display(int m,int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend Matrix operator*(Matrix m1,Matrix m2);
};
Matrix operator*(Matrix m1,Matrix m2){
    Matrix temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp.a[i][j]=0;
            for (int k = 0; k <2; k++)
            {
                temp.a[i][j]+=m1.a[i][k]*m2.a[k][j];
            }
        }
    }
    return temp;
}
int main() {
    Matrix m1, m2, m3;
    m1.input(2,2);
    m2.input(2,2);
    m3 = m1 * m2;
    m3.display(2,2);
    return 0;
}
