
undefined4 FUN_0100929c(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 < 3) {
    puVar1 = (undefined4 *)(param_2 * 0x60 + DAT_01009ee4);
    uVar2 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
    return 0;
  }
  return 0xc904;
}

