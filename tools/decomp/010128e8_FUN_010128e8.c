
void FUN_010128e8(int *param_1)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_490;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  undefined4 local_47c;
  float local_3c4;
  float local_3c0 [25];
  float local_35c [209];
  
  local_488 = param_1[3];
  uVar4 = *(undefined1 *)(local_488 + 0x32c);
  cVar1 = *(char *)(local_488 + 0x32d);
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  local_48c = param_1[2] + 0x50;
  local_484 = *param_1 + 0xe8;
  local_480 = param_1[1];
  local_47c = FUN_01026d28(param_1[4],param_1[5]);
  if (cVar1 == '\x01') {
    uVar3 = FUN_010287c0(&local_48c,&local_490);
    *(undefined1 *)((int)param_1 + 0x1d) = uVar3;
    iVar7 = *param_1;
    *(undefined2 *)(iVar7 + 2) = 0;
    *(undefined2 *)(iVar7 + 6) = 0;
    if (*(char *)((int)param_1 + 0x1d) == '\0') {
      param_1[8] = -1;
    }
    else {
      iVar9 = VectorFloatToUnsigned(local_490,3);
      param_1[8] = iVar9;
      if (*(char *)((int)param_1 + 0x1d) == '\x02') {
        FUN_01012148(iVar7,uVar4);
      }
    }
    *(undefined1 *)((int)param_1 + 0x25) = 1;
    *(undefined1 *)(param_1 + 7) = 2;
  }
  else {
    local_490 = 0;
    uVar5 = FUN_010275c6(&local_48c,&local_490);
    *(undefined4 *)(local_484 + 0x214) = uVar5;
    *(undefined1 *)((int)param_1 + 0x25) = 1;
    *(undefined4 *)(local_480 + 0x24) = *(undefined4 *)(local_484 + 0x214);
  }
  if (cVar1 == '\0') {
    local_490 = 0;
    uVar8 = 0;
    iVar7 = *param_1;
    local_3c4 = *(float *)(iVar7 + 0xe8) + *(float *)(iVar7 + 0x1b8);
    do {
      local_3c0[uVar8] = *(float *)(iVar7 + 0xec + uVar8 * 4) * *(float *)(iVar7 + 0x1b4);
      local_35c[uVar8] = *(float *)(iVar7 + 0x150 + uVar8 * 4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x19);
    uVar8 = 0;
    do {
      if ((int)((uint)(*(float *)(param_1[2] + 0xf4) <
                      ((local_3c0[uVar8] + -1.0) * (local_3c0[uVar8] + -1.0) +
                      (local_3c4 + local_35c[uVar8]) * (local_3c4 + local_35c[uVar8])) * 0.25) <<
               0x1f) < 0) {
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_01012148(*param_1,uVar4);
        uVar4 = 1;
        *(undefined1 *)((int)param_1 + 0x25) = 1;
        goto LAB_01012a7a;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x19);
    FUN_01026c4c(&local_3c4,iVar7 + 8,&local_48c,&local_490);
    iVar7 = *param_1;
    *(float *)(iVar7 + 0xd4) = local_3c0[0];
    *(float *)(iVar7 + 0xd8) = local_3c4;
    *(undefined1 *)(iVar7 + 0xdc) = uVar4;
    FUN_01028772(*param_1 + 0x310,uVar4,*param_1 + 0xd4);
    psVar6 = (short *)*param_1;
    if (*psVar6 != -1) {
      *psVar6 = *psVar6 + 1;
    }
    sVar2 = psVar6[1];
    if (sVar2 != -1) {
      psVar6[1] = sVar2 + 1;
    }
    uVar4 = 0;
LAB_01012a7a:
    *(undefined1 *)(param_1 + 7) = uVar4;
  }
  return;
}

