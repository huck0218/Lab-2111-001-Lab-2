#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
	private:
		//member variables
	   ofstream output_file;
	   bool closed;
	public:
		//contstructor
		WriteFile(const char* file_name);
		//destructor
		~WriteFile();
		//member functions
		void writeLine(String* line);
		void close();
		
		
};

#endif
