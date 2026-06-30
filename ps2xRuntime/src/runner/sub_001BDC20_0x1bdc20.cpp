#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDC20
// Address: 0x1bdc20 - 0x1bdc68
void sub_001BDC20_0x1bdc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDC20_0x1bdc20");
#endif

    switch (ctx->pc) {
        case 0x1bdc28u: goto label_1bdc28;
        case 0x1bdc30u: goto label_1bdc30;
        case 0x1bdc40u: goto label_1bdc40;
        case 0x1bdc50u: goto label_1bdc50;
        case 0x1bdc60u: goto label_1bdc60;
        default: break;
    }

    ctx->pc = 0x1bdc20u;

    // 0x1bdc20: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC20u;
            // 0x1bdc24: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC28u;
label_1bdc28:
    // 0x1bdc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC28u;
            // 0x1bdc2c: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC30u;
label_1bdc30:
    // 0x1bdc30: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1bdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1bdc34: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC34u;
            // 0x1bdc38: 0xac450018  sw          $a1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC3Cu;
    // 0x1bdc3c: 0x0  nop
    ctx->pc = 0x1bdc3cu;
    // NOP
label_1bdc40:
    // 0x1bdc40: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1bdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1bdc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC44u;
            // 0x1bdc48: 0xac450020  sw          $a1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC4Cu;
    // 0x1bdc4c: 0x0  nop
    ctx->pc = 0x1bdc4cu;
    // NOP
label_1bdc50:
    // 0x1bdc50: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1bdc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1bdc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC54u;
            // 0x1bdc58: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC5Cu;
    // 0x1bdc5c: 0x0  nop
    ctx->pc = 0x1bdc5cu;
    // NOP
label_1bdc60:
    // 0x1bdc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC60u;
            // 0x1bdc64: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC68u;
}
