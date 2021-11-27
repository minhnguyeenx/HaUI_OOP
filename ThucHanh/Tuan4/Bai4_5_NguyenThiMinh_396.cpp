#include <bits/stdc++.h>

using namespace std;
class ARRAY{
    private: 
        int *VALUE;
        int n;
    public:
        ARRAY(){
             n = 0;
        }
        ARRAY(int N){
            n = N;
            VALUE = new int[n];
            for(int i = 0; i < n; i++){
                VALUE[i] = 0;
            }
        }
        ~ARRAY(){
            cout << endl << "~Giai phong bo nho";
            n = 0;
            VALUE = (int *)realloc(VALUE, n*sizeof(int));
        }
        void nhap();
        void xuat();
};
void ARRAY::nhap(){
    do {
        cout << endl << "Nhap so phan tu cua mang: ";
        cin >> n;
    }while(n <= 0);
    for(int i = 0; i < n; i++){
        cout << "Nhap VALUE " << i+1 << ": ";
        cin >> VALUE[i];
    }
} 
void ARRAY::xuat(){
    for(int i = 0; i < n; i++){
        cout << VALUE[i] << " ";
    }
} 
int main(){
    ARRAY a(5);
    cout << "Mang khoi tao: ";
    a.xuat();
    a.nhap();
    cout << "Mang vua nhap: ";
    a.xuat();
}