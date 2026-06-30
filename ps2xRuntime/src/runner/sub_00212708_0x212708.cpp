#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212708
// Address: 0x212708 - 0x212930
void sub_00212708_0x212708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212708_0x212708");
#endif

    switch (ctx->pc) {
        case 0x212708u: goto label_212708;
        case 0x21270cu: goto label_21270c;
        case 0x212710u: goto label_212710;
        case 0x212714u: goto label_212714;
        case 0x212718u: goto label_212718;
        case 0x21271cu: goto label_21271c;
        case 0x212720u: goto label_212720;
        case 0x212724u: goto label_212724;
        case 0x212728u: goto label_212728;
        case 0x21272cu: goto label_21272c;
        case 0x212730u: goto label_212730;
        case 0x212734u: goto label_212734;
        case 0x212738u: goto label_212738;
        case 0x21273cu: goto label_21273c;
        case 0x212740u: goto label_212740;
        case 0x212744u: goto label_212744;
        case 0x212748u: goto label_212748;
        case 0x21274cu: goto label_21274c;
        case 0x212750u: goto label_212750;
        case 0x212754u: goto label_212754;
        case 0x212758u: goto label_212758;
        case 0x21275cu: goto label_21275c;
        case 0x212760u: goto label_212760;
        case 0x212764u: goto label_212764;
        case 0x212768u: goto label_212768;
        case 0x21276cu: goto label_21276c;
        case 0x212770u: goto label_212770;
        case 0x212774u: goto label_212774;
        case 0x212778u: goto label_212778;
        case 0x21277cu: goto label_21277c;
        case 0x212780u: goto label_212780;
        case 0x212784u: goto label_212784;
        case 0x212788u: goto label_212788;
        case 0x21278cu: goto label_21278c;
        case 0x212790u: goto label_212790;
        case 0x212794u: goto label_212794;
        case 0x212798u: goto label_212798;
        case 0x21279cu: goto label_21279c;
        case 0x2127a0u: goto label_2127a0;
        case 0x2127a4u: goto label_2127a4;
        case 0x2127a8u: goto label_2127a8;
        case 0x2127acu: goto label_2127ac;
        case 0x2127b0u: goto label_2127b0;
        case 0x2127b4u: goto label_2127b4;
        case 0x2127b8u: goto label_2127b8;
        case 0x2127bcu: goto label_2127bc;
        case 0x2127c0u: goto label_2127c0;
        case 0x2127c4u: goto label_2127c4;
        case 0x2127c8u: goto label_2127c8;
        case 0x2127ccu: goto label_2127cc;
        case 0x2127d0u: goto label_2127d0;
        case 0x2127d4u: goto label_2127d4;
        case 0x2127d8u: goto label_2127d8;
        case 0x2127dcu: goto label_2127dc;
        case 0x2127e0u: goto label_2127e0;
        case 0x2127e4u: goto label_2127e4;
        case 0x2127e8u: goto label_2127e8;
        case 0x2127ecu: goto label_2127ec;
        case 0x2127f0u: goto label_2127f0;
        case 0x2127f4u: goto label_2127f4;
        case 0x2127f8u: goto label_2127f8;
        case 0x2127fcu: goto label_2127fc;
        case 0x212800u: goto label_212800;
        case 0x212804u: goto label_212804;
        case 0x212808u: goto label_212808;
        case 0x21280cu: goto label_21280c;
        case 0x212810u: goto label_212810;
        case 0x212814u: goto label_212814;
        case 0x212818u: goto label_212818;
        case 0x21281cu: goto label_21281c;
        case 0x212820u: goto label_212820;
        case 0x212824u: goto label_212824;
        case 0x212828u: goto label_212828;
        case 0x21282cu: goto label_21282c;
        case 0x212830u: goto label_212830;
        case 0x212834u: goto label_212834;
        case 0x212838u: goto label_212838;
        case 0x21283cu: goto label_21283c;
        case 0x212840u: goto label_212840;
        case 0x212844u: goto label_212844;
        case 0x212848u: goto label_212848;
        case 0x21284cu: goto label_21284c;
        case 0x212850u: goto label_212850;
        case 0x212854u: goto label_212854;
        case 0x212858u: goto label_212858;
        case 0x21285cu: goto label_21285c;
        case 0x212860u: goto label_212860;
        case 0x212864u: goto label_212864;
        case 0x212868u: goto label_212868;
        case 0x21286cu: goto label_21286c;
        case 0x212870u: goto label_212870;
        case 0x212874u: goto label_212874;
        case 0x212878u: goto label_212878;
        case 0x21287cu: goto label_21287c;
        case 0x212880u: goto label_212880;
        case 0x212884u: goto label_212884;
        case 0x212888u: goto label_212888;
        case 0x21288cu: goto label_21288c;
        case 0x212890u: goto label_212890;
        case 0x212894u: goto label_212894;
        case 0x212898u: goto label_212898;
        case 0x21289cu: goto label_21289c;
        case 0x2128a0u: goto label_2128a0;
        case 0x2128a4u: goto label_2128a4;
        case 0x2128a8u: goto label_2128a8;
        case 0x2128acu: goto label_2128ac;
        case 0x2128b0u: goto label_2128b0;
        case 0x2128b4u: goto label_2128b4;
        case 0x2128b8u: goto label_2128b8;
        case 0x2128bcu: goto label_2128bc;
        case 0x2128c0u: goto label_2128c0;
        case 0x2128c4u: goto label_2128c4;
        case 0x2128c8u: goto label_2128c8;
        case 0x2128ccu: goto label_2128cc;
        case 0x2128d0u: goto label_2128d0;
        case 0x2128d4u: goto label_2128d4;
        case 0x2128d8u: goto label_2128d8;
        case 0x2128dcu: goto label_2128dc;
        case 0x2128e0u: goto label_2128e0;
        case 0x2128e4u: goto label_2128e4;
        case 0x2128e8u: goto label_2128e8;
        case 0x2128ecu: goto label_2128ec;
        case 0x2128f0u: goto label_2128f0;
        case 0x2128f4u: goto label_2128f4;
        case 0x2128f8u: goto label_2128f8;
        case 0x2128fcu: goto label_2128fc;
        case 0x212900u: goto label_212900;
        case 0x212904u: goto label_212904;
        case 0x212908u: goto label_212908;
        case 0x21290cu: goto label_21290c;
        case 0x212910u: goto label_212910;
        case 0x212914u: goto label_212914;
        case 0x212918u: goto label_212918;
        case 0x21291cu: goto label_21291c;
        case 0x212920u: goto label_212920;
        case 0x212924u: goto label_212924;
        case 0x212928u: goto label_212928;
        case 0x21292cu: goto label_21292c;
        default: break;
    }

    ctx->pc = 0x212708u;

label_212708:
    // 0x212708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21270c:
    // 0x21270c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_212710:
    // 0x212710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_212714:
    // 0x212714: 0x80830008  lb          $v1, 0x8($a0)
    ctx->pc = 0x212714u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_212718:
    // 0x212718: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
label_21271c:
    if (ctx->pc == 0x21271Cu) {
        ctx->pc = 0x21271Cu;
            // 0x21271c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->pc = 0x212720u;
        goto label_212720;
    }
    ctx->pc = 0x212718u;
    {
        const bool branch_taken_0x212718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212718u;
            // 0x21271c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212718) {
            ctx->pc = 0x212814u;
            goto label_212814;
        }
    }
    ctx->pc = 0x212720u;
label_212720:
    // 0x212720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_212724:
    if (ctx->pc == 0x212724u) {
        ctx->pc = 0x212724u;
            // 0x212724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x212728u;
        goto label_212728;
    }
    ctx->pc = 0x212720u;
    {
        const bool branch_taken_0x212720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212720u;
            // 0x212724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212720) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x212728u;
label_212728:
    // 0x212728: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_21272c:
    if (ctx->pc == 0x21272Cu) {
        ctx->pc = 0x21272Cu;
            // 0x21272c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x212730u;
        goto label_212730;
    }
    ctx->pc = 0x212728u;
    {
        const bool branch_taken_0x212728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21272Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212728u;
            // 0x21272c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212728) {
            ctx->pc = 0x212754u;
            goto label_212754;
        }
    }
    ctx->pc = 0x212730u;
label_212730:
    // 0x212730: 0x1000007d  b           . + 4 + (0x7D << 2)
label_212734:
    if (ctx->pc == 0x212734u) {
        ctx->pc = 0x212738u;
        goto label_212738;
    }
    ctx->pc = 0x212730u;
    {
        const bool branch_taken_0x212730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212730) {
            ctx->pc = 0x212928u;
            goto label_212928;
        }
    }
    ctx->pc = 0x212738u;
label_212738:
    // 0x212738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x212738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21273c:
    // 0x21273c: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_212740:
    if (ctx->pc == 0x212740u) {
        ctx->pc = 0x212740u;
            // 0x212740: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x212744u;
        goto label_212744;
    }
    ctx->pc = 0x21273Cu;
    {
        const bool branch_taken_0x21273c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21273Cu;
            // 0x212740: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21273c) {
            ctx->pc = 0x212850u;
            goto label_212850;
        }
    }
    ctx->pc = 0x212744u;
label_212744:
    // 0x212744: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
label_212748:
    if (ctx->pc == 0x212748u) {
        ctx->pc = 0x212748u;
            // 0x212748: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x21274Cu;
        goto label_21274c;
    }
    ctx->pc = 0x212744u;
    {
        const bool branch_taken_0x212744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212744u;
            // 0x212748: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212744) {
            ctx->pc = 0x2128F8u;
            goto label_2128f8;
        }
    }
    ctx->pc = 0x21274Cu;
label_21274c:
    // 0x21274c: 0x10000076  b           . + 4 + (0x76 << 2)
label_212750:
    if (ctx->pc == 0x212750u) {
        ctx->pc = 0x212754u;
        goto label_212754;
    }
    ctx->pc = 0x21274Cu;
    {
        const bool branch_taken_0x21274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21274c) {
            ctx->pc = 0x212928u;
            goto label_212928;
        }
    }
    ctx->pc = 0x212754u;
label_212754:
    // 0x212754: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x212754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_212758:
    // 0x212758: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x212758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21275c:
    // 0x21275c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_212760:
    // 0x212760: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x212760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_212764:
    // 0x212764: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x212764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_212768:
    // 0x212768: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x212768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21276c:
    // 0x21276c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21276cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212770:
    // 0x212770: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x212770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_212774:
    // 0x212774: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x212774u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_212778:
    // 0x212778: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x212778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_21277c:
    // 0x21277c: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x21277cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_212780:
    // 0x212780: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x212780u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_212784:
    // 0x212784: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x212784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212788:
    // 0x212788: 0x0  nop
    ctx->pc = 0x212788u;
    // NOP
label_21278c:
    // 0x21278c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_212790:
    if (ctx->pc == 0x212790u) {
        ctx->pc = 0x212790u;
            // 0x212790: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x212794u;
        goto label_212794;
    }
    ctx->pc = 0x21278Cu;
    {
        const bool branch_taken_0x21278c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21278c) {
            ctx->pc = 0x212790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21278Cu;
            // 0x212790: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2127B0u;
            goto label_2127b0;
        }
    }
    ctx->pc = 0x212794u;
label_212794:
    // 0x212794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212798:
    // 0x212798: 0x0  nop
    ctx->pc = 0x212798u;
    // NOP
label_21279c:
    // 0x21279c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21279cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2127a0:
    // 0x2127a0: 0x0  nop
    ctx->pc = 0x2127a0u;
    // NOP
label_2127a4:
    // 0x2127a4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_2127a8:
    if (ctx->pc == 0x2127A8u) {
        ctx->pc = 0x2127A8u;
            // 0x2127a8: 0x460218c1  sub.s       $f3, $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x2127ACu;
        goto label_2127ac;
    }
    ctx->pc = 0x2127A4u;
    {
        const bool branch_taken_0x2127a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2127a4) {
            ctx->pc = 0x2127A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2127A4u;
            // 0x2127a8: 0x460218c1  sub.s       $f3, $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2127B0u;
            goto label_2127b0;
        }
    }
    ctx->pc = 0x2127ACu;
label_2127ac:
    // 0x2127ac: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2127acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2127b0:
    // 0x2127b0: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x2127b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
label_2127b4:
    // 0x2127b4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2127b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2127b8:
    // 0x2127b8: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2127b8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_2127bc:
    // 0x2127bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2127bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2127c0:
    // 0x2127c0: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x2127c0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_2127c4:
    // 0x2127c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2127c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2127c8:
    // 0x2127c8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2127c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2127cc:
    // 0x2127cc: 0x0  nop
    ctx->pc = 0x2127ccu;
    // NOP
label_2127d0:
    // 0x2127d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2127d4:
    if (ctx->pc == 0x2127D4u) {
        ctx->pc = 0x2127D8u;
        goto label_2127d8;
    }
    ctx->pc = 0x2127D0u;
    {
        const bool branch_taken_0x2127d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2127d0) {
            ctx->pc = 0x2127E0u;
            goto label_2127e0;
        }
    }
    ctx->pc = 0x2127D8u;
label_2127d8:
    // 0x2127d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2127dc:
    if (ctx->pc == 0x2127DCu) {
        ctx->pc = 0x2127DCu;
            // 0x2127dc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2127E0u;
        goto label_2127e0;
    }
    ctx->pc = 0x2127D8u;
    {
        const bool branch_taken_0x2127d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2127D8u;
            // 0x2127dc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127d8) {
            ctx->pc = 0x2127F0u;
            goto label_2127f0;
        }
    }
    ctx->pc = 0x2127E0u;
label_2127e0:
    // 0x2127e0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2127e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2127e4:
    // 0x2127e4: 0x0  nop
    ctx->pc = 0x2127e4u;
    // NOP
label_2127e8:
    // 0x2127e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2127ec:
    if (ctx->pc == 0x2127ECu) {
        ctx->pc = 0x2127ECu;
            // 0x2127ec: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2127F0u;
        goto label_2127f0;
    }
    ctx->pc = 0x2127E8u;
    {
        const bool branch_taken_0x2127e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2127e8) {
            ctx->pc = 0x2127ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2127E8u;
            // 0x2127ec: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2127F0u;
            goto label_2127f0;
        }
    }
    ctx->pc = 0x2127F0u;
label_2127f0:
    // 0x2127f0: 0x46033040  add.s       $f1, $f6, $f3
    ctx->pc = 0x2127f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_2127f4:
    // 0x2127f4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2127f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2127f8:
    // 0x2127f8: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x2127f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2127fc:
    // 0x2127fc: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x2127fcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
label_212800:
    // 0x212800: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x212800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_212804:
    // 0x212804: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x212804u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_212808:
    // 0x212808: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x212808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21280c:
    // 0x21280c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_212810:
    if (ctx->pc == 0x212810u) {
        ctx->pc = 0x212810u;
            // 0x212810: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->pc = 0x212814u;
        goto label_212814;
    }
    ctx->pc = 0x21280Cu;
    {
        const bool branch_taken_0x21280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21280Cu;
            // 0x212810: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21280c) {
            ctx->pc = 0x21290Cu;
            goto label_21290c;
        }
    }
    ctx->pc = 0x212814u;
label_212814:
    // 0x212814: 0x8082001c  lb          $v0, 0x1C($a0)
    ctx->pc = 0x212814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_212818:
    // 0x212818: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21281c:
    if (ctx->pc == 0x21281Cu) {
        ctx->pc = 0x21281Cu;
            // 0x21281c: 0xc4850018  lwc1        $f5, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x212820u;
        goto label_212820;
    }
    ctx->pc = 0x212818u;
    {
        const bool branch_taken_0x212818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212818) {
            ctx->pc = 0x21281Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212818u;
            // 0x21281c: 0xc4850018  lwc1        $f5, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212838u;
            goto label_212838;
        }
    }
    ctx->pc = 0x212820u;
label_212820:
    // 0x212820: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x212820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212824:
    // 0x212824: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x212824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_212828:
    // 0x212828: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x212828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_21282c:
    // 0x21282c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21282cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_212830:
    // 0x212830: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x212830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212834:
    // 0x212834: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x212834u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_212838:
    // 0x212838: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x212838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21283c:
    // 0x21283c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x21283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_212840:
    // 0x212840: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x212840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212844:
    // 0x212844: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x212844u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_212848:
    // 0x212848: 0x10000030  b           . + 4 + (0x30 << 2)
label_21284c:
    if (ctx->pc == 0x21284Cu) {
        ctx->pc = 0x21284Cu;
            // 0x21284c: 0xc4840010  lwc1        $f4, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x212850u;
        goto label_212850;
    }
    ctx->pc = 0x212848u;
    {
        const bool branch_taken_0x212848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212848u;
            // 0x21284c: 0xc4840010  lwc1        $f4, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212848) {
            ctx->pc = 0x21290Cu;
            goto label_21290c;
        }
    }
    ctx->pc = 0x212850u;
label_212850:
    // 0x212850: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x212850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_212854:
    // 0x212854: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x212854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212858:
    // 0x212858: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x212858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21285c:
    // 0x21285c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_212860:
    // 0x212860: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x212860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_212864:
    // 0x212864: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x212864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212868:
    // 0x212868: 0x460121c3  div.s       $f7, $f4, $f1
    ctx->pc = 0x212868u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[7] = ctx->f[4] / ctx->f[1];
label_21286c:
    // 0x21286c: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x21286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_212870:
    // 0x212870: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x212870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_212874:
    // 0x212874: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x212874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212878:
    // 0x212878: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x212878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_21287c:
    // 0x21287c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21287cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_212880:
    // 0x212880: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x212880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_212884:
    // 0x212884: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x212884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212888:
    // 0x212888: 0x0  nop
    ctx->pc = 0x212888u;
    // NOP
label_21288c:
    // 0x21288c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_212890:
    if (ctx->pc == 0x212890u) {
        ctx->pc = 0x212890u;
            // 0x212890: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x212894u;
        goto label_212894;
    }
    ctx->pc = 0x21288Cu;
    {
        const bool branch_taken_0x21288c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21288Cu;
            // 0x212890: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21288c) {
            ctx->pc = 0x21289Cu;
            goto label_21289c;
        }
    }
    ctx->pc = 0x212894u;
label_212894:
    // 0x212894: 0x10000006  b           . + 4 + (0x6 << 2)
label_212898:
    if (ctx->pc == 0x212898u) {
        ctx->pc = 0x212898u;
            // 0x212898: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x21289Cu;
        goto label_21289c;
    }
    ctx->pc = 0x212894u;
    {
        const bool branch_taken_0x212894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212894u;
            // 0x212898: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212894) {
            ctx->pc = 0x2128B0u;
            goto label_2128b0;
        }
    }
    ctx->pc = 0x21289Cu;
label_21289c:
    // 0x21289c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x21289cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2128a0:
    // 0x2128a0: 0x0  nop
    ctx->pc = 0x2128a0u;
    // NOP
label_2128a4:
    // 0x2128a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2128a8:
    if (ctx->pc == 0x2128A8u) {
        ctx->pc = 0x2128A8u;
            // 0x2128a8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2128ACu;
        goto label_2128ac;
    }
    ctx->pc = 0x2128A4u;
    {
        const bool branch_taken_0x2128a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2128A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2128A4u;
            // 0x2128a8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128a4) {
            ctx->pc = 0x2128B0u;
            goto label_2128b0;
        }
    }
    ctx->pc = 0x2128ACu;
label_2128ac:
    // 0x2128ac: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x2128acu;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_2128b0:
    // 0x2128b0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2128b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2128b4:
    // 0x2128b4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2128b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2128b8:
    // 0x2128b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2128b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2128bc:
    // 0x2128bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2128bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2128c0:
    // 0x2128c0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2128c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2128c4:
    // 0x2128c4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2128c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_2128c8:
    // 0x2128c8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2128c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2128cc:
    // 0x2128cc: 0x0  nop
    ctx->pc = 0x2128ccu;
    // NOP
label_2128d0:
    // 0x2128d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2128d4:
    if (ctx->pc == 0x2128D4u) {
        ctx->pc = 0x2128D4u;
            // 0x2128d4: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x2128D8u;
        goto label_2128d8;
    }
    ctx->pc = 0x2128D0u;
    {
        const bool branch_taken_0x2128d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2128D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2128D0u;
            // 0x2128d4: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128d0) {
            ctx->pc = 0x2128ECu;
            goto label_2128ec;
        }
    }
    ctx->pc = 0x2128D8u;
label_2128d8:
    // 0x2128d8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2128d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2128dc:
    // 0x2128dc: 0x0  nop
    ctx->pc = 0x2128dcu;
    // NOP
label_2128e0:
    // 0x2128e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2128e4:
    if (ctx->pc == 0x2128E4u) {
        ctx->pc = 0x2128E4u;
            // 0x2128e4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2128E8u;
        goto label_2128e8;
    }
    ctx->pc = 0x2128E0u;
    {
        const bool branch_taken_0x2128e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2128E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2128E0u;
            // 0x2128e4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128e0) {
            ctx->pc = 0x2128ECu;
            goto label_2128ec;
        }
    }
    ctx->pc = 0x2128E8u;
label_2128e8:
    // 0x2128e8: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x2128e8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
label_2128ec:
    // 0x2128ec: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2128ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2128f0:
    // 0x2128f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2128f4:
    if (ctx->pc == 0x2128F4u) {
        ctx->pc = 0x2128F4u;
            // 0x2128f4: 0xc4840010  lwc1        $f4, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x2128F8u;
        goto label_2128f8;
    }
    ctx->pc = 0x2128F0u;
    {
        const bool branch_taken_0x2128f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2128F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2128F0u;
            // 0x2128f4: 0xc4840010  lwc1        $f4, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128f0) {
            ctx->pc = 0x21290Cu;
            goto label_21290c;
        }
    }
    ctx->pc = 0x2128F8u;
label_2128f8:
    // 0x2128f8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2128f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2128fc:
    // 0x2128fc: 0x40f809  jalr        $v0
label_212900:
    if (ctx->pc == 0x212900u) {
        ctx->pc = 0x212904u;
        goto label_212904;
    }
    ctx->pc = 0x2128FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212904u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x212904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x212904u; }
            if (ctx->pc != 0x212904u) { return; }
        }
        }
    }
    ctx->pc = 0x212904u;
label_212904:
    // 0x212904: 0x10000008  b           . + 4 + (0x8 << 2)
label_212908:
    if (ctx->pc == 0x212908u) {
        ctx->pc = 0x212908u;
            // 0x212908: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x21290Cu;
        goto label_21290c;
    }
    ctx->pc = 0x212904u;
    {
        const bool branch_taken_0x212904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212904u;
            // 0x212908: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212904) {
            ctx->pc = 0x212928u;
            goto label_212928;
        }
    }
    ctx->pc = 0x21290Cu;
label_21290c:
    // 0x21290c: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x21290cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_212910:
    // 0x212910: 0xe4c50004  swc1        $f5, 0x4($a2)
    ctx->pc = 0x212910u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_212914:
    // 0x212914: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x212914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_212918:
    // 0x212918: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x212918u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_21291c:
    // 0x21291c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x21291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_212920:
    // 0x212920: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x212920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_212924:
    // 0x212924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212928:
    // 0x212928: 0x3e00008  jr          $ra
label_21292c:
    if (ctx->pc == 0x21292Cu) {
        ctx->pc = 0x21292Cu;
            // 0x21292c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x212930u;
        goto label_fallthrough_0x212928;
    }
    ctx->pc = 0x212928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212928u;
            // 0x21292c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x212928:
    ctx->pc = 0x212930u;
}
