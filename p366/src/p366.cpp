#include <iostream>
#include <string>
using namespace std;

#include "Book.h"

int main() {

	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();

	Book c("명품 C++", 30000, 500), d("고품 C++", 30000, 500);
	if(c == 30000){
		cout << "정가 30000원 입니다." << endl;
	}
	if(c == "명품 C++"){
		cout << "명품 C++ 입니다." << endl;
	}
	if(a == b){
		cout << "두 책이 같은 책입니다." << endl;
	}

	Book book("벼룩시",0,50);
	if(!book){
		cout << "공짜다" << endl;
	}
/*
	string e;
	cout << "책 이름은 입력하세요 >> ";
	getline(cin, e);

	if(e < a){
		cout << a.getTitle() << "이 " << e << "보다 뒤에 있구나!" << endl;
	}
*/
	return 0;
}
