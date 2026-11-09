
int FUN_01002632(int param_1,int param_2)

{
  int iVar1;
  
  if (0xb < param_2) {
    return 0x8003;
  }
  if (param_2 == 0x1c) {
    iVar1 = FUN_0100a224();
    return iVar1;
  }
  if (param_1 == 0x2c) {
    iVar1 = FUN_0100a264(0x2c,param_2,DAT_010027c4,0);
  }
  else {
    if (param_1 != 0x2d) {
      return 0x8000;
    }
    iVar1 = FUN_0100a264(0x2d,param_2,DAT_010027c8,0);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_0100a2b4(param_1,0,6);
  return iVar1;
}

