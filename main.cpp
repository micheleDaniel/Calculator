#include <iostream>
#include <string>

void addition();
void subtraction();
int moltiplication();
int division();
void line();

int main() {
	std::cout <<"------CALCULATOR------"<<std::endl;
	line();
	std::cout << "ADDITION"<<std::endl;
	std::cout << "--------" << std::endl;
	addition();		
	line();
	std::cout << "SUBTRACTION" <<std::endl;
	std::cout << "-----------" << std::endl;
	subtraction();
	line();
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
	std::cout << "The addtion result is: " << res << std::endl;
}

void subtraction(){
	int n1,n2,res;
	std::cout << "Insert first number: ";
	std::cin >> n1;
	std::cout << "Insert second number: ";
	std::cin >> n2;
	res = n1 -  n2;
	std::cout << "The subtraction result is: " << res << std::endl;
}


void line(){
	std::cout<<std::endl;
}
