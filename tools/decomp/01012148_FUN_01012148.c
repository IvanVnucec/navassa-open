
void FUN_01012148(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r4;
  
  FUN_0101217e();
  *(undefined4 *)(unaff_r4 + 0x6c) = 0x40000000;
  *(undefined4 *)(unaff_r4 + 0xd4) = *(undefined4 *)(unaff_r4 + 0x51c);
  *(undefined4 *)(unaff_r4 + 0xd8) = *(undefined4 *)(unaff_r4 + 0x518);
  *(undefined1 *)(unaff_r4 + 0xdc) = *(undefined1 *)(unaff_r4 + 0x5e4);
  *(undefined4 *)(unaff_r4 + 0xe0) = 0;
  *(undefined4 *)(unaff_r4 + 0xe4) = 0;
  puVar1 = (undefined4 *)(unaff_r4 + 0xe8);
  *puVar1 = *(undefined4 *)(unaff_r4 + 0x518);
  uVar2 = 0;
  do {
    uVar3 = uVar2 + 1;
    puVar1[uVar2 + 1] = puVar1[uVar2 + 0x10d];
    puVar1[uVar2 + 0x35] = puVar1[uVar2 + 0x10d];
    puVar1[uVar2 + 0x1a] = puVar1[uVar2 + 0x126];
    puVar1[uVar2 + 0x4e] = (float)puVar1[uVar2 + 0x126] - *(float *)(unaff_r4 + 0x518);
    puVar1[uVar2 + 0x67] = -(float)puVar1[uVar2 + 0x126] - *(float *)(unaff_r4 + 0x518);
    uVar2 = uVar3;
  } while (uVar3 < 0x19);
  *(undefined4 *)(unaff_r4 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(unaff_r4 + 0x1b8) = 0;
  *(undefined4 *)(unaff_r4 + 0x2e8) = *(undefined4 *)(unaff_r4 + 0x5e8);
  *(undefined4 *)(unaff_r4 + 0x2ec) = *(undefined4 *)(unaff_r4 + 0x5ec);
  *(undefined4 *)(unaff_r4 + 0x2f0) = *(undefined4 *)(unaff_r4 + 0x5f0);
  *(undefined4 *)(unaff_r4 + 0x2f4) = *(undefined4 *)(unaff_r4 + 0x5f4);
  *(undefined4 *)(unaff_r4 + 0x2fc) = 0;
  *(undefined4 *)(unaff_r4 + 0x300) = 0;
  *(undefined4 *)(unaff_r4 + 0x304) = 0;
  *(undefined4 *)(unaff_r4 + 0x308) = 0x3f800000;
  *(undefined4 *)(unaff_r4 + 0x30c) = 0;
  return;
}

