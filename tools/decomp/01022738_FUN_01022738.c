
int FUN_01022738(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = DAT_01022adc;
  iVar4 = 0;
  uVar5 = 0;
  do {
    if ((int)((param_1 >> (uVar5 & 0xff)) << 0x1f) < 0) {
      iVar2 = FUN_01036974(uVar5 & 0xff,iVar1 + uVar5 * 0x1c);
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      iVar2 = FUN_01036b1c(uVar5 & 0xff,iVar1 + uVar5 * 8 + 0x60);
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      iVar2 = FUN_01036cb2(uVar5 & 0xff,uVar5 * 0x14 + iVar1 + 0x38);
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      puVar3 = (undefined1 *)(DAT_01022ae0 + uVar5 * 9);
      FUN_01036bca(uVar5 & 0xff,*puVar3);
      FUN_01036c04(uVar5 & 0xff,puVar3[1]);
      FUN_01036c10(uVar5 & 0xff,puVar3[2]);
      FUN_01036c54(uVar5 & 0xff,puVar3[3]);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return iVar4;
}

