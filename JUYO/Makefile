all : Blowfish.o RC4A.o RC4plus.o VMPC.o Select1.o Select2.o Select3.o Main.o
		 c++ -Wall Blowfish.o RC4A.o RC4plus.o VMPC.o Select1.o Select2.o Select3.o Main.o -o Main

Blowfish.o : Blowfish.cpp Blowfish.h ORIG_S_P.h
		   c++ -c Blowfish.cpp

RC4A.o : RC4A.cpp RC4A.h 
	    c++ -c RC4A.cpp

RC4plus.o : RC4plus.cpp RC4plus.h
	       c++ -c RC4plus.cpp

VMPC.o : VMPC.cpp VMPC.h
		c++ -c VMPC.cpp

Select1.o : Select1.cpp Blowfish.h RC4A.h print.h
		c++ -c Select1.cpp

Select2.o : Select2.cpp Blowfish.h RC4plus.h print.h
		c++ -c Select2.cpp

Select3.o : Select3.cpp Blowfish.h VMPC.h print.h
		c++ -c Select3.cpp

Main.o : Main.cpp Blowfish.h RC4A.h RC4plus.h VMPC.h print.h
		c++ -c Main.cpp
