#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1FF8
// Address: 0x1c1ff8 - 0x1c2040
void sub_001C1FF8_0x1c1ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1FF8_0x1c1ff8");
#endif

    switch (ctx->pc) {
        case 0x1c2010u: goto label_1c2010;
        default: break;
    }

    ctx->pc = 0x1c1ff8u;

    // 0x1c1ff8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1c1ffc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1c1ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c2000: 0x2447bb78  addiu       $a3, $v0, -0x4488
    ctx->pc = 0x1c2000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949752));
    // 0x1c2004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2008: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1c2008u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c200c: 0x0  nop
    ctx->pc = 0x1c200cu;
    // NOP
label_1c2010:
    // 0x1c2010: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c2014: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1c2014u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c2018: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c2018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c201c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C201Cu;
    {
        const bool branch_taken_0x1c201c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C2020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C201Cu;
            // 0x1c2020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c201c) {
            ctx->pc = 0x1C2038u;
            goto label_1c2038;
        }
    }
    ctx->pc = 0x1C2024u;
    // 0x1c2024: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c2024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c2028: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x1c2028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c202c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C202Cu;
    {
        const bool branch_taken_0x1c202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c202c) {
            ctx->pc = 0x1C2030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C202Cu;
            // 0x1c2030: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2010;
        }
    }
    ctx->pc = 0x1C2034u;
    // 0x1c2034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2038:
    // 0x1c2038: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2040u;
}
