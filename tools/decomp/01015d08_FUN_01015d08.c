
undefined8 FUN_01015d08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(DAT_01015e84 + param_1 * 0xc);
  uVar2 = *(undefined4 *)(*(int *)(puVar1 + 4) + 4);
  *(undefined4 *)(*(int *)(puVar1 + 4) + 8) = 0;
  FUN_010028ac((int)*(short *)(puVar1 + 2));
  *puVar1 = 1;
  return CONCAT44(param_4,uVar2);
}

