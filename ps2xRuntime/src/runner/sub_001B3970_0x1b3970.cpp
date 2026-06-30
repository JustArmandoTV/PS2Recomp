#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3970
// Address: 0x1b3970 - 0x1b39d8
void sub_001B3970_0x1b3970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3970_0x1b3970");
#endif

    switch (ctx->pc) {
        case 0x1b398cu: goto label_1b398c;
        default: break;
    }

    ctx->pc = 0x1b3970u;

    // 0x1b3970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3978: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b3978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b397c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b3980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b3984: 0xc06419c  jal         func_190670
    ctx->pc = 0x1B3984u;
    SET_GPR_U32(ctx, 31, 0x1B398Cu);
    ctx->pc = 0x1B3988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3984u;
            // 0x1b3988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B398Cu; }
        if (ctx->pc != 0x1B398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B398Cu; }
        if (ctx->pc != 0x1B398Cu) { return; }
    }
    ctx->pc = 0x1B398Cu;
label_1b398c:
    // 0x1b398c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3994: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1b3994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1b3998: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1b3998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1b399c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b399cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b39a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b39a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b39a8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b39ac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b39acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b39b0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b39b4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1b39b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1b39b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b39b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1b39bc: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1b39bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1b39c0: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1b39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1b39c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b39c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b39c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b39c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b39cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B39CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B39D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39CCu;
            // 0x1b39d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B39D4u;
    // 0x1b39d4: 0x0  nop
    ctx->pc = 0x1b39d4u;
    // NOP
}
