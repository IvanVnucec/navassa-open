
longlong FUN_01029bc0(int param_1,uint param_2)

{
  int extraout_r1;
  uint unaff_r7;
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 < 2) {
    bVar2 = 4 < param_2;
    bVar1 = param_2 == 5;
    if (!bVar2) {
      FUN_01029bfe();
      if (!bVar2 || bVar1) {
                    /* WARNING: Could not recover jumptable at 0x01029bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*(code *)(&DAT_01029bd6 + (uint)(byte)(&DAT_01029bd6)[extraout_r1] * 2))();
        return lVar3;
      }
      return (ulonglong)unaff_r7 << 0x20;
    }
  }
  return CONCAT44(unaff_r7,0xc800);
}

