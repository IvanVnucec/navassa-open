
void FUN_01002fa0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(DAT_010032fc + param_1 * 2);
  *(char *)(param_2 + 0x10) = (char)uVar1;
  *(byte *)(param_2 + 0x11) = (byte)(uVar1 >> 8) & 1;
  *(char *)(param_2 + 0x13) = (char)((uint)uVar1 << 1);
  *(byte *)(param_2 + 0x12) = (byte)(((uint)uVar1 << 1) >> 8) & 1;
  iVar2 = param_1 * 0x60 + DAT_010032f8;
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(iVar2 + 0x2c);
  *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(iVar2 + 0x2d);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(iVar2 + 0x2e);
  *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(iVar2 + 0x2f);
  *(byte *)(param_2 + 0xe) = *(byte *)(iVar2 + 0x30) | 0x30;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(iVar2 + 0x4c);
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar2 + 0x4d);
  *(undefined1 *)(param_2 + 6) = *(undefined1 *)(iVar2 + 0x4e);
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(iVar2 + 0x4f);
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(iVar2 + 0x50);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(iVar2 + 0x22);
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(iVar2 + 0x51);
  *(char *)(param_2 + 9) = *(char *)(iVar2 + 0x31) + *(char *)(iVar2 + 0x32) * '\x10';
  *(byte *)(param_2 + 10) = *(byte *)(iVar2 + 0x33) | 0xc0;
  if (param_3 != 0) {
    uVar3 = FUN_0100b280(*(undefined4 *)(iVar2 + 0x28));
    *(char *)(param_2 + 0x16) = (char)uVar3;
    *(char *)(param_2 + 0x17) = (char)((uint)uVar3 >> 8);
    *(byte *)(param_2 + 0x18) = (byte)((uint)uVar3 >> 0x10) | 0x80;
  }
  return;
}

