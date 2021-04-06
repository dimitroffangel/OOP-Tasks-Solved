#include "CallInformation.h"

const int NUMBER_OF_SECONDS = 60;


CallInformation::CallInformation()
	:StartedOnData(23, 42, 17, 25, 3, 2021)
{
	// Initializing Number
	strcpy_s(this->Number, "00000000");

	// Initializing DurationInSeconds
	this->DurationInSeconds = 0;
}


CallInformation::CallInformation(const char number[SIZE_OF_NUMBER],
	const Date& startedOnDate, const size_t durationInSeconds)
	: StartedOnData(startedOnDate)
{
	// Initializing Number
	strcpy_s(this->Number, number);

	// Initializing DurationInSeconds
	this->DurationInSeconds = durationInSeconds;
}

double CallInformation::CalculateCostOfCall(const double constOnEachMinute) const
{
	return (static_cast<double>(this->DurationInSeconds) / NUMBER_OF_SECONDS) * constOnEachMinute;
}
