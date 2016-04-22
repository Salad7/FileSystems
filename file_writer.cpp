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
    int flags = O_RDWR;
    size_t count;
    ssize_t wd; //the write method returns a ssize_t
    
    
    int fd = open("my_file_1.txt",flags,mode); //Open the file
    
    char* p = "This_is_a_test"; //create a pointer to the char we want to write to
    char buf[20];
    strcpy(buf,p);
    count = strlen(p);
    wd = write(fd,buf,count);
    close(wd);
}