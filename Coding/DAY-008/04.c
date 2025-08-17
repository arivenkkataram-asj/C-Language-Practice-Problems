  #include <stdio.h>

  int main(){
    unsigned char digit = 10;
  char num_bin[4]={0},i=3;
  while(i>=0){
    num_bin[i]=digit%2;
    digit/=2;
    i--;
  }
  for(int j=0;j<4;j++){
    printf("\n%d",num_bin[j]);
  }
  }