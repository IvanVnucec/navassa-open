
undefined8
FUN_0101e9f2(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4,undefined1 *param_5,
            undefined1 *param_6)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  undefined1 *local_28;
  
  uVar3 = DAT_0101edac;
  *param_6 = 0;
  uVar6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[3] = 0;
  iVar7 = *(int *)(uVar3 + param_1 * 4);
  bVar8 = 0;
  do {
    if ((param_3 & 1 << (uint)bVar8) != 0) {
      uVar3 = (uint)bVar8;
      bVar8 = 0;
      goto LAB_0101ea74;
    }
    bVar8 = bVar8 + 1;
  } while (bVar8 < 8);
  goto LAB_0101ea32;
  while (bVar8 = bVar8 + 1, bVar8 < 8) {
LAB_0101ea74:
    if ((int)((((uint)param_2 & 0xfffe) >> (uint)bVar8) << 0x1f) < 0) {
      uVar6 = (uint)bVar8;
      break;
    }
  }
  if (bVar8 == 8) {
    uVar6 = 0;
  }
LAB_0101ea32:
  param_5[1] = 0;
  *param_5 = 7;
  param_5[2] = 1;
  param_5[3] = 0;
  param_5[4] = 0;
  param_4[4] = 2;
  param_4[5] = 0;
  param_4[3] = 1;
  param_4[6] = 1;
  param_4[7] = 2;
  param_4[8] = 0;
  param_4[9] = 1;
  param_4[10] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_28 = param_6 + 3;
    FUN_0101eb9e();
    goto LAB_0101eb0e;
  }
  uVar2 = (undefined1)((uint)param_2 & 1);
  if (((uint)param_2 & 1) != 0) {
    uVar2 = 1;
  }
  param_5[2] = uVar2;
  if (uVar6 == 1) {
    uVar2 = 4;
    uVar4 = 2;
LAB_0101eab6:
    *param_5 = uVar2;
    param_6[1] = uVar4;
    local_28 = param_6 + 3;
    uVar2 = FUN_0101eb9e();
LAB_0101eac2:
    if (uVar6 != 5) {
      if (uVar3 == 5) {
        uVar2 = 2;
      }
      if (uVar3 == 5) {
        param_4[3] = uVar2;
      }
    }
  }
  else {
    if (uVar6 == 3) {
      uVar2 = 3;
LAB_0101eab4:
      uVar4 = 1;
      goto LAB_0101eab6;
    }
    if (uVar6 == 2) {
      uVar2 = 6;
      goto LAB_0101eab4;
    }
    local_28 = param_2;
    if (uVar6 == 5) {
      uVar2 = 2;
LAB_0101eb1c:
      *param_5 = uVar2;
      *param_6 = 1;
      if (uVar3 == 5) {
        param_4[7] = 0;
        uVar2 = 2;
LAB_0101eb46:
        param_4[1] = uVar2;
      }
      else if (uVar3 == 6) {
        param_4[4] = 1;
        param_6[2] = 1;
        param_4[1] = 1;
      }
      else if (uVar3 == 7) {
        uVar2 = 0;
        param_4[4] = 0;
        param_6[3] = 1;
        goto LAB_0101eb46;
      }
      param_4[6] = 1;
      param_4[8] = 1;
      *param_4 = 1;
      param_4[2] = 1;
      if (uVar3 == 0) {
        uVar2 = 0;
        *param_4 = 0;
        param_4[4] = 2;
        goto LAB_0101eace;
      }
      goto LAB_0101eac2;
    }
    if (uVar6 == 4) {
      uVar2 = 5;
      goto LAB_0101eb1c;
    }
    if (uVar6 == 6) {
      *param_5 = 1;
      param_6[2] = 1;
      if (uVar3 == 6) {
        param_4[1] = 1;
      }
      else if (uVar3 == 7) {
        uVar2 = 0;
        param_4[4] = 0;
        param_6[3] = 1;
        param_4[1] = 0;
      }
      param_4[6] = 1;
      if (uVar3 != 0) {
        *param_4 = 1;
      }
      goto LAB_0101eac2;
    }
    if (uVar6 != 7) goto LAB_0101eac2;
    uVar2 = 0;
    *param_5 = 0;
    param_6[3] = 1;
    param_4[1] = 0;
    if (uVar3 != 0) goto LAB_0101eac2;
    uVar2 = 2;
    param_4[4] = 2;
    param_4[6] = 1;
    *param_4 = 1;
  }
LAB_0101eace:
  if ((uVar6 != 0) && (uVar6 == uVar3)) {
    param_4[4] = 2;
    param_4[5] = 0;
    param_4[10] = 0;
    param_4[6] = 1;
    uVar2 = 1;
    *param_4 = 1;
  }
  if (uVar3 != 6) {
    if (uVar6 == 6) {
      uVar2 = 0;
    }
    if (uVar6 == 6) {
      param_4[9] = uVar2;
    }
  }
  param_5[3] = 1;
  param_5[1] = 1;
  pbVar5 = (byte *)(iVar7 + 0xf9);
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  *pbVar5 = *pbVar5 & 0xfd;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar3 & 1) == 1);
  }
LAB_0101eb0e:
  return CONCAT44(param_3,local_28);
}

