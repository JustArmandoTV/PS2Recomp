#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DCB0
// Address: 0x15dcb0 - 0x15dcf0
void sub_0015DCB0_0x15dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DCB0_0x15dcb0");
#endif

    switch (ctx->pc) {
        case 0x15dcd4u: goto label_15dcd4;
        default: break;
    }

    ctx->pc = 0x15dcb0u;

    // 0x15dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dcb4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x15dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x15dcb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15dcbc: 0x80625968  lb          $v0, 0x5968($v1)
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22888)));
    // 0x15dcc0: 0x24705968  addiu       $s0, $v1, 0x5968
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22888));
    // 0x15dcc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DCC4u;
    {
        const bool branch_taken_0x15dcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCC4u;
            // 0x15dcc8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcc4) {
            ctx->pc = 0x15DCD4u;
            goto label_15dcd4;
        }
    }
    ctx->pc = 0x15DCCCu;
    // 0x15dccc: 0xc057710  jal         func_15DC40
    ctx->pc = 0x15DCCCu;
    SET_GPR_U32(ctx, 31, 0x15DCD4u);
    ctx->pc = 0x15DC40u;
    if (runtime->hasFunction(0x15DC40u)) {
        auto targetFn = runtime->lookupFunction(0x15DC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCD4u; }
        if (ctx->pc != 0x15DCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DC40_0x15dc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCD4u; }
        if (ctx->pc != 0x15DCD4u) { return; }
    }
    ctx->pc = 0x15DCD4u;
label_15dcd4:
    // 0x15dcd4: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15dcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dcdc: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x15dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x15dce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15dce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dce4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15dce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15dce8: 0x3e00008  jr          $ra
    ctx->pc = 0x15DCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCE8u;
            // 0x15dcec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DCF0u;
}
