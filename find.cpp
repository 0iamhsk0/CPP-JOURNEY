#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   string s1 = "arlcome";
   string s2 = "wearomea";
   cout << s1.find("lc") << endl;  // o/p is 2
   cout << s2.rfind("ea") << endl; // o/p is 6
   cout << s2.find_last_of("e");   // o/p is 6
   // if anything other is seached garbage value will come
   return 0;
}
