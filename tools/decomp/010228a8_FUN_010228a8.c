
undefined8 FUN_010228a8(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte *pbVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  iVar4 = DAT_01022ae8 + (short)param_1 * 0xbc;
  iVar6 = param_3;
  switch(param_2) {
  case 0:
    iVar6 = iVar4 + 0x19c;
    break;
  case 1:
    iVar6 = iVar4 + 0x314;
    break;
  case 2:
    iVar6 = iVar4 + 0x48c;
    break;
  case 3:
    iVar6 = iVar4 + 0x604;
  }
  if (*(char *)(param_3 + 0x28) != '\0') {
    if (*(char *)(iVar6 + 0x2a) == '\x01') {
      uVar8 = *(uint *)(iVar6 + 0x20);
      uVar5 = DAT_01022aec;
      if ((uVar8 < DAT_01022aec) && (uVar5 = (uint)*(byte *)(iVar6 + 0x12), uVar5 != 2)) {
        uVar9 = FUN_01022988(uVar5,uVar8,0);
        uVar8 = (uint)((ulonglong)uVar9 >> 0x20);
        uVar5 = (uint)uVar9;
        if (uVar5 == 0) goto LAB_01022956;
      }
      uVar9 = FUN_01022988(uVar5,uVar8,1);
      if ((int)uVar9 != 0) {
        iVar6 = FUN_01022988((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),2);
joined_r0x0102294e:
        if (iVar6 != 0) {
          return CONCAT44(param_4,0xc802);
        }
      }
    }
    else {
      uVar5 = DAT_01022aec;
      if (((*(uint *)(iVar6 + 0x24) < DAT_01022aec) &&
          (uVar5 = (uint)*(byte *)(iVar6 + 0x13), uVar5 != 2)) &&
         (uVar5 = FUN_0102298a(uVar5,0,0), uVar5 == 0)) {
LAB_01022956:
        uVar3 = 1;
        goto LAB_01022958;
      }
      iVar6 = FUN_0102298a(uVar5,0,1);
      if (iVar6 != 0) {
        iVar6 = FUN_0102298a(iVar6,0,2);
        goto joined_r0x0102294e;
      }
    }
    if (*(char *)(param_3 + 0x28) != '\0') {
      *(undefined1 *)(param_3 + 0x1f) = 1;
      *(undefined1 *)(param_3 + 0x22) = 1;
      *(undefined1 *)(param_3 + 0x1c) = 1;
    }
  }
  uVar3 = 0;
LAB_01022958:
  *(undefined1 *)(param_3 + 0xc) = uVar3;
  *(undefined1 *)(param_3 + 8) = uVar3;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)(param_3 + 10) = 1;
  *(undefined1 *)(param_3 + 9) = 1;
  uVar7 = FUN_0102f514(param_1,0);
  uVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar5 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  pbVar1 = (byte *)(*(int *)(DAT_01022af0 + param_1 * 4) + 0xfc);
  *pbVar1 = *pbVar1 | 1;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    enableIRQinterrupts((uVar5 & 1) == 1);
  }
  return CONCAT44(param_4,uVar7);
}

