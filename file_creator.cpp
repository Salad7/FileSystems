#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <map>

using namespace std;


int main()
{
    std::map<std::string, int> m; //Hashmap to store the permissions
    std::map<std::string,int>::iterator mode;
    m["read"] = 0400;
    m["read-write"] = 0600;
    m["read-execute"] = 0500;
    m["read-write-execute"] = 0700;
    m["write-execute"] = 0300;
    m["execute"] = 0100;
    
    //char file;
    char* file_ptr;
    char* test;
    //int permissions = 0666
    //int mode = 0600;
    //int mode;
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
    mode = m.find("execute");
    file_ptr = test;
    val = creat(file_ptr,m.find(perm)->second);
    
    
    
    close(val);
}

