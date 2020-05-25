/* { dg-do compile { target *-*-linux* } } */
/* { dg-options "-O2 -mindirect-branch-register -mfunction-return=keep -fno-pic -fplt -mindirect-branch=thunk-extern -fcf-protection" } */

extern void (*bar) (void);

void
foo (void)
{
  bar ();
}

/* { dg-final { scan-assembler "jmp\[ \t\]*__x86_indirect_thunk" } } */
/* { dg-final { scan-assembler-not "jmp\[ \t\]*__x86_indirect_thunk_nt" } } */
