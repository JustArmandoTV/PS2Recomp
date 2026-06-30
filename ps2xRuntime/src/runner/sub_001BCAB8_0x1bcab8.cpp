#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCAB8
// Address: 0x1bcab8 - 0x1bcaf0
void sub_001BCAB8_0x1bcab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCAB8_0x1bcab8");
#endif

    ctx->pc = 0x1bcab8u;

    // 0x1bcab8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bcab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bcabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcac0: 0x90c300d0  lbu         $v1, 0xD0($a2)
    ctx->pc = 0x1bcac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x1bcac4: 0x90c400d1  lbu         $a0, 0xD1($a2)
    ctx->pc = 0x1bcac4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 209)));
    // 0x1bcac8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcacc: 0x90c700d2  lbu         $a3, 0xD2($a2)
    ctx->pc = 0x1bcaccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 210)));
    // 0x1bcad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcad4: 0x90c800d3  lbu         $t0, 0xD3($a2)
    ctx->pc = 0x1bcad4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 211)));
    // 0x1bcad8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcadc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bcadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bcae0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bcae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcae4: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1bcae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAE8u;
            // 0x1bcaec: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCAF0u;
}
