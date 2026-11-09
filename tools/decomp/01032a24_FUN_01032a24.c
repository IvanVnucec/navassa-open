
char FUN_01032a24(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_01032a3c + param_1 * 5);
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}

