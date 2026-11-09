
void FUN_010126ca(int param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar1 = *DAT_01012b98;
  if ((uVar1 & 200) == 0) {
    if (((int)((uVar1 & 0xfffffffe) << 0x1e) < 0) || ((uVar1 & 0xfffe) == 0)) {
      FUN_0100adea(0x39);
      iVar3 = 0;
    }
    else {
      FUN_0100adea(0x38);
      iVar3 = 3;
    }
  }
  else {
    FUN_0100adea(0x38);
    iVar3 = 2;
  }
  FUN_01011978();
  FUN_010119e0();
  FUN_01029290();
  pin_update(DAT_01012b94,0x10,0);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 0;
    uVar2 = 0;
  }
  else if (iVar3 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar2;
  return;
}

