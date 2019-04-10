# About
Random Lightweight encryption program based on Blowfish, RC4A, RC4plus and VMPC. The program choose randomly between the following combination:
  - Blowfish_RC4A
  - Blowfish_RC4plus
  - Blowfish_VMPC

THE PROGRAM IS UNDER GPL 3.0 LICENSE.

# Files included
- Header files:
  - Blowfish.h
  - Core.h (Mother class)
  - ORIG_S_P (Original Sbox / Pbox)
  - print.h (print function)
  - RC4A.h (Child class)
  - RC4plus.h (Child class)
  - VMPC.h (Child class)
  
- Cpp files:
  - Blowfish.cpp
  - Select1.cpp
  - Select2.cpp
  - Select3.cpp
  - RC4A.cpp
  - RC4plus.cpp
  - VMPC.cpp
  - Main.cpp

- Makefile

# How to run it on Linux (Debian / Ubuntu)
- 1) Download the program
- 2) In command line, go to the folder containing the downloaded program
- 3) Type make and press enter
- 4) Enjoy
