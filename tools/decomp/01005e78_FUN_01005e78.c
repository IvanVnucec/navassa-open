
uint FUN_01005e78(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = (uint)(byte)param_2[1];
  if (param_1 != 0) {
    uVar2 = FUN_01011bec();
    return uVar2;
  }
  if (param_3 == 0 || param_3 == 4) {
    uVar1 = (uint)*(byte *)(*(int *)(DAT_01011da4 + param_4 * 4) + 0x2f);
  }
  else {
    if (param_3 != 1 && param_3 != 3) {
      return uVar2;
    }
    uVar4 = FUN_01011c70(param_3,param_4,*param_2);
    param_4 = (int)((ulonglong)uVar4 >> 0x20);
    uVar1 = (uint)uVar4;
  }
  if (uVar1 == 0) {
    iVar3 = *(int *)(DAT_01011da8 + param_4 * 4) + 0x5a;
  }
  else {
    if (uVar1 != 1) {
      return uVar2;
    }
    iVar3 = *(int *)(DAT_01011da8 + param_4 * 4) + 0x60;
  }
  pin_update(iVar3,7);
  uVar2 = pin_update(iVar3,0x70,(uVar2 & 0xf) << 4,uVar2);
  return uVar2;
}

