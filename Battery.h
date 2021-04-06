#pragma once

enum BatteryModel
{
	LithiumION,
	LithiumPolymer,
	LiPolymer
};

class Battery
{
private:
	BatteryModel Model;
	int DurationOverall;
	int DurationInCalls;

public:
	Battery(const BatteryModel& model, const int durationOverall, const int durationInCalls)
	{
		this->Model = model;
		this->DurationOverall = DurationOverall;
		this->DurationInCalls = DurationInCalls;
	}

	int GetDurationOverall() const
	{
		return this->DurationOverall;
	}

	int GetDurationInCalls() const
	{
		return this->DurationInCalls;
	}

	BatteryModel GetBatteryModel() const
	{
		return this->Model;
	}
};

