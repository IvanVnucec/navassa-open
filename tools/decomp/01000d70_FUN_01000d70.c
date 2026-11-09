
void FUN_01000d70(uint param_1,uint *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *extraout_r1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  iVar7 = DAT_010018e4;
  iVar3 = DAT_010018e0;
  uVar9 = *(uint *)(DAT_010018e0 + 0x2c);
  iVar12 = DAT_01001748 + param_3 * 4;
  param_2[10] = 0;
  iVar10 = *(int *)(iVar7 + param_1 * 4);
  uVar11 = *(uint *)(*(int *)(iVar12 + 4) + 0x1c);
  uVar4 = param_2[param_1 + 2];
  uVar5 = *param_2 + uVar4;
  iVar7 = param_2[1] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(*param_2,uVar4);
  uVar2 = *(undefined1 *)((int)param_2 + param_1 + 0x20);
  bVar1 = *(byte *)(iVar10 + 0x4a);
  bVar13 = (bVar1 & 3) == 0;
  if (bVar13) {
    bVar1 = *(byte *)((int)param_2 + 0x2d);
  }
  if (bVar13) {
    *(undefined1 *)(iVar10 + (uint)bVar1 + 0x4c) = uVar2;
  }
  else {
    *(undefined1 *)(iVar10 + 0x5c) = uVar2;
  }
  uVar4 = uVar11 >> (param_1 & 0xff) & 1 ^ 1;
  if ((iVar7 == 0) && (uVar5 < DAT_01001940)) {
    iVar7 = 0;
  }
  else if (iVar7 == 0 && uVar5 == DAT_01001940) {
    iVar7 = 4;
  }
  else {
    iVar7 = 8;
  }
  iVar10 = DAT_01001944 + param_1 * 0x24;
  if (*(char *)((int)param_2 + 0x2d) == '\0') {
    uVar6 = *(undefined4 *)(DAT_01001948 + param_1 * 0xc + iVar7);
    puVar8 = *(undefined4 **)(iVar10 + 4);
  }
  else {
    uVar6 = *(undefined4 *)(DAT_0100194c + param_1 * 0xc + iVar7);
    puVar8 = *(undefined4 **)(iVar10 + 0x14);
  }
  uVar5 = param_1 + 1;
  *puVar8 = uVar6;
  if (((uVar9 & uVar5 * 0x100) == 0) || (uVar4 == 0)) {
    iVar7 = (short)param_3 * 0xb0 + iVar3 + 0x630 + param_1 * 4;
    if (*(int *)(iVar7 + 0x88) != 0) {
      FUN_01004246(param_1);
      FUN_0100541a(param_1);
      FUN_01005e34(param_1);
      if ((*(uint *)(iVar3 + 0x2c) & (param_1 + 1) * 0x100) != 0) {
        FUN_01003652(param_1,0,*(undefined4 *)(DAT_010019f4 + param_1 * 4),
                     *(undefined4 *)(DAT_010019f0 + param_1 * 4),
                     -(uint)(*(char *)(*(int *)(iVar12 + 0xc) + 0x2d) == '\0') >> 0x1f,
                     *(undefined4 *)(iVar7 + 0x88),uVar4);
      }
    }
    FUN_010038c2(param_1,*(undefined4 *)(iVar12 + 0xc),uVar4);
    if (uVar4 != 0) {
      uVar5 = *(uint *)(iVar3 + 0x2c) & ~(uVar5 * 0x100);
    }
    if (uVar4 == 0) {
      uVar5 = *(uint *)(iVar3 + 0x2c) | uVar5 << 8;
    }
    *(uint *)(iVar3 + 0x2c) = uVar5;
    puVar8 = extraout_r1;
  }
  FUN_01005ed8(*(undefined4 *)(DAT_01001b0c + param_1 * 4),puVar8,*param_2,param_2[1]);
  return;
}

