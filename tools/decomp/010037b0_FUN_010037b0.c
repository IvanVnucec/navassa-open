
void FUN_010037b0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint *puVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar9;
  undefined4 in_lr;
  
  bVar1 = *(char *)((int)param_2 + 0x2d) != '\0';
  if (bVar1) {
    piVar9 = (int *)(DAT_01003aa4 + param_1 * 0x14);
    iVar4 = DAT_01003aa8;
  }
  else {
    piVar9 = (int *)(DAT_01003a9c + param_1 * 0x14);
    iVar4 = DAT_01003aa0;
  }
  bVar1 = !bVar1;
  FUN_0100347c(param_1,param_2);
  if (*DAT_01003aac == '\0') {
    iVar2 = FUN_0100a768(param_1,*(undefined2 *)((int)param_2 + param_1 * 2 + 0x22));
    FUN_0100ef48(param_1,iVar2,param_2[0xc] & 0xffff,*(undefined1 *)(param_2 + 0xb),1,bVar1);
  }
  else {
    iVar2 = FUN_0100a768(param_1,800);
    FUN_010034c4(param_1,bVar1);
    FUN_0100ece0(param_1,param_2);
    FUN_0100ed42(param_1,*(undefined1 *)(param_2 + 0xb),bVar1,param_2);
  }
  iVar5 = *(int *)(DAT_01003ab0 + param_1 * 4);
  puVar8 = (uint *)*piVar9;
  uVar3 = (uint)*(short *)(iVar5 + iVar2 * 4);
  uVar6 = (uint)*(short *)(iVar5 + iVar2 * 4 + 2);
  *puVar8 = *puVar8 & 0xff00ffff |
            (uint)(*(ushort *)((int)param_2 + param_1 * 2 + 0x22) >> 8) << 0x10;
  puVar8[1] = puVar8[1] & 0xff00ffff |
              (*(ushort *)((int)param_2 + param_1 * 2 + 0x22) & 0xff) << 0x10;
  puVar8 = *(uint **)(iVar4 + param_1 * 0x14);
  *puVar8 = *puVar8 & 0xff00ffff | ((uVar3 << 0x10) >> 0x18) << 0x10;
  puVar8[1] = puVar8[1] & 0xff00ffff | (uVar3 & 0xff) << 0x10;
  uVar3 = (uVar6 << 0x10) >> 0x18;
  puVar8[2] = puVar8[2] & 0xff00ffff | uVar3 << 0x10;
  puVar8[3] = puVar8[3] & 0xff00ffff | (uVar6 & 0xff) << 0x10;
  if (*(char *)(DAT_01003ab4 + (short)param_1 * 0x5c) != '\0') {
    iVar4 = FUN_01024ae6(param_1,param_2,*param_2,param_2[1],uVar3,unaff_r4,unaff_r5,unaff_r6,
                         unaff_r7,in_lr);
    cVar7 = *(char *)((int)param_2 + 0x2d);
    if (cVar7 != '\0') {
      cVar7 = '\x01';
    }
    FUN_01024d04(param_1,*(undefined1 *)(DAT_0100f0fc + param_1 * 0x1ac + iVar4),cVar7,uVar3);
    return;
  }
  return;
}

