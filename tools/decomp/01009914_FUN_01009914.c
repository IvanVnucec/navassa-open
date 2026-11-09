
undefined4 FUN_01009914(void)

{
  byte bVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int extraout_r1;
  undefined4 in_r3;
  uint unaff_r4;
  int unaff_r9;
  code *pcVar5;
  
  FUN_010099ec();
  pcVar5 = DAT_0100a1a8;
  pcVar3 = DAT_0100a1a4;
  if (extraout_r1 != 0) {
    pcVar5 = DAT_0100a1b0;
    pcVar3 = DAT_0100a1ac;
  }
  (*pcVar3)(extraout_r1,unaff_r9 + 0x8a,1,1);
  if (unaff_r4 < 3) {
    bVar1 = *(byte *)(unaff_r9 + 0x27);
    (*pcVar3)(extraout_r1,unaff_r9 + 0x26,0,2);
    (*pcVar5)(extraout_r1,(byte *)(unaff_r9 + 0x27),(bVar1 & 0x3f) + 0x40);
  }
  uVar2 = *(undefined1 *)(unaff_r9 + 0x3d);
  bVar1 = *(byte *)(unaff_r9 + 0x3e);
  (*pcVar3)(extraout_r1,unaff_r9 + 0x34,0,0x80);
  (*pcVar5)(extraout_r1,unaff_r9 + 0x3d,uVar2);
  (*pcVar5)(extraout_r1,(byte *)(unaff_r9 + 0x3e),(bVar1 & 0xf1) + 2);
  bVar1 = *(byte *)(unaff_r9 + 0x3f);
  (*pcVar3)(extraout_r1,unaff_r9 + 0x34,0,8);
  (*pcVar5)(extraout_r1,(byte *)(unaff_r9 + 0x3f),(bVar1 & 0x5f) + 0x20);
  bVar1 = *(byte *)(unaff_r9 + 0x3c);
  (*pcVar5)(extraout_r1,(undefined1 *)(unaff_r9 + 0x3b),*(undefined1 *)(unaff_r9 + 0x3b));
  (*pcVar5)(extraout_r1,(byte *)(unaff_r9 + 0x3c),(bVar1 & 3) + 0x80);
  if (extraout_r1 != 0) {
    uVar4 = FUN_0100b594(extraout_r1,in_r3);
    return uVar4;
  }
  return in_r3;
}

