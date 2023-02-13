#include<iostream>
#include<algorithm>
#include"Car.h"



int main() {

	Car v1(50, 40);
	Car v2;
	
	std::cout << "assigning rvalue...\n";
	v2 = Car(100, 30);
	v2 = std::move(v1);
	std::cout << "ended assigning rvalue...\n";

	return 0;
}


