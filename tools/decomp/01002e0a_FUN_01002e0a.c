
void FUN_01002e0a(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_010032f4 + param_2 * 0xc80 + param_3 * 0x640 + param_4 * 0x19;
  iVar1 = *(int *)(DAT_010032ec + param_1 * 4);
  *(undefined1 *)(iVar1 + 8) = *(undefined1 *)(iVar2 + 2);
  *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(iVar2 + 3);
  *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(iVar2 + 4);
  *(undefined1 *)(iVar1 + 0x14) = *(undefined1 *)(iVar2 + 5);
  *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(iVar2 + 6);
  *(undefined1 *)(iVar1 + 0x1c) = *(undefined1 *)(iVar2 + 7);
  *(undefined1 *)(iVar1 + 0x20) = *(undefined1 *)(iVar2 + 8);
  *(undefined1 *)(iVar1 + 0x24) = *(undefined1 *)(iVar2 + 9);
  *(undefined1 *)(iVar1 + 0x28) = *(undefined1 *)(iVar2 + 10);
  *(undefined1 *)(iVar1 + 0x2c) = *(undefined1 *)(iVar2 + 0xb);
  *(undefined1 *)(iVar1 + 0x30) = *(undefined1 *)(iVar2 + 0xc);
  *(undefined1 *)(iVar1 + 0x34) = *(undefined1 *)(iVar2 + 0xd);
  *(undefined1 *)(iVar1 + 0x38) = *(undefined1 *)(iVar2 + 0xe);
  *(undefined1 *)(iVar1 + 0x3c) = *(undefined1 *)(iVar2 + 0xf);
  *(undefined1 *)(iVar1 + 0x40) = *(undefined1 *)(iVar2 + 0x10);
  *(undefined1 *)(iVar1 + 0x44) = *(undefined1 *)(iVar2 + 0x11);
  if (param_5 != 0) {
    *(undefined1 *)(iVar1 + 0x48) = *(undefined1 *)(iVar2 + 0x12);
    *(undefined1 *)(iVar1 + 0x4c) = *(undefined1 *)(iVar2 + 0x13);
    *(undefined1 *)(iVar1 + 0x58) = *(undefined1 *)(iVar2 + 0x16);
    *(undefined1 *)(iVar1 + 0x5c) = *(undefined1 *)(iVar2 + 0x17);
    *(undefined1 *)(iVar1 + 0x60) = *(undefined1 *)(iVar2 + 0x18);
  }
  return;
}

