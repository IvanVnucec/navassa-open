
void FUN_0102586a(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_01025964 + param_1);
  if (cVar1 != '\x01') {
    cVar1 = '\0';
  }
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 3) = 10;
  *(char *)(param_2 + 2) = cVar1;
  return;
}

