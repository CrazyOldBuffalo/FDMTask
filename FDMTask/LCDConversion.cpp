#include "LCDConversion.h"

LCDConversion::LCDConversion(std::string ln1, std::string ln2, std::string ln3)
	:line1(ln1), line2(ln2), line3(ln3)
{
}

std::string LCDConversion::getline1()
{
	return line1 + "\n";
}

std::string LCDConversion::getline2()
{
	return line2 + "\n";
}

std::string LCDConversion::getline3()
{
	return line3 + "\n";
}
