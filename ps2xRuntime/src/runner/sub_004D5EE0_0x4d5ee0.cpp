#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D5EE0
// Address: 0x4d5ee0 - 0x4d5f40
void sub_004D5EE0_0x4d5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5EE0_0x4d5ee0");
#endif

    switch (ctx->pc) {
        case 0x4d5f20u: goto label_4d5f20;
        default: break;
    }

    ctx->pc = 0x4d5ee0u;

    // 0x4d5ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d5ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d5ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d5eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d5eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5ef0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D5EF0u;
    {
        const bool branch_taken_0x4d5ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5ef0) {
            ctx->pc = 0x4D5EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5EF0u;
            // 0x4d5ef4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5F24u;
            goto label_4d5f24;
        }
    }
    ctx->pc = 0x4D5EF8u;
    // 0x4d5ef8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d5efc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4d5efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4d5f00: 0x244225f8  addiu       $v0, $v0, 0x25F8
    ctx->pc = 0x4d5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9720));
    // 0x4d5f04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4d5f04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4d5f08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d5f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d5f0c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d5f10: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D5F10u;
    {
        const bool branch_taken_0x4d5f10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4D5F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5F10u;
            // 0x4d5f14: 0xac40aa48  sw          $zero, -0x55B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5f10) {
            ctx->pc = 0x4D5F20u;
            goto label_4d5f20;
        }
    }
    ctx->pc = 0x4D5F18u;
    // 0x4d5f18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D5F18u;
    SET_GPR_U32(ctx, 31, 0x4D5F20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5F20u; }
        if (ctx->pc != 0x4D5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5F20u; }
        if (ctx->pc != 0x4D5F20u) { return; }
    }
    ctx->pc = 0x4D5F20u;
label_4d5f20:
    // 0x4d5f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d5f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5f24:
    // 0x4d5f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5F2Cu;
            // 0x4d5f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5F34u;
    // 0x4d5f34: 0x0  nop
    ctx->pc = 0x4d5f34u;
    // NOP
    // 0x4d5f38: 0x0  nop
    ctx->pc = 0x4d5f38u;
    // NOP
    // 0x4d5f3c: 0x0  nop
    ctx->pc = 0x4d5f3cu;
    // NOP
}
