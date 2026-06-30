#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00363E20
// Address: 0x363e20 - 0x363e80
void sub_00363E20_0x363e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363E20_0x363e20");
#endif

    switch (ctx->pc) {
        case 0x363e60u: goto label_363e60;
        default: break;
    }

    ctx->pc = 0x363e20u;

    // 0x363e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x363e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x363e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e30: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x363E30u;
    {
        const bool branch_taken_0x363e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x363e30) {
            ctx->pc = 0x363E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x363E30u;
            // 0x363e34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x363E64u;
            goto label_363e64;
        }
    }
    ctx->pc = 0x363E38u;
    // 0x363e38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363e3c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x363e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x363e40: 0x24426708  addiu       $v0, $v0, 0x6708
    ctx->pc = 0x363e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26376));
    // 0x363e44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x363e44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363e48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x363e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x363e4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x363e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x363e50: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x363E50u;
    {
        const bool branch_taken_0x363e50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x363E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363E50u;
            // 0x363e54: 0xac404018  sw          $zero, 0x4018($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363e50) {
            ctx->pc = 0x363E60u;
            goto label_363e60;
        }
    }
    ctx->pc = 0x363E58u;
    // 0x363e58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x363E58u;
    SET_GPR_U32(ctx, 31, 0x363E60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363E60u; }
        if (ctx->pc != 0x363E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363E60u; }
        if (ctx->pc != 0x363E60u) { return; }
    }
    ctx->pc = 0x363E60u;
label_363e60:
    // 0x363e60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363e64:
    // 0x363e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x363E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363E6Cu;
            // 0x363e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x363E74u;
    // 0x363e74: 0x0  nop
    ctx->pc = 0x363e74u;
    // NOP
    // 0x363e78: 0x0  nop
    ctx->pc = 0x363e78u;
    // NOP
    // 0x363e7c: 0x0  nop
    ctx->pc = 0x363e7cu;
    // NOP
}
