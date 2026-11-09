
undefined8 FUN_0101a828(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_10;
  
  if (-1 < (int)((0xcU >> (param_1 & 0xff)) << 0x1f)) {
    return CONCAT44(param_4,0xc801);
  }
  uStack_10 = param_4;
  uVar2 = FUN_01012cfa(param_2,&uStack_10);
  iVar1 = (int)uVar2;
  if ((((iVar1 == 0) && (iVar1 = FUN_0101a88e(0,(int)((ulonglong)uVar2 >> 0x20),3), iVar1 == 0)) &&
      (iVar1 = FUN_01012e28(param_1,param_2), iVar1 == 0)) &&
     (((iVar1 = FUN_01012f06(param_1,param_2 + 0x40), iVar1 == 0 &&
       (iVar1 = FUN_01012fb2(param_1,param_2 + 0x30), iVar1 == 0)) &&
      ((iVar1 = FUN_0101300c(param_1,1), iVar1 == 0 && (iVar1 = FUN_01013032(param_1,1), iVar1 == 0)
       ))))) {
    iVar1 = FUN_0101305c(param_1,1);
  }
  return CONCAT44(uStack_10,iVar1);
}

