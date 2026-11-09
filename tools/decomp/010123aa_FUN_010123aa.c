
void FUN_010123aa(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  bool bVar10;
  
  uVar9 = *DAT_01012b6c;
  piVar8 = param_1 + 9;
  param_1[8] = 0;
  *(char *)piVar8 = '\0';
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  if (param_1[5] != 0) {
    uVar4 = param_1[0x13a];
    bVar10 = uVar4 != 0;
    if (bVar10) {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x4ed);
    }
    if (!bVar10 || uVar4 == 1) {
      bVar1 = (byte)~(byte)(-(uint)(*(ushort *)(param_3 + 6) < *(ushort *)(param_1[2] + 0x16)) >>
                           0x18) >> 7;
      goto LAB_01012402;
    }
  }
  bVar1 = 0;
LAB_01012402:
  *(byte *)((int)param_1 + 0x2b) = bVar1;
  bVar1 = *(byte *)((int)param_1 + 0x2b);
  uVar3 = (ushort)bVar1;
  if (bVar1 != 0) {
    *(short *)(param_1 + 0x13f) = (short)param_1[5];
  }
  else {
    uVar3 = (ushort)param_1[4];
  }
  if (bVar1 == 0) {
    *(ushort *)(param_1 + 0x13f) = uVar3;
  }
  iVar7 = DAT_01012b70;
  if ((short)param_1[0x13f] == 0) {
    param_1[8] = 0x10;
  }
  else {
    *(int **)(DAT_01012b70 + (uint)*(byte *)((int)param_1 + 5) * 4) = param_1;
    param_1[0x13e] = 0;
    *(char *)piVar8 = '\0';
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    *(undefined1 *)((int)param_1 + 0x27) = 0;
    *(undefined1 *)(param_1 + 0x6e) = 0;
    FUN_010127bc(param_1);
    do {
      if (param_1[0x13e] != 0) goto LAB_010124e8;
      FUN_0101259e();
      iVar5 = FUN_01012594();
      *(char *)((int)param_1 + 0x25) = (char)iVar5;
      if (iVar5 == 1) {
        uVar6 = FUN_010232b8();
        iVar5 = FUN_010289ba(2);
        if (*(int *)(iVar5 + 4) == *param_1) {
          FUN_0102909c(param_1);
          FUN_010290a6(param_1);
        }
        else {
          *(undefined1 *)((int)param_1 + 0x25) = 2;
        }
        restore_priority(uVar6);
      }
      if (*(char *)((int)param_1 + 0x25) == '\x01') {
        uVar2 = FUN_01023d26(uVar9,*(undefined4 *)(*param_1 + 0x28));
        *(undefined1 *)((int)param_1 + 0x25) = uVar2;
      }
      if (((char)*piVar8 != '\0') || (*(char *)((int)param_1 + 0x25) != '\0')) goto LAB_010124e8;
      *(char *)(param_1 + 0x6e) = (char)param_1[0x6e] + '\x01';
      iVar5 = FUN_01012746(param_1);
      if (iVar5 == 0) break;
      *(undefined1 *)((int)param_1 + 0x26) = 0;
      FUN_01012868(param_1);
      if ((uint)*(ushort *)(param_1 + 0x13f) <= (uint)param_1[0x13a]) {
        *(undefined1 *)((int)param_1 + 0x27) = 1;
        goto LAB_010124e8;
      }
    } while ((ushort)*(byte *)(param_1 + 0x6e) <= *(ushort *)(param_1 + 0x13f) >> 1);
    *(undefined1 *)((int)param_1 + 0x26) = 1;
LAB_010124e8:
    *(undefined4 *)(iVar7 + (uint)*(byte *)((int)param_1 + 5) * 4) = 0;
  }
  FUN_01023e8e(uVar9);
  if (*(char *)((int)param_1 + 0x27) != '\0') {
    FUN_01012a98(param_1,param_3);
    *(byte *)((int)param_1 + 0x29) = (byte)(-(uint)((char)param_1[10] == '\0') >> 0x1f);
  }
  FUN_01023ea0(uVar9);
  if (*(char *)((int)param_1 + 0x29) != '\0') {
    FUN_0101259e();
    iVar7 = FUN_01012594();
    *(char *)((int)param_1 + 0x25) = (char)iVar7;
    if (iVar7 == 1) {
      uVar9 = FUN_010232b8();
      iVar7 = FUN_010289ba(2);
      if (*(int *)(iVar7 + 4) == *param_1) {
        iVar7 = FUN_01012ba0(param_1,param_3);
        if (iVar7 == 0) {
          param_1[8] = param_1[8] | 4;
        }
        else {
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x25) = 2;
      }
      restore_priority(uVar9);
    }
    if (*(char *)((int)param_1 + 0x25) == '\x01') {
      *(undefined1 *)((int)param_1 + 0x25) = 0;
      FUN_01023ee6(*param_1);
      return;
    }
  }
  return;
}

