#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9460
// Address: 0x2d9460 - 0x2d94c0
void sub_002D9460_0x2d9460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9460_0x2d9460");
#endif

    switch (ctx->pc) {
        case 0x2d946cu: goto label_2d946c;
        default: break;
    }

    ctx->pc = 0x2d9460u;

    // 0x2d9460: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x2d9460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d9464: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x2d9464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2d9468: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d9468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2d946c:
    // 0x2d946c: 0x8c67e3a0  lw          $a3, -0x1C60($v1)
    ctx->pc = 0x2d946cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
    // 0x2d9470: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2d9470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2d9474: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x2d9474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d9478: 0xe03827  not         $a3, $a3
    ctx->pc = 0x2d9478u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x2d947c: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x2d947cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2d9480: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x2d9480u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x2d9484: 0x1500fff9  bnez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D9484u;
    {
        const bool branch_taken_0x2d9484 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9484u;
            // 0x2d9488: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9484) {
            ctx->pc = 0x2D946Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d946c;
        }
    }
    ctx->pc = 0x2D948Cu;
    // 0x2d948c: 0x80860068  lb          $a2, 0x68($a0)
    ctx->pc = 0x2d948cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2d9490: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d9490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d9494: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x2d9494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d9498: 0x8c64e3a8  lw          $a0, -0x1C58($v1)
    ctx->pc = 0x2d9498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960040)));
    // 0x2d949c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2d949cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d94a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d94a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d94a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2d94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d94ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d94acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d94b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d94b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d94b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D94B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D94B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D94B4u;
            // 0x2d94b8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D94BCu;
    // 0x2d94bc: 0x0  nop
    ctx->pc = 0x2d94bcu;
    // NOP
}
