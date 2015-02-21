/*
 ============================================================================
 Name        : Test.c
 Author      : Prasanna
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <api.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int a,b,c;
	a = b = 10;
	c = add(a,b);
	printf("Result is %d",c);
	return EXIT_SUCCESS;
}
