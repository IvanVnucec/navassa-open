
undefined4 FUN_0100f402(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_48 [8];
  undefined4 local_40 [6];
  int iStack_28;
  
  puVar5 = DAT_0100f59c;
  iVar2 = DAT_0100f598;
  uVar6 = *DAT_0100f594;
  *(int *)(param_3 + 0xc) = param_2;
  *(int *)(param_3 + 0x10) = param_4;
  pbVar4 = param_3 + 0x1d4;
  param_3[0x1e4] = (byte)*(undefined4 *)(param_5 + 0x10);
  param_3[0x1e5] = (byte)*(undefined4 *)(param_5 + 0x20);
  param_3[0x14] = *(byte *)(iVar2 + (uint)*param_3);
  *puVar5 = param_3;
  puVar5[1] = 0;
  puVar5[2] = 0;
  iStack_28 = param_4;
  if (**(int **)(param_3 + 0xc) == 0) {
    FUN_01003eb2(puVar5);
    iVar2 = FUN_01003f44(puVar5);
    bVar7 = iVar2 == 0;
    iVar2 = param_4;
    if (!bVar7) goto LAB_0100f4ea;
  }
  param_3[0x3c] = 0;
  puVar5 = local_40;
  iVar2 = param_2 + 0xf5;
  local_70 = param_4;
  while( true ) {
    if (*(byte *)(param_2 + 0xf4) <= param_3[0x3c]) break;
    FUN_010102be(*param_3,param_3 + 0x2e);
    uVar3 = FUN_010104ae(*param_3,*(undefined4 *)(param_3 + 4),
                         *(undefined1 *)(iVar2 + (uint)param_3[0x3c]),
                         *(undefined4 *)(param_5 + 0x10));
    **(undefined4 **)(param_3 + 0x10) = uVar3;
    if (*(char *)(param_5 + 0x14) == '\0') {
      *(undefined4 *)(param_3 + 0x1d8) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_3 + 0x1dc) = *(undefined4 *)(param_2 + 8);
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      FUN_01010132(param_3);
      bVar7 = *(int *)pbVar4 == 0;
LAB_0100f4ea:
      if (!bVar7) goto LAB_0100f55e;
      if (**(int **)(param_3 + 0xc) == 0) {
        FUN_0100f628(param_3);
      }
      else {
        FUN_01023e8e(uVar6);
        FUN_0100f628(param_3);
        FUN_01023ea0(uVar6);
      }
      local_68 = *(undefined4 *)(param_5 + 8);
      uStack_64 = *(undefined4 *)(param_5 + 0xc);
      *(byte *)(puVar5 + 1) = param_3[0x1e4];
      auStack_48[*param_3] = *(undefined1 *)(iVar2 + (uint)param_3[0x3c]);
      puVar5[2] = (uint)param_3[0x1e5];
      bVar1 = param_3[0x1e5];
      if (bVar1 != 0) {
        bVar1 = 1;
      }
      *(byte *)((int)puVar5 + 5) = bVar1;
      local_40[0] = *(undefined4 *)(param_3 + 0x28);
      local_74 = 8;
      local_7c = *(undefined4 *)(param_3 + (uint)*param_3 * 4 + 0x1c8);
      local_78 = *(undefined4 *)(param_3 + (uint)*param_3 * 4 + 0x1c0);
      FUN_010040ce(*param_3,&local_68,&local_7c,&local_74);
      if (**(int **)(param_3 + 0xc) == 0) {
        FUN_0100f5a0();
      }
      else {
        thunk_FUN_01023eb6(uVar6);
        FUN_0100f5a0();
        FUN_01023eb4(uVar6);
      }
    }
    else {
      FUN_0100f5be(*param_3,param_2,param_3,local_70,param_5);
    }
    FUN_01010366(*param_3,param_3 + 0x2e,param_3[0x1e4]);
    param_3[0x3c] = param_3[0x3c] + 1;
  }
  FUN_0100974e(*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),*param_3);
LAB_0100f55e:
  return **(undefined4 **)(param_3 + 0x10);
}

