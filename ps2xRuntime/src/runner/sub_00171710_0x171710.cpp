#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171710
// Address: 0x171710 - 0x171790
void sub_00171710_0x171710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171710_0x171710");
#endif

    switch (ctx->pc) {
        case 0x171734u: goto label_171734;
        case 0x171748u: goto label_171748;
        case 0x17175cu: goto label_17175c;
        default: break;
    }

    ctx->pc = 0x171710u;

    // 0x171710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171714: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x171714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171718: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x171718u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x17171c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171720: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171728: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17172c: 0xc05c840  jal         func_172100
    ctx->pc = 0x17172Cu;
    SET_GPR_U32(ctx, 31, 0x171734u);
    ctx->pc = 0x171730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17172Cu;
            // 0x171730: 0x26642e6c  addiu       $a0, $s3, 0x2E6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11884));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172100u;
    if (runtime->hasFunction(0x172100u)) {
        auto targetFn = runtime->lookupFunction(0x172100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171734u; }
        if (ctx->pc != 0x171734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172100_0x172100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171734u; }
        if (ctx->pc != 0x171734u) { return; }
    }
    ctx->pc = 0x171734u;
label_171734:
    // 0x171734: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x171734u;
    {
        const bool branch_taken_0x171734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171734u;
            // 0x171738: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171734) {
            ctx->pc = 0x171770u;
            goto label_171770;
        }
    }
    ctx->pc = 0x17173Cu;
    // 0x17173c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171740: 0x24502e80  addiu       $s0, $v0, 0x2E80
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x171744: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_171748:
    // 0x171748: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x171748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17174c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17174Cu;
    {
        const bool branch_taken_0x17174c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17174c) {
            ctx->pc = 0x171750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17174Cu;
            // 0x171750: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171760u;
            goto label_171760;
        }
    }
    ctx->pc = 0x171754u;
    // 0x171754: 0xc05c4fc  jal         func_1713F0
    ctx->pc = 0x171754u;
    SET_GPR_U32(ctx, 31, 0x17175Cu);
    ctx->pc = 0x171758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171754u;
            // 0x171758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1713F0u;
    if (runtime->hasFunction(0x1713F0u)) {
        auto targetFn = runtime->lookupFunction(0x1713F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17175Cu; }
        if (ctx->pc != 0x17175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001713F0_0x1713f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17175Cu; }
        if (ctx->pc != 0x17175Cu) { return; }
    }
    ctx->pc = 0x17175Cu;
label_17175c:
    // 0x17175c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17175cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_171760:
    // 0x171760: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x171760u;
    {
        const bool branch_taken_0x171760 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x171764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171760u;
            // 0x171764: 0x26100068  addiu       $s0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171760) {
            ctx->pc = 0x171748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171748;
        }
    }
    ctx->pc = 0x171768u;
    // 0x171768: 0x26622e6c  addiu       $v0, $s3, 0x2E6C
    ctx->pc = 0x171768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11884));
    // 0x17176c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17176cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_171770:
    // 0x171770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17177c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17177cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171784: 0x3e00008  jr          $ra
    ctx->pc = 0x171784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171784u;
            // 0x171788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17178Cu;
    // 0x17178c: 0x0  nop
    ctx->pc = 0x17178cu;
    // NOP
}
