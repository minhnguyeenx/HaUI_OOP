#include <bits/stdc++.h>

using namespace std;
class hinhtron{
    private:
        float R;
    public:
        hinhtron(){
            R = 0;
        }
        hinhtron(float r){
            R = r;  
        }
        float dientich(){
            return M_PI*R*R; //hàng số PI -> M_PI
        }
        friend float operator+(hinhtron a, hinhtron b);
        friend float operator-(hinhtron a, hinhtron b); //khi return ra 1 kết quả,liên quan 2 biến -> hàm bạn
        bool operator>(hinhtron b); //khi return ra 1 kết quả, 1 biến -> Không phải hàm bạn
        friend ostream& operator<<(ostream& out, hinhtron &dt);
        friend istream& operator>>(istream& out, hinhtron &b);
};
ostream& operator<<(ostream& out, hinhtron &b){
    out << b.dientich() << endl;
    return out;
}
istream& operator>>(istream& in, hinhtron &b){
    in >> b.R;
    return in;
}
float operator+(hinhtron a, hinhtron b){
    return a.dientich() + b.dientich();//khi return ra 1 kết quả,liên quan 2 biến -> hàm bạn
}
float operator-(hinhtron a, hinhtron b){
    return a.dientich() - b.dientich();
}
bool hinhtron::operator>(hinhtron b){
    if(dientich() > b.dientich()) return true;
    return false; //khi return ra 1 kết quả, 1 biến -> Không phải hàm bạn
}

int main(){
    hinhtron P, Q(3);
    cout << "Nhap ban kinh cua P: "; cin >> P;
    cout << "Dien tich cua P: " << P;
    cout << "Dien tich cua Q: " << Q;
    cout << "Tong dien tich 2 hinh tron: " << P+Q << endl;    
    cout << "Hieu dien tich 2 hinh tron: " << P-Q << endl;
    bool check1 = P>Q;
    if(check1) cout << "Dien tich cua P lon hon Q" << endl;
    else  cout << "Dien tich cua P khong lon hon Q" << endl;
}
