#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001787F8
// Address: 0x1787f8 - 0x178878
void sub_001787F8_0x1787f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001787F8_0x1787f8");
#endif

    switch (ctx->pc) {
        case 0x178828u: goto label_178828;
        case 0x178838u: goto label_178838;
        default: break;
    }

    ctx->pc = 0x1787f8u;

    // 0x1787f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1787f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1787fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1787fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x178800: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17880c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178810: 0x2451d3dc  addiu       $s1, $v0, -0x2C24
    ctx->pc = 0x178810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955996));
    // 0x178814: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178818: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x178818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17881c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178820: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x178820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178828:
    // 0x178828: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x178828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17882c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178830: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x178830u;
    SET_GPR_U32(ctx, 31, 0x178838u);
    ctx->pc = 0x178834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178830u;
            // 0x178834: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178838u; }
        if (ctx->pc != 0x178838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178838u; }
        if (ctx->pc != 0x178838u) { return; }
    }
    ctx->pc = 0x178838u;
label_178838:
    // 0x178838: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178838u;
    {
        const bool branch_taken_0x178838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178838u;
            // 0x17883c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178838) {
            ctx->pc = 0x178848u;
            goto label_178848;
        }
    }
    ctx->pc = 0x178840u;
    // 0x178840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178840u;
    {
        const bool branch_taken_0x178840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178840u;
            // 0x178844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178840) {
            ctx->pc = 0x178858u;
            goto label_178858;
        }
    }
    ctx->pc = 0x178848u;
label_178848:
    // 0x178848: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x178848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17884c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17884Cu;
    {
        const bool branch_taken_0x17884c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17884Cu;
            // 0x178850: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17884c) {
            ctx->pc = 0x178828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178828;
        }
    }
    ctx->pc = 0x178854u;
    // 0x178854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178858:
    // 0x178858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17885c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17885cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178864: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17886c: 0x3e00008  jr          $ra
    ctx->pc = 0x17886Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17886Cu;
            // 0x178870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178874u;
    // 0x178874: 0x0  nop
    ctx->pc = 0x178874u;
    // NOP
}
