
undefined8
FUN_0103af32(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_0103b00a(*param_2,param_2[6]);
  iVar2 = FUN_0103af86(param_2[6],uVar1);
  iVar3 = FUN_0103af94();
  uVar5 = 0;
  if ((iVar3 == 1) &&
     (uVar4 = FUN_0103afb6(iVar2),
     *(char *)(iVar2 * 0x30 + DAT_0103b4b8 + (short)uVar4 * 0x18 + 0x10) == '\0')) {
    uVar5 = FUN_0103b0b0(param_2[6],uVar1,uVar4,iVar2);
  }
  return CONCAT44(param_4,uVar5);
}

