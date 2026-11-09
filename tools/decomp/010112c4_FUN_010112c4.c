
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010112c4(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_01011a04;
  _DAT_41000000 = *param_1;
  _DAT_41000004 = param_1[1];
  _DAT_41000008 = *(undefined2 *)(param_1 + 2);
  _DAT_4100000a = *(undefined2 *)((int)param_1 + 10);
  _DAT_4100000c = *(undefined2 *)(param_1 + 3);
  _DAT_4100003e = *(undefined2 *)((int)param_1 + 0xe);
  *DAT_01011a04 = *(undefined2 *)(param_1 + 4);
  puVar1[1] = *(undefined2 *)((int)param_1 + 0x12);
  puVar1 = DAT_01011a08;
  DAT_01011a08[1] = *(undefined2 *)(param_1 + 5);
  *puVar1 = 0x1f;
  return;
}

