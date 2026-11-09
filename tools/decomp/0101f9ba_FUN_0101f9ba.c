
void FUN_0101f9ba(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_0101ff68 + param_1 * 4);
  iVar3 = iVar2 + 0x1a9;
  pin_update(iVar3,1,0);
  pin_update(iVar3,2,0);
  pin_update(iVar2 + 0xf9,2,0);
  if (param_2 < 2) {
    uVar1 = 1;
  }
  else {
    if (3 < param_2 - 2) {
      return;
    }
    uVar1 = 2;
  }
  pin_update(iVar3,uVar1);
  return;
}

