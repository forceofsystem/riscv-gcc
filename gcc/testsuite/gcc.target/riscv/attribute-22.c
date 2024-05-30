/* { dg-do compile } */
/* { dg-options "-mno-mac -march=rv64if -mabi=lp64f" } */

float foo1(float a, float b, float c){
  return -a * b - c;
}

float foo2(float a, float b, float c){
  return -a * b + c;
}

/* { dg-final { scan-assembler-not {\fnmadd\.s*} } } */
/* { dg-final { scan-assembler-not {\fnmsub\.s*} } } */
