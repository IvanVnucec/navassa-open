
void FUN_0103aeaa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    iVar1 = FUN_0102db80(*(undefined1 *)(param_1 + 2),bVar2);
    do {
      bVar2 = bVar2 + 1;
      if (6 < bVar2) {
        if (((*(byte *)(param_1 + 2) - 2 < 2) && (iVar1 == 0)) &&
           (iVar1 = FUN_0102db80(*(undefined1 *)(param_1 + 1),7), iVar1 == 0)) {
          FUN_0102db80(*(undefined1 *)(param_1 + 1),8,param_4);
          return;
        }
        return;
      }
    } while (iVar1 != 0);
  } while( true );
}

