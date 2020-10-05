#include "std_lib_facilities.h"

int main()
{
	constexpr double cm_per_in = 2.54;
	constexpr double cm_per_m = 100;
	constexpr double in_per_ft = 12;

	double length = 0;
	char unit;
	double largest = numeric_limits<double>::lowest();
	double smallest = numeric_limits<double>::max();
	double sum = 0;

	vector<double> lengths;

	cout << "Please enter a length\n";

	while( cin >> length >> unit)
	{		
		switch(unit)
		{
			case 'c':
				length = length / cm_per_m;
				cout << length << " m\n";
				break;
			case 'm':
				cout << length << " m\n";
				break;
			case 'i':
				length = (length * cm_per_in) / cm_per_m;
				cout << length << " m\n";
				break;
			case 'f':
				length = ((length * in_per_ft) * cm_per_in) / cm_per_m;
				cout << length << " m\n";
				break;
			default:
				simple_error("Error unit not recognized!");
				break;
		}

		if(length > largest)
		{
			largest = length;
			cout << "the largest so far\n";	 
		}

		if(length < smallest)
		{
			smallest = length;
			cout << "the smallest so far\n";
		} 

		sum += length;

		lengths.push_back(length);
	}

	cout << "The largest value is: " << largest << "\n";
	cout << "The smallest value is: " << smallest << "\n"; 

	cout << "The sum of values: " << sum << "\n";

	cout << "The number of values: " << lengths.size() << "\n";

	sort(lengths);

	for (int i = 0; i < lengths.size(); ++i)
		{
			cout << i+1 << " - " << lengths[i] << "\n";
		}

	return 0;
}