
void FUN_01033366(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 unaff_r7;
  undefined8 uVar2;
  
  lVar1 = (longlong)param_1 * (longlong)param_1 +
          ((longlong)(int)((ulonglong)((longlong)param_2 * (longlong)param_2) >> 0x20) << 0x20 |
          (longlong)param_2 * (longlong)param_2 & 0xffffffffU);
  uVar2 = FUN_010333c2((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
  FUN_010332fa((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  return;
}

