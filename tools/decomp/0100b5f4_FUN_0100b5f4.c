
void FUN_0100b5f4(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 <= (uint)param_1[2]) {
    uVar2 = *(uint *)(*param_1 + param_3 * 4);
    if ((uVar2 >> 0x1e != 1) && (-1 < (int)(uVar2 << 2))) {
      uVar1 = 1 << (param_4 & 0xff);
      if (param_2 == 0) {
        uVar2 = uVar2 & ~uVar1;
      }
      else {
        uVar2 = uVar2 | uVar1;
      }
    }
    *(uint *)(*param_1 + param_3 * 4) = uVar2;
  }
  return;
}

