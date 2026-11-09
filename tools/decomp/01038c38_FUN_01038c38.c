
void FUN_01038c38(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1) {
    bVar1 = *(byte *)(param_1 + uVar3 * 8 + 4);
    for (uVar4 = 0; uVar4 < bVar1; uVar4 = uVar4 + 1) {
      *(undefined1 *)(param_4 + iVar2) =
           *(undefined1 *)(*(int *)(param_1 + uVar3 * 8) + param_2 + uVar4);
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

