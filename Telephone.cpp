#include "Telephone.h"
#include <cassert>

#include <string.h>

Telephone::Telephone(const TelephoneModel& model, const char* manifacturerName, const float price, 
	const BatteryModel& batteryModel, const int durationOverall, const int durationInCalls, 
	const int displayWidth, const int displayHeight, const int numberOfColoursSupport)
	:
	TelephoneBattery(batteryModel, durationOverall, durationInCalls),
	TelephoneDisplay(displayWidth, displayHeight, numberOfColoursSupport)

{
	assert(manifacturerName != nullptr);

	this->Model = model;

	strcpy_s(this->ManifacturerName, SIZE_OF_MANIFACTURER, manifacturerName);

	this->Price = price;
}
