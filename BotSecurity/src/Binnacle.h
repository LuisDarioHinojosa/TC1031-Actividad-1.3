/*
 * Binnacle.h
 *
 *  Created on: 16 sep. 2020
 *      Author: luisd
 */

#ifndef BINNACLE_H_
#define BINNACLE_H_
#include "BinnacleLine.h"
#include <vector>

#pragma once

class Binnacle {
public:
	Binnacle();
	virtual ~Binnacle();
	void readCsvLines(std::string filename);


private:
	std::vector<BinnacleLine> data;
	std::vector<std::string> lines;

};

#endif /* BINNACLE_H_ */
