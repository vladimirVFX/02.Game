//import_lib_header
#include <iostream>

//main_function
int main() {

	//init__rtarget_value
	const int target_value = 54;
	//inint_current_vcalue
	int current_value = 0;
	//result_win
	bool not_win = true;

	//enter_answer
	std::cout << "Enter your guess:" << std::endl;
	//cickle_tries
	do {
		//enter_your_answer
		std::cin >> current_value;

		//check_current_value_bigger
		if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		//check_current_value_small
		else if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		//check_current = target_value
		else {
			std::cout << "you win!" << std::endl;
			break;
		}
	} while(true);

	return 0;
}