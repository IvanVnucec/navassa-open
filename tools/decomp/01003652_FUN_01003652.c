
int FUN_01003652(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                int param_6,int param_7)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(int *)(DAT_01003a80 + param_1 * 4) + 0x3c);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  if ((param_6 << 10 < 0) && (param_3 != 0)) {
    FUN_0100426a(param_5,param_3,param_1);
  }
  if ((param_6 << 0xb < 0) && (param_4 != 0)) {
    FUN_0100544c(param_5,param_4,param_1,param_2);
  }
  if (param_7 != 0) {
    FUN_01003974();
  }
  return param_4;
}

