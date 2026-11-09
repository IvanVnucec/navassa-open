
void FUN_010074ac(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 extraout_r1;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  byte local_2d;
  undefined1 local_2c;
  int iStack_28;
  
  iVar4 = DAT_010078e8;
  iVar7 = DAT_01007cd4 + param_3 * 4;
  puVar6 = (undefined4 *)(iVar7 + 0x7c);
  iStack_28 = param_3;
  switch(param_2) {
  case 0:
  case 4:
    *puVar6 = param_1;
    cVar1 = *(char *)(*(int *)(iVar4 + param_3 * 4) + 0x2f);
    if (cVar1 != '\0') goto joined_r0x010074fa;
LAB_010074f4:
    bVar3 = 4;
    break;
  case 1:
  case 3:
    *puVar6 = param_1;
    iVar4 = *(int *)(iVar4 + param_3 * 4);
    iStack_28 = iVar4 + 0x2f;
    cVar1 = *(char *)(iVar4 + 0x30);
    if (cVar1 == '\0') goto LAB_010074f4;
joined_r0x010074fa:
    if (cVar1 != '\x01') {
switchD_010074ca_default:
      return;
    }
    bVar3 = 5;
    break;
  case 2:
    *(undefined4 *)(iVar7 + 0x84) = param_1;
    bVar3 = 6;
    break;
  default:
    goto switchD_010074ca_default;
  }
  iVar7 = *(int *)(DAT_01007f6c + param_3 * 4);
  local_2f = (undefined1)param_4;
  local_2d = (byte)(-(uint)(param_4 == 0) >> 0x1f);
  local_2c = 3;
  iVar4 = DAT_01007cd4 + param_3 * 4;
  local_2e = local_2f;
  if (bVar3 == 4 || bVar3 == 5) {
    unaff_r5 = *(int *)(iVar4 + 0x7c);
    if (unaff_r5 != 2) {
      iVar4 = param_3;
      FUN_01007490();
      local_30 = (undefined1)iVar4;
      goto LAB_01007412;
    }
    uVar8 = FUN_01007488();
    uVar8 = FUN_010074a2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_4);
    uVar5 = 2;
  }
  else {
    if (bVar3 != 6) goto LAB_01007412;
    unaff_r5 = *(int *)(iVar4 + 0x84);
    if (unaff_r5 != 2) {
      FUN_01007490();
      local_30 = extraout_r1;
      goto LAB_01007412;
    }
    uVar8 = FUN_01007488();
    uVar8 = FUN_010074a2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1);
    uVar5 = param_4 << 1 & 0xff;
  }
  FUN_010076d2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar5);
  local_30 = 2;
LAB_01007412:
  uVar2 = FUN_01007bf6(&local_30,param_3);
  uVar2 = FUN_0100760e(uVar2,param_3);
  if (unaff_r5 == 2) {
    uVar2 = FUN_01007728(2,param_3,0);
  }
  if (bVar3 == 4) {
    uVar2 = pin_update(iVar7 + 0x24,4,param_4 << 2 & 0xff);
  }
  else {
    if (bVar3 < 4) {
      return;
    }
    if (bVar3 != 6) {
      if (5 < bVar3) {
        return;
      }
      uVar2 = pin_update(iVar7 + 0x25,4,param_4 << 2 & 0xff);
    }
  }
  uVar2 = FUN_0100704e(uVar2,2,param_4 << 1 & 0xff);
  FUN_0100704e(uVar2,1,param_4);
  return;
}

