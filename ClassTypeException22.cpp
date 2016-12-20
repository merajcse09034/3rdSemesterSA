#include <iostream>
#include <cstring>
using namespace std;
class MyException {
  public:
    string str_what="dffdf";
    int what=10;

    MyException(string s, int e) {


}
};
int main()
{
    int i;
try {
    cout << "Enter a positive number: ";
    cin >> i;
if(i<0)
    throw MyException("Not", i);
}
catch (MyException e) { // catch an error
    cout << e.str_what << ": ";
    cout << e.what << "\n";
}
return 0;
}
