
undefined8 FUN_0102f514(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 in_CY;
  bool bVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0102f4ac();
  bVar2 = iVar1 == 0;
  if ((bVar2) && (FUN_0102f578(), !(bool)in_CY || bVar2)) {
                    /* WARNING: Could not recover jumptable at 0x0102f528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&DAT_0102f52c + (uint)(byte)(&DAT_0102f52c)[param_2] * 2))();
    return uVar3;
  }
  return CONCAT44(param_4,iVar1);
}

