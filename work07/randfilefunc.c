#include "randfilefunc.h"

int main(){
  umask(0);
  int i = 0;

  //stores and prints rand nums in arr
  printf("generating random numbers...");
  while(i++ < 10){
    arr[i] = numGen();
    printf("\tRandom %d: %d\n", i, a[i]);
  }

  //opens and writes arr into file


  //reads file into new arr
  
  
}

int numGen(){
  int ans;
  int temp = open("/dev/random/", O_RDONLY);
  read(temp, &ans, sizeof(ans));
  close(temp);
  return ans
}
 
int writeToFile(char[] filename){
  int fd = open(filename, O_CREAT | O_EXCL | O_RDWR, 0644); //returns error if tempfile exists
  if(fd == -1){
    printf("Error: %s\n", strerror(errno));
    return -1;
  }
  int bytes = write(fd,arr2, sizeof(arr2));
  printf("\nWriting numbers to files...");
  close(fd);
  return bytes;
}

int readFromFile(char[] filename, int descriptor, int[] array){
  int fd = open(filename, O_RDONLY); 
  read(fd, array, sizeof(array));
  close(fd)
  return fd;
}
