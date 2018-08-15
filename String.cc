/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <string.h>
using namespace std;

//func to removeduplicates in input string
void removeDuplicate(char *s,int len)
{
    cout<<"original str: "<<s<<endl;
    char *s_new = new char[len];
    
    for(int i=0;i<len;i++)
    {
       mark[s[i]]++;
    }
    int j=0;
    for(int i=0;i<len;i++)
    {
       if(mark[s[i]] == 1)
       {
           s_new[j++]=s[i];
       }
    }
    s_new[j++]='\0';
    
    cout<<"unique charracter str: "<<s_new<<endl;
    delete [] s_new;
}

//reverse input string
void reverse(char *s,int len)
{
     char *s_new= new char[len];
     int j=len-1;
     cout<<"original str: "<<s<<endl;
  for(int i=0;i<len;i++)
  {
      
          s_new[i] = s[i];
      j--;
      
  }
  cout<<"reverse str: "<<s_new<<endl;
  delete[] s_new;
}
//convert input str into str without vowel
void str_witout_vowel(char *s,int len)
{
    char *s_new= new char[len];
     int j=0;
     cout<<"original str: "<<s<<endl;
  for(int i=0;i<len;i++)
  {
      if(!(s[i]=='a' || s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'))
      {
          s_new[j++] = s[i];
      }
     
  }
   s_new[j++]='\0';
   cout<<"str w/o vowel: "<<s_new<<endl;
   delete [] s_new;
}
//check if a string is Palindrome
void isPalindrome(char *s,int len)
{
    bool isPalindrome = true;
    for(int i=0;i<=len/2;i++)
  {
      if(s[i] !=s[--len])
      {
         isPalindrome = false;
         break;
      }
     
  }
  if(isPalindrome)
  cout<<"str is Palindrome "<<endl;
  else
  cout<<"str is not a Palindrome "<<endl;
}
int main()
{
     char s[]="hello mahima";
     int len =strlen(s);
  reverse(s,len);
  str_witout_vowel(s,len);
  isPalindrome("maiham",6);
    return 0;
}

