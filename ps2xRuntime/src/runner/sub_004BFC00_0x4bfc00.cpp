#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BFC00
// Address: 0x4bfc00 - 0x4bfc60
void sub_004BFC00_0x4bfc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFC00_0x4bfc00");
#endif

    switch (ctx->pc) {
        case 0x4bfc40u: goto label_4bfc40;
        default: break;
    }

    ctx->pc = 0x4bfc00u;

    // 0x4bfc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bfc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bfc04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bfc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bfc08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bfc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bfc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bfc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfc10: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4BFC10u;
    {
        const bool branch_taken_0x4bfc10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfc10) {
            ctx->pc = 0x4BFC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFC10u;
            // 0x4bfc14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BFC44u;
            goto label_4bfc44;
        }
    }
    ctx->pc = 0x4BFC18u;
    // 0x4bfc18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bfc1c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4bfc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4bfc20: 0x24421138  addiu       $v0, $v0, 0x1138
    ctx->pc = 0x4bfc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4408));
    // 0x4bfc24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4bfc24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4bfc28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bfc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bfc2c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bfc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4bfc30: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BFC30u;
    {
        const bool branch_taken_0x4bfc30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4BFC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFC30u;
            // 0x4bfc34: 0xac40a9e8  sw          $zero, -0x5618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfc30) {
            ctx->pc = 0x4BFC40u;
            goto label_4bfc40;
        }
    }
    ctx->pc = 0x4BFC38u;
    // 0x4bfc38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BFC38u;
    SET_GPR_U32(ctx, 31, 0x4BFC40u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFC40u; }
        if (ctx->pc != 0x4BFC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFC40u; }
        if (ctx->pc != 0x4BFC40u) { return; }
    }
    ctx->pc = 0x4BFC40u;
label_4bfc40:
    // 0x4bfc40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bfc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bfc44:
    // 0x4bfc44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bfc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bfc48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bfc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFC4Cu;
            // 0x4bfc50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BFC54u;
    // 0x4bfc54: 0x0  nop
    ctx->pc = 0x4bfc54u;
    // NOP
    // 0x4bfc58: 0x0  nop
    ctx->pc = 0x4bfc58u;
    // NOP
    // 0x4bfc5c: 0x0  nop
    ctx->pc = 0x4bfc5cu;
    // NOP
}
