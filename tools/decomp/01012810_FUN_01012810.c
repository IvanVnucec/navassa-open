
void FUN_01012810(int *param_1)

{
  char cVar1;
  
  do {
    cVar1 = (*param_1 >> 0x1e & 1U) != 0;
    param_1 = (int *)FUN_01012844();
  } while (cVar1 == '\0');
  return;
}

