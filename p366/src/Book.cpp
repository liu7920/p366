#include <iostream>
#include <string>
using namespace std;
#include "Book.h"

Book::Book(string title, int price, int pages) {
	this->title = title;
	this->price = price;
	this->pages = pages;
}

void Book::show(){
	cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
}

string Book::getTitle(){
	return title;
}

Book& Book::operator+= (int num){
	price+=num;
	return *this;
}

Book& Book::operator-= (int num){
	price-=num;
	return *this;
}

bool Book::operator== (int num){
	if(price==num){
		return true;
	}
	else{
		return false;
	}
}

bool Book::operator== (string str){
	if(title == str){
		return true;
	}
	else{
		return false;
	}
}

bool Book::operator== (Book d){
	if(title == d.title && price == d.price && pages == d.pages){
		return true;
	}
	else{
		return false;
	}
}

bool Book::operator !(){
	if(price==0){
		return true;
	}
	else{
		return false;
	}
}
/*
bool Book::operator <(string e, Book a){
	if(e < a.title){
		return true;
	}
	else{
		return false;
	}
}
*/
