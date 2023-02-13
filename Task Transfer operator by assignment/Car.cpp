#include "Car.h"

Car::Car(int speed, int power) : _speed(speed), _power(power)
{
	log("constructor");
}

Car::~Car()
{
	log("Destructor");
}

Car& Car::operator=(Car&& other) noexcept
{
	log("move assigment operator");
	std::swap(_speed, other._speed);
	//std::swap(_power, other._power);
	return *this;
}
