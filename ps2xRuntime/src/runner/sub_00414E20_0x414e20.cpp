#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414E20
// Address: 0x414e20 - 0x414e80
void sub_00414E20_0x414e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414E20_0x414e20");
#endif

    switch (ctx->pc) {
        case 0x414e60u: goto label_414e60;
        default: break;
    }

    ctx->pc = 0x414e20u;

    // 0x414e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x414e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x414e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x414e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x414e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414e30: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x414E30u;
    {
        const bool branch_taken_0x414e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x414e30) {
            ctx->pc = 0x414E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414E30u;
            // 0x414e34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414E64u;
            goto label_414e64;
        }
    }
    ctx->pc = 0x414E38u;
    // 0x414e38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x414e3c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x414e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x414e40: 0x2442b108  addiu       $v0, $v0, -0x4EF8
    ctx->pc = 0x414e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947080));
    // 0x414e44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x414e44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x414e48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x414e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x414e4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x414e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x414e50: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x414E50u;
    {
        const bool branch_taken_0x414e50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x414E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414E50u;
            // 0x414e54: 0xac403e90  sw          $zero, 0x3E90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414e50) {
            ctx->pc = 0x414E60u;
            goto label_414e60;
        }
    }
    ctx->pc = 0x414E58u;
    // 0x414e58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x414E58u;
    SET_GPR_U32(ctx, 31, 0x414E60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414E60u; }
        if (ctx->pc != 0x414E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414E60u; }
        if (ctx->pc != 0x414E60u) { return; }
    }
    ctx->pc = 0x414E60u;
label_414e60:
    // 0x414e60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x414e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414e64:
    // 0x414e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x414e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x414E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414E6Cu;
            // 0x414e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414E74u;
    // 0x414e74: 0x0  nop
    ctx->pc = 0x414e74u;
    // NOP
    // 0x414e78: 0x0  nop
    ctx->pc = 0x414e78u;
    // NOP
    // 0x414e7c: 0x0  nop
    ctx->pc = 0x414e7cu;
    // NOP
}
