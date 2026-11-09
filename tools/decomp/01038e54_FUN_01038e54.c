
void FUN_01038e54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_01039254;
  spi_notify_thunk(DAT_01039254 + 0xb4,0x14,param_3,param_4,param_4);
  puVar2 = DAT_01039258;
  spi_notify_thunk(puVar1 + 200,0x14);
  FUN_01038e92(*puVar2);
  FUN_01038e92(puVar2[1]);
  FUN_01038eb6(0);
  FUN_01038eb6(1);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

