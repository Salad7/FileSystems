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
    int fd = open("my_file_1.txt",flags,mode); //Open the file
    count = sizeof(buf);
    rd = read(fd,buf,count);
    
    for(int i = 0; i < count; i++)
    {
            cout << (buf[i]);
    }
    
    
   // cout << buf[6];
    close(rd);
    
    
    
    
}