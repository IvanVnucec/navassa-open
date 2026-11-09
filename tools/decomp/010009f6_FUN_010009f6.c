
int FUN_010009f6(int param_1,int param_2,int param_3,uint param_4)

{
  if ((param_4 & param_2 + 1 << (param_3 * 2 + 0xcU & 0xff)) == 0) {
    return param_2 + 0xeb03;
  }
  *(char *)(param_1 + 0x84) = (char)param_2;
  return 0;
}

