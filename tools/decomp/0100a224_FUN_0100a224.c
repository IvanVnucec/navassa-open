
int FUN_0100a224(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 in_r3;
  byte local_20;
  undefined1 auStack_1c [16];
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  FUN_0100a33a(auStack_1c,&DAT_0100a3e8);
  iVar1 = FUN_0100a340();
  if (iVar1 == 0) {
    FUN_0100a380();
    FUN_0100a38e();
    puVar2 = (undefined1 *)(DAT_0100a3c4 + (uint)local_20 * 0xc);
    *puVar2 = 0x38;
    puVar2[1] = 0x1c;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
  }
  return iVar1;
}

