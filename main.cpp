#include <iostream>
using namespace std;

int addition();
int sottraction();
int moltiplication();
int division();

int main() {
	cout <<"CALCULATOR"<<endl;

    return 0;
}

int moltiplication(int res){
	int a, b;
	cout << "First Number ";
	cin >>a;
	cout << "Second Number ";
	cin >>b;
	res = a*b;
	return res;
}
