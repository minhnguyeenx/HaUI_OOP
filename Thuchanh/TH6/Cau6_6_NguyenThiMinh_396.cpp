#include <bits/stdc++.h>

using namespace std;

class Mang{
    private:
        int n;
        float *a;
    public:
        Mang operator++();
        Mang operator--();
        friend istream& operator>>(istream&x, Mang&y);
        friend ostream& operator<<(ostream&x, Mang&y);
};
Mang Mang::operator++(){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                float tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    return *this;
}
Mang Mang::operator--(){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                float tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    return *this;
}
istream &operator>>(istream&x, Mang&y){
    cout << "Nhap n: "; x >> y.n;
    y.a = new float[y.n];
    for(int i = 0; i < y.n; i++){
        cout << "a[" << i << "]=";
        x >> y.a[i];
    }
    return x;
}
ostream &operator<<(ostream &x, Mang&y){
    for(int i = 0; i < y.n; i++){
        x << y.a[i] << " ";
    }
    return x;
}
int main(){
    Mang a;
    cout << "Nhap mang: " << endl;
    cin >> a;
    cout << "Mang ban dau: "; cout << a; cout << endl;
    Mang Tangdan = ++a;
    cout << "Mang sau khi sap xep tang dan: "; cout << Tangdan; cout << endl;
    Mang Giamdan = --a;
    cout << "Mang sau khi sap xep giam dan: "; cout << Giamdan; cout << endl;
}