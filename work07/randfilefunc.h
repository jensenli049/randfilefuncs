#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

int arr[10];
int arr2[10];

void numGen(int[] a);
int writeToFile(char[] filename);
int readFromFile(char[] filename, int descriptor, int[] arr);
