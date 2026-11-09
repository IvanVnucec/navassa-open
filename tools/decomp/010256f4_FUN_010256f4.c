
void FUN_010256f4(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 uVar5;
  uint *puVar6;
  bool bVar7;
  
  piVar3 = DAT_0102596c;
  uVar2 = DAT_01025968;
  puVar1 = DAT_01025964;
  if (param_1 << 0x1f < 0) {
    puVar4 = *(uint **)(*DAT_0102596c + 0xc);
    puVar6 = (uint *)*puVar4;
    bVar7 = DAT_01025968 <= puVar6;
    if (!bVar7) {
      puVar6 = (uint *)((uint)puVar6 >> 1);
      puVar4 = (uint *)puVar4[3];
    }
    if (bVar7 || puVar4 <= puVar6) {
      *DAT_01025964 = 0;
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
      *DAT_01025964 = 1;
    }
    puVar1[2] = uVar5;
  }
  if (param_1 << 0x1e < 0) {
    puVar4 = *(uint **)(piVar3[1] + 0xc);
    puVar6 = (uint *)*puVar4;
    bVar7 = puVar6 < uVar2;
    if (bVar7) {
      puVar6 = (uint *)((uint)puVar6 >> 1);
      puVar4 = (uint *)puVar4[3];
    }
    if (bVar7 && puVar6 < puVar4) {
      puVar1[1] = 1;
      puVar1[3] = 1;
      return;
    }
    puVar1[1] = 0;
    puVar1[3] = 3;
  }
  return;
}

