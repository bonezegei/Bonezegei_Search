/*
  This Library is written for ILI9341 Search
  Author: Bonezegei (Jofel Batutay)
  Date : July 2023

  Simple array keyword Search
*/

#ifndef _BONEZEGEI_SEARCH_H_
#define _BONEZEGEI_SEARCH_H_
#define SRC_MEM 256

class Bonezegei_Search {
public:
  Bonezegei_Search() {
    src2cnt = 0;
  }

  int getInt(char arr[], const char *keyword);
  float getFloat(char arr[],const char *keyword);
  char *getString(char arr[],const char *keyword);
  char *getString(char arr[],const char *keyword, char endChar);

  int src2cnt;
  char src2data[SRC_MEM];

  int src(char ar[], const char *cmp, int n);
  void src2(char ar[], int n);
  void src2(char ar[], char enD, int n);
  void src2copy(char ar1[], char ar2[]);
  void src2clear(char arr[]);
};

#endif
