
void FUN_01002ba0(uint param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = DAT_01002d88;
  bVar2 = *(byte *)(DAT_01002d84 + param_1);
  if (param_1 < 2) {
    pin_update(*(int *)(DAT_01002d88 + param_1 * 4) + 0xcf,4,(param_2 & 0x3f) << 2);
  }
  if (param_1 == 2 || param_1 == 3) {
    if (param_2 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(DAT_01002d8c + (uint)bVar2 * 0xbc + 0x61) & 3;
    }
    FUN_010027dc(*(int *)(iVar1 + param_1 * 4) + 0x34,3,bVar2);
    return;
  }
  return;
}

