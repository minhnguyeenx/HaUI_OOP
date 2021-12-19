#include <bits/stdc++.h>

using namespace std;
/*
Cài đặt lớp Hình chữ nhật bao gồm hai thuộc tính Dài, Rộng và các phương thức:  
- NHAP: nhập chiều dài và chiều rộng.  
- VE: vẽ hình chữ nhật lên màn hình bằng cách sử dụng 
ký tự ‘*’ với chiều dài, chiều rộng vốn có của nó.   
- DIENTICH: in ra màn hình diện tích hình chữ nhật.  
- CHUVI: in ra màn hình chu vi hình chữ nhật.   
Cài đặt hàm main khai báo 01 hình chữ nhật x. 
Nhập vào chiều dài và chiều rộng của x. 
Vẽ hình chữ nhật x ra màn hình. 
In ra màn hình diện tích và chu vi của x.  
*/

class Hinhchunhat{
    private:
        int D, R;
    public:
        void NHAP();
        void VE();
        int DIENTICH();
        int CHUVI();
};
void Hinhchunhat::NHAP(){
    do {
        cout << "Nhap chieu dai hinh chu nhat: "; cin >> D;
        cout << "Nhap chieu rong hinh chu nhat: "; cin >> R;
    }
    while(D < R);
}
void Hinhchunhat::VE(){
    for(int i = 1; i <= R; i++){
        for(int j = 1; j <= D; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int Hinhchunhat::DIENTICH(){
    return D*R;
}
int Hinhchunhat::CHUVI(){
    return 2*(D+R);
}
int main(){
    Hinhchunhat x;
    cout <<"Nhap chieu dai, chieu rong hinh chu nhat: " << endl; 
    x.NHAP();
    cout << "Ve hinh chu nhat: " << endl;
    x.VE();
    cout << "Dien tich hinh chu nhat:" << x.DIENTICH();
    cout << endl << "Chu vi hinh chu nhat: " << x.CHUVI();
}

