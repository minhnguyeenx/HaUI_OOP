#include <bits/stdc++.h>

using namespace std;
class huybo{
	int v;
	public:
		huybo(){
			v = 100;
			cout << "Gia tri ban dau la: " << v << endl;
		}
		void in_giatri(){
			cout << "Gia tri hien thoi la: " << v << endl;
		}
		~huybo(){
			v = 0;
			cout << "Gia tri cuoi cung la: " << v << endl;
		}
};
int main(){
	huybo h1;
	h1.in_giatri();
}
