
void FUN_0102d67c(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)(DAT_0102da58 + param_1 * 4) + 0x4a);
  pin_update(pbVar1,3,*pbVar1 & 3);
  return;
}

