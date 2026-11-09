
void FUN_0100d75a(int param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)DAT_0100d7b4 *
          (ulonglong)*(ushort *)((short)param_1 * 0xc + DAT_0100d794 + param_2 * 2 + 0x18);
  FUN_0101369c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
               *(undefined4 *)(DAT_0100d7b0 + param_1 * 0x54 + 0xf4),0);
  return;
}

