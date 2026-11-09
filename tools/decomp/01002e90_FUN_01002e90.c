
void FUN_01002e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_01009d1c(param_3,param_4,param_1);
  iVar1 = DAT_010032f4;
  FUN_01002fa0(param_1,DAT_010032f4,param_5);
  iVar2 = *(int *)(DAT_010032ec + param_1 * 4);
  *(undefined1 *)(iVar2 + 8) = *(undefined1 *)(iVar1 + 2);
  *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(iVar1 + 3);
  *(undefined1 *)(iVar2 + 0x10) = *(undefined1 *)(iVar1 + 4);
  *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar1 + 5);
  *(undefined1 *)(iVar2 + 0x18) = *(undefined1 *)(iVar1 + 6);
  *(undefined1 *)(iVar2 + 0x1c) = *(undefined1 *)(iVar1 + 7);
  *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar1 + 8);
  *(undefined1 *)(iVar2 + 0x24) = *(undefined1 *)(iVar1 + 9);
  *(undefined1 *)(iVar2 + 0x28) = *(undefined1 *)(iVar1 + 10);
  *(undefined1 *)(iVar2 + 0x2c) = *(undefined1 *)(iVar1 + 0xb);
  *(undefined1 *)(iVar2 + 0x30) = *(undefined1 *)(iVar1 + 0xc);
  *(undefined1 *)(iVar2 + 0x34) = *(undefined1 *)(iVar1 + 0xd);
  *(undefined1 *)(iVar2 + 0x38) = *(undefined1 *)(iVar1 + 0xe);
  *(undefined1 *)(iVar2 + 0x3c) = *(undefined1 *)(iVar1 + 0xf);
  *(undefined1 *)(iVar2 + 0x40) = *(undefined1 *)(iVar1 + 0x10);
  *(undefined1 *)(iVar2 + 0x44) = *(undefined1 *)(iVar1 + 0x11);
  if (param_5 != 0) {
    *(undefined1 *)(iVar2 + 0x48) = *(undefined1 *)(iVar1 + 0x12);
    *(undefined1 *)(iVar2 + 0x4c) = *(undefined1 *)(iVar1 + 0x13);
    *(undefined1 *)(iVar2 + 0x58) = *(undefined1 *)(iVar1 + 0x16);
    *(undefined1 *)(iVar2 + 0x5c) = *(undefined1 *)(iVar1 + 0x17);
    *(undefined1 *)(iVar2 + 0x60) = *(undefined1 *)(iVar1 + 0x18);
  }
  return;
}

