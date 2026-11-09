
undefined8 FUN_01042d54(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_01042db2(param_1,param_2,0);
  iVar3 = DAT_01043054;
  uVar4 = FUN_01042e3e(uVar1,0x1f,param_1 & 0x1f);
  *(char *)(iVar3 + 1) = (char)param_2;
  *(char *)(iVar3 + 2) = (char)((uint)param_2 >> 8);
  FUN_01042db2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),8);
  FUN_01015c54(0xb);
  FUN_01042e2e();
  do {
    if ((int)((uint)*(byte *)(iVar3 + 5) << 0x1f) < 0) {
      iVar3 = 0;
      goto LAB_01042d98;
    }
    iVar2 = FUN_01015d78(0xb);
  } while (iVar2 == 0);
  iVar3 = 0xb605;
LAB_01042d98:
  FUN_01015d2e(0xb);
  if (iVar3 == 0) {
    pin_update(DAT_01043058,1,0);
  }
  return CONCAT44(param_4,iVar3);
}

