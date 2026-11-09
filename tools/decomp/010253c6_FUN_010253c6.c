
undefined8 FUN_010253c6(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = DAT_01025468;
  uVar4 = FUN_0102540c(0x800000,DAT_01025478);
  iVar3 = FUN_0101beda((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x400);
  iVar1 = iVar3;
  if (iVar3 != 0) {
    iVar1 = param_3;
  }
  if (iVar3 != 0 && iVar1 != 0) {
    FUN_010253fa();
  }
  FUN_010253b8(DAT_01025454);
  FUN_01023ebe(*(undefined4 *)(iVar2 + 0x14),1);
  return CONCAT44(param_4,param_3);
}

