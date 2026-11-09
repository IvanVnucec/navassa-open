
void FUN_0103da9c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_0103de9c;
  if (param_1 < 4) {
    uVar2 = -(uint)(param_1 == 0) >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  if (param_1 < 4 && uVar2 == 0) {
    uVar2 = 0;
    do {
      if ((int)((param_1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
        iVar3 = *(int *)(iVar1 + uVar2 * 4);
        pin_update(iVar3 + 0xf7,1,1);
        iVar3 = iVar3 + 0xdd;
        pin_update(iVar3,0x1c,(param_2 & 0x3f) << 2);
        pin_update(iVar3,1,1);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 2);
  }
  return;
}

