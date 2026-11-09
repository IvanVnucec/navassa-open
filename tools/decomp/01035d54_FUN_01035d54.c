
void FUN_01035d54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_01035e90;
  piVar1 = DAT_01035e8c;
  DAT_01035e90[0xf] = param_1 << 5;
  *puVar2 = 0x60;
  puVar2[0x12] = puVar2[0x12] | 0x60;
  puVar2[0x13] = puVar2[0x13] & 0xffffff9f;
  pin_update(*piVar1 + 0xda,0x80,0x80);
  pin_update(piVar1[1] + 0xda,0x80,0x80);
  FUN_010028fc(0x1f,6);
  FUN_01002880(0x1f);
  if ((param_1 << 0x1f < 0) && (-1 < (int)((uint)*DAT_01035e94 << 0x1d))) {
    pin_update(DAT_01035e94,4,4);
  }
  FUN_01002896(0x1f,param_4);
  return;
}

