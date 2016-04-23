#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <map>
#include <ios>
using namespace std;


int main()
{
    std::map<std::string,int >m; //Hashmap to store the permissions
    std::map<std::string,int>::iterator mode;
    m["read"] = 400;
    m["read-write"] = 600;
    m["read-execute"] = 500;
    m["read-write-execute"] = 700;
    m["write-execute"] = 300;
    m["execute"] = 100;
    
    //char file;
    string file_ptr;
    string test;
    string perm;
    int val;
    cout << "Enter a file name:";
    cin >> test;
    //cout << "What permissions should the file have? FOR NOW ASSUMING mode" << endl;
    //file_ptr = file;
    cout << "What permissions would u like to give to the owner of this group?" << endl;
    cout << "read" << endl;
    cout << "read-write" << endl;
    cout << "read-execute" << endl;
    cout << "read-write-execute" << endl;
    cout << "write-execute" << endl;
    cout << "execute" << endl;
    cin >> perm;
    
   if(perm.compare("read") == 0 )
    {
     file_ptr = test;
    val = creat(file_ptr.c_str(),0400);
    }
    else if(perm.compare("read-write") == 0 )
    {
     file_ptr = test;
    val = creat(file_ptr.c_str(),0600);
    }
    else if(perm.compare("read-execute") == 0 )
    {
     file_ptr = test;
    val = creat(file_ptr.c_str(),0500);
    }
    else if(perm.compare("read-write-execute") == 0 )
    {
     file_ptr = test;
    val = creat(file_ptr.c_str(),0700);
    }
    else if(perm.compare("write-execute") == 0 )
    {
     file_ptr = test;
    val = creat(file_ptr.c_str(),0300);
    }
    else if(perm.compare("execute") == 0 )
    {
     file_ptr = test;
    val = creat(file_ptr.c_str(),0100);
    }
    else
    {
        cout << "Error has occured exiting program";
        exit(1);
    }
    
    
    
    close(val);
}

