#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

#include <mypath.h>

int main(int argc, char **argv)
{
    char path[255] = { 0 };
    char mylist[255] = { 0 };
    if (argc < 2) {
        printf("main: error: please input path\n");
    }
    else {
        printf("path = %s\n", argv[1]);
        //path = "/home";
        print_dir_contents(argv[1]);
    }

    return 0;
}
