
uint FUN_01011bec(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0 || param_1 == 4) {
    uVar1 = (uint)*(byte *)(*(int *)(DAT_01011da4 + param_2 * 4) + 0x2f);
  }
  else {
    if (param_1 != 1 && param_1 != 3) {
      return param_4;
    }
    uVar3 = FUN_01011c70();
    param_2 = (int)((ulonglong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
  }
  if (uVar1 == 0) {
    iVar2 = *(int *)(DAT_01011da8 + param_2 * 4) + 0x59;
  }
  else {
    if (uVar1 != 1) {
      return param_4;
    }
    iVar2 = *(int *)(DAT_01011da8 + param_2 * 4) + 0x5f;
  }
  pin_update(iVar2,7);
  uVar1 = pin_update(iVar2,0x70,(param_4 & 0xf) << 4,param_4);
  return uVar1;
}

