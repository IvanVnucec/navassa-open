
longlong FUN_0101ddf6(int param_1,undefined1 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_10;
  
  iVar1 = *(int *)(DAT_0101e15c + param_1 * 4);
  param_2[0xd] = 0;
  *param_2 = *(undefined1 *)(iVar1 + 0xda);
  local_10 = param_4;
  iVar1 = FUN_0101db8c(param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_0101dd1e(param_1,&local_10);
    if (iVar1 == 0) {
      param_2[0xd] = 1;
      param_2[0xc] = (byte)local_10 & 0x3f;
      *(ushort *)(param_2 + 4) = (ushort)((local_10 << 0xc) >> 0x14);
      *(ushort *)(param_2 + 0xe) = (ushort)(local_10 >> 0x14);
      *(undefined4 *)(param_2 + 8) = 0;
      return (ulonglong)local_10 << 0x20;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_0101dda4(param_1,param_2 + 0xc,param_2 + 8);
    if (iVar1 == 0) {
      param_2[0xd] = 1;
      *(undefined2 *)(param_2 + 4) = 0;
      *(undefined2 *)(param_2 + 0xe) = 0;
      return (ulonglong)local_10 << 0x20;
    }
  }
  else {
    iVar1 = 0xc600;
  }
  return CONCAT44(local_10,iVar1);
}

