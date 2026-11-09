
undefined4 FUN_0101df18(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0101e15c + param_1 * 4);
  if ((*(byte *)(iVar3 + 0xda) & 3) == 1) {
    bVar1 = *(byte *)(iVar3 + 0xde);
    bVar2 = *(byte *)(iVar3 + 0xdd);
    iVar3 = DAT_0101e164 + param_1 * 4;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(ushort *)(iVar3 + 0x12) = (bVar1 & 3) << 8 | (ushort)bVar2;
  }
  return 0;
}

