#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A8780
// Address: 0x4a8780 - 0x4a87d0
void sub_004A8780_0x4a8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8780_0x4a8780");
#endif

    ctx->pc = 0x4a8780u;

    // 0x4a8780: 0x8085008a  lb          $a1, 0x8A($a0)
    ctx->pc = 0x4a8780u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 138)));
    // 0x4a8784: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a8788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a8788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a878c: 0xa085008b  sb          $a1, 0x8B($a0)
    ctx->pc = 0x4a878cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a8790: 0xa083008a  sb          $v1, 0x8A($a0)
    ctx->pc = 0x4a8790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a8794: 0xa0830094  sb          $v1, 0x94($a0)
    ctx->pc = 0x4a8794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a8798: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x4a8798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x4a879c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A879Cu;
    {
        const bool branch_taken_0x4a879c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a879c) {
            ctx->pc = 0x4A87A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A879Cu;
            // 0x4a87a0: 0x9083008c  lbu         $v1, 0x8C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A87B0u;
            goto label_4a87b0;
        }
    }
    ctx->pc = 0x4A87A4u;
    // 0x4a87a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4a87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4a87a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A87A8u;
    {
        const bool branch_taken_0x4a87a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A87ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A87A8u;
            // 0x4a87ac: 0xa082008d  sb          $v0, 0x8D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a87a8) {
            ctx->pc = 0x4A87BCu;
            goto label_4a87bc;
        }
    }
    ctx->pc = 0x4A87B0u;
label_4a87b0:
    // 0x4a87b0: 0x9082008d  lbu         $v0, 0x8D($a0)
    ctx->pc = 0x4a87b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 141)));
    // 0x4a87b4: 0xa082008c  sb          $v0, 0x8C($a0)
    ctx->pc = 0x4a87b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a87b8: 0xa083008d  sb          $v1, 0x8D($a0)
    ctx->pc = 0x4a87b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 3));
label_4a87bc:
    // 0x4a87bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a87c0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4a87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x4a87c4: 0xa083008e  sb          $v1, 0x8E($a0)
    ctx->pc = 0x4a87c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 142), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a87c8: 0x8073234  j           func_1CC8D0
    ctx->pc = 0x4A87C8u;
    ctx->pc = 0x4A87CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A87C8u;
            // 0x4a87cc: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A87D0u;
}
