
void FUN_01016df4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01016e54 + param_1 * 4);
  if (param_3 == 0) {
    iVar1 = iVar1 + 0x2f;
  }
  else {
    iVar1 = iVar1 + 0x38;
  }
  if (param_4 != 0) {
    FUN_0100b704(param_4,iVar1,(&DAT_01016e64)[param_2 * 8],0x3f);
    return;
  }
  pin_update(iVar1,0x3f,(&DAT_01016e64)[param_2 * 8],0);
  return;
}

