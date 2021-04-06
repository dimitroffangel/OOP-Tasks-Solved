#pragma once

class Date
{
private:
	int Seconds;
	int Minutes;
	int Day;
	int Hour;
	int Month;
	int Year;

public:
	Date(const int seconds, const int minutes, const int day, const int hour, const int month, const int year)
	{
		this->Seconds = seconds;
		this->Minutes = minutes;
		this->Day = day;
		this->Hour = hour;
		this->Month = month;
		this->Year = year;
	}


	// TODO::
	void IncrementSecondss(int amountOfAddition);

	void SetSecondss(const int seconds) 
	{
		if (seconds >= 0 && seconds <= 59)
		{
			this->Seconds = seconds;
		}
	}

	void SetSeconds(const int seconds)
	{
		if (seconds >= 0 && seconds <= 59)
		{
			this->Seconds = seconds;
		}
	}

	void SetMinutes(const int minutes)
	{
		if (minutes >= 0 && minutes <= 59)
		{
			this->Minutes = minutes;
		}
	}

	void SetHour(const int hour)
	{
		if (hour >= 0 && hour <= 23)
		{
			this->Hour = hour;
		}
	}

	void SetDay(const int day)
	{
		// TOOD:: validate the day dependent on the month

		this->Day = day;
	}

	void SetMonth(const int month)
	{
		if (month >= 1 && month <= 12)
		{
			this->Month = month;

			// TOOD:: validate the day dependent on them onth
		}
	}

	void SetYear(const int year)
	{
		if (year >= 1970)
		{
			this->Year = year;
		}
	}
};

