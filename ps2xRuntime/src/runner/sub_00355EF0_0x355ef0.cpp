#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00355EF0
// Address: 0x355ef0 - 0x355f50
void sub_00355EF0_0x355ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355EF0_0x355ef0");
#endif

    switch (ctx->pc) {
        case 0x355f30u: goto label_355f30;
        default: break;
    }

    ctx->pc = 0x355ef0u;

    // 0x355ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355f00: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x355F00u;
    {
        const bool branch_taken_0x355f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x355f00) {
            ctx->pc = 0x355F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355F00u;
            // 0x355f04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355F34u;
            goto label_355f34;
        }
    }
    ctx->pc = 0x355F08u;
    // 0x355f08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x355f0c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x355f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x355f10: 0x24425f08  addiu       $v0, $v0, 0x5F08
    ctx->pc = 0x355f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24328));
    // 0x355f14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x355f14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x355f18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x355f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x355f1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x355f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x355f20: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355F20u;
    {
        const bool branch_taken_0x355f20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x355F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355F20u;
            // 0x355f24: 0xac403ff8  sw          $zero, 0x3FF8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f20) {
            ctx->pc = 0x355F30u;
            goto label_355f30;
        }
    }
    ctx->pc = 0x355F28u;
    // 0x355f28: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x355F28u;
    SET_GPR_U32(ctx, 31, 0x355F30u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355F30u; }
        if (ctx->pc != 0x355F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355F30u; }
        if (ctx->pc != 0x355F30u) { return; }
    }
    ctx->pc = 0x355F30u;
label_355f30:
    // 0x355f30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355f34:
    // 0x355f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x355F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355F3Cu;
            // 0x355f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355F44u;
    // 0x355f44: 0x0  nop
    ctx->pc = 0x355f44u;
    // NOP
    // 0x355f48: 0x0  nop
    ctx->pc = 0x355f48u;
    // NOP
    // 0x355f4c: 0x0  nop
    ctx->pc = 0x355f4cu;
    // NOP
}
