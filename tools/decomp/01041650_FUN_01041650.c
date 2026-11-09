
undefined4 FUN_01041650(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  iVar3 = DAT_01041cdc + (short)param_1 * 0xbc;
  fVar6 = (float)VectorUnsignedToFloat(*(undefined4 *)(iVar3 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = DAT_01041ce0 + param_1 * 0x10;
  iVar2 = FUN_010330c6();
  bVar1 = *(byte *)(iVar4 + 2);
  if (iVar2 == 0) {
    bVar1 = bVar1 >> 1;
  }
  fVar5 = (float)VectorUnsignedToFloat((uint)bVar1,(byte)(in_fpscr >> 0x15) & 3);
  iVar2 = (int)((fVar5 / DAT_010419d4) * fVar6);
  if (*(char *)(param_2 + 0x88) == '\0') {
    iVar2 = -iVar2;
  }
  *(int *)(param_2 + 0x78) = iVar2;
  *(int *)(param_2 + 0x7c) = *(int *)(iVar3 + 0x498) + iVar2;
  return 0;
}

