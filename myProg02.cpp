// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  ifstream inFile;
  inFile.open(argv[1]);
  
  string line;
  int animals;
  int ducks = 0;
  int notDucks;
  while (getline(inFile, line))
  {
      animals++;
    if (line == "duck")
        ducks++;
    else
        notDucks++;
  }
  
  cout << "Report for " << argv[1] << ":\n";
  cout << "Animal count:    " << animals << endl;
  cout << "Duck count:      " << ducks << endl;
  cout << "Non duck count:  " << notDucks << endl;
  return 0;
}