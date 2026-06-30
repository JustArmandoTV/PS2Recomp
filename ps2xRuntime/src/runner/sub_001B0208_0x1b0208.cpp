#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0208
// Address: 0x1b0208 - 0x1b0248
void sub_001B0208_0x1b0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0208_0x1b0208");
#endif

    switch (ctx->pc) {
        case 0x1b0218u: goto label_1b0218;
        default: break;
    }

    ctx->pc = 0x1b0208u;

    // 0x1b0208: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1b0208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b020c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b020cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0210: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b0214: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1b0214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1b0218:
    // 0x1b0218: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b0218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b021c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B021Cu;
    {
        const bool branch_taken_0x1b021c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B0220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B021Cu;
            // 0x1b0220: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b021c) {
            ctx->pc = 0x1B0240u;
            goto label_1b0240;
        }
    }
    ctx->pc = 0x1B0224u;
    // 0x1b0224: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b0228: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1b0228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b022c: 0x0  nop
    ctx->pc = 0x1b022cu;
    // NOP
    // 0x1b0230: 0x0  nop
    ctx->pc = 0x1b0230u;
    // NOP
    // 0x1b0234: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B0234u;
    {
        const bool branch_taken_0x1b0234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0234) {
            ctx->pc = 0x1B0238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0234u;
            // 0x1b0238: 0x8c830058  lw          $v1, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0218;
        }
    }
    ctx->pc = 0x1B023Cu;
    // 0x1b023c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b023cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0240:
    // 0x1b0240: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0248u;
}
