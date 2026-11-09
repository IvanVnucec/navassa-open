
int FUN_0101c238(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x102;
  }
  else if (param_1 == 2) {
    uVar1 = 0x104;
  }
  else if (param_1 == 3) {
    uVar1 = 0x105;
  }
  else {
    if (param_1 != 9) {
      return param_4;
    }
    uVar1 = 0x106;
  }
  if (param_4 != 0) {
    param_4 = 0xff;
  }
  iVar2 = FUN_0101bf18(*(undefined4 *)(DAT_0101cf20 + param_3 * 4),uVar1,param_2,param_4);
  return iVar2;
}

