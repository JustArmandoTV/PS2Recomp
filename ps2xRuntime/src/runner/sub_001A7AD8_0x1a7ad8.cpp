#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7AD8
// Address: 0x1a7ad8 - 0x1a7b08
void sub_001A7AD8_0x1a7ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7AD8_0x1a7ad8");
#endif

    ctx->pc = 0x1a7ad8u;

    // 0x1a7ad8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1a7ad8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7adc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1a7adcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a7ae0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a7ae4: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1a7ae4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a7ae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a7ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7aec: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x1a7aecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1a7af0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a7af4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a7af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a7af8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a7afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AFCu;
            // 0x1a7b00: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7B04u;
    // 0x1a7b04: 0x0  nop
    ctx->pc = 0x1a7b04u;
    // NOP
}
