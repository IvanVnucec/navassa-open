
undefined1 *
FUN_0100cc00(undefined4 param_1,int param_2,undefined1 *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  ulonglong uVar12;
  
  uVar10 = 0;
  iVar4 = DAT_0100d2a0 + param_2 * 8;
  uVar7 = *(uint *)(iVar4 + 0x90);
  uVar9 = *(uint *)(iVar4 + 0x94);
  uVar8 = DAT_0100d2a8;
  if (*(char *)(DAT_0100d2a4 + 0x77d) != '\x01') {
    uVar8 = DAT_0100d294;
  }
  uVar1 = uVar7 >> 3 | uVar9 << 0x1d;
  if (uVar9 >> 3 == 0 && uVar1 <= uVar8) {
    uVar10 = uVar9 >> 3;
    uVar8 = uVar1;
  }
  iVar4 = DAT_0100d2a4 + (param_2 - 2U & 0xff) * 0xbc;
  uVar12 = FUN_0100cb94(iVar4 + 0x4b8,*param_3);
  uVar5 = (uint)(uVar12 >> 0x21);
  uVar2 = (uint)((uVar12 & 0x100000000) != 0) << 0x1f | (uint)uVar12 >> 1;
  uVar1 = uVar8;
  uVar3 = uVar10;
  if ((uVar5 <= uVar10) && (uVar5 < uVar10 || uVar2 < uVar8)) {
    uVar1 = uVar2;
    uVar3 = uVar5;
  }
  if ((uVar3 != 0) || (iVar6 = 0, DAT_0100d2ac <= uVar1)) {
    uVar2 = uVar7 >> 0xd | uVar9 << 0x13;
    bVar11 = uVar1 < uVar2;
    uVar1 = uVar1 - uVar2;
    iVar6 = (uVar3 - (uVar9 >> 0xd)) - (uint)bVar11;
  }
  if ((uVar9 - iVar6 != (uint)(uVar7 < uVar1)) || (DAT_0100d2b0 <= uVar7 - uVar1)) {
    uVar1 = -uVar1;
  }
  uVar12 = FUN_0100cb94(iVar4 + 0x630,param_3[1]);
  uVar2 = (uint)(uVar12 >> 0x21);
  uVar3 = (uint)((uVar12 & 0x100000000) != 0) << 0x1f | (uint)uVar12 >> 1;
  if ((uVar2 <= uVar10) && (uVar2 < uVar10 || uVar3 < uVar8)) {
    uVar8 = uVar3;
    uVar10 = uVar2;
  }
  if ((uVar9 - uVar10 != (uint)(uVar7 < uVar8)) || (DAT_0100d2b0 <= uVar7 - uVar8)) {
    uVar8 = -uVar8;
  }
  *param_4 = uVar1;
  *param_5 = uVar8;
  return param_3;
}

