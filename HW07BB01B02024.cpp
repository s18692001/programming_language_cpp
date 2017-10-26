///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2017-1-3
//  FILENAME   : HW07BB01B02024.CPP 
//  DESCRIPTION   : Use Object-Oriented Programming approach to read a series of names and ages from a text file
//===============================================================================================================

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>   //headers

using namespace std;
int answer1, answer2, answer3, answer4;

// Class declaration section
class person
{
	friend void readData(vector <person>&);
	friend int calculateAvgAge(vector <person>&);
	friend int calculateMaxAge(vector <person>&);
	friend int calculateMinAge(vector <person>&);  // these friend functions can access the private data
private:
	string strFirstName;
	string strLastName;
	int intAge;    // private data
public:
	person(string FirstName = "no set", string LastName = "no set", int Age = 0)
		:strFirstName(FirstName), strLastName(LastName), intAge(Age) {}  // constructor, initialization list!!!!!!!

	void getFirstName();
	void getLastName();
	void getAge();         // accesors
	void setFirstName(string);
	void setLastName(string);
	void setAge(int);        // mutators
};

// implementation section

void person::getFirstName() {
	cout << strFirstName << " ";
}
void person::getLastName() {
	cout << strLastName << " ";
}
void person::getAge() {
	cout << intAge << " ";
}
void person::setFirstName(string FirstName) {
	strFirstName = FirstName;
}
void person::setLastName(string LastName) {
	strLastName = LastName;
}
void person::setAge(int Age) {
	intAge = Age;
}

// friend implementation
void readData(vector <person>& people) {

	ifstream inFile;
	string filename = "person.txt";

	inFile.open(filename.c_str());
	// Check whether the file is read successfully or not
	if (inFile.fail()) {
		cout << "The input file is not opened successfully.";
		exit(1);
	}
	else
		cout << "Read in successfully." << endl;

	int numLines = 0;
	string unused;
	while (getline(inFile, unused))
		++numLines;

	people.resize(numLines);
	inFile.close();
	// because this file has already be read, need to close it and open again!
	inFile.open(filename.c_str());
	int i = 0;
	while (inFile.good()) {
		string first_name, last_name;
		int age;
		inFile >> first_name >> last_name >> age;
		// set and read every object's fristname, lastname and age value
		people[i].setFirstName(first_name);
		people[i].setLastName(last_name);
		people[i].setAge(age);
		people[i].getFirstName();
		people[i].getLastName();
		people[i].getAge();
		cout << endl;
		i++;

	}
	inFile.close();
	return;
}
int calculateAvgAge(vector <person>& people) {   // pass vecotr by reference and calculate the age average
	int ageSum = 0;
	int size = people.size();
	for (int i = 0; i < size; i++) {
		ageSum += people[i].intAge;
	}
	return (ageSum / people.size());
}
int calculateMaxAge(vector <person>& people) { // pass vecotr by reference and calculate the age maximun
	int Max = 0;
	int size = people.size();
	for (int j = 0; j < size; j++) {
		if (people[j].intAge > Max)
			Max = people[j].intAge;
	}
	return Max;
}
int calculateMinAge(vector <person>& people) {  // pass vecotr by reference and calculate the age minimun
	int Min = people[0].intAge;
	int size = people.size();
	for (int k = 0; k < size; k++) {
		if (people[k].intAge < Min)
			Min = people[k].intAge;
	}

	return Min;
}

int main()
{
	vector <person> people;   // create a vector people with person class objects
	readData(people);
	cout << "The average age is: " << calculateAvgAge(people) << endl;
	cout << "The Max age is: " << calculateMaxAge(people) << endl;
	cout << "The min age is: " << calculateMinAge(people) << endl;
	cout << "The number of persons is: " << people.size() << endl;  // demonstrate the results to user
	answer1 = people.size();
	answer2 = calculateAvgAge(people);
	answer3 = calculateMaxAge(people);
	answer4 = calculateMinAge(people);  // answers

	return 0;
}


