#include <iostream>

void addition();
int sottraction();
int moltiplication();
int division();
void line();

int main() {
	std::cout <<"------CALCULATOR------"<<std::endl;
	line();
	addition();		
    return 0;
}

int moltiplication(int res){
	int a, b;
	std::cout << "First Number ";
	std::cin >>a;
	std::cout << "Second Number ";
	std::cin >>b;
	res = a*b;
	return res;
}

void addition(){
	int n1, n2,res;
	std::cout << "Insert first number: ";
	std::cin >> n1;
	std::cout << "Insert second number: ";
	std::cin >> n2;
	res = n1 + n2;
	std::cout << "The addtion reults is: " << res << std::endl;
}

void line(){
	std::cout<<std::endl;
}
