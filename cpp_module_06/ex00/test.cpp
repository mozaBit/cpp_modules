#include <iostream>
#include <string>
#include <sstream>

int main( int argc, char** argv ) {
	int					iNum;
	float				fNum;
	double				dNum;

	bool				isInt = false;
	bool				isFloat = false;
	bool				isDouble = false;

	std::istringstream	iss(argv[1]);

	if (iss >> iNum && iss.eof()) {
			isInt = true;
		}	else if (iss >> fNum && iss.eof()) {
				isFloat = true;
			}	else if (iss >> dNum && iss.eof()) {
					isDouble = true;
			} else {
					// Do nothing
				}
	(void)argc;
	std::cout << argv[1] << " isInt: " << isInt << ", isFloat: " << isFloat << ", isDouble: " << isDouble << std::endl;
	return (0);
}
