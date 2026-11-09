
undefined4 FUN_01029b3c(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  if (1 < param_1) {
    return 0xc800;
  }
  iVar1 = *(int *)(DAT_01029c80 + param_1 * 4);
  iVar2 = iVar1 + 0xba;
  pin_update(iVar2,0xe0,((uint)*param_2 << 0x1d) >> 0x18);
  pin_update(iVar2,0x18,((uint)param_2[1] << 0x1b) >> 0x18);
  pin_update(iVar2,1,param_2[2]);
  *(char *)(iVar1 + 0xbb) = (char)*(undefined4 *)(param_2 + 4);
  *(char *)(iVar1 + 0xbc) = (char)((uint)*(undefined4 *)(param_2 + 4) >> 8);
  pin_update(iVar1 + 0xbd,0x3f,(uint)(*(int *)(param_2 + 4) << 8) >> 0x18);
  *(char *)(iVar1 + 0xbe) = (char)*(undefined4 *)(param_2 + 8);
  *(char *)(iVar1 + 0xbf) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  pin_update(iVar1 + 0xc0,0x3f,(uint)(*(int *)(param_2 + 8) << 8) >> 0x18);
  return 0;
}

