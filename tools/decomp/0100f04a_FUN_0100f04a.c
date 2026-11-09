
undefined8 FUN_0100f04a(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_0100f0bc;
  iVar1 = DAT_0100f0b4 + param_1 * 0x24c;
  *(char *)(iVar1 + 0x249) = (char)param_2;
  *(char *)(iVar1 + 0x248) = (char)param_2;
  uVar5 = 0;
  if (*(char *)(iVar2 + 0x77d) == '\0') {
    if ((param_2 == 0xff) || (iVar2 = FUN_0100a4f4(param_1), iVar2 != 0)) goto LAB_0100f0a8;
    param_3 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    if (*DAT_0100f0c4 != '\0') goto LAB_0100f0a8;
    param_3 = 1;
    uVar4 = *(undefined1 *)(*DAT_0100f0c8 + 0x2c);
    uVar3 = *(uint *)(*DAT_0100f0c8 + 0x30) & 0xffff;
  }
  FUN_0100ef48(param_1,param_2,uVar3,uVar4,param_3,1);
  uVar5 = 1;
LAB_0100f0a8:
  return CONCAT44(param_3,uVar5);
}

