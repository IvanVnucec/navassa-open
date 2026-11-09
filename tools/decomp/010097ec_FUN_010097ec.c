
undefined4 FUN_010097ec(void)

{
  int iVar1;
  undefined4 in_r3;
  uint uVar2;
  
  iVar1 = DAT_0100a1a0;
  uVar2 = 0;
  do {
    FUN_01009860(uVar2,*(undefined4 *)(iVar1 + uVar2 * 4 + 0x784),0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  return in_r3;
}

