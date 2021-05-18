#pragma once
#include <string>

class LCDConversion
{

private:
	std::string line1;
	std::string line2;
	std::string line3;

public:
	LCDConversion(std::string ln1, std::string ln2, std::string ln3);
	std::string getline1();
	std::string getline2();
	std::string getline3();
	void setLine1();
	void setLine2();
	void setLine3();


};

