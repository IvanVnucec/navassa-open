
undefined8 FUN_01002400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 3);
  bVar3 = *(byte *)(param_1 + 2);
  iVar4 = 0;
  if ((bVar1 == 1) && (bVar3 < 2)) {
    bVar3 = bVar3 + 2;
  }
  iVar5 = DAT_01002518 + (short)(ushort)bVar1 * 0xb0;
  if (bVar3 != *(byte *)(iVar5 + 0x6b5)) {
    iVar4 = FUN_010009f6(iVar5 + 0x630,bVar3,bVar1,*(undefined4 *)(DAT_01002518 + 0x2c));
    puVar2 = DAT_01002798;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar5 + 0x6b0) = 0;
    }
    else {
      *DAT_01002794 = &DAT_010027d0;
      *puVar2 = 0xce0;
      boot_msg(1,iVar4,1);
    }
  }
  return CONCAT44(param_4,iVar4);
}

