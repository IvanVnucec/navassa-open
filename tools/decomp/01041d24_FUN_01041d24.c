
void FUN_01041d24(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_01041e5c + param_1 * 4);
  if (param_2 == 2) {
    *(char *)(iVar1 + 0xb9) = (char)param_3;
    iVar2 = iVar1 + 0xb8;
  }
  else {
    iVar2 = iVar1 + 0xba;
    *(char *)(iVar1 + 0xbb) = (char)param_3;
  }
  pin_update(iVar2,3,param_3 >> 8);
  return;
}

