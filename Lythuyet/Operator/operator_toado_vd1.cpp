#include <bits/stdc++.h>

using namespace std;
class DIEM{
    private:
        double x, y, z;
    public:
    DIEM(){
    	x = 0;
    	y = 0;
    	z = 0;
	}
    DIEM(double X, double Y, double Z){
        x = X;
        y = Y;
        z = Z;
    }
    DIEM operator+(DIEM b);
    DIEM operator-(DIEM b);
    friend ostream& operator<<(ostream& a, DIEM &b);
    friend istream& operator>>(istream& a, DIEM &b);
};
//con tror this khong dung o ham ban
//nen phai co du 2 doi
DIEM DIEM::operator+(DIEM b){
    DIEM c;
    c.x = this->x + b.x;
    c.y = this->y + b.y;
    c.z = this->z + b.z;
    return c;
}
DIEM DIEM::operator-(DIEM b){
    DIEM c;
    c.x = this->x - b.x;
    c.y = this->y - b.y;
    c.z = this->z - b.z;
    return c;
}
ostream& operator<<(ostream& a, DIEM &b){
    a << "(" << b.x << "," << b.y << "," << b.z << ")" << endl;
    return a;
}
istream& operator>>(istream& a, DIEM &b){
    cout << "\tNhap x: ";
    a >> b.x;
    cout << "\tNhap y: ";
    a >> b.y;
    cout << "\tNhap z: ";
    a >> b.z;
    return a;
}
int main(){
    DIEM A(1, 2, 3), B;
    cout << "Nhap thong tin cua B: \n"; cin >> B;
    cout << "Diem B vua nhap: " << B;
    DIEM T = A+B;
    cout << "Diem T: " << T;
    DIEM H = A-B;
    cout << "Diem H: " << H;

}
