
void FUN_010242b2(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_01024324 + param_1 * 4);
  uVar1 = FUN_010242e8();
  if (param_2 == '\0') {
    iVar2 = iVar3 + 0x124;
  }
  else {
    iVar2 = iVar3 + 0x108;
  }
  FUN_0100282e(iVar2,uVar1 & 0x3fff);
  pin_update(iVar3 + 0xf9,4,4,param_4);
  return;
}

