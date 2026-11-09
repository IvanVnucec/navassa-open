
uint FUN_01010028(byte *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar6 = param_1 + 0x1d0;
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x1e0) * (ulonglong)param_2 +
          CONCAT44(*(uint *)(param_1 + 0x1e0) * ((int)param_2 >> 0x1f),
                   *(undefined4 *)(param_1 + 0x18));
  iVar5 = (int)lVar1;
  iVar7 = *(int *)(param_1 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = param_4;
  uVar2 = FUN_010258bc(iVar5,iVar7,*(undefined4 *)(param_1 + 0x24));
  if (uVar2 != 0xc911) {
    param_4 = 0xc912;
  }
  **(uint **)(param_1 + 0x10) = uVar2;
  if (uVar2 == 0xc911 || uVar2 == param_4) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x1e0) * (ulonglong)param_2;
    uVar2 = (uint)lVar1;
    iVar5 = *(uint *)(param_1 + 0x18) - uVar2;
    iVar7 = (*(int *)(param_1 + 0x1c) -
            (*(uint *)(param_1 + 0x1e0) * ((int)param_2 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20)))
            - (uint)(*(uint *)(param_1 + 0x18) < uVar2);
    uVar3 = FUN_010258bc(iVar5,iVar7,*(undefined4 *)(param_1 + 0x24));
    **(undefined4 **)(param_1 + 0x10) = uVar3;
  }
  if (**(int **)(param_1 + 0x10) == 0) {
    uVar4 = (uint)*param_1;
    uVar3 = FUN_010096fc(iVar5,iVar7,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28)
                        );
    **(undefined4 **)(param_1 + 0x10) = uVar3;
  }
  if (**(int **)(param_1 + 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    if (*(int *)pbVar6 == 0) {
      FUN_0101012c(0,*(undefined4 *)(iVar5 + 0xc),iVar5 + 0x44,iVar5 + 0x1c,iVar5 + 0x44);
      pbVar6[0] = 1;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      iVar5 = *(int *)(param_1 + 0xc);
      uVar4 = iVar5 + 0x70;
      iVar7 = iVar5 + 0x26;
      uVar3 = *(undefined4 *)(iVar5 + 0x10);
    }
    else {
      FUN_0101012c(iVar5 + 0x9c,*(undefined4 *)(iVar5 + 0x14),*(int **)(param_1 + 0x10),iVar5 + 0x30
                   ,iVar5 + 0x9c);
      iVar5 = *(int *)(param_1 + 0xc);
      uVar4 = iVar5 + 200;
      iVar7 = iVar5 + 0x3a;
      uVar3 = *(undefined4 *)(iVar5 + 0x18);
    }
    FUN_0101012e(iVar5,uVar3,param_2,iVar7);
    if ((int)param_2 < 0) {
      *(uint *)(param_1 + 0x1d8) = *(uint *)(param_1 + 0x1d8) & ~(1 << (-param_2 & 0xff));
    }
    else {
      *(uint *)(param_1 + 0x1dc) = *(uint *)(param_1 + 0x1dc) & ~(1 << (param_2 & 0xff));
    }
  }
  else {
    param_1[0x1d4] = 1;
    param_1[0x1d5] = 0;
    param_1[0x1d6] = 0;
    param_1[0x1d7] = 0;
  }
  return uVar4;
}

