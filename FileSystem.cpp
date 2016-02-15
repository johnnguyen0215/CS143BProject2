#include "FileSystem.hpp"

using namespace std;


FileSystem::FileSystem()
{	
}


FileSystem::~FileSystem()
{
}

void FileSystem::initialize() {
	ldisk = new char*[ldiskSize];
	descriptors = new char*[descCount];

	for (int i = 0; i < ldiskSize; i++) {
		ldisk[i] = new char[blockSize];
	}
	for (int i = 0; i < ldiskSize; i++) {
		for (int j = 0; j < blockSize; j++) {
			ldisk[i][j] = -1;
		}
	}

	for (int i = 1; i < descCount + 1; i++) {
		descriptors[i - 1] = ldisk[i];
	}


}

int FileSystem::create(string filename) {
	int freeDescIndex = findEmptyDesc();
	int freeDirIndex = 
}

int FileSystem::findEmptyDesc() {
	for (int i = 0; i < B; i += descSize) {
		if (descriptors[currentDescriptor][i] == -1) {
			return i;
		}
	}
	return -1;
}


void FileSystem::test() {
}