
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#include "md5.h"

BYTE Z3r0_N1ghts_hash[] = {0xf9,0x66,0x72,0xa8,0x94,0x3a,0x13,0xba,0xcd,0xf5,0xac,0x09,0x52,0x91,0x69,0xe8};

int main() {
	std::string email;
	BYTE email_hash[16];

	cout << "enter email : ";
	cin >> email;
 
	md5(email.c_str(), email.length(), (char*)email_hash);

	cout << "your key : ";
	for (unsigned int hashbyte_idx = 0; hashbyte_idx < 16; hashbyte_idx++) {
		printf("%02x", (uint8_t)(Z3r0_N1ghts_hash[hashbyte_idx] - email_hash[hashbyte_idx]));
	}
	cout << "\nEnjoy!\n";

	system("PAUSE");
	return 0;
}