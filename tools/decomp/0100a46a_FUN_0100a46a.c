
void FUN_0100a46a(uint param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  FUN_01015c54(0xf);
  puVar3 = DAT_0100a4e0;
  lVar1 = (ulonglong)*(uint *)(DAT_0100a4e4 + 0x14) * (ulonglong)param_1;
  lVar2 = (ulonglong)*(uint *)(DAT_0100a4e4 + 0x14) * (ulonglong)param_2;
  FUN_01015d9e(0xf,DAT_0100a4e8);
  FUN_01015d48(0xf);
  FUN_01015d58(0xf);
  FUN_0101aec4(0,1,3);
  FUN_0101af26(0,1,DAT_0100a4ec);
  uVar4 = FUN_0100a4c6((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  *puVar3 = uVar4;
  uVar4 = FUN_0100a4c6((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
  puVar3[1] = uVar4;
  return;
}

