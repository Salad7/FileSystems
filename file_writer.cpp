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
    string file_ptr;
    size_t count;
    string p; //create a pointer to the char we want to write to
   // char* wrte; //Create a pointer to the string we want to write in the file
    char buf[20];
    ssize_t wd; //the write method returns a ssize_t
    
    
    cout << "What to write" << endl;
    cin >> p;
    cout << "file to write to";
    cin >> file_ptr;
    
    //file_ptr = emp;//"my_file_1.txt";//&test;
    //strcpy(file_ptr,test.);
    
    int fd = open(file_ptr.c_str(),flags,mode); //Open the file
    //free(file_ptr);
    //delete(file_ptr);
    
   // p = wrte; //we cant directly save so we have to do this
    
    strcpy(buf,p.c_str()); //Copy the information from p to the buf
    
    count = p.length(); //Set the count equal to the length of p
    //delete(p);
   // free(p);
    wd = write(fd,buf,count);
    if(wd == -1)
    {
     cout << count << endl;
     cout << buf << endl;
        cout << "Error has a occured exiting program";
        exit(1);
    }
    else
    //delete(p);
    //delete(file_ptr);
    close(wd);
  
}

