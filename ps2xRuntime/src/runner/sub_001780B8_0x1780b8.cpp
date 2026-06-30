#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001780B8
// Address: 0x1780b8 - 0x178108
void sub_001780B8_0x1780b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001780B8_0x1780b8");
#endif

    switch (ctx->pc) {
        case 0x1780d8u: goto label_1780d8;
        default: break;
    }

    ctx->pc = 0x1780b8u;

    // 0x1780b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1780b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1780bc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1780bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x1780c0: 0x8c42d190  lw          $v0, -0x2E70($v0)
    ctx->pc = 0x1780c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955408)));
    // 0x1780c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1780c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780c8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1780C8u;
    {
        const bool branch_taken_0x1780c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1780CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1780C8u;
            // 0x1780cc: 0x8c64d18c  lw          $a0, -0x2E74($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780c8) {
            ctx->pc = 0x1780FCu;
            goto label_1780fc;
        }
    }
    ctx->pc = 0x1780D0u;
    // 0x1780d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1780d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780d4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1780d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1780d8:
    // 0x1780d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1780d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1780DCu;
    {
        const bool branch_taken_0x1780dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1780DCu;
            // 0x1780e0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780dc) {
            ctx->pc = 0x178100u;
            goto label_178100;
        }
    }
    ctx->pc = 0x1780E4u;
    // 0x1780e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1780e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1780e8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1780e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1780ec: 0x0  nop
    ctx->pc = 0x1780ecu;
    // NOP
    // 0x1780f0: 0x0  nop
    ctx->pc = 0x1780f0u;
    // NOP
    // 0x1780f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1780F4u;
    {
        const bool branch_taken_0x1780f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1780f4) {
            ctx->pc = 0x1780F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1780F4u;
            // 0x1780f8: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1780D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1780d8;
        }
    }
    ctx->pc = 0x1780FCu;
label_1780fc:
    // 0x1780fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1780fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178100:
    // 0x178100: 0x3e00008  jr          $ra
    ctx->pc = 0x178100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178108u;
}
