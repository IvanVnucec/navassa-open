
void FUN_0102f4d0(int param_1,int param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    bVar2 = *DAT_0102f628;
    pbVar1 = DAT_0102f628;
  }
  else {
    bVar2 = *DAT_0102f62c;
    pbVar1 = DAT_0102f62c;
    if (param_2 != 1) {
      if (param_2 == 3) {
        bVar2 = bVar2 & 0x3f;
      }
      else {
        bVar2 = bVar2 & 0xcf;
      }
      if (param_4 == 1) {
        bVar2 = bVar2 | (byte)(1 << (param_1 + 2U & 0xff));
      }
      goto LAB_0102f50e;
    }
  }
  bVar2 = bVar2 & 0xf0;
  if (param_4 == 1) {
    bVar2 = bVar2 | (byte)(1 << (param_3 & 0xff));
  }
LAB_0102f50e:
  *pbVar1 = bVar2;
  return;
}

