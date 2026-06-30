#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5D40
// Address: 0x2c5d40 - 0x2c5da0
void sub_002C5D40_0x2c5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5D40_0x2c5d40");
#endif

    switch (ctx->pc) {
        case 0x2c5d80u: goto label_2c5d80;
        default: break;
    }

    ctx->pc = 0x2c5d40u;

    // 0x2c5d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d50: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C5D50u;
    {
        const bool branch_taken_0x2c5d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d50) {
            ctx->pc = 0x2C5D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D50u;
            // 0x2c5d54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D84u;
            goto label_2c5d84;
        }
    }
    ctx->pc = 0x2C5D58u;
    // 0x2c5d58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5d5c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c5d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5d60: 0x24420bd8  addiu       $v0, $v0, 0xBD8
    ctx->pc = 0x2c5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3032));
    // 0x2c5d64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c5d64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c5d68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c5d6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c5d70: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5D70u;
    {
        const bool branch_taken_0x2c5d70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C5D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D70u;
            // 0x2c5d74: 0xac400dd0  sw          $zero, 0xDD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d70) {
            ctx->pc = 0x2C5D80u;
            goto label_2c5d80;
        }
    }
    ctx->pc = 0x2C5D78u;
    // 0x2c5d78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C5D78u;
    SET_GPR_U32(ctx, 31, 0x2C5D80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D80u; }
        if (ctx->pc != 0x2C5D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D80u; }
        if (ctx->pc != 0x2C5D80u) { return; }
    }
    ctx->pc = 0x2C5D80u;
label_2c5d80:
    // 0x2c5d80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d84:
    // 0x2c5d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D8Cu;
            // 0x2c5d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5D94u;
    // 0x2c5d94: 0x0  nop
    ctx->pc = 0x2c5d94u;
    // NOP
    // 0x2c5d98: 0x0  nop
    ctx->pc = 0x2c5d98u;
    // NOP
    // 0x2c5d9c: 0x0  nop
    ctx->pc = 0x2c5d9cu;
    // NOP
}
