#include <iostream>
#include "BMI.h"

using namespace std;

int main()
{

	BMI i;

	system("pause");
	return 0;
}


void BMI::Greeting()
{
	cout << "Hello and Welcome to the BMI calculator." << endl;
	cout << "BMI is a measurement of a person's leanness or corpulence based on their height and weight, \n"
		" and is intended to quantify tissue mass." << endl;
	cout << "Please write your name:" << endl;
	cin >> Name;
	cout << "Nice to meet you " << Name << ". Please, write down your height and weight." << endl;
	cout << "Height in meters: " << endl;
	cin >> Height;
	cout << "Good! And your weight in kg: " << endl;
	cin >> Weight;

	cout << "Thanks" << endl;
}
double BMI::Calculating()
{

	Result = Weight / (Height * Height);

	return Result;
}

void BMI::ResultsAndAdvices()
{
	cout << "Healthy weight for your height: " << MinResult * (Height * Height) << "-" << MaxResult * (Height * Height) << endl;
	cout << "Your BMI is: ";
	if (Result < 18.5)
	{
		cout << Result << endl;
		cout << "According to calculations you have a slight underweight. If the data you entered is correct, \n"
			"we advise you to review your diet and, if possible, add all kinds of workouts.";
	}
	else if (Result <= 25)
	{
		cout << Result << endl;
		cout << "According to the calculations, you are in great shape. Continue to maintain the same diet and exercise regimen.";

	}
	else if (Result <= 35)
	{
		cout << Result << endl;
		cout << "According to calculations, you have a slight exaggeration of weight. \n"
			"If you are comfortable, then we can only be happy for you. If you want to lose weight, \n"
			"we suggest you reconsider your diet, try to drink more water, exercise and reduce sugar intake.";

	}
	else
	{
		cout << Result << endl;
		cout << "According to calculations, you have a significant exaggeration of weight. Also known as obesity. \n"
			"In such a situation, we recommend contacting a nutritionist, since excess weight leads to risks such as:" << endl;
		cout << "High blood pressure" << endl;
		cout << "Coronary heart disease" << endl;
		cout << "Stroke" << endl;
		cout << "Osteoarthritis, a type of joint disease caused by breakdown of joint cartilage" << endl;

	}
}

