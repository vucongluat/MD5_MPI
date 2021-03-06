#ifndef __MD5_H__
#define __MD5_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef union uwb{
	unsigned w;
	unsigned char b[4];
}WBunion;

typedef unsigned Digest[4];

unsigned f0(unsigned abcd[]);
unsigned f1(unsigned abcd[]);
unsigned f2(unsigned abcd[]);
unsigned f3(unsigned abcd[]);

typedef unsigned(*DgstFctn)(unsigned a[]);

unsigned *calcKs(unsigned *k);
unsigned rol(unsigned v, short amt);
unsigned *md5(const char *msg, int mlen);
int *md5_int(char *key);

int HexaToDecimal_Bit(char msg);// msg comtain 2 character.

int* HexaToDecimal_Msg(char *msg);

#endif
