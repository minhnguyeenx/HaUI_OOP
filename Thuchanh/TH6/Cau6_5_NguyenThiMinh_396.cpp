#include <bits/stdc++.h>

using namespace std;

class Matrix{
    private:
        int m, n;
        double **a;
    public:
        Matrix operator-();     
        Matrix operator+(Matrix y);     
        Matrix operator-(Matrix y);  
        friend istream&operator >> (istream&x, Matrix&y);
        friend ostream&operator << (ostream&x, Matrix&y);
};
istream&operator >> (istream&x, Matrix&y){
    cout << endl << "Nhap so hang: ";
    x >>y.n;
    cout << "Nhap so cot: ";
    x >> y.m;
    y.a= new double*[y.n];
    for(int i = 0; i < y.n; i++){
        y.a[i] = new double[y.m];
    }
    for(int i = 0; i < y.n; i++){
        for(int j = 0; j < y.m ; j++){
            x >> y.a[i][j];
        }
    }
    return x;
}
ostream&operator << (ostream&x, Matrix&y){
    for(int i = 0; i < y.n; i++){
        for(int j = 0; j < y.m; j++){
            x << y.a[i][j] << " ";
        }
        x << endl;
    }
    return x;
}
Matrix Matrix::operator-(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] *= -1;
        }
    }
    return *this;
}
Matrix Matrix::operator+(Matrix y){
    Matrix tg;
    if(m == y.m && n == y.n){
        tg.n = n; tg.m = m;
        tg.a = new double*[n];
        for(int i = 0; i < tg.n; i++){
            for(int j = 0; j < tg.m; j++){
                tg.a[i] = new double[m];
            }
        }
        for(int i = 0; i <tg.n; i++){
            for(int j = 0; j < tg.m; j++){
                tg.a[i][j] = a[i][j] + y.a[i][j];
            }
        }
    }
    return tg;
}
Matrix Matrix::operator-(Matrix y){
    Matrix tg;
    if(m == y.m && n == y.n){
        tg.n = n; tg.m = m;
        tg.a = new double*[n];
        for(int i = 0; i < tg.n; i++){
            for(int j = 0; j < tg.m; j++){
                tg.a[i] = new double[m];
            }
        }
        for(int i = 0; i <tg.n; i++){
            for(int j = 0; j < tg.m; j++){
                tg.a[i][j] = a[i][j] - y.a[i][j];
            }
        }
    }
    return tg;
}
int main(){
    Matrix P, Q;
    cout << "Nhap ma tran thu nhat: "; cin >> P;
    cout << "Nhap ma tran thu hai: "; cin >> Q;
    P = -P; Q = -Q;
    cout << "Ma tran P da doi dau: " << endl; cout << P;
    cout << "Ma tran Q da doi dau: " << endl; cout << Q;
    Matrix Tong, Hieu;
    Tong = P+Q;
    Hieu = P-Q;
    cout << "Tong ma tran: " << endl; cout << Tong;
    cout << "Hieu ma tran: " << endl; cout << Hieu;
}