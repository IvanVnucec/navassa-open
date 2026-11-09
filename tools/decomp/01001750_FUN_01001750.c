
int FUN_01001750(byte param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar1 = *(undefined1 *)(DAT_01002158 + 0xbc);
  uVar4 = param_2[1];
  iVar8 = 0;
  uVar5 = (uint)((*(byte *)(DAT_0100215c + 0x22) & 3) == 2);
  iVar3 = DAT_01002160 + uVar5 * 0x80;
  uVar9 = 0;
  do {
    if (*param_2 <= uVar9) {
      *(int *)(iVar3 + 0x2f0) = -*(int *)(*(int *)(DAT_010025ac + uVar5 * 4) + 0xc);
      return iVar8;
    }
    iVar7 = uVar9 * 0x14;
    uVar11 = *(uint *)(uVar4 + iVar7 + 4);
    uVar6 = *(uint *)(uVar4 + iVar7);
    if (iVar8 == 0) {
      if ((*(uint *)(DAT_01001b34 + 0x14) <= uVar11) &&
         ((*(uint *)(DAT_01001b34 + 0x14) < uVar11 || (*(uint *)(DAT_01001b34 + 0x10) <= uVar6)))) {
        if ((uVar11 < *(uint *)(DAT_01001b34 + 0x1c)) ||
           (uVar11 <= *(uint *)(DAT_01001b34 + 0x1c) && uVar6 <= *(uint *)(DAT_01001b34 + 0x18)))
        goto LAB_01001894;
      }
      iVar8 = 0xeb05;
    }
LAB_01001894:
    iVar10 = DAT_010018e0 + (uint)param_1 * 0x100 + uVar9 * 4;
    if ((*(byte *)(DAT_0100215c + 0x22) & 0xc) != 0) {
      if (iVar8 == 0) {
        iVar8 = FUN_0100328e(param_1,1,uVar9 & 0xff,*(undefined1 *)(DAT_010018e0 + 0x7de),uVar6,
                             uVar11,uVar1,*(undefined1 *)(DAT_010018e0 + 0x7de),
                             *(undefined1 *)(DAT_010018e0 + 0x791),
                             *(char *)(DAT_0100215c + 0x780) == '\x02');
      }
      if (iVar8 == 0) {
        uVar2 = FUN_01001950(uVar6,uVar11);
        *(undefined4 *)(iVar10 + 0x230) = uVar2;
      }
    }
    if ((*(byte *)(DAT_0100215c + 0x22) & 3) != 0) {
      iVar7 = uVar4 + uVar5 * 4 + iVar7;
      uVar12 = *(uint *)(iVar7 + 8);
      if (*(char *)(DAT_01001b34 + 0x25) == '\0') {
        bVar13 = CARRY4(uVar6,uVar12);
        uVar6 = uVar6 + uVar12;
        uVar11 = uVar11 + ((int)uVar12 >> 0x1f) + (uint)bVar13;
      }
      if ((iVar8 == 0) &&
         (iVar8 = FUN_0100328e(param_1,0,uVar9 & 0xff,iVar7,uVar6,uVar11,uVar1,
                               *(undefined1 *)(DAT_010018e0 + 0x7de),
                               *(undefined1 *)(DAT_010018e0 + 0x791),
                               *(char *)(DAT_0100215c + 0x780) == '\x02'), iVar8 == 0)) {
        uVar2 = FUN_01001950(uVar6,uVar11);
        *(undefined4 *)(iVar10 + 0x430) = uVar2;
        *(uint *)(iVar3 + 0x2f0) = -uVar12;
        iVar8 = FUN_010063ac(2,iVar3 + 0x2f0,iVar10 + 0x30);
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

