
undefined4 *
FUN_01029fa8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 local_20 [2];
  
  iVar1 = DAT_0102a824;
  puVar3 = param_4;
  pin_update(DAT_0102a82c,3,*param_1);
  pin_update(iVar1,0x10,((uint)(byte)param_1[1] << 0x1c) >> 0x18);
  local_20[0] = DAT_0102a054;
  uVar4 = (*DAT_0102a85c + 1) *
          (uint)*(byte *)((int)local_20 + (((uint)*(byte *)(iVar1 + 1) << 0x1a) >> 0x1e));
  if (uVar4 == 0) {
    FUN_0102abc4();
    *puVar3 = 0x1cf;
    boot_msg(1,0xff00,3);
  }
  uVar4 = *(uint *)(DAT_0102ac7c + 0x24) / uVar4;
  VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  switch(*param_1) {
  case 2:
    uVar2 = FUN_0102a074(uVar4);
    break;
  case 3:
    FUN_0102a074(uVar4);
    FUN_01029f74();
  case 0:
  case 1:
    FUN_0102a058(*(undefined4 *)(param_1 + 8));
    FUN_01029f74(1);
    FUN_0102a058(*(undefined4 *)(param_1 + 0xc));
    uVar2 = 2;
    break;
  default:
    goto switchD_0102a01a_default;
  }
  FUN_01029f74(uVar2);
switchD_0102a01a_default:
  return param_4;
}

