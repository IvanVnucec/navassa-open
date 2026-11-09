
int FUN_0101da54(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0101dacc;
  if (param_2 == 0) {
    iVar2 = *(int *)(DAT_0101dac4 + param_1 * 4);
    FUN_0102598c(iVar2 + 0xc,DAT_0101dacc);
    iVar2 = FUN_0102598c(iVar2 + 0x10,uVar1,param_4,param_4);
    return iVar2;
  }
  iVar2 = *(int *)(DAT_0101dac8 + param_1 * 4);
  pin_update(iVar2 + 0x6f,3,(uint)(param_3 << 8) >> 0x18);
  *(char *)(iVar2 + 0x70) = (char)((uint)param_3 >> 8);
  *(char *)(iVar2 + 0x71) = (char)param_3;
  pin_update(iVar2 + 0x72,3,(uint)(param_4 << 8) >> 0x18);
  *(char *)(iVar2 + 0x73) = (char)((uint)param_4 >> 8);
  *(char *)(iVar2 + 0x74) = (char)param_4;
  return param_4;
}

