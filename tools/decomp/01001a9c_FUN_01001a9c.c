
void FUN_01001a9c(int param_1)

{
  undefined4 uVar1;
  
  switch(*DAT_01001b34) {
  case 0:
    uVar1 = DAT_01002610;
    if (param_1 < 2) {
      uVar1 = DAT_01002614;
    }
    break;
  case 1:
    uVar1 = DAT_01002618;
    if (param_1 < 2) {
      uVar1 = DAT_0100261c;
    }
    break;
  case 2:
  case 3:
  case 4:
    uVar1 = DAT_01002684;
    if (1 < param_1) {
      uVar1 = DAT_01002740;
    }
    break;
  default:
    goto switchD_01001aac_default;
  }
  *(undefined4 *)(DAT_01002518 + param_1 * 4 + 0x1c) = uVar1;
switchD_01001aac_default:
  return;
}

