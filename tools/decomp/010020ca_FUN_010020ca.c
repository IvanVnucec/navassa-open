
void FUN_010020ca(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_01002518;
  for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
    bVar1 = *DAT_01002688;
    *(bool *)(iVar2 + 0x790) = bVar1 < 2;
    iVar4 = iVar3 * 0xb0 + iVar2;
    *(undefined4 *)(iVar4 + 0x630) = 0;
    *(undefined4 *)(iVar4 + 0x634) = 0;
    *(undefined4 *)(iVar4 + 0x648) = 0;
    *(undefined1 *)(iVar4 + 0x65c) = 0;
    *(undefined4 *)(iVar4 + 0x638) = 0;
    *(undefined4 *)(iVar4 + 0x63c) = 0;
    *(undefined4 *)(iVar4 + 0x64c) = 0;
    *(undefined1 *)(iVar4 + 0x650) = 0;
    *(undefined1 *)(iVar4 + 0x651) = 0;
    *(undefined2 *)(iVar4 + 0x652) = 0;
    *(undefined2 *)(iVar4 + 0x654) = 0;
    *(undefined1 *)(iVar4 + 0x65d) = 0;
    *(undefined4 *)(iVar4 + 0x660) = 1;
    *(undefined4 *)(iVar4 + 0x664) = 0;
    *(undefined4 *)(iVar4 + 0x66c) = 0;
    *(undefined4 *)(iVar4 + 0x668) = 0;
    *(undefined4 *)(iVar4 + 0x670) = 0;
    *(undefined4 *)(iVar4 + 0x674) = 0;
    *(undefined4 *)(iVar4 + 0x688) = 0;
    *(undefined1 *)(iVar4 + 0x69c) = 0;
    *(undefined4 *)(iVar4 + 0x678) = 0;
    *(undefined4 *)(iVar4 + 0x67c) = 0;
    *(undefined4 *)(iVar4 + 0x68c) = 0;
    *(undefined1 *)(iVar4 + 0x690) = 0;
    *(undefined1 *)(iVar4 + 0x691) = 0;
    *(undefined2 *)(iVar4 + 0x692) = 0;
    *(undefined2 *)(iVar4 + 0x694) = 0;
    *(bool *)(iVar4 + 0x69d) = bVar1 < 2;
    *(undefined4 *)(iVar4 + 0x6a0) = 0;
    *(undefined4 *)(iVar4 + 0x6a4) = 1;
    *(undefined4 *)(iVar4 + 0x6ac) = 0;
    *(undefined4 *)(iVar4 + 0x6a8) = 0;
  }
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  return;
}

