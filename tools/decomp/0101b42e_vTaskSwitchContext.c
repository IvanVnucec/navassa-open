
undefined8 vTaskSwitchContext(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  int iVar3;
  bool bVar4;
  
  iVar1 = DAT_0101b94c;
  if (*(int *)(DAT_0101b94c + 0x6c) != 0) {
    *(undefined4 *)(DAT_0101b94c + 0x58) = 1;
    return CONCAT44(iVar1,in_r3);
  }
  *(undefined4 *)(DAT_0101b94c + 0x58) = 0;
  iVar1 = DAT_0101ba48;
  iVar3 = (0x1f - LZCOUNT(*(undefined4 *)(DAT_0101ba48 + 0x7c))) * 0x14;
  iVar2 = *(int *)(DAT_0101ba48 + iVar3);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  FUN_0101b4f6(iVar2);
  iVar3 = iVar1 + iVar3;
  iVar2 = *(int *)(*(int *)(iVar3 + 4) + 4);
  *(int *)(iVar3 + 4) = iVar2;
  bVar4 = iVar2 == iVar3 + 8;
  if (bVar4) {
    iVar2 = *(int *)(iVar2 + 4);
  }
  if (bVar4) {
    *(int *)(iVar3 + 4) = iVar2;
  }
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0xc);
  return CONCAT44(*(undefined4 *)(*(int *)(iVar1 + 0x78) + 0x2c),
                  *(undefined4 *)(*(int *)(iVar1 + 0x78) + 0x44));
}

