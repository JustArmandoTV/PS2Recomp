#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301540
// Address: 0x301540 - 0x301560
void sub_00301540_0x301540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301540_0x301540");
#endif

    ctx->pc = 0x301540u;

    // 0x301540: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x301540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x301544: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x301544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x301548: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x301548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30154c: 0x3e00008  jr          $ra
    ctx->pc = 0x30154Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30154Cu;
            // 0x301550: 0x24420ec0  addiu       $v0, $v0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301554u;
    // 0x301554: 0x0  nop
    ctx->pc = 0x301554u;
    // NOP
    // 0x301558: 0x0  nop
    ctx->pc = 0x301558u;
    // NOP
    // 0x30155c: 0x0  nop
    ctx->pc = 0x30155cu;
    // NOP
}
