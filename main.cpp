#include <iostream>
#include <cstdio>
#include <exception>
#include <ctime>

#include <stack>
#include <queue>

#include "Stack.h"
#include "Stack.cpp"
#include "Queue.h"
#include "Queue.cpp"





int main(int argc, char* argv[]){

	srand(time(NULL));


	//Stack test

	Stack<int> s;
	std::cout << "isEmpty = " << s.empty() << std::endl;
	std::cout << "getSize() = " << s.getSize() << std::endl;

	for (int i = 0; i < 10; i++)
		s.push(rand() % 30 + 1);

	s.show();

	try {
		s.top();
		s.pop();
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	s.show();
	
	return 0;
}

/*

//Queue test
Queue<int> q;
std::cout << "empty() = " << q.empty() << std::endl;
std::cout << "getSize() = " << q.getSize() << std::endl;


for (int i = 0; i < 10; i++)
q.push(rand() % 30 + 1);


q.push(1);
q.push(2);
q.push(3);
q.show();



std::cout << "front = " << q.front() << std::endl;
std::cout << "back = " << q.back() << std::endl;

q.pop();
q.show();

q.pop();
q.show();

q.pop();
q.show();

try {
q.front();
q.back();

//q.pop();
}
catch (std::exception& ex) {
std::cout << ex.what() << std::endl;
}
*/
