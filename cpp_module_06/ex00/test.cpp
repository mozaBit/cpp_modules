#include <iostream>
#include <string>
#include <sstream>

static size_t	ft_strlen(char* str) {
	int	count;

	count = 0;
	if ( str == NULL)
		return (count);
	while (*str) {
		count++;
		str++;
	}
	return (count);
}

int main( int argc, char** argv ) {
	int					iNum;
	float				fNum;
	float				dNum;

	bool				isInt = false;
	bool				isFloat = false;
	bool				isDouble = false;

	int					count = ft_strlen(argv[1]) - 1;
	std::cout << count << std::endl;

	std::istringstream	iss(argv[1]);

	if (iss >> iNum && iss.eof()) {
			isInt = true;
		}	else if (iss >> dNum && iss.eof() && argv[1][count] != 'f') {
				isDouble = true;
			}	else if (argv[1][count] == 'f') {
					std::string str = argv[1];
					str.pop_back();
					std::istringstream iss2(str.c_str());
					if (iss2 >> fNum  && iss2.eof())
						isFloat = true;
				}
	(void)argc;
	std::cout << argv[1] << " isInt: " << isInt << ", isFloat: " << isFloat << ", isDouble: " << isDouble << std::endl;
	return (0);
}
