
bool FUN_01003eb2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_24 [4];
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  spi_notify_thunk(local_24,0x14);
  local_24[0] = 1;
  local_20 = 1;
  local_1f = 1;
  uVar3 = DAT_010044cc;
  uVar2 = DAT_010044c8;
  if (*(char *)*param_1 != '\0') {
    uVar3 = DAT_010044d4;
    uVar2 = DAT_010044d0;
  }
  FUN_0100f6e6(uVar2,uVar3,local_24);
  spi_notify_thunk(local_38,0x14);
  local_38[0] = 1;
  local_34 = 1;
  local_33 = 0;
  uVar3 = DAT_010044dc;
  uVar2 = DAT_010044d8;
  if (*(char *)*param_1 != '\0') {
    uVar3 = DAT_010044e4;
    uVar2 = DAT_010044e0;
  }
  FUN_0100f6e6(uVar2,uVar3,local_38);
  bVar1 = 1 < *(byte *)(*param_1 + 0x14);
  if (bVar1) {
    FUN_01003f3a();
  }
  return bVar1;
}

