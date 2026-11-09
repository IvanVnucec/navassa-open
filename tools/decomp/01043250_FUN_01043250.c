
void FUN_01043250(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_01043394;
  *(undefined1 *)(DAT_01043394 + 1) = 0;
  uVar3 = FUN_01043320(0,1,*(undefined1 *)(param_1 + 6));
  FUN_01043320(uVar3,0x7e,((uint)*(byte *)(param_1 + 7) << 0x19) >> 0x18);
  uVar1 = *DAT_0104338c;
  *DAT_0104339c = uVar1;
  uVar3 = FUN_0104331a(uVar1,0xf,*(undefined1 *)(param_1 + 5));
  FUN_0104331a(uVar3,0x10,0);
  if (*(char *)(param_1 + 0xb) != '\0') {
    *(byte *)(iVar2 + 4) = (byte)(1 << (uint)*(byte *)(param_1 + 0xc)) ^ 0xff;
  }
  return;
}

