
void FUN_01002b56(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar3 = param_3 << 0x1f;
    uVar2 = 0x80;
    iVar1 = DAT_01002d7c;
  }
  else {
    uVar3 = param_3 << 0x1e;
    uVar2 = 0x40;
    iVar1 = DAT_01002d80;
  }
  pin_update(iVar1 + param_2,uVar2,uVar3 >> 0x18);
  return;
}

