
undefined8 FUN_010109dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_01010e3c + param_1 * 4);
  bVar1 = *(byte *)(iVar3 + 0x34);
  FUN_010109d6(param_1,2,0,param_4,param_4);
  pin_update(iVar3 + 0xdf,0x7f,param_2);
  pin_update(iVar3 + 0xde,0x7f,param_3);
  pin_update(iVar3 + 0xbb,1,1);
  uVar2 = FUN_01022164(iVar3,0xc0,1,1);
  FUN_010109d6(uVar2,2,bVar1 & 2);
  return CONCAT44(param_4,uVar2);
}

