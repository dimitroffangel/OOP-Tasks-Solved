#pragma once

#include "Date.h"

#include <string.h>

const size_t SIZE_OF_NUMBER = 9;

class CallInformation
{
private:
	char Number[9];
	Date StartedOnData;
	size_t DurationInSeconds;

public:
	CallInformation();

	CallInformation(const char number[SIZE_OF_NUMBER], const Date& startedOnData, const size_t durationInSeconds);

	/* TODO: GETTERS AND SETTERS */

	double CalculateCostOfCall(const double) const;
};

