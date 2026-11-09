
undefined8 FUN_01013166(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_20;
  undefined4 uStack_1c;
  
  bVar1 = *(byte *)(DAT_010134e0 + param_1);
  local_20 = param_3;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    uStack_1c = param_4;
    iVar3 = FUN_010130a8(param_1,param_2,&local_20);
    iVar2 = DAT_010134e8;
    if (iVar3 == 0) {
      *(undefined4 *)(local_20 + 0xc) =
           *(undefined4 *)(*(int *)(DAT_010134e4 + param_2 * 8 + (uint)bVar1 * 4) + 0x18);
      *(int *)(local_20 + 8) = -*(int *)(iVar2 + (short)(ushort)bVar1 * 0xc);
      FUN_010063e8(param_1,3,local_20 + 8,param_3);
    }
  }
  else {
    iVar3 = 0xc801;
  }
  return CONCAT44(local_20,iVar3);
}

