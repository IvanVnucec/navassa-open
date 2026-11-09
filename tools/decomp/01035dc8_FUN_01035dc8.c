
undefined1 FUN_01035dc8(int param_1)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_01035e8c + param_1 * 4);
  *(undefined1 *)(iVar4 + 0xee) = 0;
  puVar3 = DAT_01035e98;
  puVar2 = DAT_01035e90;
  uVar1 = *(undefined1 *)(iVar4 + 0xef);
  DAT_01035e90[0xf] = DAT_01035e90[0xf] | (param_1 + 1) * 0x20;
  *puVar3 = 0x80000000;
  *puVar2 = *puVar2 | (param_1 + 1) * 0x20;
  return uVar1;
}

