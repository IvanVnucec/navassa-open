
undefined8 FUN_0101852c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_01018f68;
  uStack_16 = (undefined2)((uint)param_2 >> 0x10);
  local_18 = DAT_010185bc;
  iVar3 = -((int)-(uint)(*(uint *)(DAT_01018f68 + 4) < DAT_01019244) >> 0x1f);
  local_14 = param_3;
  uStack_10 = param_4;
  FUN_010186ec(DAT_01019244,*(uint *)(DAT_01018f68 + 4),iVar3);
  iVar4 = 3;
  uVar2 = *(uint *)(iVar1 + 4) / (uint)*(byte *)((int)&local_18 + iVar3);
  bVar5 = uVar2 < DAT_01019248;
  *(uint *)(iVar1 + 0xc) = uVar2;
  if (bVar5) {
    if (DAT_0101924c <= uVar2) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 2;
  }
  pin_update(DAT_01019240,3,iVar4);
  local_14 = DAT_010185c0;
  uVar2 = *(uint *)(iVar1 + 0xc) / (uint)*(byte *)((int)&local_14 + iVar4);
  *(uint *)(iVar1 + 0x14) = uVar2;
  *(uint *)(iVar1 + 0x10) = uVar2;
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) / (uint)(byte)(*DAT_01019294 + 1);
  uVar6 = pin_update(DAT_010190cc,0x20,0);
  FUN_010185c4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
  return CONCAT44(local_14,CONCAT22(uStack_16,local_18));
}

