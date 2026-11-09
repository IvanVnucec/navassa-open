
undefined8 FUN_01009e72(void)

{
  int iVar1;
  byte *in_r3;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((in_r3[1] & 3) == 1) && (iVar1 = thunk_EXT_FUN_20036204(0), iVar1 != 0)) {
    uVar2 = 0xd200;
  }
  else {
    iVar1 = DAT_0100a1c4;
    if (*in_r3 < 2) {
      *(byte *)((uint)*in_r3 + DAT_0100a1c4 + 0xbc) = in_r3[1] & 3;
      *(byte *)((uint)*in_r3 + iVar1 + 0xbf) = in_r3[2] & 3;
    }
    else {
      uVar2 = 0xc904;
    }
  }
  return CONCAT44(in_r3,uVar2);
}

