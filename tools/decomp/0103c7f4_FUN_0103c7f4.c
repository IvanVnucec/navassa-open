
int FUN_0103c7f4(ushort *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar1 = *(byte *)((int)param_1 + 3);
  uVar2 = (uint)(*param_1 >> 8);
  iVar4 = (int)(short)((byte)param_1[(short)(ushort)bVar1 * 10 + 0xe8] - 0x13);
  bVar5 = SBORROW4(uVar2,iVar4);
  iVar3 = uVar2 - iVar4;
  if (iVar4 <= (int)uVar2) {
    iVar3 = *(byte *)((int)param_1 + (short)(ushort)bVar1 * 0x14 + 0x1d1) + 0x13;
    bVar5 = SBORROW4(iVar3,uVar2);
    iVar3 = iVar3 - uVar2;
  }
  if (iVar3 < 0 == bVar5) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0xb;
  }
  return (int)param_1 + iVar3 + (uint)bVar1 * 0x16 + 0x330;
}

