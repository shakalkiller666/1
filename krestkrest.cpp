#include <iostream>
#include <string>
#include <iomanip>

int main() {
	std::cout << "Tun int " << sizeof(int) << " bytes" <<std::endl;
	std::cout << "Tun float " << sizeof(float) << " bytes" <<std::endl;
	std::cout << "Tun double " << sizeof(double) << " bytes" <<std::endl;
	std::cout << "Tun long " << sizeof(long) << " bytes";
	std::cout << "Tun long long " << sizeof(long long) << " bytes" <<std::endl;
	std::cout << "Tun long double" << sizeof(long double) << " bytes";
	std::cout << "Tun string " << sizeof(std::string) << " bytes" <<std::endl;
	int galileo = 6666666666666666666666666;
	std::cout << galileo << std::endl;
	std::string chapman = "THIS IS HELLA VERY LONG STRING DEFFO MORE DAN THIRTY TWO BYTES BUT I CAN STORE IT CUZZZZ I CAN AHAHAHAHAHAHHA!(@#(UEI#Jbrivijsoovfejivrpvrbigbroitjb;mdgl gml;mgdlm ;gmlggjgk phbpgndorjirrgjbgbriprmpggrmpgmbpkmpgkmpgkbmpgmpgrrmpsgmpgmpgmpgr";
	std::cout << sizeof(chapman) << std::endl;
	std::cout << chapman.capacity() << std::endl;
	float qk = 666666.0f;
	float ic = 0.1f;
	float ratio = qk + ic;
	double qk1 = 666666.0f;
	double ic1 = 0.1f;
	double retio = qk1 + ic1;
	std::cout << std::setprecision(17);
	std::cout << qk <<"+"<< ic << "=" << ratio << "IN DOUBLE VARIATION IT IS" << retio <<std::endl;
	double eingemachts;
	std::cin >> eingemachts;
	double bienviendo;
	std::cin>> bienviendo;
	double upselen = 0.00000000000001;
	bool e = std::abs(eingemachts - bienviendo) <= upselen;
	std::cout << "are these numbers kinda equal??? "<< e <<std::endl;
	std::string nuffin;
	std::cin >> nuffin;
	return 0;
}