#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <time.h>

/* Created by: Ben Smith
 * Class: CS3060 X01 summer 2021 B1
 * Assignment: Project 6
 */



int main(int argc, char *argv[])
{
	//convert input to integer
	int long input_int;
	int long input_int_index;
	int long input_int_offset;
	char *p;

	if(argc < 2)
		return 0;
	input_int = (int)strtol(argv[1], &p, 16);

	input_int_index =  input_int >> 12;
	input_int_offset = input_int & 0x0fff;

	printf("Logical Addr:%#010x - Page Index:%#010x - Offset:%#010x\n"
		, input_int
		, input_int_index
		, input_int_offset);
}