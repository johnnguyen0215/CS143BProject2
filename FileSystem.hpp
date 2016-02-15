#include <iostream>
using namespace std;

class FileSystem
{
private:
	/* Data Structures */
	char** ldisk;
	char** descriptors;
	char* directory;
	char* buffer;
	char** oft;
	char** bitmap;

	/* Instance Variables */

	int ldiskSize = 64;
	int blockSize = 64;
	int B = 64; // general use;
	int descCount = 6; // Number of descriptors
	int descSize = 4; // Number of descriptorFields
	
	int directorySize = 3; // Number of files that can be in the directory

	int oftSize = 3; // Number of files that can be open at once

	int currentDescriptor = 0;


public:
	FileSystem();
	~FileSystem();
	void initialize();
	void test();
	
	int create(string symbolicFileName);
	int destroy(string symbolicFileName);
	int open(string symbolicFileName);
	int close(int index);
	int read(int index, char* memoryArea, int count);
	int write(int index, char* memoryArea, int count);
	int lseek(int index, int pos);
	int directory();
	int init();
	int save();
	int findEmptyDesc(){}
};

