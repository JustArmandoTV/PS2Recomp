#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE780
// Address: 0x1be780 - 0x1be7e0
void sub_001BE780_0x1be780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE780_0x1be780");
#endif

    switch (ctx->pc) {
        case 0x1be7b0u: goto label_1be7b0;
        case 0x1be7d0u: goto label_1be7d0;
        default: break;
    }

    ctx->pc = 0x1be780u;

    // 0x1be780: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1be780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1be784: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE784u;
            // 0x1be788: 0x8c629d4c  lw          $v0, -0x62B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942028)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE78Cu;
    // 0x1be78c: 0x0  nop
    ctx->pc = 0x1be78cu;
    // NOP
    // 0x1be790: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1be794: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE794u;
            // 0x1be798: 0xac449d34  sw          $a0, -0x62CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942004), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE79Cu;
    // 0x1be79c: 0x0  nop
    ctx->pc = 0x1be79cu;
    // NOP
    // 0x1be7a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1be7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1be7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7A4u;
            // 0x1be7a8: 0x8c629d34  lw          $v0, -0x62CC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942004)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE7ACu;
    // 0x1be7ac: 0x0  nop
    ctx->pc = 0x1be7acu;
    // NOP
label_1be7b0:
    // 0x1be7b0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1be7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1be7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7B4u;
            // 0x1be7b8: 0xac450044  sw          $a1, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE7BCu;
    // 0x1be7bc: 0x0  nop
    ctx->pc = 0x1be7bcu;
    // NOP
    // 0x1be7c0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1be7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1be7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7C4u;
            // 0x1be7c8: 0xac450048  sw          $a1, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE7CCu;
    // 0x1be7cc: 0x0  nop
    ctx->pc = 0x1be7ccu;
    // NOP
label_1be7d0:
    // 0x1be7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7D0u;
            // 0x1be7d4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE7D8u;
    // 0x1be7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7D8u;
            // 0x1be7dc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE7E0u;
}
