#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034AB00
// Address: 0x34ab00 - 0x34ab20
void sub_0034AB00_0x34ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AB00_0x34ab00");
#endif

    ctx->pc = 0x34ab00u;

    // 0x34ab00: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ab04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34ab08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34ab0c: 0x24427578  addiu       $v0, $v0, 0x7578
    ctx->pc = 0x34ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30072));
    // 0x34ab10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ab14: 0x3e00008  jr          $ra
    ctx->pc = 0x34AB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AB14u;
            // 0x34ab18: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34AB1Cu;
    // 0x34ab1c: 0x0  nop
    ctx->pc = 0x34ab1cu;
    // NOP
}
