
uint FUN_0103dd84(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  iVar3 = DAT_0103dea8;
  iVar2 = DAT_0103dea4;
  iVar1 = DAT_0103dea0;
  uVar7 = 0;
  do {
    if ((int)((param_1 >> (uVar7 & 0xff)) << 0x1f) < 0) {
      puVar8 = *(undefined1 **)(iVar1 + uVar7 * 4);
      iVar6 = *(int *)(iVar2 + uVar7 * 4);
      puVar4 = (undefined1 *)(iVar3 + uVar7 * 4);
      puVar8[0x11] = *puVar4;
      puVar8[0x51] = puVar4[1];
      puVar8[0x91] = puVar4[2];
      puVar8[0xd1] = puVar4[3];
      iVar5 = iVar3 + uVar7 * 8;
      *puVar8 = (char)*(undefined2 *)(iVar5 + 8);
      FUN_0103de52(puVar8 + 1,3);
      puVar8[0x40] = (char)*(undefined2 *)(iVar5 + 10);
      FUN_0103de52(puVar8 + 0x41,3);
      puVar8[0x80] = (char)*(undefined2 *)(iVar5 + 0xc);
      FUN_0103de52(puVar8 + 0x81,3);
      puVar8[0xc0] = (char)*(undefined2 *)(iVar5 + 0xe);
      FUN_0103de52(puVar8 + 0xc1,3);
      iVar6 = iVar6 + 0x53;
      pin_update(iVar6,4,4);
      FUN_01022254(2);
      pin_update(iVar6,4,0);
      FUN_0103de5c();
      uVar9 = FUN_01022254(1);
      FUN_0103de5e((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  return param_1;
}

