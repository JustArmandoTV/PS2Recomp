#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4360
// Address: 0x1a4360 - 0x1a4460
void sub_001A4360_0x1a4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4360_0x1a4360");
#endif

    switch (ctx->pc) {
        case 0x1a4380u: goto label_1a4380;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a4404u: goto label_1a4404;
        default: break;
    }

    ctx->pc = 0x1a4360u;

    // 0x1a4360: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a4360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1a4364: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4368: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a436c: 0x24a543a0  addiu       $a1, $a1, 0x43A0
    ctx->pc = 0x1a436cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17312));
    // 0x1a4370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4374: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a4378: 0xc06dd7a  jal         func_1B75E8
    ctx->pc = 0x1A4378u;
    SET_GPR_U32(ctx, 31, 0x1A4380u);
    ctx->pc = 0x1A437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4378u;
            // 0x1a437c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75E8u;
    if (runtime->hasFunction(0x1B75E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4380u; }
        if (ctx->pc != 0x1A4380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75E8_0x1b75e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4380u; }
        if (ctx->pc != 0x1A4380u) { return; }
    }
    ctx->pc = 0x1A4380u;
label_1a4380:
    // 0x1a4380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a438c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1a438cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a4390: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4394: 0x806d7aa  j           func_1B5EA8
    ctx->pc = 0x1A4394u;
    ctx->pc = 0x1A4398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4394u;
            // 0x1a4398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A439Cu;
    // 0x1a439c: 0x0  nop
    ctx->pc = 0x1a439cu;
    // NOP
    // 0x1a43a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a43a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a43a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a43a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a43a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a43b0: 0x26131080  addiu       $s3, $s0, 0x1080
    ctx->pc = 0x1a43b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4224));
    // 0x1a43b4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a43b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a43b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43bc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1a43c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a43c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a43c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a43cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a43ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a43d0: 0x8e112074  lw          $s1, 0x2074($s0)
    ctx->pc = 0x1a43d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8308)));
    // 0x1a43d4: 0xc06dc90  jal         func_1B7240
    ctx->pc = 0x1A43D4u;
    SET_GPR_U32(ctx, 31, 0x1A43DCu);
    ctx->pc = 0x1A43D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43D4u;
            // 0x1a43d8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7240u;
    if (runtime->hasFunction(0x1B7240u)) {
        auto targetFn = runtime->lookupFunction(0x1B7240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43DCu; }
        if (ctx->pc != 0x1A43DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7240_0x1b7240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43DCu; }
        if (ctx->pc != 0x1A43DCu) { return; }
    }
    ctx->pc = 0x1A43DCu;
label_1a43dc:
    // 0x1a43dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A43DCu;
    {
        const bool branch_taken_0x1a43dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43DCu;
            // 0x1a43e0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43dc) {
            ctx->pc = 0x1A4438u;
            goto label_1a4438;
        }
    }
    ctx->pc = 0x1A43E4u;
    // 0x1a43e4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1a43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1a43e8: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A43E8u;
    {
        const bool branch_taken_0x1a43e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a43e8) {
            ctx->pc = 0x1A43ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43E8u;
            // 0x1a43ec: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4428u;
            goto label_1a4428;
        }
    }
    ctx->pc = 0x1A43F0u;
    // 0x1a43f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a43f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a43f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a43f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43fc: 0xc069118  jal         func_1A4460
    ctx->pc = 0x1A43FCu;
    SET_GPR_U32(ctx, 31, 0x1A4404u);
    ctx->pc = 0x1A4400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43FCu;
            // 0x1a4400: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4460u;
    if (runtime->hasFunction(0x1A4460u)) {
        auto targetFn = runtime->lookupFunction(0x1A4460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4404u; }
        if (ctx->pc != 0x1A4404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4460_0x1a4460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4404u; }
        if (ctx->pc != 0x1A4404u) { return; }
    }
    ctx->pc = 0x1A4404u;
label_1a4404:
    // 0x1a4404: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1a4404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1a4408: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a4408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a440c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a440cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a4410: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4410u;
    {
        const bool branch_taken_0x1a4410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4410) {
            ctx->pc = 0x1A4414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4410u;
            // 0x1a4414: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A442Cu;
            goto label_1a442c;
        }
    }
    ctx->pc = 0x1A4418u;
    // 0x1a4418: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a441c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4420: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1a4420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1a4424: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1a4424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1a4428:
    // 0x1a4428: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1a4428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_1a442c:
    // 0x1a442c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a442cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4430: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1a4430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a4434: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1a4434u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1a4438:
    // 0x1a4438: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a4438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a443c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a443cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4440: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4444: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a4444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a4448: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a4448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a444c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a444cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4450: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4454: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4454u;
            // 0x1a4458: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A445Cu;
    // 0x1a445c: 0x0  nop
    ctx->pc = 0x1a445cu;
    // NOP
}
