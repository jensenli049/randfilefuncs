#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

int arr[10];
int arr2[10];

int numGen();
int writeToFile(char[]);
int readFromFile(char[]);
