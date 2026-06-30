#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB6C0
// Address: 0x1bb6c0 - 0x1bb708
void sub_001BB6C0_0x1bb6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB6C0_0x1bb6c0");
#endif

    switch (ctx->pc) {
        case 0x1bb6d8u: goto label_1bb6d8;
        default: break;
    }

    ctx->pc = 0x1bb6c0u;

    // 0x1bb6c0: 0x24830180  addiu       $v1, $a0, 0x180
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1bb6c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6c8: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x1bb6c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bb6cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB6CCu;
    {
        const bool branch_taken_0x1bb6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6CCu;
            // 0x1bb6d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6cc) {
            ctx->pc = 0x1BB6F0u;
            goto label_1bb6f0;
        }
    }
    ctx->pc = 0x1BB6D4u;
    // 0x1bb6d4: 0x0  nop
    ctx->pc = 0x1bb6d4u;
    // NOP
label_1bb6d8:
    // 0x1bb6d8: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x1bb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1bb6dc: 0x28c3001a  slti        $v1, $a2, 0x1A
    ctx->pc = 0x1bb6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1bb6e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB6E0u;
    {
        const bool branch_taken_0x1bb6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6E0u;
            // 0x1bb6e4: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6e0) {
            ctx->pc = 0x1BB700u;
            goto label_1bb700;
        }
    }
    ctx->pc = 0x1BB6E8u;
    // 0x1bb6e8: 0x24430180  addiu       $v1, $v0, 0x180
    ctx->pc = 0x1bb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1bb6ec: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x1bb6ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_1bb6f0:
    // 0x1bb6f0: 0x0  nop
    ctx->pc = 0x1bb6f0u;
    // NOP
    // 0x1bb6f4: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BB6F4u;
    {
        const bool branch_taken_0x1bb6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bb6f4) {
            ctx->pc = 0x1BB6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6F4u;
            // 0x1bb6f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB6D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bb6d8;
        }
    }
    ctx->pc = 0x1BB6FCu;
    // 0x1bb6fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1bb6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bb700:
    // 0x1bb700: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB700u;
            // 0x1bb704: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB708u;
}
