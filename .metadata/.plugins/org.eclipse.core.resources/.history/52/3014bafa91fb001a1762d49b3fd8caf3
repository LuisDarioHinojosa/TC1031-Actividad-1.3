/*
 * BinnacleLine.cpp
 *
 *  Created on: 16 sep. 2020
 *      Author: luisd
 */

#include "../Headers/BinnacleLine.h"
#include <iostream>
// Basic Constructor
BinnacleLine::BinnacleLine(std::string date,std::string hour,std::string originIP,int originPort,std::string originName,std::string destinyIP,int destinyPort,std::string destinyName)
:date(date),time(hour),originIP(originIP),originPort(originPort),originName(originName),destinyIP(destinyIP),destinyPort(destinyPort),destinyName(destinyName)
{}


BinnacleLine::~BinnacleLine() {
	// TODO Auto-generated destructor stub
}



// Getters
std::string BinnacleLine::getDate(){
	return this->date;
}

std::string BinnacleLine::getTime(){
	return this->time;
}



std::string BinnacleLine::getOriginIP(){
	return this->originIP;
}

int BinnacleLine::getOriginPort(){
	return this->originPort;
}

std::string BinnacleLine::getOriginName(){
	return this->originName;
}



std::string BinnacleLine::getDestinyIP(){
	return this->destinyIP;
}

int BinnacleLine::getDestinyPort(){
	return this->destinyPort;
}

std::string BinnacleLine::getDestinyName(){
	return this->destinyName;
}

// outstream overload

std::ostream & operator<<(std::ostream & os, const BinnacleLine & line){
	os << "Date: " << line.date << " |Time: " << line.time << " |Origin IP: " << line.originIP << " |Origin Port: " << line.originPort << " |Origin Name: " << line.originName << " |Destiny IP: " << line.destinyIP << " |Destiny Port: " << line.destinyPort << " |Destiny Name: " << line.destinyName << std::endl;
}

