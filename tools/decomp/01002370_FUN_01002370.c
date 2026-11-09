
undefined4 FUN_01002370(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  int iVar6;
  
  iVar3 = FUN_0100a7dc();
  iVar1 = DAT_01002518;
  if (iVar3 == 0xff) {
    iVar6 = 0;
    iVar3 = iVar6;
  }
  else if (iVar3 == 0xf4) {
    iVar6 = 1;
    iVar3 = 0;
  }
  else if (iVar3 == 0xfa) {
    iVar6 = 0;
    iVar3 = 1;
  }
  else {
    iVar6 = 1;
    iVar3 = iVar6;
  }
  if (((int)((uint)*(byte *)(DAT_01002518 + 0x2c) << 0x1e) < 0) &&
     (iVar4 = FUN_01001750(iVar6,DAT_01002784 + iVar6 * 8), puVar2 = DAT_01002798, iVar4 != 0)) {
    *DAT_01002794 = &DAT_010027d0;
    *puVar2 = 0xcb1;
    uVar5 = boot_msg(1,iVar4,2,in_r3);
    return uVar5;
  }
  iVar4 = DAT_0100279c;
  *(uint *)(iVar1 + 0x2c) = iVar6 + 1 << iVar3 * 2 + 0xc | *(uint *)(iVar1 + 0x2c);
  if (*(int *)(*(int *)(iVar4 + iVar3 * 4 + 0xc) + 0x38) == iVar6 + 0xeb03) {
    *(char *)(iVar1 + iVar3 * 0xb0 + 0x6b4) = (char)iVar6;
  }
  return in_r3;
}

