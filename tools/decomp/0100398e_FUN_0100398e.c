
void FUN_0100398e(int param_1,uint *param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  bool bVar11;
  
  cVar1 = *(char *)((int)param_2 + 0x2d);
  iVar10 = *(int *)(DAT_01003a88 + param_1 * 4);
  uVar2 = *param_2;
  uVar4 = param_2[1];
  if (DAT_01003ac8[0x25] == 0) {
    uVar8 = param_2[param_1 + 2];
    bVar11 = CARRY4(uVar2,uVar8);
    uVar2 = uVar2 + uVar8;
    uVar4 = uVar4 + ((int)uVar8 >> 0x1f) + (uint)bVar11;
  }
  uVar9 = *(undefined1 *)((int)param_2 + param_1 + 0x20);
  if (DAT_01003ac8[0x26] == 1) {
    if (*DAT_01003ac8 < 2) {
      uVar9 = param_4;
    }
    *(undefined1 *)(iVar10 + 0x5b) = uVar9;
  }
  else if ((*(byte *)(iVar10 + 0x4a) & 3) == 0) {
    *(undefined1 *)((uint)*(byte *)((int)param_2 + 0x2d) + iVar10 + 0x4c) = uVar9;
  }
  if ((uVar4 == 0) && (uVar2 < DAT_01003acc)) {
    iVar10 = 0;
  }
  else if (uVar4 == 0 && uVar2 == DAT_01003acc) {
    iVar10 = 4;
  }
  else {
    iVar10 = 8;
  }
  iVar5 = DAT_01003ad0 + (short)param_1 * 0x24;
  iVar7 = DAT_01003a64 + (short)param_1 * 0xc;
  if ((int)-(uint)(cVar1 == '\0') < 0) {
    uVar3 = *(undefined4 *)(iVar7 + iVar10);
    puVar6 = *(undefined4 **)(iVar5 + 4);
  }
  else {
    puVar6 = *(undefined4 **)(iVar5 + 0x14);
    uVar3 = *(undefined4 *)(iVar10 + iVar7 + 0x18);
  }
  *puVar6 = uVar3;
  if (param_3 == 0) {
    return;
  }
  iVar10 = DAT_01003ad4 + param_1 * 0x80;
  *(uint *)(iVar10 + 0x2f0) = -param_2[param_1 + 2];
  FUN_010063ac(2,iVar10 + 0x2f0,param_2 + param_1 + 4);
  return;
}

