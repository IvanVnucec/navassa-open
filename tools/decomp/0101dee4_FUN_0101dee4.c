
undefined4 FUN_0101dee4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0101e164;
  iVar2 = DAT_0101e164 + param_1 * 4;
  pin_update(*(int *)(DAT_0101e15c + param_1 * 4) + 0xda,3,*(undefined1 *)(iVar2 + 0x10));
  FUN_01015e2c(0x14);
  FUN_0101db5c(param_1,*(undefined2 *)(iVar2 + 0x12),*(undefined1 *)(iVar1 + 0xc));
  return 0;
}

