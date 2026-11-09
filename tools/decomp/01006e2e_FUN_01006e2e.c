
void FUN_01006e2e(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_01007720;
  if (param_1 != 0) {
    if (param_1 == 2) {
      iVar3 = *(int *)(DAT_010078f0 + param_1 * 4) + 6;
      FUN_01007bf0(2,0x10,(param_2 & 0xf) << 4);
      uVar2 = (param_2 << 0x1b) >> 0x18;
      uVar1 = 8;
      goto LAB_01006e76;
    }
    iVar3 = DAT_0100735c;
    if (1 < param_1) {
      return;
    }
  }
  FUN_0100704e(param_1,4,(param_2 & 0x3f) << 2);
  uVar2 = (param_2 & 0x7f) << 1;
  uVar1 = 2;
LAB_01006e76:
  pin_update(iVar3,uVar1,uVar2);
  return;
}

