#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData) {
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::urdate(float t, float h, float p) {
	this->temperature = t;
	this->humidity = h;
	display();
}

void CurrentConditionsDisplay::display() {
	std::cout << "Current conditions:" << temperature
	          << "C degress and" << humidity
              << "% humidity" << std::endl;
}
