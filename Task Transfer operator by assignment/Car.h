#pragma once
#include<iostream>

class Car
{
public:
	explicit Car(int speed = 0, int power = 0);
	~Car();
	Car& operator=(Car&& other) noexcept;

private:
	void log(const char* msg) {
		std::cout << _power << "[" << _speed << ']' << msg << '\n';
	}
	int _speed;
	int _power;
};

