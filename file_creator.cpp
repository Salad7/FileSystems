#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    char file;
    char* file_ptr;
    int permissions = 666;
    cout << "Enter a file name: " << endl;
    cin >> file;
    cout << "What permissions should the file have? FOR NOW ASSUMING 666" << endl;
    
    file_ptr = &file;
    creat(file_ptr,permissions); //Runs into error, consider what mode means
    
    
    
    
}

