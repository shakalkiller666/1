#include <iostream>
#include <string>
#include <ctime>

int main() {
	std::cout << "NAME???" <<std::endl;
	std::string JINLOR;
	std::cin >> JINLOR; //JINLOR IMA
	std::string J;
	std::cout << "YYYY?MM?DD, YYYY>1970" <<std::endl;
	std::cin >> J;
	struct timespec tau;
	clock_gettime(CLOCK_REALTIME, &tau); // с 1 января 1970
	double hijack1 = tau.tv_nsec/1000000000.0;
	double hwak = tau.tv_sec;
	long long dayz_from_1970 = tau.tv_sec / 86400;
	
	int year = std::stoi(J.substr(0, 4));
	int mont = std::stoi(J.substr(5, 2));
	int dai = std::stoi(J.substr(8, 2));
	
	std::tm bdh{};
	bdh.tm_year = year-1900;
    bdh.tm_mon  = mont-1;
    bdh.tm_mday = dai;
	bdh.tm_isdst = -1;
	std::time_t BTH = std::mktime(&bdh);
	long long tada = BTH / 86400; // DAYS FROM 1900 TO BIRTHDAY
	int delta = dayz_from_1970 - tada;
	int delta_years = delta / 365;
	
	std::cout << "HELLO," << JINLOR << "YOU ARE" << delta_years << std::endl;
	std::string g;
	clock_gettime(CLOCK_REALTIME, &tau);
	double hijack2 = tau.tv_nsec/1000000000.0;
	
	std::cout << "THIS CODE IN SECONDS WAS" << hijack2-hijack1;
	
	std::cin >> g;
	
	
	

}