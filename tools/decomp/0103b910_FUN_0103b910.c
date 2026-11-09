
undefined8 FUN_0103b910(uint param_1,undefined4 param_2,undefined1 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char local_1f;
  
  uVar4 = 0xc201;
  if (((param_1 < 2) && (local_1f = (char)(param_4 >> 8), local_1f != '\0')) &&
     (uVar3 = param_4 >> 0x10 & 0xff, uVar3 < 8)) {
    iVar5 = *(int *)(DAT_0103b9a4 + param_1 * 4);
    iVar6 = iVar5 + 0x6b;
    pin_update(iVar6,2,(param_4 << 0x19) >> 0x18);
    pin_update(iVar5 + 0x6c,0x7f,local_1f + -1);
    pin_update(iVar6,0x70,(uVar3 << 0x1c) >> 0x18);
    uVar1 = DAT_0103b9a8;
    if (param_1 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0x10;
    }
    pin_update(DAT_0103b9a8,uVar4);
    uVar4 = FUN_0100afb8(*(undefined1 *)(DAT_0103b9ac + param_1),param_2,param_3,local_1f);
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0x10;
    }
    pin_update(uVar1,uVar2);
  }
  return CONCAT44(param_2,uVar4);
}

