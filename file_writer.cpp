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
    int flags = O_WRONLY;
    char* file_ptr;
    char test;
    size_t count;
    char* p; //create a pointer to the char we want to write to
    char* wrte; //Create a pointer to the string we want to write in the file
    char buf[20];
    char* emp;
    ssize_t wd; //the write method returns a ssize_t
    
    //cout << "Enter a file name and what you want to write";
    //cin >> test;
    
    file_ptr = "my_file_1.txt";//&test;
    //strcpy(file_ptr,test.);
    
    int fd = open(file_ptr,flags,mode); //Open the file
    
    cout << endl;
    cout << "What do u want to write to the file" << endl;
    cin >> wrte;
    
    p = wrte; //we cant directly save so we have to do this
    
    strcpy(buf,p); //Copy the information from p to the buf
    
    cout << *p;
    count = strlen(p); //Set the count equal to the length of p
    
    wd = write(fd,buf,count);
    
    close(wd);
  
}

