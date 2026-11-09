
undefined4 FUN_0102ad18(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = -(uint)(param_2 == 0);
  switch(param_1) {
  case 0:
    uVar4 = 3;
    break;
  case 1:
    uVar4 = 6;
    break;
  case 2:
    uVar4 = 4;
    break;
  case 3:
    uVar4 = 7;
    break;
  default:
    goto switchD_0102ad26_default;
  }
  FUN_010143cc(uVar4,uVar1 >> 0x1f);
switchD_0102ad26_default:
  iVar2 = FUN_01006ce2(param_1);
  iVar3 = FUN_0102a866();
  if (((param_2 != 0) && (iVar3 == iVar2)) && (param_1 != 0)) {
    return param_4;
  }
  if (iVar2 == 0) {
    FUN_010143cc(0xd,uVar1 >> 0x1f);
    uVar4 = 0xc;
  }
  else {
    if (iVar2 != 1) {
      return param_4;
    }
    FUN_010143cc(0xf,uVar1 >> 0x1f);
    uVar4 = 0xe;
  }
  uVar4 = FUN_010143cc(uVar4,uVar1 >> 0x1f,param_4);
  return uVar4;
}

