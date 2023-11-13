

#include <iostream>
#include <iomanip>
/*If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.*/

int main() {

    int year = 0;


    std::cout << "Enter year:";
    std::cin >> year;
    std::cout << std::endl;
    std::cout << std::setw(4) << year;

    if (year < 1000 || year > 9999) {
        std::cout << " Invalid entry." << std::endl;
    }

    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

        std::cout << " Falls on a leap year." << std::endl;
    
    }


    else if (year % 100 != 0 || year % 400 != 0) {

        std::cout << " It's not a Leap Year, try again";

    }
   
    return 0;
} 