
undefined8 FUN_0101a8a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char in_NG;
  undefined8 uVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  uVar1 = FUN_0101a896();
  if (in_NG == '\0') {
    return CONCAT44(uStack_10,0xc801);
  }
  uVar3 = FUN_01012cca(uVar1,&uStack_10);
  iVar2 = (int)uVar3;
  if (iVar2 == 0) {
    iVar2 = FUN_0101a88e(0,(int)((ulonglong)uVar3 >> 0x20),2);
  }
  return CONCAT44(uStack_10,iVar2);
}

