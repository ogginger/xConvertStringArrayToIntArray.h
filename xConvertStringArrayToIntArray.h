//xConvertStringArrayToIntArray.h: Converts an array of strings into an array of ints.

#pragma once
#include <vector>
#include <string>

using namespace std;

vector<int> xConvertStringArrayToIntArray( vector<string> xStringArray ) {
	vector<int> xIntArray;
	int nInt = 0;
	for( int i=0; i<xStringArray.size(); i++ ) {
	//for each element in the string array...
		//Convert the element into an int.
		//Beware of overflow: { int | [-32,767,32,767] }.
		nInt = stoi(xStringArray.at( i ));
		xIntArray.push_back( nInt );
	}
	return xIntArray;
}
