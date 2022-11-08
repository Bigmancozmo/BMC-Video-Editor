#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class FileManager
{
public:
	FileManager();
	void WriteFile(const char* dir, const char* contents);
	const char* GetExeDirectory();
};

