
int FUN_0100d840(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  byte unaff_r6;
  int iVar9;
  char local_38;
  char local_37;
  byte local_36;
  int local_34;
  undefined1 auStack_30 [2];
  byte local_2e;
  int local_2c;
  undefined4 uStack_28;
  
  iVar8 = param_2[6];
  bVar1 = *DAT_0100e000;
  uStack_28 = param_4;
  iVar4 = FUN_0100de44(*param_2,&local_38);
  iVar9 = 0;
  if (local_38 == '\0') {
    if (local_37 != '\0') {
      unaff_r6 = 1;
    }
  }
  else {
    unaff_r6 = 0;
  }
  FUN_01022360(unaff_r6,0xffff);
  FUN_0101f0a0(iVar8,unaff_r6,auStack_30);
  local_34 = local_2c;
  local_36 = local_2e;
  if (iVar8 == 2) {
    uVar5 = FUN_0101f896((uint)bVar1,2,auStack_30);
    *DAT_0100e004 = (short)uVar5;
    puVar2 = DAT_0100e008;
    if ((iVar4 != 0) && (1 < uVar5)) {
      if (local_34 != 0) {
        *DAT_0100e008 = 1;
        FUN_01022500(unaff_r6,3,0xf);
        pcVar3 = DAT_0100e00c;
        *DAT_0100e00c = '\0';
        do {
        } while (*pcVar3 == '\0');
        *puVar2 = 0;
      }
      iVar4 = DAT_0100e014;
      iVar8 = DAT_0100e014 + (uint)unaff_r6 * 2;
      if ((((*DAT_0100e010 == '\0') ||
           (iVar6 = FUN_010034e2(unaff_r6,DAT_0100e010,param_2[0xc],param_2[0xd]),
           *(char *)(iVar8 + param_2[10]) != '\x01')) ||
          (piVar7 = (int *)((short)(ushort)unaff_r6 * 0x30 + DAT_0100e018 + iVar6 * 8),
          piVar7[1] == param_2[0xd] && *piVar7 == param_2[0xc])) &&
         (iVar9 = FUN_0100d95c(param_1,param_2,&local_38,local_34), iVar9 == 0)) {
        if (*(char *)(iVar8 + param_2[10]) == '\0') {
          *(undefined1 *)(iVar8 + param_2[10]) = 1;
        }
        if (*DAT_0100e010 != '\0') {
          *(undefined1 *)(iVar4 + (uint)bVar1 * 8 + (uint)unaff_r6 * 4 + (uint)local_36 * 2 + 4) = 1
          ;
        }
      }
    }
  }
  return iVar9;
}

