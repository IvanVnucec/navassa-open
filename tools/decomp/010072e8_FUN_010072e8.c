
void FUN_010072e8(void)

{
  int iVar1;
  
  iVar1 = DAT_01007cd4;
  *(undefined4 *)(DAT_01007cd4 + 0x4c) = *(undefined4 *)(DAT_01007cd4 + 0x2c);
  *(undefined1 *)(iVar1 + 1) = 0xf0;
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x5c) = 2;
  *(undefined4 *)(iVar1 + 0x6c) = 2;
  *(undefined4 *)(iVar1 + 0x60) = 2;
  *(undefined4 *)(iVar1 + 0x70) = 2;
  *(undefined4 *)(iVar1 + 100) = 2;
  *(undefined4 *)(iVar1 + 0x74) = 2;
  *(undefined4 *)(iVar1 + 0x68) = 2;
  *(undefined4 *)(iVar1 + 0x78) = 2;
  *(undefined1 *)(DAT_01007560 + 0xd1) = 0;
  return;
}

