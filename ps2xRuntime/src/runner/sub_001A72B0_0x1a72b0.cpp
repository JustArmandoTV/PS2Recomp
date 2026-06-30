#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A72B0
// Address: 0x1a72b0 - 0x1a7318
void sub_001A72B0_0x1a72b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A72B0_0x1a72b0");
#endif

    switch (ctx->pc) {
        case 0x1a72d8u: goto label_1a72d8;
        case 0x1a72e0u: goto label_1a72e0;
        default: break;
    }

    ctx->pc = 0x1a72b0u;

    // 0x1a72b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a72b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a72b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a72b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a72b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a72b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72bc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a72bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a72c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a72c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a72c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a72c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a72c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a72c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a72ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a72d0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A72D0u;
    {
        const bool branch_taken_0x1a72d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A72D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72D0u;
            // 0x1a72d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72d0) {
            ctx->pc = 0x1A72FCu;
            goto label_1a72fc;
        }
    }
    ctx->pc = 0x1A72D8u;
label_1a72d8:
    // 0x1a72d8: 0xc064928  jal         func_1924A0
    ctx->pc = 0x1A72D8u;
    SET_GPR_U32(ctx, 31, 0x1A72E0u);
    ctx->pc = 0x1A72DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72D8u;
            // 0x1a72dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1924A0u;
    if (runtime->hasFunction(0x1924A0u)) {
        auto targetFn = runtime->lookupFunction(0x1924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72E0u; }
        if (ctx->pc != 0x1A72E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001924A0_0x1924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72E0u; }
        if (ctx->pc != 0x1A72E0u) { return; }
    }
    ctx->pc = 0x1A72E0u;
label_1a72e0:
    // 0x1a72e0: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A72E0u;
    {
        const bool branch_taken_0x1a72e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A72E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72E0u;
            // 0x1a72e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72e0) {
            ctx->pc = 0x1A72F0u;
            goto label_1a72f0;
        }
    }
    ctx->pc = 0x1A72E8u;
    // 0x1a72e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A72E8u;
    {
        const bool branch_taken_0x1a72e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72E8u;
            // 0x1a72ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72e8) {
            ctx->pc = 0x1A7300u;
            goto label_1a7300;
        }
    }
    ctx->pc = 0x1A72F0u;
label_1a72f0:
    // 0x1a72f0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a72f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a72f4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A72F4u;
    {
        const bool branch_taken_0x1a72f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72F4u;
            // 0x1a72f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72f4) {
            ctx->pc = 0x1A72D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a72d8;
        }
    }
    ctx->pc = 0x1A72FCu;
label_1a72fc:
    // 0x1a72fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a72fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7300:
    // 0x1a7300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7308: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a730c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7310: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7310u;
            // 0x1a7314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7318u;
}
