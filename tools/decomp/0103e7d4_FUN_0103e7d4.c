
undefined8 FUN_0103e7d4(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(char *)((int)param_1 + 0x66) != '\0') {
    uVar2 = *param_1;
    if (*(char *)(param_1 + 1) == '\x01') {
      uVar2 = 0;
    }
    FUN_0101c154(param_1[6] + 0x1c,param_2,*(undefined1 *)(param_4 + 0x40),0);
    FUN_01025880(param_2,param_1[6] + 0x2c);
    FUN_0101c0c0(param_1[6] + 8,param_2,uVar2,0);
  }
  iVar1 = DAT_0103ec88;
  uVar4 = FUN_0103dff8(DAT_0103ef60,0x4d,0);
  FUN_0103e8e8((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  FUN_010076da(param_2,1);
  uVar2 = FUN_0100974e(param_1[0xb],param_1[0xc],param_2);
  iVar3 = *(int *)(DAT_0103ee68 + param_2 * 4);
  FUN_0103e002(iVar3,0xed,8,8);
  FUN_0103e002(iVar3,0xed,0x10,0);
  if (*(char *)(param_1 + 1) == '\x03' || *(char *)(param_1 + 1) == '\x01') {
    FUN_01016a54(param_2,*(undefined1 *)(*(int *)(iVar1 + param_2 * 4) + 0x2f));
    FUN_0103e8e0();
    FUN_01016b0a(param_2,0,*(undefined1 *)(*(int *)(iVar1 + param_2 * 4) + 0x2f));
  }
  if (*(char *)(param_1 + 1) == '\x04' || *(char *)(param_1 + 1) == '\x05') {
    FUN_01016a54(param_2,*(undefined1 *)(*(int *)(iVar1 + param_2 * 4) + 0x30));
    FUN_0103e8e0();
    FUN_01016b0a(param_2,0,*(undefined1 *)(*(int *)(iVar1 + param_2 * 4) + 0x30));
  }
  if (*(char *)(param_1 + 1) == '\x06') {
    FUN_01016b42(param_2);
    FUN_0103e8e0();
    pin_update(iVar3 + 0xc,2,0);
  }
  return CONCAT44(param_4,uVar2);
}

