#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001747F0
// Address: 0x1747f0 - 0x174910
void sub_001747F0_0x1747f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001747F0_0x1747f0");
#endif

    switch (ctx->pc) {
        case 0x1747f0u: goto label_1747f0;
        case 0x1747f4u: goto label_1747f4;
        case 0x1747f8u: goto label_1747f8;
        case 0x1747fcu: goto label_1747fc;
        case 0x174800u: goto label_174800;
        case 0x174804u: goto label_174804;
        case 0x174808u: goto label_174808;
        case 0x17480cu: goto label_17480c;
        case 0x174810u: goto label_174810;
        case 0x174814u: goto label_174814;
        case 0x174818u: goto label_174818;
        case 0x17481cu: goto label_17481c;
        case 0x174820u: goto label_174820;
        case 0x174824u: goto label_174824;
        case 0x174828u: goto label_174828;
        case 0x17482cu: goto label_17482c;
        case 0x174830u: goto label_174830;
        case 0x174834u: goto label_174834;
        case 0x174838u: goto label_174838;
        case 0x17483cu: goto label_17483c;
        case 0x174840u: goto label_174840;
        case 0x174844u: goto label_174844;
        case 0x174848u: goto label_174848;
        case 0x17484cu: goto label_17484c;
        case 0x174850u: goto label_174850;
        case 0x174854u: goto label_174854;
        case 0x174858u: goto label_174858;
        case 0x17485cu: goto label_17485c;
        case 0x174860u: goto label_174860;
        case 0x174864u: goto label_174864;
        case 0x174868u: goto label_174868;
        case 0x17486cu: goto label_17486c;
        case 0x174870u: goto label_174870;
        case 0x174874u: goto label_174874;
        case 0x174878u: goto label_174878;
        case 0x17487cu: goto label_17487c;
        case 0x174880u: goto label_174880;
        case 0x174884u: goto label_174884;
        case 0x174888u: goto label_174888;
        case 0x17488cu: goto label_17488c;
        case 0x174890u: goto label_174890;
        case 0x174894u: goto label_174894;
        case 0x174898u: goto label_174898;
        case 0x17489cu: goto label_17489c;
        case 0x1748a0u: goto label_1748a0;
        case 0x1748a4u: goto label_1748a4;
        case 0x1748a8u: goto label_1748a8;
        case 0x1748acu: goto label_1748ac;
        case 0x1748b0u: goto label_1748b0;
        case 0x1748b4u: goto label_1748b4;
        case 0x1748b8u: goto label_1748b8;
        case 0x1748bcu: goto label_1748bc;
        case 0x1748c0u: goto label_1748c0;
        case 0x1748c4u: goto label_1748c4;
        case 0x1748c8u: goto label_1748c8;
        case 0x1748ccu: goto label_1748cc;
        case 0x1748d0u: goto label_1748d0;
        case 0x1748d4u: goto label_1748d4;
        case 0x1748d8u: goto label_1748d8;
        case 0x1748dcu: goto label_1748dc;
        case 0x1748e0u: goto label_1748e0;
        case 0x1748e4u: goto label_1748e4;
        case 0x1748e8u: goto label_1748e8;
        case 0x1748ecu: goto label_1748ec;
        case 0x1748f0u: goto label_1748f0;
        case 0x1748f4u: goto label_1748f4;
        case 0x1748f8u: goto label_1748f8;
        case 0x1748fcu: goto label_1748fc;
        case 0x174900u: goto label_174900;
        case 0x174904u: goto label_174904;
        case 0x174908u: goto label_174908;
        case 0x17490cu: goto label_17490c;
        default: break;
    }

    ctx->pc = 0x1747f0u;

label_1747f0:
    // 0x1747f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1747f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1747f4:
    // 0x1747f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1747f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1747f8:
    // 0x1747f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1747f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1747fc:
    // 0x1747fc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1747fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_174800:
    // 0x174800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174804:
    // 0x174804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_174808:
    // 0x174808: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x174808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17480c:
    // 0x17480c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_174810:
    if (ctx->pc == 0x174810u) {
        ctx->pc = 0x174810u;
            // 0x174810: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x174814u;
        goto label_174814;
    }
    ctx->pc = 0x17480Cu;
    {
        const bool branch_taken_0x17480c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x174810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17480Cu;
            // 0x174810: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17480c) {
            ctx->pc = 0x174830u;
            goto label_174830;
        }
    }
    ctx->pc = 0x174814u;
label_174814:
    // 0x174814: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_174818:
    // 0x174818: 0xc059f4e  jal         func_167D38
label_17481c:
    if (ctx->pc == 0x17481Cu) {
        ctx->pc = 0x17481Cu;
            // 0x17481c: 0x24844578  addiu       $a0, $a0, 0x4578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17784));
        ctx->pc = 0x174820u;
        goto label_174820;
    }
    ctx->pc = 0x174818u;
    SET_GPR_U32(ctx, 31, 0x174820u);
    ctx->pc = 0x17481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174818u;
            // 0x17481c: 0x24844578  addiu       $a0, $a0, 0x4578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174820u; }
        if (ctx->pc != 0x174820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174820u; }
        if (ctx->pc != 0x174820u) { return; }
    }
    ctx->pc = 0x174820u;
label_174820:
    // 0x174820: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x174820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_174824:
    // 0x174824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174828:
    // 0x174828: 0x10000024  b           . + 4 + (0x24 << 2)
label_17482c:
    if (ctx->pc == 0x17482Cu) {
        ctx->pc = 0x17482Cu;
            // 0x17482c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x174830u;
        goto label_174830;
    }
    ctx->pc = 0x174828u;
    {
        const bool branch_taken_0x174828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174828u;
            // 0x17482c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174828) {
            ctx->pc = 0x1748BCu;
            goto label_1748bc;
        }
    }
    ctx->pc = 0x174830u;
label_174830:
    // 0x174830: 0xc05ccce  jal         func_173338
label_174834:
    if (ctx->pc == 0x174834u) {
        ctx->pc = 0x174838u;
        goto label_174838;
    }
    ctx->pc = 0x174830u;
    SET_GPR_U32(ctx, 31, 0x174838u);
    ctx->pc = 0x173338u;
    if (runtime->hasFunction(0x173338u)) {
        auto targetFn = runtime->lookupFunction(0x173338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174838u; }
        if (ctx->pc != 0x174838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173338_0x173338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174838u; }
        if (ctx->pc != 0x174838u) { return; }
    }
    ctx->pc = 0x174838u;
label_174838:
    // 0x174838: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x174838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_17483c:
    // 0x17483c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_174840:
    if (ctx->pc == 0x174840u) {
        ctx->pc = 0x174840u;
            // 0x174840: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x174844u;
        goto label_174844;
    }
    ctx->pc = 0x17483Cu;
    {
        const bool branch_taken_0x17483c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17483Cu;
            // 0x174840: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17483c) {
            ctx->pc = 0x1748B8u;
            goto label_1748b8;
        }
    }
    ctx->pc = 0x174844u;
label_174844:
    // 0x174844: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_174848:
    // 0x174848: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_17484c:
    if (ctx->pc == 0x17484Cu) {
        ctx->pc = 0x17484Cu;
            // 0x17484c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174850u;
        goto label_174850;
    }
    ctx->pc = 0x174848u;
    {
        const bool branch_taken_0x174848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174848u;
            // 0x17484c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174848) {
            ctx->pc = 0x1748B8u;
            goto label_1748b8;
        }
    }
    ctx->pc = 0x174850u;
label_174850:
    // 0x174850: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x174850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_174854:
    // 0x174854: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x174854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_174858:
    // 0x174858: 0x40f809  jalr        $v0
label_17485c:
    if (ctx->pc == 0x17485Cu) {
        ctx->pc = 0x17485Cu;
            // 0x17485c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x174860u;
        goto label_174860;
    }
    ctx->pc = 0x174858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174860u);
        ctx->pc = 0x17485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174858u;
            // 0x17485c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174860u; }
            if (ctx->pc != 0x174860u) { return; }
        }
        }
    }
    ctx->pc = 0x174860u;
label_174860:
    // 0x174860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_174864:
    // 0x174864: 0xc05cee6  jal         func_173B98
label_174868:
    if (ctx->pc == 0x174868u) {
        ctx->pc = 0x174868u;
            // 0x174868: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17486Cu;
        goto label_17486c;
    }
    ctx->pc = 0x174864u;
    SET_GPR_U32(ctx, 31, 0x17486Cu);
    ctx->pc = 0x174868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174864u;
            // 0x174868: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B98u;
    if (runtime->hasFunction(0x173B98u)) {
        auto targetFn = runtime->lookupFunction(0x173B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17486Cu; }
        if (ctx->pc != 0x17486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B98_0x173b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17486Cu; }
        if (ctx->pc != 0x17486Cu) { return; }
    }
    ctx->pc = 0x17486Cu;
label_17486c:
    // 0x17486c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17486cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174870:
    // 0x174870: 0xc05cec4  jal         func_173B10
label_174874:
    if (ctx->pc == 0x174874u) {
        ctx->pc = 0x174874u;
            // 0x174874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174878u;
        goto label_174878;
    }
    ctx->pc = 0x174870u;
    SET_GPR_U32(ctx, 31, 0x174878u);
    ctx->pc = 0x174874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174870u;
            // 0x174874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B10u;
    if (runtime->hasFunction(0x173B10u)) {
        auto targetFn = runtime->lookupFunction(0x173B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174878u; }
        if (ctx->pc != 0x174878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B10_0x173b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174878u; }
        if (ctx->pc != 0x174878u) { return; }
    }
    ctx->pc = 0x174878u;
label_174878:
    // 0x174878: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x174878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_17487c:
    // 0x17487c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17487cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_174880:
    // 0x174880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x174880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_174884:
    // 0x174884: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_174888:
    // 0x174888: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x174888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_17488c:
    // 0x17488c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x17488cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_174890:
    // 0x174890: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_174894:
    if (ctx->pc == 0x174894u) {
        ctx->pc = 0x174894u;
            // 0x174894: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x174898u;
        goto label_174898;
    }
    ctx->pc = 0x174890u;
    {
        const bool branch_taken_0x174890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174890) {
            ctx->pc = 0x174894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174890u;
            // 0x174894: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x174898u;
            goto label_174898;
        }
    }
    ctx->pc = 0x174898u;
label_174898:
    // 0x174898: 0x8012  mflo        $s0
    ctx->pc = 0x174898u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_17489c:
    // 0x17489c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x17489cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_1748a0:
    // 0x1748a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1748a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1748a4:
    // 0x1748a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1748a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1748a8:
    // 0x1748a8: 0x0  nop
    ctx->pc = 0x1748a8u;
    // NOP
label_1748ac:
    // 0x1748ac: 0x0  nop
    ctx->pc = 0x1748acu;
    // NOP
label_1748b0:
    // 0x1748b0: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1748b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_1748b4:
    // 0x1748b4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1748b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1748b8:
    // 0x1748b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1748b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1748bc:
    // 0x1748bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1748bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1748c0:
    // 0x1748c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1748c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1748c4:
    // 0x1748c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1748c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1748c8:
    // 0x1748c8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1748c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1748cc:
    // 0x1748cc: 0x3e00008  jr          $ra
label_1748d0:
    if (ctx->pc == 0x1748D0u) {
        ctx->pc = 0x1748D0u;
            // 0x1748d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1748D4u;
        goto label_1748d4;
    }
    ctx->pc = 0x1748CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1748D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1748CCu;
            // 0x1748d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1748D4u;
label_1748d4:
    // 0x1748d4: 0x0  nop
    ctx->pc = 0x1748d4u;
    // NOP
label_1748d8:
    // 0x1748d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1748dc:
    // 0x1748dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1748dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1748e0:
    // 0x1748e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1748e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1748e4:
    // 0x1748e4: 0xc0599de  jal         func_166778
label_1748e8:
    if (ctx->pc == 0x1748E8u) {
        ctx->pc = 0x1748E8u;
            // 0x1748e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1748ECu;
        goto label_1748ec;
    }
    ctx->pc = 0x1748E4u;
    SET_GPR_U32(ctx, 31, 0x1748ECu);
    ctx->pc = 0x1748E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748E4u;
            // 0x1748e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748ECu; }
        if (ctx->pc != 0x1748ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748ECu; }
        if (ctx->pc != 0x1748ECu) { return; }
    }
    ctx->pc = 0x1748ECu;
label_1748ec:
    // 0x1748ec: 0xc05d244  jal         func_174910
label_1748f0:
    if (ctx->pc == 0x1748F0u) {
        ctx->pc = 0x1748F0u;
            // 0x1748f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1748F4u;
        goto label_1748f4;
    }
    ctx->pc = 0x1748ECu;
    SET_GPR_U32(ctx, 31, 0x1748F4u);
    ctx->pc = 0x1748F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748ECu;
            // 0x1748f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174910u;
    if (runtime->hasFunction(0x174910u)) {
        auto targetFn = runtime->lookupFunction(0x174910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F4u; }
        if (ctx->pc != 0x1748F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174910_0x174910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F4u; }
        if (ctx->pc != 0x1748F4u) { return; }
    }
    ctx->pc = 0x1748F4u;
label_1748f4:
    // 0x1748f4: 0xc0599e0  jal         func_166780
label_1748f8:
    if (ctx->pc == 0x1748F8u) {
        ctx->pc = 0x1748F8u;
            // 0x1748f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1748FCu;
        goto label_1748fc;
    }
    ctx->pc = 0x1748F4u;
    SET_GPR_U32(ctx, 31, 0x1748FCu);
    ctx->pc = 0x1748F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748F4u;
            // 0x1748f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748FCu; }
        if (ctx->pc != 0x1748FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748FCu; }
        if (ctx->pc != 0x1748FCu) { return; }
    }
    ctx->pc = 0x1748FCu;
label_1748fc:
    // 0x1748fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1748fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174900:
    // 0x174900: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174904:
    // 0x174904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174908:
    // 0x174908: 0x3e00008  jr          $ra
label_17490c:
    if (ctx->pc == 0x17490Cu) {
        ctx->pc = 0x17490Cu;
            // 0x17490c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x174910u;
        goto label_fallthrough_0x174908;
    }
    ctx->pc = 0x174908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17490Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174908u;
            // 0x17490c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x174908:
    ctx->pc = 0x174910u;
}
