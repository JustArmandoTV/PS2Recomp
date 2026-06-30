#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F96F0
// Address: 0x3f96f0 - 0x3f9860
void sub_003F96F0_0x3f96f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F96F0_0x3f96f0");
#endif

    switch (ctx->pc) {
        case 0x3f96f0u: goto label_3f96f0;
        case 0x3f96f4u: goto label_3f96f4;
        case 0x3f96f8u: goto label_3f96f8;
        case 0x3f96fcu: goto label_3f96fc;
        case 0x3f9700u: goto label_3f9700;
        case 0x3f9704u: goto label_3f9704;
        case 0x3f9708u: goto label_3f9708;
        case 0x3f970cu: goto label_3f970c;
        case 0x3f9710u: goto label_3f9710;
        case 0x3f9714u: goto label_3f9714;
        case 0x3f9718u: goto label_3f9718;
        case 0x3f971cu: goto label_3f971c;
        case 0x3f9720u: goto label_3f9720;
        case 0x3f9724u: goto label_3f9724;
        case 0x3f9728u: goto label_3f9728;
        case 0x3f972cu: goto label_3f972c;
        case 0x3f9730u: goto label_3f9730;
        case 0x3f9734u: goto label_3f9734;
        case 0x3f9738u: goto label_3f9738;
        case 0x3f973cu: goto label_3f973c;
        case 0x3f9740u: goto label_3f9740;
        case 0x3f9744u: goto label_3f9744;
        case 0x3f9748u: goto label_3f9748;
        case 0x3f974cu: goto label_3f974c;
        case 0x3f9750u: goto label_3f9750;
        case 0x3f9754u: goto label_3f9754;
        case 0x3f9758u: goto label_3f9758;
        case 0x3f975cu: goto label_3f975c;
        case 0x3f9760u: goto label_3f9760;
        case 0x3f9764u: goto label_3f9764;
        case 0x3f9768u: goto label_3f9768;
        case 0x3f976cu: goto label_3f976c;
        case 0x3f9770u: goto label_3f9770;
        case 0x3f9774u: goto label_3f9774;
        case 0x3f9778u: goto label_3f9778;
        case 0x3f977cu: goto label_3f977c;
        case 0x3f9780u: goto label_3f9780;
        case 0x3f9784u: goto label_3f9784;
        case 0x3f9788u: goto label_3f9788;
        case 0x3f978cu: goto label_3f978c;
        case 0x3f9790u: goto label_3f9790;
        case 0x3f9794u: goto label_3f9794;
        case 0x3f9798u: goto label_3f9798;
        case 0x3f979cu: goto label_3f979c;
        case 0x3f97a0u: goto label_3f97a0;
        case 0x3f97a4u: goto label_3f97a4;
        case 0x3f97a8u: goto label_3f97a8;
        case 0x3f97acu: goto label_3f97ac;
        case 0x3f97b0u: goto label_3f97b0;
        case 0x3f97b4u: goto label_3f97b4;
        case 0x3f97b8u: goto label_3f97b8;
        case 0x3f97bcu: goto label_3f97bc;
        case 0x3f97c0u: goto label_3f97c0;
        case 0x3f97c4u: goto label_3f97c4;
        case 0x3f97c8u: goto label_3f97c8;
        case 0x3f97ccu: goto label_3f97cc;
        case 0x3f97d0u: goto label_3f97d0;
        case 0x3f97d4u: goto label_3f97d4;
        case 0x3f97d8u: goto label_3f97d8;
        case 0x3f97dcu: goto label_3f97dc;
        case 0x3f97e0u: goto label_3f97e0;
        case 0x3f97e4u: goto label_3f97e4;
        case 0x3f97e8u: goto label_3f97e8;
        case 0x3f97ecu: goto label_3f97ec;
        case 0x3f97f0u: goto label_3f97f0;
        case 0x3f97f4u: goto label_3f97f4;
        case 0x3f97f8u: goto label_3f97f8;
        case 0x3f97fcu: goto label_3f97fc;
        case 0x3f9800u: goto label_3f9800;
        case 0x3f9804u: goto label_3f9804;
        case 0x3f9808u: goto label_3f9808;
        case 0x3f980cu: goto label_3f980c;
        case 0x3f9810u: goto label_3f9810;
        case 0x3f9814u: goto label_3f9814;
        case 0x3f9818u: goto label_3f9818;
        case 0x3f981cu: goto label_3f981c;
        case 0x3f9820u: goto label_3f9820;
        case 0x3f9824u: goto label_3f9824;
        case 0x3f9828u: goto label_3f9828;
        case 0x3f982cu: goto label_3f982c;
        case 0x3f9830u: goto label_3f9830;
        case 0x3f9834u: goto label_3f9834;
        case 0x3f9838u: goto label_3f9838;
        case 0x3f983cu: goto label_3f983c;
        case 0x3f9840u: goto label_3f9840;
        case 0x3f9844u: goto label_3f9844;
        case 0x3f9848u: goto label_3f9848;
        case 0x3f984cu: goto label_3f984c;
        case 0x3f9850u: goto label_3f9850;
        case 0x3f9854u: goto label_3f9854;
        case 0x3f9858u: goto label_3f9858;
        case 0x3f985cu: goto label_3f985c;
        default: break;
    }

    ctx->pc = 0x3f96f0u;

label_3f96f0:
    // 0x3f96f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f96f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f96f4:
    // 0x3f96f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f96f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f96f8:
    // 0x3f96f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f96fc:
    // 0x3f96fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f96fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f9700:
    // 0x3f9700: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f9700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f9704:
    // 0x3f9704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9708:
    // 0x3f9708: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f9708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f970c:
    // 0x3f970c: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x3f970cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3f9710:
    // 0x3f9710: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f9710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3f9714:
    // 0x3f9714: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f9714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9718:
    // 0x3f9718: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f9718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f971c:
    // 0x3f971c: 0x320f809  jalr        $t9
label_3f9720:
    if (ctx->pc == 0x3F9720u) {
        ctx->pc = 0x3F9720u;
            // 0x3f9720: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->pc = 0x3F9724u;
        goto label_3f9724;
    }
    ctx->pc = 0x3F971Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9724u);
        ctx->pc = 0x3F9720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F971Cu;
            // 0x3f9720: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9724u; }
            if (ctx->pc != 0x3F9724u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9724u;
label_3f9724:
    // 0x3f9724: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x3f9724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f9728:
    // 0x3f9728: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x3f9728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
label_3f972c:
    // 0x3f972c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3f972cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_3f9730:
    // 0x3f9730: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x3f9730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_3f9734:
    // 0x3f9734: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f9734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f9738:
    // 0x3f9738: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3f9738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3f973c:
    // 0x3f973c: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x3f973cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3f9740:
    // 0x3f9740: 0xa9082b  sltu        $at, $a1, $t1
    ctx->pc = 0x3f9740u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3f9744:
    // 0x3f9744: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
label_3f9748:
    if (ctx->pc == 0x3F9748u) {
        ctx->pc = 0x3F9748u;
            // 0x3f9748: 0x833024  and         $a2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->pc = 0x3F974Cu;
        goto label_3f974c;
    }
    ctx->pc = 0x3F9744u;
    {
        const bool branch_taken_0x3f9744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9744u;
            // 0x3f9748: 0x833024  and         $a2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9744) {
            ctx->pc = 0x3F9830u;
            goto label_3f9830;
        }
    }
    ctx->pc = 0x3F974Cu;
label_3f974c:
    // 0x3f974c: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x3f974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_3f9750:
    // 0x3f9750: 0x61823  negu        $v1, $a2
    ctx->pc = 0x3f9750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_3f9754:
    // 0x3f9754: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3f9754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3f9758:
    // 0x3f9758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f9758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f975c:
    // 0x3f975c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3f975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f9760:
    // 0x3f9760: 0x443823  subu        $a3, $v0, $a0
    ctx->pc = 0x3f9760u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3f9764:
    // 0x3f9764: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x3f9764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_3f9768:
    // 0x3f9768: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x3f9768u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3f976c:
    // 0x3f976c: 0x5020000f  beql        $at, $zero, . + 4 + (0xF << 2)
label_3f9770:
    if (ctx->pc == 0x3F9770u) {
        ctx->pc = 0x3F9770u;
            // 0x3f9770: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x3F9774u;
        goto label_3f9774;
    }
    ctx->pc = 0x3F976Cu;
    {
        const bool branch_taken_0x3f976c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f976c) {
            ctx->pc = 0x3F9770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F976Cu;
            // 0x3f9770: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F97ACu;
            goto label_3f97ac;
        }
    }
    ctx->pc = 0x3F9774u;
label_3f9774:
    // 0x3f9774: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x3f9774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_3f9778:
    // 0x3f9778: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3f9778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_3f977c:
    // 0x3f977c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3f977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3f9780:
    // 0x3f9780: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3f9780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3f9784:
    // 0x3f9784: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3f9784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3f9788:
    // 0x3f9788: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3f9788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3f978c:
    // 0x3f978c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3f978cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_3f9790:
    // 0x3f9790: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3f9790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3f9794:
    // 0x3f9794: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3f9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3f9798:
    // 0x3f9798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f9798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f979c:
    // 0x3f979c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x3f979cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_3f97a0:
    // 0x3f97a0: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3f97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_3f97a4:
    // 0x3f97a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f97a8:
    if (ctx->pc == 0x3F97A8u) {
        ctx->pc = 0x3F97A8u;
            // 0x3f97a8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x3F97ACu;
        goto label_3f97ac;
    }
    ctx->pc = 0x3F97A4u;
    {
        const bool branch_taken_0x3f97a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F97A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F97A4u;
            // 0x3f97a8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f97a4) {
            ctx->pc = 0x3F97C4u;
            goto label_3f97c4;
        }
    }
    ctx->pc = 0x3F97ACu;
label_3f97ac:
    // 0x3f97ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f97acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f97b0:
    // 0x3f97b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f97b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f97b4:
    // 0x3f97b4: 0x320f809  jalr        $t9
label_3f97b8:
    if (ctx->pc == 0x3F97B8u) {
        ctx->pc = 0x3F97BCu;
        goto label_3f97bc;
    }
    ctx->pc = 0x3F97B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F97BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F97BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F97BCu; }
            if (ctx->pc != 0x3F97BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3F97BCu;
label_3f97bc:
    // 0x3f97bc: 0x10000022  b           . + 4 + (0x22 << 2)
label_3f97c0:
    if (ctx->pc == 0x3F97C0u) {
        ctx->pc = 0x3F97C0u;
            // 0x3f97c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F97C4u;
        goto label_3f97c4;
    }
    ctx->pc = 0x3F97BCu;
    {
        const bool branch_taken_0x3f97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F97C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F97BCu;
            // 0x3f97c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f97bc) {
            ctx->pc = 0x3F9848u;
            goto label_3f9848;
        }
    }
    ctx->pc = 0x3F97C4u;
label_3f97c4:
    // 0x3f97c4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3f97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3f97c8:
    // 0x3f97c8: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x3f97c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3f97cc:
    // 0x3f97cc: 0x54200019  bnel        $at, $zero, . + 4 + (0x19 << 2)
label_3f97d0:
    if (ctx->pc == 0x3F97D0u) {
        ctx->pc = 0x3F97D0u;
            // 0x3f97d0: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x3F97D4u;
        goto label_3f97d4;
    }
    ctx->pc = 0x3F97CCu;
    {
        const bool branch_taken_0x3f97cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f97cc) {
            ctx->pc = 0x3F97D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F97CCu;
            // 0x3f97d0: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9834u;
            goto label_3f9834;
        }
    }
    ctx->pc = 0x3F97D4u;
label_3f97d4:
    // 0x3f97d4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3f97d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3f97d8:
    // 0x3f97d8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x3f97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_3f97dc:
    // 0x3f97dc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3f97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3f97e0:
    // 0x3f97e0: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x3f97e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3f97e4:
    // 0x3f97e4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3f97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3f97e8:
    // 0x3f97e8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3f97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_3f97ec:
    // 0x3f97ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3f97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3f97f0:
    // 0x3f97f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3f97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3f97f4:
    // 0x3f97f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3f97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3f97f8:
    // 0x3f97f8: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x3f97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_3f97fc:
    // 0x3f97fc: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x3f97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_3f9800:
    // 0x3f9800: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3f9800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3f9804:
    // 0x3f9804: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3f9804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3f9808:
    // 0x3f9808: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3f9808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3f980c:
    // 0x3f980c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3f980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3f9810:
    // 0x3f9810: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3f9810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3f9814:
    // 0x3f9814: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3f9814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3f9818:
    // 0x3f9818: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f9818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f981c:
    // 0x3f981c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f981cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f9820:
    // 0x3f9820: 0x320f809  jalr        $t9
label_3f9824:
    if (ctx->pc == 0x3F9824u) {
        ctx->pc = 0x3F9828u;
        goto label_3f9828;
    }
    ctx->pc = 0x3F9820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9828u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9828u; }
            if (ctx->pc != 0x3F9828u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9828u;
label_3f9828:
    // 0x3f9828: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f982c:
    if (ctx->pc == 0x3F982Cu) {
        ctx->pc = 0x3F982Cu;
            // 0x3f982c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F9830u;
        goto label_3f9830;
    }
    ctx->pc = 0x3F9828u;
    {
        const bool branch_taken_0x3f9828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9828u;
            // 0x3f982c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9828) {
            ctx->pc = 0x3F9848u;
            goto label_3f9848;
        }
    }
    ctx->pc = 0x3F9830u;
label_3f9830:
    // 0x3f9830: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3f9830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3f9834:
    // 0x3f9834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f9834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9838:
    // 0x3f9838: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f9838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f983c:
    // 0x3f983c: 0x320f809  jalr        $t9
label_3f9840:
    if (ctx->pc == 0x3F9840u) {
        ctx->pc = 0x3F9844u;
        goto label_3f9844;
    }
    ctx->pc = 0x3F983Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9844u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9844u; }
            if (ctx->pc != 0x3F9844u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9844u;
label_3f9844:
    // 0x3f9844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f9844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f9848:
    // 0x3f9848: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f9848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f984c:
    // 0x3f984c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f984cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f9850:
    // 0x3f9850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f9850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9854:
    // 0x3f9854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9858:
    // 0x3f9858: 0x3e00008  jr          $ra
label_3f985c:
    if (ctx->pc == 0x3F985Cu) {
        ctx->pc = 0x3F985Cu;
            // 0x3f985c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F9860u;
        goto label_fallthrough_0x3f9858;
    }
    ctx->pc = 0x3F9858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F985Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9858u;
            // 0x3f985c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f9858:
    ctx->pc = 0x3F9860u;
}
