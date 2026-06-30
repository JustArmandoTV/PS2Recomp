#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00354BC0
// Address: 0x354bc0 - 0x354c00
void sub_00354BC0_0x354bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354BC0_0x354bc0");
#endif

    switch (ctx->pc) {
        case 0x354bd0u: goto label_354bd0;
        default: break;
    }

    ctx->pc = 0x354bc0u;

    // 0x354bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x354bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bc8: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x354bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x354bcc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x354bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_354bd0:
    // 0x354bd0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x354bd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354bd4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x354bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x354bd8: 0x107082b  sltu        $at, $t0, $a3
    ctx->pc = 0x354bd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x354bdc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x354BDCu;
    {
        const bool branch_taken_0x354bdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x354bdc) {
            ctx->pc = 0x354BF8u;
            goto label_354bf8;
        }
    }
    ctx->pc = 0x354BE4u;
    // 0x354be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x354be8: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x354be8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x354bec: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x354BECu;
    {
        const bool branch_taken_0x354bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354bec) {
            ctx->pc = 0x354BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354BECu;
            // 0x354bf0: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_354bd0;
        }
    }
    ctx->pc = 0x354BF4u;
    // 0x354bf4: 0x0  nop
    ctx->pc = 0x354bf4u;
    // NOP
label_354bf8:
    // 0x354bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x354BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354C00u;
}
