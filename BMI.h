#pragma once
using namespace std;
class BMI
{
private:
	// Min and MaxResult are are used to calculate the weight range corresponding to a certain height 
	double MinResult = 18.5;
	double MaxResult = 25;

public:
	string Name;
	double Height;
	double Weight;
	double Result;
	BMI()
	{
		Greeting();
		Calculating();
		ResultsAndAdvices();

	}

	void Greeting();
	double Calculating();
	void ResultsAndAdvices();


}; 