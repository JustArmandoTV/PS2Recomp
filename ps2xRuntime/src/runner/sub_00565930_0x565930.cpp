#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00565930
// Address: 0x565930 - 0x565960
void sub_00565930_0x565930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00565930_0x565930");
#endif

    ctx->pc = 0x565930u;

    // 0x565930: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x565930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x565934: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x565934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x565938: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x565938u;
    {
        const bool branch_taken_0x565938 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x565938) {
            ctx->pc = 0x56593Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565938u;
            // 0x56593c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565948u;
            goto label_565948;
        }
    }
    ctx->pc = 0x565940u;
    // 0x565940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x565940u;
    {
        const bool branch_taken_0x565940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565940u;
            // 0x565944: 0xac800058  sw          $zero, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565940) {
            ctx->pc = 0x565954u;
            goto label_565954;
        }
    }
    ctx->pc = 0x565948u;
label_565948:
    // 0x565948: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x565948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x56594c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x56594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x565950: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x565950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
label_565954:
    // 0x565954: 0x3e00008  jr          $ra
    ctx->pc = 0x565954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56595Cu;
    // 0x56595c: 0x0  nop
    ctx->pc = 0x56595cu;
    // NOP
}
