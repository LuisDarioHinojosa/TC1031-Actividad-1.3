/*
 * BinnacleLine.h
 *
 *  Created on: 16 sep. 2020
 *      Author: luisd
 */

#ifndef BINNACLELINE_H_
#define BINNACLELINE_H_
#include <string>
#pragma once

class BinnacleLine {
public:
	BinnacleLine() = default;

	BinnacleLine(std::string,std::string,std::string,int,std::string,std::string,int,std::string);
	// getters
	std::string getDate();
	std::string getTime();
	std::string getOriginIP();
	int getOriginPort();
	std::string getOriginName();
	std::string getDestinyIP();
	int getDestinyPort();
	std::string getDestinyName();


	// outstream overload
	friend std::ostream & operator<<(std::ostream & os, const BinnacleLine & line);



	virtual ~BinnacleLine();



private:
	std::string date;
	std::string time;



	std::string originIP;
	/*
	 * Note: Some ports does not exist. Since the csv shows the string "-" i will encode them as -1
	 */
	int originPort;
	std::string originName;
	std::string destinyIP;
	int destinyPort;
	std::string destinyName;

};

#endif /* BINNACLELINE_H_ */
