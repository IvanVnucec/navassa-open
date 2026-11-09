
undefined4 FUN_01010bc2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar1 = DAT_01010e58;
  iVar4 = DAT_01010e3c;
  uVar6 = CONCAT44(param_2,param_2);
  iVar5 = DAT_01010e50;
  if (param_1 != 0) {
    iVar5 = DAT_01010e54;
  }
  if (param_2 == 0 || param_2 == 2) {
    FUN_01010c68(*(undefined4 *)(DAT_01010e3c + param_1 * 4));
    uVar2 = 0;
    do {
      iVar3 = iVar5 + uVar2 * 8;
      FUN_0102598c(iVar3,uVar1,0);
      uVar6 = FUN_0102598c(iVar3 + 4,uVar1,0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x80);
    uVar6 = FUN_01010c6a((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
  }
  if (param_2 != 1 && param_2 != 2) {
    return param_4;
  }
  iVar4 = *(int *)(iVar4 + param_1 * 4);
  FUN_01010c60((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),2);
  uVar2 = 0;
  do {
    iVar3 = iVar5 + uVar2 * 8;
    FUN_0102598c(iVar3 + 0x400,uVar1,0);
    FUN_0102598c(iVar3 + 0x404,uVar1,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x80);
  uVar1 = pin_update(iVar4 + 0x18a,2,0,param_4);
  return uVar1;
}

