
undefined8 FUN_01024510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0102509a(*(undefined1 *)(param_1 + 4));
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_01025296();
    FUN_01015d08(9);
    uVar1 = 9;
  }
  else {
    FUN_010252dc();
    FUN_01015d08(10);
    uVar1 = 10;
  }
  FUN_01015d2e(uVar1);
  iVar3 = DAT_01024b6c;
  FUN_010340a8(*(undefined1 *)(param_1 + 4),2);
  FUN_010251d2((uint)*(byte *)(param_1 + 4),
               *(undefined1 *)(DAT_01024b68 + (uint)*(byte *)(param_1 + 4) * 0x1ac + 0x196),0);
  iVar2 = FUN_0101c9d0((uint)*(byte *)(param_1 + 4) * 0x158 + iVar3 + 0xc0,
                       (uint)*(byte *)(param_1 + 4));
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar2;
  }
  iVar3 = FUN_0101c992(iVar3 + (short)(ushort)*(byte *)(param_1 + 4) * 0x158 + 0xb8,
                       *(byte *)(param_1 + 4));
  if (iVar3 != 0) {
    iVar4 = iVar3;
  }
  return CONCAT44(param_4,iVar4);
}

