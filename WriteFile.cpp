#include "WriteFile.h"
#include <sstream>


//constructor function
WriteFile::WriteFile(const char* out_txt)
{
   output_file.open(out_txt);
   closed = false;
}
 //destructor function
 WriteFile::~WriteFile(){

 }
 //function that receives a line from the readfile as a parameter and writes it to the writefile
 void WriteFile::writeLine(String* line){
	 if (!closed && line->length() > 0)
	 {
		 output_file << line->getText() << endl;
	 }
 }
 //function to close the file 
 void WriteFile::close(){
	 output_file.close();
	 closed = true;
	 
 }