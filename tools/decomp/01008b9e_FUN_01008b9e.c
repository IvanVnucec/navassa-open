
void FUN_01008b9e(void)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int extraout_r1;
  undefined4 uVar4;
  undefined4 in_r3;
  int unaff_r4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int unaff_r9;
  uint uVar9;
  
  FUN_010099ec();
  pcVar8 = DAT_0100977c;
  if (extraout_r1 == 0) {
    pcVar8 = DAT_01009780;
  }
  iVar7 = DAT_010091f0 + unaff_r4 * 0x60;
  iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x36,*(undefined1 *)(iVar7 + 0x22),unaff_r4 * 0x60,in_r3)
  ;
  if (iVar3 == 0) {
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x2d,*(undefined1 *)(iVar7 + 0x4d));
    if (iVar3 != 0) goto LAB_01008c44;
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x2e,*(undefined1 *)(iVar7 + 0x4c));
    if (iVar3 != 0) goto LAB_01008c50;
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x2f,*(undefined1 *)(iVar7 + 0x4f));
    if (iVar3 != 0) goto LAB_01008c5c;
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x30,*(undefined1 *)(iVar7 + 0x4e));
    if (iVar3 == 0) {
      iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x31,*(undefined1 *)(iVar7 + 0x50));
      if (((iVar3 != 0) ||
          (iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x24,*(undefined1 *)(iVar7 + 0x51)), iVar3 != 0)
          ) || (iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x38,
                                  *(char *)(iVar7 + 0x31) + *(char *)(iVar7 + 0x32) * '\x10'),
               iVar3 != 0)) goto LAB_01008c78;
      iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x41,*(byte *)(iVar7 + 0x33) | 0xc0);
      goto LAB_01008c38;
    }
  }
  else {
LAB_01008c38:
    if (iVar3 != 0) goto LAB_01008c78;
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x21,*(undefined1 *)(iVar7 + 0x2c));
LAB_01008c44:
    if (iVar3 != 0) goto LAB_01008c78;
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x22,*(undefined1 *)(iVar7 + 0x2d));
LAB_01008c50:
    if (iVar3 != 0) goto LAB_01008c78;
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x23,*(undefined1 *)(iVar7 + 0x2e));
LAB_01008c5c:
    if (iVar3 != 0) goto LAB_01008c78;
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x20,*(byte *)(iVar7 + 0x30) | 0x30);
  }
  if (iVar3 == 0) {
    iVar3 = (*pcVar8)(extraout_r1,unaff_r9 + 0x1f,*(undefined1 *)(iVar7 + 0x2f));
  }
LAB_01008c78:
  uVar1 = *(ushort *)(DAT_0100980c + unaff_r4 * 2 + 10);
  uVar9 = ((uint)uVar1 << 0x17) >> 0x1f;
  uVar5 = (uint)uVar1 << 0x11;
  uVar6 = uVar5 >> 0x10;
  uVar5 = uVar5 >> 0x18 & 1;
  uVar2 = (undefined1)uVar1;
  if (unaff_r4 == 0) {
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (*pcVar8)(extraout_r1,DAT_01009854,uVar2);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (*pcVar8)(extraout_r1,DAT_01009858,uVar9);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (*pcVar8)(extraout_r1,DAT_0100985c,uVar5);
    if (iVar3 != 0) {
      return;
    }
    uVar9 = uVar6 & 0xff;
    uVar4 = DAT_010098a4;
  }
  else if (unaff_r4 == 1) {
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (*pcVar8)(extraout_r1,DAT_010098a8,uVar2);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (*pcVar8)(extraout_r1,DAT_010098ac,uVar9);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (*pcVar8)(extraout_r1,DAT_010098e0,uVar5);
    if (iVar3 != 0) {
      return;
    }
    uVar9 = uVar6 & 0xff;
    uVar4 = DAT_010098e4;
  }
  else {
    if (unaff_r4 != 2) {
      return;
    }
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (*pcVar8)(extraout_r1,DAT_010098e8,uVar2);
    uVar4 = DAT_0100990c;
    if (iVar3 != 0) {
      return;
    }
  }
  (*pcVar8)(extraout_r1,uVar4,uVar9);
  return;
}

