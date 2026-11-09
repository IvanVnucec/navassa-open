
int FUN_01033476(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 local_38;
  
  iVar2 = param_7 * 0x38 + DAT_010335c0;
  uVar6 = (param_6 + (uint)*(byte *)(iVar2 + 0x30) + 1) % 3;
  iVar8 = 0;
  local_38 = 0;
  do {
    iVar3 = local_38 * 0xc + iVar2;
    uVar9 = (param_6 + (uint)*(byte *)(iVar3 + 9) + 1) % 3;
    uVar10 = (param_6 + (uint)*(byte *)(iVar3 + 10) + 1) % 3;
    iVar3 = param_3 + ((param_6 + (uint)*(byte *)(iVar3 + 8) + 1) % 3) * 0x20;
    uVar7 = 0;
    do {
      if ((int)((*(uint *)(iVar2 + param_1 * 4 + local_38 * 0xc) >> (uVar7 & 0xff)) << 0x1f) < 0) {
        lVar1 = (longlong)*(int *)(param_4 + uVar9 * 8) * (longlong)*(int *)(iVar3 + uVar7 * 4);
        uVar4 = FUN_010333be((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
        *(undefined4 *)(param_2 + iVar8 * 8) = uVar4;
        lVar1 = (longlong)*(int *)(param_4 + 4 + uVar9 * 8) * (longlong)*(int *)(iVar3 + uVar7 * 4);
        uVar4 = FUN_010333be((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
        *(undefined4 *)(param_2 + 4 + iVar8 * 8) = uVar4;
        if (*(char *)(iVar2 + 0xb) != '\0') {
          iVar11 = *(int *)(param_2 + iVar8 * 8);
          lVar1 = (longlong)*(int *)(param_4 + uVar10 * 8) * (longlong)*(int *)(iVar3 + uVar7 * 4);
          iVar5 = FUN_010333be((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
          *(int *)(param_2 + iVar8 * 8) = iVar5 + iVar11;
          iVar11 = *(int *)(param_2 + 4 + iVar8 * 8);
          lVar1 = (longlong)*(int *)(param_4 + 4 + uVar10 * 8) *
                  (longlong)*(int *)(iVar3 + uVar7 * 4);
          iVar5 = FUN_010333be((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
          *(int *)(param_2 + 4 + iVar8 * 8) = iVar5 + iVar11;
        }
        iVar8 = iVar8 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
    local_38 = local_38 + 1;
  } while (local_38 < 4);
  *(undefined4 *)(param_2 + iVar8 * 8) = *(undefined4 *)(param_5 + uVar6 * 8);
  *(undefined4 *)(param_2 + 4 + iVar8 * 8) = *(undefined4 *)(param_5 + 4 + uVar6 * 8);
  return iVar8 + 1;
}

