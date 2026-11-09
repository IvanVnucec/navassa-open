
undefined4 FUN_010184a8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_r3;
  undefined8 uVar7;
  undefined4 local_10;
  
  iVar3 = DAT_010190cc;
  local_10 = in_r3;
  uVar7 = pin_update(DAT_010190cc,0x20,0x20);
  FUN_010185c4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1);
  pbVar4 = DAT_010190d4;
  iVar2 = DAT_01018f68;
  uVar5 = *(uint *)(DAT_01018e2c + 8) / (uint)(1 << (((uint)*DAT_010190d0 << 0x1b) >> 0x1d));
  *(uint *)(DAT_01018f68 + 0x14) = uVar5;
  *(uint *)(iVar2 + 0x24) = uVar5;
  *(uint *)(iVar2 + 0x28) = uVar5 / (*pbVar4 + 1);
  local_10 = CONCAT22(local_10._2_2_,DAT_01018524);
  uVar6 = *(uint *)(iVar2 + 0x24) / (uint)*(byte *)((int)&local_10 + (*(byte *)(iVar3 + 2) & 1));
  *(uint *)(iVar2 + 0xc) = uVar6;
  uVar1 = DAT_01018528;
  local_10 = DAT_01018528;
  uVar5 = *DAT_01019240 & 3;
  if ((*DAT_01019240 & 3) != 0) {
    uVar5 = uVar6 / *(byte *)((int)&local_10 + uVar5);
  }
  *(uint *)(iVar2 + 0x10) = uVar5;
  return uVar1;
}

