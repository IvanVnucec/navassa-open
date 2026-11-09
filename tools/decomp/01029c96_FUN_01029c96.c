
void FUN_01029c96(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = DAT_0102a80c;
  iVar1 = DAT_0102a808;
  uVar5 = 0;
  do {
    if (((uint)*puVar2 & 1 << (uVar5 & 0xff)) != 0) {
      iVar3 = DAT_0102a810 + (uint)*(byte *)(iVar1 + uVar5) * 4;
      if ((int)uVar5 < 2) {
        uVar6 = *(undefined4 *)(iVar3 + 0x2c);
      }
      else {
        uVar6 = *(undefined4 *)(iVar3 + 0x34);
      }
      iVar3 = DAT_0102a814 + uVar5 * 0x14;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined1 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      uVar4 = FUN_0100b1da();
      FUN_01009a04(uVar6,uVar4,iVar3);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return;
}

