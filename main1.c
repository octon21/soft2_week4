#include <stdio.h>
#include <stdlib.h>

int main(void){
  float f[4];

  // 以下に適切な値を設定する
  f[0] =1.1431391224e+27;
  f[1] =6.6592994030e+28;
  f[2] =1.0998196979e-32;
  f[3]=0;
  // "Hello,World\n" と出力してほしい
  printf("%s",(char*)f);
  return 0;
}
