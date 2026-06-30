#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001998E0
// Address: 0x1998e0 - 0x199a58
void sub_001998E0_0x1998e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001998E0_0x1998e0");
#endif

    switch (ctx->pc) {
        case 0x19990cu: goto label_19990c;
        case 0x199924u: goto label_199924;
        case 0x199934u: goto label_199934;
        case 0x199948u: goto label_199948;
        case 0x199950u: goto label_199950;
        case 0x199964u: goto label_199964;
        case 0x199988u: goto label_199988;
        case 0x199998u: goto label_199998;
        case 0x1999a8u: goto label_1999a8;
        case 0x1999c0u: goto label_1999c0;
        case 0x1999ecu: goto label_1999ec;
        case 0x1999fcu: goto label_1999fc;
        case 0x199a18u: goto label_199a18;
        case 0x199a24u: goto label_199a24;
        default: break;
    }

    ctx->pc = 0x1998e0u;

    // 0x1998e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1998e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1998e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1998e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1998e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1998e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1998ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1998f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1998f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1998f4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1998f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1998f8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1998f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1998fc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1998fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x199900: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x199904: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x199904u;
    SET_GPR_U32(ctx, 31, 0x19990Cu);
    ctx->pc = 0x199908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199904u;
            // 0x199908: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19990Cu; }
        if (ctx->pc != 0x19990Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19990Cu; }
        if (ctx->pc != 0x19990Cu) { return; }
    }
    ctx->pc = 0x19990Cu;
label_19990c:
    // 0x19990c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199910: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199910u;
    {
        const bool branch_taken_0x199910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x199914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199910u;
            // 0x199914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199910) {
            ctx->pc = 0x199940u;
            goto label_199940;
        }
    }
    ctx->pc = 0x199918u;
    // 0x199918: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19991c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19991Cu;
    SET_GPR_U32(ctx, 31, 0x199924u);
    ctx->pc = 0x199920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19991Cu;
            // 0x199920: 0x24848be8  addiu       $a0, $a0, -0x7418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199924u; }
        if (ctx->pc != 0x199924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199924u; }
        if (ctx->pc != 0x199924u) { return; }
    }
    ctx->pc = 0x199924u;
label_199924:
    // 0x199924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19992c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x19992Cu;
    SET_GPR_U32(ctx, 31, 0x199934u);
    ctx->pc = 0x199930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19992Cu;
            // 0x199930: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199934u; }
        if (ctx->pc != 0x199934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199934u; }
        if (ctx->pc != 0x199934u) { return; }
    }
    ctx->pc = 0x199934u;
label_199934:
    // 0x199934: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x199934u;
    {
        const bool branch_taken_0x199934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199934u;
            // 0x199938: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199934) {
            ctx->pc = 0x199A34u;
            goto label_199a34;
        }
    }
    ctx->pc = 0x19993Cu;
    // 0x19993c: 0x0  nop
    ctx->pc = 0x19993cu;
    // NOP
label_199940:
    // 0x199940: 0xc0666b2  jal         func_199AC8
    ctx->pc = 0x199940u;
    SET_GPR_U32(ctx, 31, 0x199948u);
    ctx->pc = 0x199944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199940u;
            // 0x199944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199AC8u;
    if (runtime->hasFunction(0x199AC8u)) {
        auto targetFn = runtime->lookupFunction(0x199AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199948u; }
        if (ctx->pc != 0x199948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199AC8_0x199ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199948u; }
        if (ctx->pc != 0x199948u) { return; }
    }
    ctx->pc = 0x199948u;
label_199948:
    // 0x199948: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x199948u;
    SET_GPR_U32(ctx, 31, 0x199950u);
    ctx->pc = 0x19994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199948u;
            // 0x19994c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199950u; }
        if (ctx->pc != 0x199950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199950u; }
        if (ctx->pc != 0x199950u) { return; }
    }
    ctx->pc = 0x199950u;
label_199950:
    // 0x199950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x199950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199954: 0x1220fff3  beqz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x199954u;
    {
        const bool branch_taken_0x199954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199954u;
            // 0x199958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199954) {
            ctx->pc = 0x199924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199924;
        }
    }
    ctx->pc = 0x19995Cu;
    // 0x19995c: 0xc06d220  jal         func_1B4880
    ctx->pc = 0x19995Cu;
    SET_GPR_U32(ctx, 31, 0x199964u);
    ctx->pc = 0x199960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19995Cu;
            // 0x199960: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4880u;
    if (runtime->hasFunction(0x1B4880u)) {
        auto targetFn = runtime->lookupFunction(0x1B4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199964u; }
        if (ctx->pc != 0x199964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4880_0x1b4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199964u; }
        if (ctx->pc != 0x199964u) { return; }
    }
    ctx->pc = 0x199964u;
label_199964:
    // 0x199964: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199968: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x199968u;
    {
        const bool branch_taken_0x199968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199968) {
            ctx->pc = 0x19996Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199968u;
            // 0x19996c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199A34u;
            goto label_199a34;
        }
    }
    ctx->pc = 0x199970u;
    // 0x199970: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x199970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x199974: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x199974u;
    {
        const bool branch_taken_0x199974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199974u;
            // 0x199978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199974) {
            ctx->pc = 0x1999CCu;
            goto label_1999cc;
        }
    }
    ctx->pc = 0x19997Cu;
    // 0x19997c: 0x8e140018  lw          $s4, 0x18($s0)
    ctx->pc = 0x19997cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x199980: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199984: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x199984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_199988:
    // 0x199988: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x199988u;
    {
        const bool branch_taken_0x199988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199988u;
            // 0x19998c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199988) {
            ctx->pc = 0x1999C8u;
            goto label_1999c8;
        }
    }
    ctx->pc = 0x199990u;
    // 0x199990: 0xc0668ce  jal         func_19A338
    ctx->pc = 0x199990u;
    SET_GPR_U32(ctx, 31, 0x199998u);
    ctx->pc = 0x199994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199990u;
            // 0x199994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A338u;
    if (runtime->hasFunction(0x19A338u)) {
        auto targetFn = runtime->lookupFunction(0x19A338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199998u; }
        if (ctx->pc != 0x199998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A338_0x19a338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199998u; }
        if (ctx->pc != 0x199998u) { return; }
    }
    ctx->pc = 0x199998u;
label_199998:
    // 0x199998: 0x1455000b  bne         $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x199998u;
    {
        const bool branch_taken_0x199998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x19999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199998u;
            // 0x19999c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199998) {
            ctx->pc = 0x1999C8u;
            goto label_1999c8;
        }
    }
    ctx->pc = 0x1999A0u;
    // 0x1999a0: 0xc06d25e  jal         func_1B4978
    ctx->pc = 0x1999A0u;
    SET_GPR_U32(ctx, 31, 0x1999A8u);
    ctx->pc = 0x1999A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999A0u;
            // 0x1999a4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4978u;
    if (runtime->hasFunction(0x1B4978u)) {
        auto targetFn = runtime->lookupFunction(0x1B4978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999A8u; }
        if (ctx->pc != 0x1999A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4978_0x1b4978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999A8u; }
        if (ctx->pc != 0x1999A8u) { return; }
    }
    ctx->pc = 0x1999A8u;
label_1999a8:
    // 0x1999a8: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1999a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1999ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1999acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1999b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1999b8: 0xc06d220  jal         func_1B4880
    ctx->pc = 0x1999B8u;
    SET_GPR_U32(ctx, 31, 0x1999C0u);
    ctx->pc = 0x1999BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999B8u;
            // 0x1999bc: 0xae030094  sw          $v1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4880u;
    if (runtime->hasFunction(0x1B4880u)) {
        auto targetFn = runtime->lookupFunction(0x1B4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999C0u; }
        if (ctx->pc != 0x1999C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4880_0x1b4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999C0u; }
        if (ctx->pc != 0x1999C0u) { return; }
    }
    ctx->pc = 0x1999C0u;
label_1999c0:
    // 0x1999c0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1999C0u;
    {
        const bool branch_taken_0x1999c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1999C0u;
            // 0x1999c4: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999c0) {
            ctx->pc = 0x199988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199988;
        }
    }
    ctx->pc = 0x1999C8u;
label_1999c8:
    // 0x1999c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1999cc:
    // 0x1999cc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1999CCu;
    {
        const bool branch_taken_0x1999cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1999CCu;
            // 0x1999d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999cc) {
            ctx->pc = 0x199A30u;
            goto label_199a30;
        }
    }
    ctx->pc = 0x1999D4u;
    // 0x1999d4: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1999d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1999d8: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1999d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x1999dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1999dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1999e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1999e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1999e4: 0xc0667da  jal         func_199F68
    ctx->pc = 0x1999E4u;
    SET_GPR_U32(ctx, 31, 0x1999ECu);
    ctx->pc = 0x1999E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999E4u;
            // 0x1999e8: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199F68u;
    if (runtime->hasFunction(0x199F68u)) {
        auto targetFn = runtime->lookupFunction(0x199F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999ECu; }
        if (ctx->pc != 0x1999ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199F68_0x199f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999ECu; }
        if (ctx->pc != 0x1999ECu) { return; }
    }
    ctx->pc = 0x1999ECu;
label_1999ec:
    // 0x1999ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1999ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999f0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1999f4: 0xc0666d8  jal         func_199B60
    ctx->pc = 0x1999F4u;
    SET_GPR_U32(ctx, 31, 0x1999FCu);
    ctx->pc = 0x1999F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999F4u;
            // 0x1999f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199B60u;
    if (runtime->hasFunction(0x199B60u)) {
        auto targetFn = runtime->lookupFunction(0x199B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999FCu; }
        if (ctx->pc != 0x1999FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199B60_0x199b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999FCu; }
        if (ctx->pc != 0x1999FCu) { return; }
    }
    ctx->pc = 0x1999FCu;
label_1999fc:
    // 0x1999fc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1999fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x199a00: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x199a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x199a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a08: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x199a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x199a0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a10: 0xc0666c4  jal         func_199B10
    ctx->pc = 0x199A10u;
    SET_GPR_U32(ctx, 31, 0x199A18u);
    ctx->pc = 0x199A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A10u;
            // 0x199a14: 0xae0300c8  sw          $v1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199B10u;
    if (runtime->hasFunction(0x199B10u)) {
        auto targetFn = runtime->lookupFunction(0x199B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A18u; }
        if (ctx->pc != 0x199A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199B10_0x199b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A18u; }
        if (ctx->pc != 0x199A18u) { return; }
    }
    ctx->pc = 0x199A18u;
label_199a18:
    // 0x199a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a1c: 0xc066696  jal         func_199A58
    ctx->pc = 0x199A1Cu;
    SET_GPR_U32(ctx, 31, 0x199A24u);
    ctx->pc = 0x199A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A1Cu;
            // 0x199a20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199A58u;
    if (runtime->hasFunction(0x199A58u)) {
        auto targetFn = runtime->lookupFunction(0x199A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A24u; }
        if (ctx->pc != 0x199A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199A58_0x199a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A24u; }
        if (ctx->pc != 0x199A24u) { return; }
    }
    ctx->pc = 0x199A24u;
label_199a24:
    // 0x199a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199A24u;
    {
        const bool branch_taken_0x199a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A24u;
            // 0x199a28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a24) {
            ctx->pc = 0x199A38u;
            goto label_199a38;
        }
    }
    ctx->pc = 0x199A2Cu;
    // 0x199a2c: 0x0  nop
    ctx->pc = 0x199a2cu;
    // NOP
label_199a30:
    // 0x199a30: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x199a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_199a34:
    // 0x199a34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x199a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199a38:
    // 0x199a38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x199a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199a3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x199a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199a40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x199a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a44: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x199a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199a48: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x199a48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x199a4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199a50: 0x3e00008  jr          $ra
    ctx->pc = 0x199A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A50u;
            // 0x199a54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199A58u;
}
