//main.cpp: Entrypoint for the xConvertStringArrayToIntArray.

#include "xConvertStringArrayToIntArray.h"
#include <string>
#include <vector>
#include <iostream>

int main() {
	vector<string> xStringArray = { "5", "4", "3", "2", "1" };
	vector<int> xIntArray = xConvertStringArrayToIntArray( xStringArray );
	for ( int i=0; i<xStringArray.size(); i++ ) {
		cout << xIntArray.at( i ) << endl;
	}	
	return 0;
}
