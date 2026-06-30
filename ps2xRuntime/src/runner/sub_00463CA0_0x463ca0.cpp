#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463CA0
// Address: 0x463ca0 - 0x463d00
void sub_00463CA0_0x463ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463CA0_0x463ca0");
#endif

    switch (ctx->pc) {
        case 0x463cb8u: goto label_463cb8;
        default: break;
    }

    ctx->pc = 0x463ca0u;

    // 0x463ca0: 0x908302f8  lbu         $v1, 0x2F8($a0)
    ctx->pc = 0x463ca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x463ca4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x463CA4u;
    {
        const bool branch_taken_0x463ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463ca4) {
            ctx->pc = 0x463CF0u;
            goto label_463cf0;
        }
    }
    ctx->pc = 0x463CACu;
    // 0x463cac: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x463cacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463cb0: 0x248b02b0  addiu       $t3, $a0, 0x2B0
    ctx->pc = 0x463cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x463cb4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x463cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_463cb8:
    // 0x463cb8: 0x8c8802f0  lw          $t0, 0x2F0($a0)
    ctx->pc = 0x463cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x463cbc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x463cbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x463cc0: 0x29830002  slti        $v1, $t4, 0x2
    ctx->pc = 0x463cc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x463cc4: 0xad050080  sw          $a1, 0x80($t0)
    ctx->pc = 0x463cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 5));
    // 0x463cc8: 0xad060084  sw          $a2, 0x84($t0)
    ctx->pc = 0x463cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 6));
    // 0x463ccc: 0xad0b0088  sw          $t3, 0x88($t0)
    ctx->pc = 0x463cccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 136), GPR_U32(ctx, 11));
    // 0x463cd0: 0xad07008c  sw          $a3, 0x8C($t0)
    ctx->pc = 0x463cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 140), GPR_U32(ctx, 7));
    // 0x463cd4: 0xad0a0090  sw          $t2, 0x90($t0)
    ctx->pc = 0x463cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 10));
    // 0x463cd8: 0x8c8902f0  lw          $t1, 0x2F0($a0)
    ctx->pc = 0x463cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x463cdc: 0x95280064  lhu         $t0, 0x64($t1)
    ctx->pc = 0x463cdcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x463ce0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x463ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x463ce4: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x463ce4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x463ce8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x463CE8u;
    {
        const bool branch_taken_0x463ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x463CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463CE8u;
            // 0x463cec: 0xa5280064  sh          $t0, 0x64($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 100), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ce8) {
            ctx->pc = 0x463CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_463cb8;
        }
    }
    ctx->pc = 0x463CF0u;
label_463cf0:
    // 0x463cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x463CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463CF8u;
    // 0x463cf8: 0x0  nop
    ctx->pc = 0x463cf8u;
    // NOP
    // 0x463cfc: 0x0  nop
    ctx->pc = 0x463cfcu;
    // NOP
}
