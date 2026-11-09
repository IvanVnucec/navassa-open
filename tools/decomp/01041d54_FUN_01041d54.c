
int FUN_01041d54(int param_1,int param_2)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = *(int *)(DAT_01041e5c + param_1 * 4);
  if (param_2 == 2) {
    pbVar2 = (byte *)(iVar4 + 0xb8);
    pbVar5 = (byte *)(iVar4 + 0xb9);
  }
  else {
    pbVar2 = (byte *)(iVar4 + 0xba);
    pbVar5 = (byte *)(iVar4 + 0xbb);
  }
  uVar3 = (*pbVar2 & 3) << 8 | (uint)*pbVar5;
  uVar1 = (ushort)uVar3;
  if ((int)(uVar3 << 0x16) < 0) {
    uVar1 = uVar1 | 0xfc00;
  }
  return (int)(short)uVar1;
}

