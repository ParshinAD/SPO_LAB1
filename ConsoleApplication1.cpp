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

using namespace std;

#define INFO_BUFFER_SIZE 32767

int main() {
    char buffer[MAX_PATH + 1];
    DWORD  CBufLen = MAX_PATH;
    char buff1[MAX_PATH + 1];
    CHAR VolumeName[MAX_PATH];
    __int64 total, available, free;


    HANDLE search = FindFirstVolumeA(VolumeName, BUFSIZE);
    printf("\n      %s", VolumeName);

    do {
        printf("\n      %s", buff1);
        GetVolumePathNamesForVolumeNameA(buff1, buffer, CBufLen, &CBufLen);
        char* path = buffer;
        printf("\npath: %s", path);
        GetDiskFreeSpaceExA(buffer, (PULARGE_INTEGER)&available, (PULARGE_INTEGER)&total, (PULARGE_INTEGER)&free);
            printf("\nsize: %u  bytes ", total);
            printf("\nFree space: %u  bytes\n", available);

    } while (FindNextVolumeA(search, buff1, BUFSIZE));
    FindVolumeClose(search);
}