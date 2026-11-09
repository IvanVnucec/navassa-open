
void FUN_010241c4(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_01024324 + param_1 * 4);
  if (param_3 == 0) {
    iVar1 = iVar2 + 0x11a;
  }
  else {
    iVar1 = iVar2 + 0xfe;
  }
  FUN_0100282e(iVar1,param_2);
  pin_update(iVar2 + 0xf9,4,4);
  return;
}

