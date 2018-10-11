#ifndef BOOK_H_
#define BOOK_H_

#include <string>

class Book {
	string title;
	int price, pages;
public:
	Book(string title="", int price=0, int pages=0);
	void show();
	string getTitle();
	Book& operator+= (int num);
	Book& operator-= (int num);
	bool operator== (int num);
	bool operator== (string str);
	bool operator== (Book d);
	bool operator! ();
//	bool operator< (string e, Book a);
};


#endif /* BOOK_H_ */
