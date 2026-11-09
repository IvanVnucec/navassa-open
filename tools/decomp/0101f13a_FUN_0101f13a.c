
void FUN_0101f13a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(DAT_0101f1ec + param_1);
  pbVar3 = (byte *)(*(int *)(DAT_0101f1e8 + param_1 * 4) + 0x93);
  if (param_2 == 0) {
    uVar1 = FUN_0101f1f0(param_1,0,((uint)*pbVar4 << 0x1a) >> 0x18);
    uVar1 = FUN_0101f1f2(uVar1,8,((uint)pbVar4[2] << 0x1b) >> 0x18);
    FUN_0101f1f2(uVar1,2,((uint)pbVar4[4] << 0x19) >> 0x18);
    bVar2 = pbVar4[6];
  }
  else {
    *pbVar4 = (byte)(((uint)*pbVar3 << 0x1d) >> 0x1f);
    bVar2 = *pbVar3;
    pbVar4[2] = (byte)(((uint)bVar2 << 0x1c) >> 0x1f);
    uVar1 = FUN_0101f1f0(((uint)bVar2 << 0x1c) >> 0x1f,param_2,0);
    FUN_0101f1f2(uVar1,8,0);
    pbVar4[4] = (byte)(((uint)*pbVar3 << 0x1e) >> 0x1f);
    pbVar4[6] = *pbVar3 & 1;
    pin_update(pbVar3,2,0);
    bVar2 = 0;
  }
  pin_update(pbVar3,1,bVar2,param_4);
  return;
}

