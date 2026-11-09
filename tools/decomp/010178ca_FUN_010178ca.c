
void FUN_010178ca(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(DAT_01018060 + param_1 * 4);
  iVar5 = iVar1 + 0x10;
  uVar4 = 0xc >> (param_1 & 0xff);
  if (param_2 == 1) {
    if (-1 < (int)(uVar4 << 0x1f)) {
      pin_update(iVar5,2,0);
      uVar3 = 0;
LAB_01017954:
      uVar2 = 4;
      goto LAB_01017958;
    }
    uVar6 = pin_update(iVar1 + 0x28,0x20,0x20);
    uVar6 = FUN_0101796a((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
    uVar6 = FUN_010180dc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
    FUN_01017962((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),4);
    uVar3 = 2;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    if (-1 < (int)(uVar4 << 0x1f)) {
      pin_update(iVar5,2,2);
      uVar3 = 4;
      goto LAB_01017954;
    }
    uVar6 = pin_update(iVar1 + 0x28,0x20,0);
    uVar6 = FUN_0101796a((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),4);
    uVar6 = FUN_010180dc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),2);
    FUN_01017962((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
    uVar3 = 0;
  }
  uVar2 = 2;
  iVar5 = iVar1 + 0x13;
LAB_01017958:
  pin_update(iVar5,uVar2,uVar3);
  return;
}

