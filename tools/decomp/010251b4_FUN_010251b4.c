
void FUN_010251b4(int param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)(DAT_01025380 + param_1 * 4) + 0x51);
  if (param_3 != (byte *)0x0) {
    *param_3 = *pbVar1 & 1;
  }
  if (param_2 != 0) {
    param_2 = 1;
  }
  pin_update(pbVar1,1,param_2);
  return;
}

