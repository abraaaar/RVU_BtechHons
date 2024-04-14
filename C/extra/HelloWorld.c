#include <stdio.h>
#include <time.h>

int main() {
  char message[] = "Hello World!";
  int i, j;
  char ch;
  struct timespec ts;
  ts.tv_sec = 0;
  ts.tv_nsec = 4000000L;

  for (i = 0; message[i] != '\0'; i++) {
    for (ch = 'A'; ch <= message[i]; ch++) {
      for (j = 0; j < i; j++) {
        printf("%c", message[j]);
      }
      printf("%c\n", ch);
      fflush(stdout);
      nanosleep(&ts, NULL);
    }
  }

  return 0;
}