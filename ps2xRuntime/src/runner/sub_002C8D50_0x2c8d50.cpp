#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8D50
// Address: 0x2c8d50 - 0x2c8db0
void sub_002C8D50_0x2c8d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8D50_0x2c8d50");
#endif

    switch (ctx->pc) {
        case 0x2c8d90u: goto label_2c8d90;
        default: break;
    }

    ctx->pc = 0x2c8d50u;

    // 0x2c8d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d60: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8D60u;
    {
        const bool branch_taken_0x2c8d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d60) {
            ctx->pc = 0x2C8D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D60u;
            // 0x2c8d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8D94u;
            goto label_2c8d94;
        }
    }
    ctx->pc = 0x2C8D68u;
    // 0x2c8d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8d6c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c8d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c8d70: 0x244205a8  addiu       $v0, $v0, 0x5A8
    ctx->pc = 0x2c8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1448));
    // 0x2c8d74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c8d78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c8d7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c8d80: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8D80u;
    {
        const bool branch_taken_0x2c8d80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C8D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D80u;
            // 0x2c8d84: 0xac400d78  sw          $zero, 0xD78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d80) {
            ctx->pc = 0x2C8D90u;
            goto label_2c8d90;
        }
    }
    ctx->pc = 0x2C8D88u;
    // 0x2c8d88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C8D88u;
    SET_GPR_U32(ctx, 31, 0x2C8D90u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D90u; }
        if (ctx->pc != 0x2C8D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D90u; }
        if (ctx->pc != 0x2C8D90u) { return; }
    }
    ctx->pc = 0x2C8D90u;
label_2c8d90:
    // 0x2c8d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d94:
    // 0x2c8d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D9Cu;
            // 0x2c8da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8DA4u;
    // 0x2c8da4: 0x0  nop
    ctx->pc = 0x2c8da4u;
    // NOP
    // 0x2c8da8: 0x0  nop
    ctx->pc = 0x2c8da8u;
    // NOP
    // 0x2c8dac: 0x0  nop
    ctx->pc = 0x2c8dacu;
    // NOP
}
