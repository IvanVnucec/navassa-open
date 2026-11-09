
void FUN_01011e70(int param_1,int param_2)

{
  undefined4 local_d8;
  undefined1 auStack_d4 [200];
  
  local_d8 = 0;
  FUN_01025e1c(param_2,&local_d8,*(undefined1 *)(param_1 + 0x2f5));
  if ((*(char *)(param_2 + 0x8c) != '\x02') && (*(char *)(param_1 + 0x2f5) == '\0')) {
    FUN_01026c4c(param_2 + 0x530,param_2 + 0x464,auStack_d4,&local_d8);
  }
  return;
}

