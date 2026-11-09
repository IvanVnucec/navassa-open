
undefined8 FUN_01011350(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_010117fe();
  puVar2 = DAT_01011a18;
  puVar1 = DAT_01011a14;
  if (iVar3 != 0) {
    *DAT_01011a14 = 10;
    puVar1[4] = 0xfff5;
    FUN_01011812();
    FUN_01025d74(*puVar2,3);
    FUN_01011318(param_1,param_2);
    iVar3 = FUN_01025c92(*puVar2,3,1,0);
    uVar4 = (uint)*puVar1;
    if (iVar3 << 0x1e < 0) {
      uVar5 = 1;
    }
    else if (((int)(uVar4 << 0x1c) < 0) || (-1 < (int)(uVar4 << 0x1e))) {
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
    }
    FUN_0101133e();
    FUN_010028ac(3);
    return CONCAT44(5000,uVar5);
  }
  return CONCAT44(param_4,3);
}

