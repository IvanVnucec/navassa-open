
void FUN_01002b24(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1 == 0) {
    bVar2 = *DAT_01002d78 & 0xc3;
    pbVar1 = DAT_01002d78;
    if (param_3 != 1) goto LAB_01002b52;
    param_2 = param_2 + 2;
  }
  else {
    pbVar1 = DAT_01002d78 + 9;
    bVar2 = DAT_01002d78[9] & 0xf0;
    if (param_3 != 1) goto LAB_01002b52;
  }
  bVar2 = bVar2 | (byte)(1 << (param_2 & 0xff));
LAB_01002b52:
  *pbVar1 = bVar2;
  return;
}

