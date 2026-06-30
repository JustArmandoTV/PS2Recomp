#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E78A0
// Address: 0x4e78a0 - 0x4e7900
void sub_004E78A0_0x4e78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E78A0_0x4e78a0");
#endif

    switch (ctx->pc) {
        case 0x4e78acu: goto label_4e78ac;
        default: break;
    }

    ctx->pc = 0x4e78a0u;

    // 0x4e78a0: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x4e78a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4e78a4: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x4e78a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4e78a8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e78ac:
    // 0x4e78ac: 0x8c67ca50  lw          $a3, -0x35B0($v1)
    ctx->pc = 0x4e78acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953552)));
    // 0x4e78b0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4e78b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4e78b4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e78b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e78b8: 0xe03827  not         $a3, $a3
    ctx->pc = 0x4e78b8u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x4e78bc: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4e78bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4e78c0: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4e78c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4e78c4: 0x1500fff9  bnez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4E78C4u;
    {
        const bool branch_taken_0x4e78c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E78C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E78C4u;
            // 0x4e78c8: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e78c4) {
            ctx->pc = 0x4E78ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e78ac;
        }
    }
    ctx->pc = 0x4E78CCu;
    // 0x4e78cc: 0x80860068  lb          $a2, 0x68($a0)
    ctx->pc = 0x4e78ccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x4e78d0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4e78d4: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x4e78d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4e78d8: 0x8c64ca58  lw          $a0, -0x35A8($v1)
    ctx->pc = 0x4e78d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953560)));
    // 0x4e78dc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x4e78dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4e78e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4e78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4e78e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4e78e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4e78e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4e78e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4e78ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e78f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e78f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e78f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E78F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E78F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E78F4u;
            // 0x4e78f8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E78FCu;
    // 0x4e78fc: 0x0  nop
    ctx->pc = 0x4e78fcu;
    // NOP
}
