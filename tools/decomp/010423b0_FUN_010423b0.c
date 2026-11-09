
void FUN_010423b0(int param_1)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)DAT_010423f8 * (ulonglong)*(byte *)(DAT_010423dc + param_1 * 2);
  FUN_0101369c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
               *(undefined4 *)(DAT_010423f4 + param_1 * 0x54 + 0x68),0);
  return;
}

