#include <iostream>

#include "Telephone.h"
#include "CallInformation.h"

int main()
{
	Telephone newTelephone(TelephoneModel::Nokia, "Goldbach", 42.42f, 
							BatteryModel::LiPolymer, 420, 1764, 120, 260, 30);


	// should crash
	//Telephone scrappyTelephone
	//	(TelephoneModel::Samsung, nullptr, 123, BatteryModel::LithiumION, 2, 4, 30, 30, 102);


	const Battery& newTelephoneBattery = newTelephone.GetBattery();

	std::cout << "TelephoneBatteryModel: " << newTelephoneBattery.GetBatteryModel() << " "
		<< "TelephoneBattery duration overall " << newTelephoneBattery.GetDurationOverall() << " "
		<< "TelephoneBattery duration in calls" << newTelephoneBattery.GetDurationInCalls() << '\n';

	const Display& newTelephoneDisplay = newTelephone.GetDisplay();
	
	std::cout << "TelephoneDisplayWidth: " << newTelephoneDisplay.GetDisplayWidth() << " "
		<< "TelephoneDipslayHeight: " << newTelephoneDisplay.GetDisplayHeight() << " "
		<< "TelephoneColourDisplay: " << newTelephoneDisplay.GetNumberOfColoursSupport() << '\n';

	CallInformation testingCall;

	CallInformation sampleCall("08876743", Date(42, 21, 11, 1, 6, 1999), 117);

	std::cout << sampleCall.CalculateCostOfCall(30);

	return 0;
}