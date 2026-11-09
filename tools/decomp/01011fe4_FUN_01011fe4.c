
void FUN_01011fe4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  int local_8c;
  int *local_88;
  char local_84;
  undefined1 local_83;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  spi_notify_thunk(&local_90,0x80);
  local_90 = (undefined1)param_1[1];
  local_88 = param_1 + 0x5d;
  local_8f = (undefined1)param_1[4];
  local_8e = *(undefined1 *)((int)param_1 + 0x11);
  local_8c = param_1[5];
  FUN_01026ed4(&local_90,*(undefined4 *)(*param_1 + 0x10));
  if (param_1[7] != 0) {
    FUN_0101206c(param_1[7],local_88,0x180);
  }
  *(char *)(param_1 + 0xbd) = -local_84;
  *(undefined1 *)(param_1 + 0x56) = local_83;
  param_1[0x57] = local_80;
  param_1[0x58] = local_7c;
  param_1[0x59] = local_78;
  return;
}

