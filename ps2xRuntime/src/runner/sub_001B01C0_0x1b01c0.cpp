#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B01C0
// Address: 0x1b01c0 - 0x1b0208
void sub_001B01C0_0x1b01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B01C0_0x1b01c0");
#endif

    switch (ctx->pc) {
        case 0x1b01d8u: goto label_1b01d8;
        default: break;
    }

    ctx->pc = 0x1b01c0u;

    // 0x1b01c0: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1b01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b01c4: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x1b01c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
    // 0x1b01c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b01c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01cc: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x1b01ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b01d0: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1b01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b01d4: 0x0  nop
    ctx->pc = 0x1b01d4u;
    // NOP
label_1b01d8:
    // 0x1b01d8: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x1b01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x1b01dc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1b01dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01e0: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B01E0u;
    {
        const bool branch_taken_0x1b01e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B01E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01E0u;
            // 0x1b01e4: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01e0) {
            ctx->pc = 0x1B0200u;
            goto label_1b0200;
        }
    }
    ctx->pc = 0x1B01E8u;
    // 0x1b01e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b01ec: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1b01ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b01f0: 0x0  nop
    ctx->pc = 0x1b01f0u;
    // NOP
    // 0x1b01f4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B01F4u;
    {
        const bool branch_taken_0x1b01f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B01F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01F4u;
            // 0x1b01f8: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01f4) {
            ctx->pc = 0x1B01D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b01d8;
        }
    }
    ctx->pc = 0x1B01FCu;
    // 0x1b01fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b01fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0200:
    // 0x1b0200: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0208u;
}
