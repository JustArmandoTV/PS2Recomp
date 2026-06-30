#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040C540
// Address: 0x40c540 - 0x40c560
void sub_0040C540_0x40c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C540_0x40c540");
#endif

    ctx->pc = 0x40c540u;

    // 0x40c540: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c544: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x40c544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x40c548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c54c: 0x3e00008  jr          $ra
    ctx->pc = 0x40C54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C54Cu;
            // 0x40c550: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C554u;
    // 0x40c554: 0x0  nop
    ctx->pc = 0x40c554u;
    // NOP
    // 0x40c558: 0x0  nop
    ctx->pc = 0x40c558u;
    // NOP
    // 0x40c55c: 0x0  nop
    ctx->pc = 0x40c55cu;
    // NOP
}
