/* Andry RAFAM ANDRIANJAFY - JUYO / VORNSKR (April 2019)

OS : Ubuntu 16.04 LTS

GCC : Version 6.5.0

GDB : Version 8.2 */

#include <iostream>
#include <ctime>
#include "Blowfish.h"
#include "RC4A.h"
#include "RC4plus.h"
#include "Spritz.h"
#include "VMPC.h"
#include "print.h"

#define MAX 2048

using namespace std;

main ()
{
	system("clear");
	uchar *clear_message = new(nothrow)uchar[MAX];

	fprintf(stdout,"\n\t************************************");
	fprintf(stdout,"\n\t\t[ JUYO / VORNSKR ]");	
	fprintf(stdout,"\n\t************************************");
	fprintf(stdout,"\n\n\t [ Input a clear message ] >> ");
	fgets ((char*)clear_message,MAX,stdin);

	srand(time(NULL));
	int random = rand() % 4;

	if (random == 0)
	{
		fprintf(stdout,"\n\n\t [ ENCRYPTED MESSAGE (Blowfish_RC4A) ] >> ");
		print1 (clear_message);
	}
	else if (random == 1)
	{
		fprintf(stdout,"\n\n\t [ ENCRYPTED MESSAGE (Blowfish_RC4plus) ] >> ");
		print2 (clear_message);
	}
	else if (random == 2)
	{
		fprintf(stdout,"\n\n\t [ ENCRYPTED MESSAGE (Blowfish_VMPC) ] >> ");
		print3 (clear_message);
	}
	else if (random == 3)
	{
		fprintf(stdout, "\n\n\t [ ENCRYPTED MESSAGE (Blowfish_Spritz) ] >> ");
		print4 (clear_message);
	}

}
