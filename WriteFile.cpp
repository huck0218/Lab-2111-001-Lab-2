#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open("file_name");
   closed = false;
}
 
 WriteFile::~WriteFile(){

 }
 
 void WriteFile::writeLine(String* line){
	 if (!closed && line->length() > 0)
	 {
		 output_file << line->getText() << endl;
	 }
 }
 
 void WriteFile::close(){
	 output_file.close();
	 closed = true;
 }