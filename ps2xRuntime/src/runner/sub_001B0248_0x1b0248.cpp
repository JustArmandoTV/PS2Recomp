#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0248
// Address: 0x1b0248 - 0x1b0290
void sub_001B0248_0x1b0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0248_0x1b0248");
#endif

    switch (ctx->pc) {
        case 0x1b0260u: goto label_1b0260;
        default: break;
    }

    ctx->pc = 0x1b0248u;

    // 0x1b0248: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1b0248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b024c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b024cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0250: 0x8c460178  lw          $a2, 0x178($v0)
    ctx->pc = 0x1b0250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1b0254: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B0254u;
    {
        const bool branch_taken_0x1b0254 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1B0258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0254u;
            // 0x1b0258: 0x24430180  addiu       $v1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0254) {
            ctx->pc = 0x1B0284u;
            goto label_1b0284;
        }
    }
    ctx->pc = 0x1B025Cu;
    // 0x1b025c: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x1b025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
label_1b0260:
    // 0x1b0260: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b0260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0264: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B0268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0264u;
            // 0x1b0268: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0288u;
            goto label_1b0288;
        }
    }
    ctx->pc = 0x1B026Cu;
    // 0x1b026c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b0270: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1b0270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b0274: 0x0  nop
    ctx->pc = 0x1b0274u;
    // NOP
    // 0x1b0278: 0x0  nop
    ctx->pc = 0x1b0278u;
    // NOP
    // 0x1b027c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B027Cu;
    {
        const bool branch_taken_0x1b027c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B027Cu;
            // 0x1b0280: 0x246300f0  addiu       $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b027c) {
            ctx->pc = 0x1B0260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0260;
        }
    }
    ctx->pc = 0x1B0284u;
label_1b0284:
    // 0x1b0284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0288:
    // 0x1b0288: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0290u;
}
