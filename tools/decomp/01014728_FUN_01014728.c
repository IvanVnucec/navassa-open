
void FUN_01014728(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_01015284;
  piVar1 = DAT_01015280;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    piVar1[iVar5 + 0x27] = iVar5 * 0x4c + iVar7;
    uVar4 = DAT_01015348;
    puVar3 = DAT_0101528c;
    puVar2 = DAT_01015288;
    iVar5 = iVar6;
  } while (iVar6 < 4);
  iVar7 = FUN_0102ae42(0x14,8,piVar1 + 0x41,piVar1 + 0x69,0,param_3,param_4);
  piVar1[1] = iVar7;
  if (iVar7 == 0) {
    *puVar3 = uVar4;
    *puVar2 = 0xf4;
    FUN_01014c38(0xf4,0xe400,3);
  }
  iVar7 = FUN_0101af84(&LAB_010148e4_1,&DAT_010147c8,DAT_01015390 - DAT_0101534c >> 2,0,5,
                       DAT_0101534c,piVar1 + 0x2c);
  *piVar1 = iVar7;
  if (iVar7 == 0) {
    *puVar3 = uVar4;
    *puVar2 = 0x105;
    FUN_01014c38(0x105,0xe402,3);
  }
  FUN_0102b5b4(*piVar1,0x66,piVar1);
  return;
}

