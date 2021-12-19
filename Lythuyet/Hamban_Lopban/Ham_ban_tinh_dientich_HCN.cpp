#include <bits/stdc++.h>

using namespace std;
class aa{
	private:
		int a, b;
	public:
		void set(){
			a = 2; b = 3;
		}
		friend void tinh(aa dt);
};
void tinh(aa dt){
	cout << "Dien tich: " << dt.a*dt.b;
}
int main(){
	aa t;
	t.set();
	tinh(t);
}
