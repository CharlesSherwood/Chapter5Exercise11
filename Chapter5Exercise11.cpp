/*FileName:Chapter5Exercise11.cpp
ProgrammerName:Charles Sherwood
Date:3/25
requirements:This program will determine the size of a 
population of orginisms




*/



#include<iomanip>
#include<cmath> 
#include <iostream>
using namespace std;

double Orginism()
{
	double orginism;
	cout << "Please enter the starting number of orginisims:";
	cin >> orginism;
	while (orginism < 2)
	{
		cout << "Please Enter A Valid Amount:";
		cin >> orginism;
	}
	return orginism;
}
double PopInc()
{
	double popinc;
	cout << "Please enter the amount the population increased";
	cin >> popinc;
	while (popinc < 0)
	{
		cout << "Please Enter A New Amount:";
		cin >> popinc;	
	}


	return popinc;
}

double NumOfDays()
{
	double num_of_days;
	cout << "Please enter the number of days";
	cin >> num_of_days;





	return num_of_days;
}


int main()
{
	double population = Orginism();
	double popinc = PopInc();
	double num_of_days = NumOfDays();




	
	
	
	
	
	
	
}

