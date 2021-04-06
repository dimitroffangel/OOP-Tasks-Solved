#pragma once

#include "Battery.h"
#include "Display.h"

const int SIZE_OF_MANIFACTURER = 100;

enum TelephoneModel
{
	IPhone,
	Asus,
	Nokia,
	Samsung
};

class Telephone
{
	TelephoneModel Model;
	char ManifacturerName[SIZE_OF_MANIFACTURER];
	float Price;
	Battery TelephoneBattery;
	Display TelephoneDisplay;

public:
	Telephone(const TelephoneModel& model, const char* manifacturerName, const float price,
		const BatteryModel& batteryModel, const int durationOverall, const int durationInCalls,
		const int displayWidth, const int displayHeight, const int numberOfColoursSupport);


	const Battery& GetBattery() const
	{
		return this->TelephoneBattery;
	}

	const Display& GetDisplay() const
	{
		return this->TelephoneDisplay;
	}
};

