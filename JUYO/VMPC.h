#ifndef _VMPC_h
#define _VMPC_h

#include "Core.h"

class VMPC: public Core
{
	public:
		void VMPC_Encrypt (uchar *plaintext, char *key, uchar *ciphertext);
		char *VMPC_key();
	
	protected:
		void KSA_VMPC (char *key, uchar S[256]);
		void PRGA_VMPC (uchar S[256], uchar *plaintext, uchar *ciphertext);
};

#endif
