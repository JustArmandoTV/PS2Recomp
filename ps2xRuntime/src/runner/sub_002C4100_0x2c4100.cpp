#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4100
// Address: 0x2c4100 - 0x2c4160
void sub_002C4100_0x2c4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4100_0x2c4100");
#endif

    switch (ctx->pc) {
        case 0x2c4140u: goto label_2c4140;
        default: break;
    }

    ctx->pc = 0x2c4100u;

    // 0x2c4100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c4108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c410c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c410cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4110: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C4110u;
    {
        const bool branch_taken_0x2c4110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4110) {
            ctx->pc = 0x2C4114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4110u;
            // 0x2c4114: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4144u;
            goto label_2c4144;
        }
    }
    ctx->pc = 0x2C4118u;
    // 0x2c4118: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c411c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c411cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c4120: 0x24421060  addiu       $v0, $v0, 0x1060
    ctx->pc = 0x2c4120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
    // 0x2c4124: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c4124u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c4128: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c4128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c412c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c4130: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4130u;
    {
        const bool branch_taken_0x2c4130 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C4134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4130u;
            // 0x2c4134: 0xac400db0  sw          $zero, 0xDB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4130) {
            ctx->pc = 0x2C4140u;
            goto label_2c4140;
        }
    }
    ctx->pc = 0x2C4138u;
    // 0x2c4138: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C4138u;
    SET_GPR_U32(ctx, 31, 0x2C4140u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4140u; }
        if (ctx->pc != 0x2C4140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4140u; }
        if (ctx->pc != 0x2C4140u) { return; }
    }
    ctx->pc = 0x2C4140u;
label_2c4140:
    // 0x2c4140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4144:
    // 0x2c4144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c414c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C414Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C414Cu;
            // 0x2c4150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4154u;
    // 0x2c4154: 0x0  nop
    ctx->pc = 0x2c4154u;
    // NOP
    // 0x2c4158: 0x0  nop
    ctx->pc = 0x2c4158u;
    // NOP
    // 0x2c415c: 0x0  nop
    ctx->pc = 0x2c415cu;
    // NOP
}
