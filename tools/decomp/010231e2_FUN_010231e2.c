
undefined8 FUN_010231e2(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *param_1;
  iVar2 = ulTaskNotifyTake(1,*(undefined4 *)(param_1 + 4));
  uVar3 = 0;
  if (iVar2 == 1) {
    if (1 < (uint)(*DAT_01023218 - *(int *)(*(int *)(DAT_0102321c + (uint)bVar1 * 4) + 0x328))) {
      uVar3 = 0x2004;
    }
  }
  else {
    uVar3 = 0x2003;
  }
  return CONCAT44(param_4,uVar3);
}

