
void FUN_01015562(int param_1,uint param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined1 *param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  while( true ) {
    if (param_2 <= uVar1) {
      return;
    }
    puVar2 = (undefined4 *)(uVar1 * 0x14 + param_1);
    *param_4 = *puVar2;
    *param_5 = puVar2[1];
    *param_6 = puVar2[2];
    *param_7 = *(undefined1 *)(puVar2 + 3);
    if (param_3 < (uint)puVar2[4]) break;
    uVar1 = uVar1 + 1;
  }
  return;
}

