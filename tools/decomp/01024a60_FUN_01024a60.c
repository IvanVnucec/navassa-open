
void FUN_01024a60(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_010330c6();
  if ((iVar2 != 0) && (*(char *)((short)param_1 * 0x5c + DAT_01024b70 + 0xc) != '\0')) {
    iVar2 = DAT_01024b68 + param_1 * 0x1ac;
    if (*(char *)(iVar2 + 0x195) != '\0') {
      FUN_01024aa0(*(char *)(iVar2 + 0x195),*(undefined1 *)(iVar2 + 8));
      uVar1 = *(undefined1 *)(iVar2 + (uint)*(byte *)(iVar2 + 0x194));
      *(undefined1 *)(iVar2 + (uint)*(byte *)(iVar2 + 0x194)) = *(undefined1 *)(iVar2 + 8);
      *(undefined1 *)(iVar2 + 8) = uVar1;
    }
  }
  return;
}

