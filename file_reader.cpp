#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH; 
    int flags = O_RDONLY;
    char buf[10];
    size_t count;
    ssize_t rd;
    string p;
    string filetoRead;
    
    cout << "What is the file to read";
    cin >> filetoRead;
    
    int fd = open(filetoRead.c_str(),flags,mode); //Open the file
    count = sizeof(buf);
    rd = read(fd,buf,count);
    if(rd == -1)
    {
        cout << "Error has a occured exiting program";
        exit(1);
    }
    else
    for(int i = 0; i < count; i++)
    {
            cout << (buf[i]);
    }
    close(rd);
    
    
    
    
}