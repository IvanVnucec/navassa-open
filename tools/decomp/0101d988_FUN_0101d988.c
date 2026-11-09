
undefined4 FUN_0101d988(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(DAT_0101dac4 + param_1 * 4);
    *(uint *)(iVar1 + 0x14) = param_3;
    *(undefined4 *)(iVar1 + 0x18) = param_4;
    return param_4;
  }
  iVar1 = *(int *)(DAT_0101dac8 + param_1 * 4);
  uVar2 = 0;
  local_10 = param_4;
  do {
    *(char *)((int)&local_10 + uVar2) = (char)(param_3 >> ((uVar2 & 0x1f) << 3));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  *(undefined1 *)(iVar1 + 0x75) = local_10._3_1_;
  *(undefined1 *)(iVar1 + 0x76) = local_10._2_1_;
  *(undefined1 *)(iVar1 + 0x77) = local_10._1_1_;
  *(undefined1 *)(iVar1 + 0x78) = (undefined1)local_10;
  return local_10;
}

