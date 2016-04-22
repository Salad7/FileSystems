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
    m["read"] = 0400;
    m["read and write"] = 0600;
    m["read and execute"] = 0500;
    m["read and write and execute"] = 0700;
    
    m["write and execute"] = 300;
    
    m["execute"] = 100;
    
    //char file;
    char* file_ptr;
    char* test;
    //int permissions = 0666
    int mode = 0600;
    int val;
    cout << "Enter a file name:";
    cin >> test;
    //cout << "What permissions should the file have? FOR NOW ASSUMING mode" << endl;
    //file_ptr = file;
    cout << "What permissions would u like to give to the owner of this group?" << endl;
    cout << "read" << endl;
    cout << "read and write" << endl;
    cout << "read and execute" << endl;
    cout << "read and write and execute" << endl;
    cout << "write and execute" << endl;
    cout << "execute" << endl;
    file_ptr = test;
    val = creat(file_ptr,mode);
    
    
    
    close(val);
}

