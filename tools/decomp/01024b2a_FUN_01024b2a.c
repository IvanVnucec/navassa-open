
longlong FUN_01024b2a(uint param_1,byte param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_01024b68;
  uVar3 = 2;
  do {
    if ((int)((param_1 >> (uVar3 & 0xff)) << 0x1f) < 0) {
      bVar1 = (char)uVar3 - 2;
      FUN_01024d04(bVar1,*(undefined1 *)((uint)param_2 + iVar2 + (short)(ushort)bVar1 * 0x1ac),0);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  return (ulonglong)param_4 << 0x20;
}

