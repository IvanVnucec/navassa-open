
uint FUN_010034e2(short param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  
  uVar3 = 0;
  uVar2 = 1;
  uVar4 = 0;
  uVar1 = DAT_01003590;
  do {
    puVar8 = (uint *)(DAT_01003594 + param_1 * 0x30 + uVar4 * 8);
    uVar5 = *puVar8;
    uVar7 = puVar8[1];
    if (uVar7 != 0 || uVar5 != 0) {
      uVar6 = param_3 - uVar5;
      uVar5 = (param_4 - uVar7) - (uint)(param_3 < uVar5);
      if ((int)uVar5 < 0) {
        bVar9 = uVar6 != 0;
        uVar6 = -uVar6;
        uVar5 = -uVar5 - (uint)bVar9;
      }
      if ((uVar5 <= uVar2) && (uVar5 < uVar2 || uVar6 < uVar1)) {
        uVar1 = uVar6;
        uVar2 = uVar5;
        uVar3 = uVar4;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  return uVar3 & 0xff;
}

