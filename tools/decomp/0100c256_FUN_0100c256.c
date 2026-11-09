
void FUN_0100c256(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0100d7b8(param_2,200);
  uVar2 = DAT_0100cf50;
  uVar1 = DAT_0100cd8c;
  *param_2 = 0x80000000;
  param_2[4] = uVar1;
  *(undefined1 *)((int)param_2 + 0xd) = 2;
  param_2[1] = uVar2;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)((int)param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((int)param_2 + 0xe) = 1;
  *(undefined1 *)((int)param_2 + 0xf) = 1;
  param_2[0xd] = 0;
  return;
}

