
void FUN_01035c14(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_01035c70;
  iVar3 = *DAT_01035c70;
  piVar1 = DAT_01035c70 + 1;
  *DAT_01035c70 = iVar3 + 1;
  piVar2[1] = (*piVar1 + 1) - (uint)(iVar3 != -1);
  return;
}

