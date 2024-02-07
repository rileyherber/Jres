/*
single execution of a JRES projection
Riley Herber
*/

#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char** argv)	//function main <input being folder number>
{
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " <folder number> .\n";
    return 1;
  }
  
  int returnCode = system ("cd vipfolders/rherber/");
  returnCode = system("cp -r Jres_marcos/12.1.23_N.Crassa_QAX_Fractions/argv[0]");
  returnCode = system("cd 12.1.23_N.Crassa_QAX_Fractions/argv[0]");
 
  returnCode = system("bruker"); //creates fid.com
  // someway to make it read paramerters and save script?

  returnCode = system("./fid.com"); //creates test.fid
  returnCode = system("./Jres_marcos/nmr_jres_ft.com test.fid"); //creates test.ft2
  returnCode = system("./Jres_marcos/jres_tilt.com test.ft2"); //creates tilt.ft2
  
return 0;
}   
