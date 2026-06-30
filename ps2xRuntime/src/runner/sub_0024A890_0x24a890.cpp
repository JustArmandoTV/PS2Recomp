#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A890
// Address: 0x24a890 - 0x24a8e0
void sub_0024A890_0x24a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A890_0x24a890");
#endif

    switch (ctx->pc) {
        case 0x24a8a8u: goto label_24a8a8;
        default: break;
    }

    ctx->pc = 0x24a890u;

    // 0x24a890: 0x90a4000e  lbu         $a0, 0xE($a1)
    ctx->pc = 0x24a890u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x24a894: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x24a894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x24a898: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x24a898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24a89c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x24A89Cu;
    {
        const bool branch_taken_0x24a89c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A89Cu;
            // 0x24a8a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a89c) {
            ctx->pc = 0x24A8D0u;
            goto label_24a8d0;
        }
    }
    ctx->pc = 0x24A8A4u;
    // 0x24a8a4: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x24a8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_24a8a8:
    // 0x24a8a8: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x24a8a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x24a8ac: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A8ACu;
    {
        const bool branch_taken_0x24a8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24A8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8ACu;
            // 0x24a8b0: 0x25060004  addiu       $a2, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8ac) {
            ctx->pc = 0x24A8C0u;
            goto label_24a8c0;
        }
    }
    ctx->pc = 0x24A8B4u;
    // 0x24a8b4: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x24a8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a8b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A8B8u;
    {
        const bool branch_taken_0x24a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8B8u;
            // 0x24a8bc: 0xa0c00001  sb          $zero, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8b8) {
            ctx->pc = 0x24A8D0u;
            goto label_24a8d0;
        }
    }
    ctx->pc = 0x24A8C0u;
label_24a8c0:
    // 0x24a8c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24a8c4: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x24a8c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24a8c8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24A8C8u;
    {
        const bool branch_taken_0x24a8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8C8u;
            // 0x24a8cc: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8c8) {
            ctx->pc = 0x24A8A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a8a8;
        }
    }
    ctx->pc = 0x24A8D0u;
label_24a8d0:
    // 0x24a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24A8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A8D8u;
    // 0x24a8d8: 0x0  nop
    ctx->pc = 0x24a8d8u;
    // NOP
    // 0x24a8dc: 0x0  nop
    ctx->pc = 0x24a8dcu;
    // NOP
}
