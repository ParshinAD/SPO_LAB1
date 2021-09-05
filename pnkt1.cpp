#pragma warning(disable : 4996)

#define WINVER 0x0A00
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

using namespace std;

#define BUFSIZE MAX_PATH
#define FILESYSNAMEBUFSIZE MAX_PATH
#define MAX_KEY_LENGTH 255


#define INFO_BUFFER_SIZE 32767



int main() {
    OSVERSIONINFO osvi;
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionEx(&osvi);
    printf("Version OS: %i.%i\n", osvi.dwMajorVersion, osvi.dwMinorVersion);
}
