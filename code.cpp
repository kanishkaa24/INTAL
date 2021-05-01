#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char* intializeINTAL(){
  char* arr = (char*)malloc(1001*sizeof(char));
  for(int i=0;i<1000;i++){
    arr[i] = 0;
  }
  arr[1000] = "\0";
  return arr;
}
