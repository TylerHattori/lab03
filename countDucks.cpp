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
  int ducks;
  while (getline(inFile, line))
    if (line == "duck")
        ducks++;

  cout << "There were " << ducks << " ducks in " << argv[1] << "\n";
  return 0;
}