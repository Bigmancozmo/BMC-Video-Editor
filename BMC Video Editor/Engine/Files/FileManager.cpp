#include "FileManager.h"
#include <Windows.h>

FileManager::FileManager()
{
}

void FileManager::WriteFile(const char* dir, const char* contents)
{
	ofstream file(dir);
	if (file.is_open()) {
		file << contents;
		file.flush();
		file.close();
	}
	else {
		cout << "Failed to open file." << endl;
	}
}

const char* FileManager::GetExeDirectory()
{
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	string::size_type pos = std::string(buffer).find_last_of("\\/");
	string str = string(buffer).substr(0, pos);
	const char* charArray = str.c_str();

	return charArray;
}