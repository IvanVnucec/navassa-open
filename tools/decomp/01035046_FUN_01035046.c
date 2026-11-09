
undefined4 FUN_01035046(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = *(int *)(DAT_01035244 + param_1 * 4);
  bVar2 = 0;
  do {
    FUN_01034c94(iVar1 + 0x10,0,0x3f,bVar2);
    uVar3 = (uint)bVar2;
    *(byte *)(param_2 + uVar3) = *(byte *)(iVar1 + 0x11) & 0x7f;
    FUN_01034c94(iVar1 + 0x13,0,0x3f,bVar2);
    bVar2 = bVar2 + 1;
    *(byte *)(param_2 + uVar3 + 0x40) = *(byte *)(iVar1 + 0x14) & 0x7f;
  } while (bVar2 < 0x40);
  return param_4;
}

