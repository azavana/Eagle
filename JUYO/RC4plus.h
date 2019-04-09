#ifndef _RC4plus_h
#define _RC4plus_h

#include "Core.h"

class RC4plus: public Core
{
	public:
		void RC4plus_Encrypt (uchar *plaintext, char *RC4plus_key, uchar *ciphertext);
		char *RC4plus_key();
	
	protected:
		void KSA_RC4plus (char *key, uchar S[256]);
		void PRGA_RC4plus (uchar S[256], uchar *plaintext, uchar *ciphertext);
};

#endif
