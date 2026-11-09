
void FUN_0103da6c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)param_3;
  if ((int)((uint)(byte)(&DAT_0103deac)[param_2] << 0x1f) < 0) {
    uVar1 = 0xf0;
    uVar2 = (undefined1)(param_3 << 4);
  }
  else {
    uVar1 = 0xf;
  }
  FUN_010027dc(*(int *)(&DAT_0103debc + (uint)((byte)(&DAT_0103deac)[param_2] >> 1) * 4) +
               *(int *)(DAT_0103de98 + param_1 * 4),uVar1,uVar2,param_4);
  return;
}

