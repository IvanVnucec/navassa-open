
void FUN_0100a880(int param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char unaff_r6;
  char unaff_r7;
  undefined4 unaff_r8;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  
  iVar4 = DAT_0100abd0 + (short)param_1 * 0x54;
  bVar7 = false;
  iVar5 = DAT_0100abd4 + param_1 * 0x80;
  iVar6 = DAT_0100abd8 + (short)param_1 * 0xbc;
  iVar1 = param_1;
  switch(param_2) {
  case 0:
  case 4:
    iVar1 = *(int *)(iVar6 + 0x1a8);
    param_4 = (undefined1 *)(iVar5 + 0x2e8);
    bVar7 = *(char *)(*(int *)(DAT_0100abdc + param_2 * 8 + param_1 * 4) + 0x10) == '\0';
    if (bVar7) {
      unaff_r6 = *(char *)(iVar5 + 0x2d6);
      unaff_r7 = *(char *)(iVar5 + 0x2d3);
    }
    else {
      unaff_r6 = *(char *)(iVar5 + 0x2d7);
      unaff_r7 = *(char *)(iVar5 + 0x2d4);
    }
    bVar7 = !bVar7;
    puVar3 = (undefined4 *)(iVar4 + 0xe8);
    break;
  case 1:
    iVar1 = 0;
    param_4 = (undefined1 *)(iVar5 + 1000);
    puVar3 = (undefined4 *)(iVar4 + 400);
    break;
  case 2:
    param_4 = (undefined1 *)(iVar5 + 0x4e8);
    uVar9 = FUN_0100a988(*(undefined4 *)(iVar6 + 0x498),param_2,iVar5 + 0x4d3);
    param_2 = (int)((ulonglong)uVar9 >> 0x20);
    iVar1 = (int)uVar9;
    puVar3 = (undefined4 *)(iVar4 + 0x238);
    break;
  case 3:
    param_4 = (undefined1 *)(iVar5 + 0x5e8);
    uVar9 = FUN_0100a988(*(undefined4 *)(iVar6 + 0x610),param_2,iVar5 + 0x5d3);
    param_2 = (int)((ulonglong)uVar9 >> 0x20);
    iVar1 = (int)uVar9;
    puVar3 = (undefined4 *)(iVar4 + 0x2e0);
    break;
  default:
    goto switchD_0100a8b2_default;
  }
  in_lr = *puVar3;
  unaff_r8 = puVar3[1];
switchD_0100a8b2_default:
  iVar1 = -iVar1;
  param_4[0x40] = 1;
  if (bVar7) {
    if (unaff_r6 == '\x02') {
      bVar7 = param_2 != 2;
      bVar8 = param_2 != 3;
      if (!bVar7 || !bVar8) {
        param_2 = 3;
      }
      uVar2 = (undefined1)param_2;
      if (bVar7 && bVar8) {
        *param_4 = 1;
        *(int *)(param_4 + 8) = iVar1;
        *(undefined4 *)(param_4 + 0xc) = in_lr;
        return;
      }
    }
    else {
      if (unaff_r7 != '\x02') goto LAB_0100a980;
      if (param_2 != 2 && param_2 != 3) {
        *param_4 = 2;
        *(int *)(param_4 + 8) = iVar1;
        *(undefined4 *)(param_4 + 0xc) = unaff_r8;
        return;
      }
      uVar2 = 4;
    }
    *param_4 = uVar2;
    *(int *)(param_4 + 0x18) = iVar1;
    *(undefined4 *)(param_4 + 0x1c) = in_lr;
    *(undefined2 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x20) = 0x1e;
    param_4[0x27] = 0;
    param_4[0x26] = 1;
    param_4[0x28] = 1;
  }
  else {
LAB_0100a980:
    *param_4 = 0;
  }
  return;
}

