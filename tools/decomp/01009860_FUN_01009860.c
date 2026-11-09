
undefined4 FUN_01009860(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar2 = 5;
  }
  else {
    uVar2 = 2;
  }
  if (uVar2 <= param_1) {
    return 0xc904;
  }
  iVar3 = *(int *)(DAT_01009ebc + param_1 * 4);
  uVar1 = FUN_01009810(0,param_3,iVar3 + 0x72,param_2);
  uVar1 = FUN_01009810(uVar1,param_3,iVar3 + 0x75,param_2);
  uVar1 = FUN_01009810(uVar1,param_3,iVar3 + 0x78,param_2);
  return uVar1;
}

