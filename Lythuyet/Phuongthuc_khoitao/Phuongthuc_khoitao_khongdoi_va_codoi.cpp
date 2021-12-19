#include <bits/stdc++.h>

using namespace std;

class Phanso{
	private:
		int tuso, mauso;
	public:
		//phuong thuc khoi tao co this
		//phuong thuc khoi tao khong doi
		//gan luon tuso = 1, mauso = 0
		Phanso(){
			this->tuso = 1;
			this->mauso = 2;
		}
		//phuong thuc khoi tao co doi
		Phanso(int tuso, int mauso){
			this->tuso = tuso;
			this->mauso = mauso;
		}
		void xuat(){
			cout << tuso << '/' << mauso << endl;
		}
};

int main(){
	Phanso p1, p2(3,5);
	cout << "p1 = "; p1.xuat();
	cout << "p2 = "; p2.xuat();
}
