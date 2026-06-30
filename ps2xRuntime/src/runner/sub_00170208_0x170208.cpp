#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170208
// Address: 0x170208 - 0x170238
void sub_00170208_0x170208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170208_0x170208");
#endif

    ctx->pc = 0x170208u;

    // 0x170208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17020c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17020cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170210: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170210u;
    {
        const bool branch_taken_0x170210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x170214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170210u;
            // 0x170214: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170210) {
            ctx->pc = 0x170228u;
            goto label_170228;
        }
    }
    ctx->pc = 0x170218u;
    // 0x170218: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17021c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170220: 0x80593c6  j           func_164F18
    ctx->pc = 0x170220u;
    ctx->pc = 0x170224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170220u;
            // 0x170224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F18u;
    {
        auto targetFn = runtime->lookupFunction(0x164F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170228u;
label_170228:
    // 0x170228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17022c: 0x3e00008  jr          $ra
    ctx->pc = 0x17022Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17022Cu;
            // 0x170230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170234u;
    // 0x170234: 0x0  nop
    ctx->pc = 0x170234u;
    // NOP
}
