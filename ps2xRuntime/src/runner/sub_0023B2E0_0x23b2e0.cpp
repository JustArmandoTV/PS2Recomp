#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B2E0
// Address: 0x23b2e0 - 0x23b350
void sub_0023B2E0_0x23b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B2E0_0x23b2e0");
#endif

    switch (ctx->pc) {
        case 0x23b324u: goto label_23b324;
        default: break;
    }

    ctx->pc = 0x23b2e0u;

    // 0x23b2e0: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x23b2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23b2e4: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B2E4u;
    {
        const bool branch_taken_0x23b2e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2E4u;
            // 0x23b2e8: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2e4) {
            ctx->pc = 0x23B304u;
            goto label_23b304;
        }
    }
    ctx->pc = 0x23B2ECu;
    // 0x23b2ec: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23B2ECu;
    {
        const bool branch_taken_0x23b2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2ec) {
            ctx->pc = 0x23B348u;
            goto label_23b348;
        }
    }
    ctx->pc = 0x23B2F4u;
    // 0x23b2f4: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x23b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x23b2f8: 0xa4670010  sh          $a3, 0x10($v1)
    ctx->pc = 0x23b2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 7));
    // 0x23b2fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23B2FCu;
    {
        const bool branch_taken_0x23b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2fc) {
            ctx->pc = 0x23B348u;
            goto label_23b348;
        }
    }
    ctx->pc = 0x23B304u;
label_23b304:
    // 0x23b304: 0x15050007  bne         $t0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B304u;
    {
        const bool branch_taken_0x23b304 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x23b304) {
            ctx->pc = 0x23B324u;
            goto label_23b324;
        }
    }
    ctx->pc = 0x23B30Cu;
    // 0x23b30c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23B30Cu;
    {
        const bool branch_taken_0x23b30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B30Cu;
            // 0x23b310: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b30c) {
            ctx->pc = 0x23B348u;
            goto label_23b348;
        }
    }
    ctx->pc = 0x23B314u;
    // 0x23b314: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x23b314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x23b318: 0xa4670010  sh          $a3, 0x10($v1)
    ctx->pc = 0x23b318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 7));
    // 0x23b31c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23B31Cu;
    {
        const bool branch_taken_0x23b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b31c) {
            ctx->pc = 0x23B348u;
            goto label_23b348;
        }
    }
    ctx->pc = 0x23B324u;
label_23b324:
    // 0x23b324: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x23b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x23b328: 0x5465fffe  bnel        $v1, $a1, . + 4 + (-0x2 << 2)
    ctx->pc = 0x23B328u;
    {
        const bool branch_taken_0x23b328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x23b328) {
            ctx->pc = 0x23B32Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B328u;
            // 0x23b32c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b324;
        }
    }
    ctx->pc = 0x23B330u;
    // 0x23b330: 0xad060014  sw          $a2, 0x14($t0)
    ctx->pc = 0x23b330u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 6));
    // 0x23b334: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B334u;
    {
        const bool branch_taken_0x23b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B334u;
            // 0x23b338: 0xa5070012  sh          $a3, 0x12($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 18), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b334) {
            ctx->pc = 0x23B348u;
            goto label_23b348;
        }
    }
    ctx->pc = 0x23B33Cu;
    // 0x23b33c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x23b33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b340: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x23B340u;
    {
        const bool branch_taken_0x23b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b340) {
            ctx->pc = 0x23B324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b324;
        }
    }
    ctx->pc = 0x23B348u;
label_23b348:
    // 0x23b348: 0x3e00008  jr          $ra
    ctx->pc = 0x23B348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B350u;
}
