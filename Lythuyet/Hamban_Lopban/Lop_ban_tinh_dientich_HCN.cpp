#include <bits/stdc++.h>

using namespace std;
class aa{
	private:
		int a, b;
	public:
		void nhap(){
			cout << "Nhap: ";
			cin >> a >> b;
		}
		friend class bb;
};
class bb{
	public:
		void tinh(aa dt){
			cout << "Dien tich: " << dt.a * dt.b;
		}
};
int main(){
	aa d1;
	bb d2;
	d1.nhap();
	d2.tinh(d1);
}
