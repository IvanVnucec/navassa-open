
uint FUN_0100df04(void)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int in_r3;
  uint unaff_r4;
  uint uVar5;
  int iVar6;
  
  uVar2 = uRam0100a7b2;
  puVar1 = DAT_0100a78c;
  iVar6 = *(int *)(DAT_0100a794 + unaff_r4 * 4);
  uVar3 = FUN_0100a4f4();
  *puVar1 = uVar3;
  FUN_0100a506(unaff_r4 & 0xff,0);
  uVar5 = 0;
  do {
    if (in_r3 == 0) {
      puVar4 = (undefined *)0x100a7c0;
    }
    else {
      puVar4 = &DAT_0100a7a4;
    }
    FUN_0101af6c(iVar6 + uVar5 * 2 + (uint)*(ushort *)(puVar4 + 0xc),uVar2,0);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  FUN_0100a506(unaff_r4 & 0xff,*puVar1);
  *(ushort *)(puVar1 + unaff_r4 * 2 + 4) = *(ushort *)(puVar1 + unaff_r4 * 2 + 4) | 8;
  return unaff_r4;
}

