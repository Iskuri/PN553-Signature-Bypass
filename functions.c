#include <stdint.h>


// command found at: 07 00 10 00 = 00100007

void overriddenMemcpy(uint8_t* r0, uint32_t r1, uint32_t r2) {


	for(int i = 0 ; i < r2 ; i++) {
		r0[i] = 0xbb;
	}

	uint32_t* addressPtr = 0x00100007;
	uint32_t address = addressPtr[0];

	r0[0] = address&0xff;
	r0[1] = (address>>8) &0xff;
	r0[2] = (address>>16) &0xff;
	r0[3] = (address>>24) &0xff;

	uint8_t* memPtr = address;

	for(int i = 0 ; i < 0x10 ; i++) {
		r0[i+5] = memPtr[i];
	}

	// for(int i = 0x100000 ; i < 0x101000 ; i++) {

	// 	uint8_t* ptr = i;
	// 	if(ptr[0] == 0xfa && ptr[1] == 0xce && ptr[2] == 0xfa && ptr[3] == 0xce) {

	// 		// r0[0] = 0x99;
	// 		// r0[1] = 0x99;
	// 		// r0[2] = 0x99;
	// 		// r0[3] = 0x99;

	// 		r0[0] = i&0xff;
	// 		r0[1] = (i>>8)&0xff;
	// 		r0[2] = (i>>16)&0xff;
	// 		r0[3] = (i>>24)&0xff;	
	// 		break;
	// 	}
	// }

}