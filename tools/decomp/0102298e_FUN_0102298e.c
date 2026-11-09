
longlong FUN_0102298e(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (1 < param_1) {
    return CONCAT44(param_4,0xcc00);
  }
  puVar2 = (undefined1 *)(DAT_01022ae0 + param_1 * 9);
  if (param_2 << 0x1f < 0) {
    FUN_01036bca(param_1,param_3);
    *puVar2 = (char)param_3;
  }
  uVar1 = (undefined1)param_5;
  if (param_2 << 0x1d < 0) {
    FUN_01036c10(param_1,param_5);
    puVar2[2] = uVar1;
  }
  if (param_2 << 0x1e < 0) {
    FUN_01036c04(param_1,param_5);
    puVar2[1] = uVar1;
  }
  if (param_2 << 0x1c < 0) {
    FUN_01036c54(param_1,param_5);
    puVar2[3] = uVar1;
  }
  return (ulonglong)param_4 << 0x20;
}

