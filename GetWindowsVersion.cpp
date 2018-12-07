#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#pragma warning(disable : 4996)

int main()
{
	OSVERSIONINFO osvi;

	ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
	osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

	GetVersionEx(&osvi);

	std::cout << "OSVersion=" << osvi.dwMajorVersion << '.' << osvi.dwMinorVersion<< '.' << osvi.dwBuildNumber << std::endl;
}
