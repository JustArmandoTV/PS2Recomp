#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044F5E0
// Address: 0x44f5e0 - 0x44f640
void sub_0044F5E0_0x44f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F5E0_0x44f5e0");
#endif

    switch (ctx->pc) {
        case 0x44f620u: goto label_44f620;
        default: break;
    }

    ctx->pc = 0x44f5e0u;

    // 0x44f5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44f5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44f5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44f5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44f5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f5f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x44F5F0u;
    {
        const bool branch_taken_0x44f5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f5f0) {
            ctx->pc = 0x44F5F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F5F0u;
            // 0x44f5f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F624u;
            goto label_44f624;
        }
    }
    ctx->pc = 0x44F5F8u;
    // 0x44f5f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44f5fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x44f5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x44f600: 0x2442dc48  addiu       $v0, $v0, -0x23B8
    ctx->pc = 0x44f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958152));
    // 0x44f604: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x44f604u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x44f608: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44f608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x44f60c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44f610: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44F610u;
    {
        const bool branch_taken_0x44f610 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x44F614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F610u;
            // 0x44f614: 0xac4075a0  sw          $zero, 0x75A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f610) {
            ctx->pc = 0x44F620u;
            goto label_44f620;
        }
    }
    ctx->pc = 0x44F618u;
    // 0x44f618: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44F618u;
    SET_GPR_U32(ctx, 31, 0x44F620u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F620u; }
        if (ctx->pc != 0x44F620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F620u; }
        if (ctx->pc != 0x44F620u) { return; }
    }
    ctx->pc = 0x44F620u;
label_44f620:
    // 0x44f620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44f620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44f624:
    // 0x44f624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44f624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f62c: 0x3e00008  jr          $ra
    ctx->pc = 0x44F62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F62Cu;
            // 0x44f630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F634u;
    // 0x44f634: 0x0  nop
    ctx->pc = 0x44f634u;
    // NOP
    // 0x44f638: 0x0  nop
    ctx->pc = 0x44f638u;
    // NOP
    // 0x44f63c: 0x0  nop
    ctx->pc = 0x44f63cu;
    // NOP
}
