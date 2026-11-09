
undefined4 FUN_0101d28e(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = DAT_0101d5c8;
  bVar2 = 0x12;
  do {
    FUN_0101bf2c(*(undefined1 *)(iVar1 + param_1),bVar2,param_2 >> (uint)bVar2 & 1 ^ 1);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0x18);
  return param_4;
}

