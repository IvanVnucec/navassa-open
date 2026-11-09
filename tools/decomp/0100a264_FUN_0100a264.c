
undefined4 FUN_0100a264(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  
  uVar1 = 0x8005;
  if (param_2 < 0x10) {
    iVar2 = 0;
    do {
      pbVar3 = (byte *)(DAT_0100a3c4 + iVar2 * 0xc);
      uVar4 = (uint)pbVar3[1];
      bVar5 = uVar4 == 0x1c;
      if (!bVar5) {
        uVar4 = (uint)*pbVar3;
      }
      if (bVar5 || uVar4 == param_1) {
        *pbVar3 = (byte)param_1;
        *(undefined4 *)(pbVar3 + 4) = param_3;
        *(undefined4 *)(pbVar3 + 8) = param_4;
        pbVar3[1] = (byte)param_2;
        uStack_18 = param_4;
        FUN_0100a33a(local_28,&LAB_0100a418);
        *(byte *)local_28[iVar2] = (byte)param_2;
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  else {
    uVar1 = 0x8006;
  }
  return uVar1;
}

