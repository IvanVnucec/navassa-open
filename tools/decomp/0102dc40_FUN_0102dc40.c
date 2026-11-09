
undefined8 FUN_0102dc40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = (uint)(byte)(&DAT_0102dcd0)[param_1];
  if (param_2 == 0) {
    uVar4 = 2;
  }
  else if (param_2 == 1) {
    uVar4 = 3;
  }
  else if (param_2 == 2) {
    uVar4 = 0x30;
  }
  else if (param_2 == 3) {
    uVar4 = 0x31;
  }
  else {
    uVar4 = 4;
  }
  FUN_0100b64c(*(undefined4 *)(param_1 * 0x24 + DAT_0102dcc8 + param_2 * 4),1,uVar3);
  if (param_3 == 0) {
    iVar1 = FUN_0100b7e4(uVar3);
    if (iVar1 == 0) {
      FUN_0100b83e(1 < param_1,uVar3);
    }
    do {
      iVar2 = FUN_0100b854(uVar3);
    } while (iVar2 != 7);
    if (iVar1 == 0) {
      iVar1 = FUN_0100b7fc(uVar3);
    }
  }
  else {
    iVar1 = FUN_0100817e((&DAT_0102dce4)[uVar3],uVar4,1);
  }
  return CONCAT44(param_4,iVar1);
}

