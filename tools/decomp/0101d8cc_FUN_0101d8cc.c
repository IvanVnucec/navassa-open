
void FUN_0101d8cc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(DAT_0101dac4 + param_1 * 4);
    uVar2 = FUN_0102598c(*(int *)(DAT_0101dac0 + param_1 * 4) + 0xf00,1,1);
    FUN_0101d97e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3 << 8);
    FUN_0102598c(iVar1 + 4,8,8,param_4);
    return;
  }
  iVar1 = *(int *)(DAT_0101dac8 + param_1 * 4) + 0x6e;
  pin_update(iVar1,4,0);
  pin_update(iVar1,1,1,param_4);
  return;
}

