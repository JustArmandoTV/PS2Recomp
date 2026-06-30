#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049A5F0
// Address: 0x49a5f0 - 0x49a650
void sub_0049A5F0_0x49a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A5F0_0x49a5f0");
#endif

    switch (ctx->pc) {
        case 0x49a630u: goto label_49a630;
        default: break;
    }

    ctx->pc = 0x49a5f0u;

    // 0x49a5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49a5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49a5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49a5fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a600: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x49A600u;
    {
        const bool branch_taken_0x49a600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a600) {
            ctx->pc = 0x49A604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A600u;
            // 0x49a604: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A634u;
            goto label_49a634;
        }
    }
    ctx->pc = 0x49A608u;
    // 0x49a608: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49a60c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x49a60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x49a610: 0x2442fb28  addiu       $v0, $v0, -0x4D8
    ctx->pc = 0x49a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966056));
    // 0x49a614: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x49a614u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x49a618: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49a618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49a61c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49a620: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A620u;
    {
        const bool branch_taken_0x49a620 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x49A624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A620u;
            // 0x49a624: 0xac407c08  sw          $zero, 0x7C08($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a620) {
            ctx->pc = 0x49A630u;
            goto label_49a630;
        }
    }
    ctx->pc = 0x49A628u;
    // 0x49a628: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49A628u;
    SET_GPR_U32(ctx, 31, 0x49A630u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A630u; }
        if (ctx->pc != 0x49A630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A630u; }
        if (ctx->pc != 0x49A630u) { return; }
    }
    ctx->pc = 0x49A630u;
label_49a630:
    // 0x49a630: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49a630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a634:
    // 0x49a634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a63c: 0x3e00008  jr          $ra
    ctx->pc = 0x49A63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A63Cu;
            // 0x49a640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A644u;
    // 0x49a644: 0x0  nop
    ctx->pc = 0x49a644u;
    // NOP
    // 0x49a648: 0x0  nop
    ctx->pc = 0x49a648u;
    // NOP
    // 0x49a64c: 0x0  nop
    ctx->pc = 0x49a64cu;
    // NOP
}
