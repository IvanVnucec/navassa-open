
longlong FUN_0101ff2a(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01035f68(*DAT_0101ff78 + DAT_0101ff78[0x12],
                       DAT_0101ff78[0x13] + DAT_0101ff78[1] +
                       (uint)CARRY4(*DAT_0101ff78,DAT_0101ff78[0x12]),param_2);
  return lVar1 * lVar1;
}

