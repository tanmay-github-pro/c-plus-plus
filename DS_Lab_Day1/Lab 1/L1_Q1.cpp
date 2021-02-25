#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

// function to find length of a string stored as a character array
int length(char *str)
{
    int len=0;
    // condition to check whether character is equal to null 
    while(str[len]!='\0')
        len++;
    return len;
}
// function to conctat two strings passed as arguments in the form of character arrays
void stringConcat(char *str1,char *str2)
{
    int i=0, j=0;
    // condition to check if end of string 1 is reached 
    while(str1[i]!='\0')
        // increase value of i until end of string is reached
        i++;
    // condition to check if end of string 2 is reached 
    while(str2[j]!='\0')
    {
        // start concatenating at end of string 1 because value of i currently points to end of string 1
        str1[i]=str2[j];
        i++;
        j++;
    }
    // append null character at end of character array to denote a string
    str1[i]='\0';
}
// function to compare two strings given as arguments in the form of character arrays
int stringCompare(char *str1,char *str2)
{
    // find length of string 1 and string 2
    // a flag variable can also be used instead of using multiple return statements in code
    int len1=length(str1);
    int len2=length(str2);
    int len;
    if(len1 < len2)
        len = len1;
    else
        len = len2;
    for(int i=0;i<len;i++)
    {
        if(str1[i] < str2[i])
            return -1; // -ve return value to show str1 is less than str2
        if(str1[i] > str2[i])
            return 1; // +ve return value to show str1 is greater than str2
    }
    // if strings are same return 0
    return 0;
}
// function to insert a substring in main string
// string, substring and position at which substring is to be inserted are given as arguments to function
char* insertSubString(char *str,char* substr,int pos)
{
    // find length of string and substring
    int subLength = length(substr);
    int  len = length(str);
    for(int i = len-1 ;i>=pos ;i--)
    {
        str[i+subLength] = str[i];
    }
    for(int i=0;i<subLength;i++)
        str[i+pos] = substr[i];
    // update value of length of string
    len =length(str);
    // append null character at end of character array to show that it is a string
    str[len] ='\0';
    // return the string with the substring inserted
    return str;
}
// function to delete substring from string
// string and substring are given as arguments to function in form of character arrays
char* deleteSubString(char *str,char *substr)
{
    // find length of string 
    int len = length(str);
    // find length of substring
    int sublen = length(substr);
    // delete substring
    for(int i=0;i<len;i++)
    {
        int count=0;
        for(int j=0;j<sublen;j++)
        {
            if(str[i+j]==substr[j])
                count++;
        }
        if(count == sublen)
        {
            int pos = i;
            for(int k =i+sublen;str[k]!='\0';k++)
            {
                str[pos]=str[k];
                pos++;
            }
            str[pos]='\0';
            return str;
        }
    }
    // if substring is not found
    cout<<"SubString Not found"<<"\n";
    return str;
}

int main()
{
    char *str1 = new char[100];
    char *str2 = new char[100];
    int pos;
    cout<<"Enter String 1:"<<"\n";
    cin.getline(str1,40);
    cout<<"Length of string: "<<length(str1)<<"\n";
    cout<<"Enter String 2"<<"\n";
    cin.getline(str2,40);
    // cout<<"Enter position at which substring is to be inserted in string 1: ";
    // cin>>pos;
    // cout<<"String after concatenation: \n";
    // stringConcat(str1,str2);
    // cout<<str1<<"\n";
    // cout<<"String after substring is deleted from it\n";
    // cout<<deleteSubString(str1,str2)<<"\n";
    // cout<<insertSubString(str1, str2, pos)<<"\n";
    if(stringCompare(str1, str2)==0)
        cout<<"Strings are same\n";
    else 
        cout<<"Strings are not same\n";

}


