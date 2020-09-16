//============================================================================
// Name        : BotSecurity.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include <sstream>
#include <iterator>
#include <algorithm>

#include "../Binnacle.h"





template<char delimiter>
class WordDelimitedBy : public std::string
{};




int main() {

	Binnacle bin;
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	std::string filename = "equipo5.csv";
	//bin.readCsvLines(filename);

	//Line function protototype
	std::string line = "21-8-2020,18:13:20,10.117.254.71,43562,margaret.reto.com,8.183.111.232,443,reddit.com";
	std::istringstream iss(line);
	//std::vector<std::string> lineStuff;
	std::vector<std::string> results((std::istream_iterator<WordDelimitedBy<','>>(iss)), std::istream_iterator<WordDelimitedBy<','>>());

	for(int i = 0; i < results.size(); i++){
		std::cout << results[i] << std::endl;
	}
	std::cout << "finish" << std::endl;


	return 0;
}
