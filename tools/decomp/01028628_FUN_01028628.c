
void FUN_01028628(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_01026d64();
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 4;
    uVar1 = uVar1 + 1;
    *(undefined4 *)(iVar2 + 0xd4) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x19c) = 0;
    *(undefined4 *)(iVar2 + 0x138) = 0;
  } while (uVar1 < 0x19);
  *(undefined4 *)(param_1 + 0x200) = 1;
  *(undefined4 *)(param_1 + 0x204) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x208) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x20c) = 0xfffffffe;
  *(uint *)(param_1 + 0x204) = *(uint *)(param_1 + 0x204) & 0xfffffff8;
  *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x208) & 0xfffffff8;
  *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) & 0xfffffff8;
  *(uint *)(param_1 + 0x204) = *(uint *)(param_1 + 0x204) & 0x7fffff;
  *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x208) & 0x7fffff;
  *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) & 0x7fffff;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x3f800000;
  FUN_01026d64(param_1 + 0x430);
  *(undefined1 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x20c);
  FUN_01028766(param_1 + 0x228);
  *(undefined1 *)(param_1 + 0x510) = 1;
  return;
}

