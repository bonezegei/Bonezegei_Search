#include "Bonezegei_Search.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Bonezegei_Search::getInt(char arr[],const char *keyword) {
  int val = 0;
  for (int a = 0; a < strlen(arr); a++) {
    if (src(arr, keyword, a) == 0) {
      a += strlen(keyword) + 1;
      src2(arr, a);
      val = atoi(src2data);
      a += strlen(arr);
      return val;
    }
  }
  return 0;
}


float Bonezegei_Search::getFloat(char arr[],const char *keyword) {
  float val = 0;
  for (int a = 0; a < strlen(arr); a++) {
    if (src(arr, keyword, a) == 0) {
      a += strlen(keyword) + 1;
      src2(arr, a);
      val = atof(src2data);
      a += strlen(arr);
      return val;
    }
  }
  return 0;
}


char *Bonezegei_Search::getString(char arr[],const char *keyword) {

  for (int a = 0; a < strlen(arr); a++) {
    if (src(arr, keyword, a) == 0) {
      a += strlen(keyword) + 1;
      src2(arr, a);
      return src2data;
      a += strlen(arr);
    }
  }
  return 0;
}

char *Bonezegei_Search::getString(char arr[],const char *keyword, char endChar) {
  for (int a = 0; a < strlen(arr); a++) {
    if (src(arr, keyword, a) == 0) {
      a += strlen(keyword) + 1;
      src2(arr, endChar, a);
      return src2data;
      a += strlen(arr);
    }
  }
  return 0;
}



int Bonezegei_Search::src(char ar[],const char *cmp, int n) {
  int a;
  char tmp[32];
  for (a = 0; a < 32; a++) {
    tmp[a] = 0;
  }
  for (a = 0; a < strlen(cmp); a++) {
    tmp[a] = ar[a + n];
  }
  return strcmp(tmp, cmp);
}

void Bonezegei_Search::src2(char ar[], int n) {
  src2cnt = 0;
  int a = 0;
  for (a = 0; a < 64; a++) src2data[a] = 0;
  a = 0;
  while (ar[n + a] != ' ') {
    src2data[a] = ar[n + a];
    a++;
    src2cnt++;
  }
}

void Bonezegei_Search::src2(char ar[], char enD, int n) {
  src2cnt = 0;
  int a = 0;
  for (a = 0; a < SRC_MEM; a++) src2data[a] = 0;
  a = 0;
  while (ar[n + a] != enD) {
    src2data[a] = ar[n + a];
    a++;
    src2cnt++;
  }
}

void Bonezegei_Search::src2copy(char ar1[], char ar2[]) {
  int a = 0;
  for (a = 0; a < strlen(ar1) + 1; a++) {
    ar2[a] = ar1[a];
  }
}

void Bonezegei_Search::src2clear(char arr[]) {
  int a = 0;
  for (a = 0; a < strlen(arr); a++) {
    arr[a] = 0;
  }
}
