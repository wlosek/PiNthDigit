#include <iostream>
#include <iomanip>
#include <math.h>
#include <cfloat>

int main()
{
	int precision = 0;
	do
	{
		std::cout << "Set precision: ";
		std::cin >> precision;

		if(precision < 0 || precision > DBL_DIG)
		{
			std::cout << "Precision must be between <0, " << DBL_DIG << ">" << std::endl;
			continue;
		}

		double pi = atan(1) * 4;
		std::cout << std::setprecision(precision);
		std::cout << "PI: " << pi;
		break;
	} while(true);

	return 0;
}
