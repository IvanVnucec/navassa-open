
void FUN_01048b12(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + DAT_01048b34 + 0x18);
  bVar2 = (byte)(1 << (param_2 & 0xff));
  if (param_3 == 0) {
    bVar2 = bVar1 & ~bVar2;
  }
  else {
    bVar2 = bVar2 | bVar1;
  }
  *(byte *)(param_1 + DAT_01048b34 + 0x18) = bVar2;
  return;
}

