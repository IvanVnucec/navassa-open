
void FUN_01034dc2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_01035244 + param_1 * 4);
  uVar1 = FUN_01035036(DAT_01035244,0x20,0x20);
  FUN_01035036(uVar1,0x10,0x10);
  if (*(uint *)(DAT_0103524c + param_1 * 0x54 + 0x50) < DAT_01035250) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = 0xb;
  }
  pin_update(iVar2 + 6,0xf,uVar1,param_4);
  return;
}

