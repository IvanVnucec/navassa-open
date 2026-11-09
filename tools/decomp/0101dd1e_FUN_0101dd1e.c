
undefined4 FUN_0101dd1e(int param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = *(int *)(DAT_0101e15c + param_1 * 4);
  iVar2 = FUN_0101db8c();
  uVar8 = 0;
  uVar3 = FUN_01035db6();
  pbVar5 = (byte *)(iVar7 + 0xef);
  pbVar4 = (byte *)(iVar7 + 0xee);
  if (iVar2 == 1) {
    *pbVar4 = 0;
    iVar2 = DAT_0101e160;
    bVar1 = *pbVar5;
    *(uint *)(DAT_0101e160 + param_1 * 4) = (uint)(bVar1 >> 2);
    uVar6 = (uint)(bVar1 >> 2) |
            ((uint)*(byte *)(iVar7 + 0xf0) | (*(byte *)(iVar7 + 0xf1) & 0xf) << 8) << 8;
    *(uint *)(iVar2 + param_1 * 4) = uVar6;
    uVar6 = uVar6 | ((*pbVar5 & 3) << 8 | (uint)*pbVar4) << 0x14;
    *(uint *)(iVar2 + param_1 * 4) = uVar6;
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar6;
    }
  }
  else {
    *pbVar4 = 0;
    uVar8 = 0xc600;
    uVar6 = (uint)*pbVar5;
  }
  restore_priority(uVar3,uVar6);
  return uVar8;
}

