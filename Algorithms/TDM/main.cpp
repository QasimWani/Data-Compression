#include "tdm.cpp"
#include <string>
using namespace std;

int main()
{
    tdm * matrix = new tdm();
    string data = "Hello World";
    matrix->generateTDM(data);
    matrix->printTDM();
    return 0;
}