
int stream_event_dispatcher
              (char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
              undefined4 param_7,undefined4 param_8,int param_9)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  bVar1 = param_1[1];
  iVar6 = 0;
  nmi_signal_helper(-(uint)(*param_1 == '\0') >> 0x1f);
  uVar8 = (uint)bVar1;
  bVar11 = param_2 != *(int *)(param_1 + 4);
  if (param_2 == 0 || param_2 == 4) {
    bVar12 = *(char *)(*(int *)(DAT_010325f0 + param_2 * 8 + uVar8 * 4) + 0x10) != '\0';
  }
  else {
    bVar12 = param_3 != 0;
  }
  iVar9 = (int)~-(uint)!bVar12 >> 0x1f;
  iVar7 = -iVar9;
  bVar12 = (int)-(uint)(param_1[0x26] == '\0') >> 0x1f != iVar9;
  if ((bVar11) || (param_4 == 0)) {
    event_action_executor(uVar8);
  }
  iVar9 = DAT_010320b8;
  if (param_9 != 0) {
    puVar5 = *(uint **)(DAT_010320c4 + (uint)*(byte *)(DAT_01032760 + (uint)(byte)param_1[2]) * 4);
    *(uint *)(DAT_010320b8 + uVar8 * 4 + 0x44) = puVar5[0xc];
    iVar10 = iVar9 + (uint)(byte)param_1[2] * 8;
    uVar3 = puVar5[1];
    *(uint *)(iVar10 + 0x90) = *puVar5;
    *(uint *)(iVar10 + 0x94) = uVar3;
    iVar9 = iVar9 + (uint)(byte)param_1[2] * 8;
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    *(uint *)(iVar9 + 0xa0) = uVar3;
    *(uint *)(iVar9 + 0xa4) = uVar4;
    iVar9 = DAT_01032768;
    if (param_5 == 0) {
      uVar3 = (uint)(byte)param_1[0x24];
    }
    if ((param_5 == 0 && uVar3 == 1) || (bVar11)) {
      *(undefined4 *)(DAT_01032764 + uVar8 * 4) = 0;
      *(undefined4 *)(iVar9 + uVar8 * 4) = 0;
    }
    if (bVar11 || param_5 != 0) {
      FUN_010036a6(bVar1,param_2,1);
    }
  }
  if ((bVar12 || bVar11) || (param_5 == 0)) {
    iVar6 = FUN_01031b7c(param_1);
  }
  FUN_01006c2c(iVar7,param_2,bVar1,param_8);
  if (bVar11) {
    if (iVar6 == 0) {
      iVar6 = FUN_01031a30(param_1,param_2,iVar7,0);
    }
  }
  else if ((bVar12) && (iVar6 == 0)) {
    FUN_0100aa26(*(int *)(DAT_010325f8 + param_2 * 8 + uVar8 * 4) + 0x1c,bVar1,iVar7,0);
  }
  if (param_2 == 0 || param_2 == 4) {
    FUN_0103624a(DAT_01032748 + uVar8 * 0x1c,2);
    if (iVar6 != 0) goto LAB_01032092;
    if (bVar11) {
      uVar2 = FUN_01006cb8(0,bVar1);
      FUN_01009518(uVar2,0,param_1[2],1);
    }
    if (param_6 == 0) {
LAB_01032070:
      if (param_5 != 0) goto LAB_01032072;
    }
    else if (param_5 != 0) {
      iVar6 = FUN_01031dea(param_1);
LAB_0103206e:
      if (iVar6 != 0) goto LAB_01032092;
      goto LAB_01032070;
    }
LAB_0103207c:
    uVar2 = FUN_01006cb8(param_2,bVar1);
    FUN_010085e4(uVar2,param_2,bVar1,0);
  }
  else {
    if (iVar6 != 0) goto LAB_01032092;
    if (param_6 == 0) goto LAB_01032070;
    if (param_5 == 0) goto LAB_0103207c;
    if (iVar7 != 0) {
      iVar6 = FUN_01031d86(param_1,param_3,param_7);
      iVar9 = FUN_0103619a(DAT_01032748 + uVar8 * 0x1c);
      if (iVar9 == 0) {
        return iVar6;
      }
      FUN_01031e7a(bVar1,1);
      goto LAB_0103206e;
    }
LAB_01032072:
    iVar6 = FUN_01031c74(param_1);
  }
LAB_01032092:
  if (((char)param_4 != '\0') && (iVar6 == 0)) {
    FUN_0101d2b8(bVar1,param_2,iVar7);
  }
  return iVar6;
}

