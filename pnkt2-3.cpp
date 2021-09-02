
#include <windows.h>

#include <stdio.h>

#include <tchar.h>

using namespace std;

#define INFO_BUFFER_SIZE 32767

int main()

{

    TCHAR szPath[_MAX_PATH] = { 0 };
    UINT iRet = GetSystemDirectory(szPath, _MAX_PATH);
    printf("Result function GetSystemDirectory %d\n", iRet);

    char buffer[256];
    DWORD size = 256;
    GetComputerNameA(buffer, &size);
    printf("%s\n", buffer);

    char buffer1[256];
    DWORD size1 = 256;
    GetUserNameA(buffer1, &size1);
    printf("%s\n", buffer1);

}
