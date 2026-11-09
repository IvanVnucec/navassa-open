
undefined4 FUN_01013d72(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_2 = param_2 & 1;
  if (param_1 == 2) {
    iVar3 = param_2 << 7;
    uVar2 = 0x80;
    uVar1 = DAT_01014508;
  }
  else if (param_1 == 3) {
    iVar3 = param_2 << 1;
    uVar2 = 2;
    uVar1 = DAT_0101434c;
  }
  else if (param_1 == 4) {
    iVar3 = param_2 << 1;
    uVar2 = 2;
    uVar1 = DAT_01014350;
  }
  else if (param_1 == 6) {
    iVar3 = param_2 << 1;
    uVar2 = 2;
    uVar1 = DAT_0101436c;
  }
  else if (param_1 == 7) {
    iVar3 = param_2 << 1;
    uVar2 = 2;
    uVar1 = DAT_01014384;
  }
  else if (param_1 == 0xd) {
    iVar3 = param_2 << 1;
    uVar2 = 2;
    uVar1 = DAT_010143b4;
  }
  else {
    if (param_1 != 0xf) {
      return 0xce00;
    }
    iVar3 = param_2 << 1;
    uVar2 = 2;
    uVar1 = DAT_010143bc;
  }
  pin_update(uVar1,uVar2,iVar3);
  return 0;
}

