
void FUN_01000c16(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_2 + 0x28) = 5;
  if (-1 < (int)((uint)*(byte *)(param_3 + 0x2c) << 0x1d)) {
    iVar1 = DAT_01001748 + param_4 * 4;
    iVar2 = *(int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 0xc);
    *(undefined2 *)(iVar2 + param_1 * 2 + 0x22) = *(undefined2 *)(iVar1 + param_1 * 2 + 0x22);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  }
  FUN_01003544(param_1);
  if ((int)((uint)*(byte *)(param_3 + 0x2c) << 0x1d) < 0) {
    FUN_010037b0(param_1,param_2);
    **(undefined1 **)(DAT_01001748 + param_1 * 4 + 0x4c) = 1;
  }
  if (*(int *)((short)param_4 * 0xb0 + param_3 + 0x6c0) == 0) {
    **(undefined1 **)(DAT_01001748 + param_1 * 4 + 0x44) = 7;
  }
  return;
}

