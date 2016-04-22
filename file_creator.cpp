#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //char file;
    char* file_ptr = "my_file_1.txt";
    //int permissions = 0666
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    int val;
   // cout << "Enter a file name: " << endl;
    //cin >> "/filename" + file_ptr;
    //cout << "What permissions should the file have? FOR NOW ASSUMING mode" << endl;
    //file_ptr = file;
    val = creat(file_ptr,mode); //Runs into error, consider what mode means
    
    //Adder
    add(*void b, int b)
    {
        
        
    }
    
}

