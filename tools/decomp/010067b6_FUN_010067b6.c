
undefined8 FUN_010067b6(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = DAT_010071b0 + param_1 * 8;
  uVar1 = *(uint *)(iVar2 + 0x90);
  iVar2 = *(int *)(iVar2 + 0x94);
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    uVar3 = *(uint *)(DAT_0100734c + (uint)*(byte *)(DAT_010071ac + param_1) * 0xbc + 0x1a8);
    bVar4 = CARRY4(uVar1,uVar3);
    uVar1 = uVar1 + uVar3;
    iVar2 = iVar2 + ((int)uVar3 >> 0x1f) + (uint)bVar4;
  }
  return CONCAT44(iVar2,uVar1);
}

