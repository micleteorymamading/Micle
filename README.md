#Count the letters of a string

#include <iostream>
#include <string>
  
using namespace std;

bool db(string s)
{
  int b=0,d=0;
  for(int i=0; i<s.length(); i++)
  {
    if(s[i]=='b') b++;
    else if (s[i]=='d') d++;
  }

  if(b==d)
    return true;
  else
    return false;
}

int main()
{

}

