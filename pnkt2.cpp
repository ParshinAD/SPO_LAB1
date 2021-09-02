#include <iostream>

#include <windows.h>

#include <stdio.h>

#include <tchar.h>

using namespace std;

#define INFO_BUFFER_SIZE 32767

int main()

{

	TCHAR infoBuf[INFO_BUFFER_SIZE];

	GetSystemDirectory(infoBuf, INFO_BUFFER_SIZE);

	printf("\nSystem directory %s", infoBuf);

}
