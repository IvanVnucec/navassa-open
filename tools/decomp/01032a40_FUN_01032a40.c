
int FUN_01032a40(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_01032ab0 + param_1 * 0xbc;
  if (*(uint *)(iVar1 + 0x24) < DAT_01032ab4) {
    param_2[1] = 1;
  }
  else {
    iVar2 = FUN_0102f514(param_1 + 2U & 0xff,1);
    param_2[1] = 0;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar2 = FUN_01032a24(param_1);
  if (iVar2 == 0) {
    param_2[3] = 0;
  }
  else {
    param_2[2] = 0;
    param_2[3] = 1;
    param_2[4] = 0;
  }
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 2;
  param_2[8] = *(char *)(iVar1 + 0x3c) != '\x02';
  *param_2 = 1;
  param_2[0x18] = 1;
  param_2[6] = 0;
  return 0;
}

