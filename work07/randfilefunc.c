#include "randfilefunc.h"

int main(){
  umask(0);
  int i = 0;

  //stores and prints rand nums in arr
  printf("generating random numbers...\n");
  while(i++ < 10){
    arr[i] = numGen();
    //printf("nGen: %d\n",numGen());
    printf("\tRandom %d: %d\n", i, arr[i]);
  }

  printf("\nWriting %d bytes to file.\n",writeToFile("randArr"));

  readFromFile("randArr");
    
  //prints arr2:
  int n = 0;
  while (n++ < 10){
    printf("\tRandom %d: %d\n", n, arr2[n]);
  }
}

int numGen(){
  int ans;
  int temp = open("/dev/random", O_RDONLY);
    
  read(temp, &ans, sizeof(ans));
  close(temp);
    
  return ans;
}
 
int writeToFile(char filename[]){
  int fd = open(filename, O_CREAT | O_EXCL | O_RDWR, 0644); //returns error if tempfile exists
  if(fd == -1){
    close(fd);
    fd = open(filename, O_WRONLY, 0644);
    if(fd == -1)
      printf("ERROR: %s", strerror(errno));
  }
  int bytes = write(fd,arr, 11 * sizeof(int));
  printf("\nWriting numbers to files...\n");
  close(fd);
  return bytes;
}

int readFromFile(char filename[]){
  int fd = open(filename, O_RDONLY);
  printf("\nReading numbers from files...\n");
  read(fd, arr2, 11 * sizeof(int));
  close(fd);
  return fd;
}
