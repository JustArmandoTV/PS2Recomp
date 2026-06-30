#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001703F8
// Address: 0x1703f8 - 0x170430
void sub_001703F8_0x1703f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001703F8_0x1703f8");
#endif

    ctx->pc = 0x1703f8u;

    // 0x1703f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1703F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1703FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703F8u;
            // 0x1703fc: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170400u;
    // 0x170400: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x170400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x170404: 0x3e00008  jr          $ra
    ctx->pc = 0x170404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170404u;
            // 0x170408: 0xac442e60  sw          $a0, 0x2E60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17040Cu;
    // 0x17040c: 0x0  nop
    ctx->pc = 0x17040cu;
    // NOP
    // 0x170410: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x170410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x170414: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x170414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x170418: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x170418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17041c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x17041cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x170420: 0xac622e64  sw          $v0, 0x2E64($v1)
    ctx->pc = 0x170420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11876), GPR_U32(ctx, 2));
    // 0x170424: 0x3e00008  jr          $ra
    ctx->pc = 0x170424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170424u;
            // 0x170428: 0xaca42e68  sw          $a0, 0x2E68($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11880), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17042Cu;
    // 0x17042c: 0x0  nop
    ctx->pc = 0x17042cu;
    // NOP
}
