#pragma once

#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"	

class CurrentConditionsDisplay : public Observer, public DisplayElement {
private:
	float temperature;
	float humidity;
	Subject* weatherData;
public:

	CurrentConditionsDisplay(Subject*);
	void urdate(float,float,float);
	void display();
};
