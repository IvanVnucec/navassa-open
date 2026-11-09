
undefined8 FUN_010223c4(undefined4 param_1,int param_2,uint *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_3[1];
  uVar4 = *param_3;
  uVar6 = 0;
  iVar3 = (int)uVar7 / 2;
  bVar9 = SCARRY4(uVar4,iVar3);
  bVar8 = (int)(uVar4 + iVar3) < 0;
  if (bVar8 == bVar9) {
    bVar9 = SBORROW4(iVar3,uVar4);
    bVar8 = (int)(iVar3 - uVar4) < 0;
  }
  if (bVar8 == bVar9) {
    if (param_2 == 3) {
      iVar3 = 0;
    }
    else {
      lVar1 = (ulonglong)uVar4 * (ulonglong)param_3[2];
      uVar5 = (uint)lVar1;
      iVar3 = uVar4 * 0x1000000 - uVar5;
      uVar4 = ((((int)uVar4 >> 0x1f) << 0x18 | uVar4 >> 8) -
              (((int)uVar4 >> 0x1f) * param_3[2] + (int)((ulonglong)lVar1 >> 0x20))) -
              (uint)(uVar4 * 0x1000000 < uVar5);
    }
    uVar10 = FUN_01036878(iVar3,uVar4);
    uVar11 = FUN_0102025c(uVar7);
    FUN_0102035c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    FUN_0101f3f4();
    uVar2 = FUN_01012c10();
    uVar10 = FUN_010205a4(uVar2);
    uVar4 = FUN_01020608((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    param_3[5] = uVar4;
  }
  else {
    uVar6 = 0xc701;
  }
  return CONCAT44(param_4,uVar6);
}

