
undefined8 FUN_01006dfc(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r5;
  
  switch(param_2) {
  case 0:
  case 4:
    param_3 = param_3 << 3;
    break;
  case 1:
  case 2:
  case 3:
  case 5:
    param_3 = (param_3 + 2U & 0xff) << 3;
    break;
  default:
    goto switchD_01006e06_default;
  }
  unaff_r4 = *(uint *)(DAT_010079c4 + param_3);
  unaff_r5 = ((uint *)(DAT_010079c4 + param_3))[1];
switchD_01006e06_default:
  uVar1 = FUN_01006dc0();
  return CONCAT44(((int)uVar1 >> 0x1f) + unaff_r5 + (uint)CARRY4(unaff_r4,uVar1),unaff_r4 + uVar1);
}

