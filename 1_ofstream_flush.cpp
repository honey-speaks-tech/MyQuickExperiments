// Flushing files
#include <fstream>      // std::ofstream
#include <iostream>

int main () {

  std::ofstream outfile ("test.txt");
  std::ifstream istrm("test.txt");
  std::string read_buffer{""};

  for (int n=0; n<100; ++n)
  {
    outfile << n << "\n";
    outfile.flush(); //If commented, read may not work properly.
    istrm >> read_buffer;
    std::cout<<read_buffer<<"\n";
    read_buffer.clear();
  }
  outfile.close();
  istrm.close();

  return 0;
}
