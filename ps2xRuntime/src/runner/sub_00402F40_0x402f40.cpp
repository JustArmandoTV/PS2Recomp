#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00402F40
// Address: 0x402f40 - 0x402fa0
void sub_00402F40_0x402f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402F40_0x402f40");
#endif

    switch (ctx->pc) {
        case 0x402f80u: goto label_402f80;
        default: break;
    }

    ctx->pc = 0x402f40u;

    // 0x402f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x402f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x402f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x402f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x402f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x402f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x402f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x402f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402f50: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x402F50u;
    {
        const bool branch_taken_0x402f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x402f50) {
            ctx->pc = 0x402F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402F50u;
            // 0x402f54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402F84u;
            goto label_402f84;
        }
    }
    ctx->pc = 0x402F58u;
    // 0x402f58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x402f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x402f5c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x402f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x402f60: 0x2442a638  addiu       $v0, $v0, -0x59C8
    ctx->pc = 0x402f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944312));
    // 0x402f64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x402f64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x402f68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x402f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x402f6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x402f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x402f70: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x402F70u;
    {
        const bool branch_taken_0x402f70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x402F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402F70u;
            // 0x402f74: 0xac407290  sw          $zero, 0x7290($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402f70) {
            ctx->pc = 0x402F80u;
            goto label_402f80;
        }
    }
    ctx->pc = 0x402F78u;
    // 0x402f78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x402F78u;
    SET_GPR_U32(ctx, 31, 0x402F80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F80u; }
        if (ctx->pc != 0x402F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F80u; }
        if (ctx->pc != 0x402F80u) { return; }
    }
    ctx->pc = 0x402F80u;
label_402f80:
    // 0x402f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x402f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402f84:
    // 0x402f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x402f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x402f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x402f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x402F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402F8Cu;
            // 0x402f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402F94u;
    // 0x402f94: 0x0  nop
    ctx->pc = 0x402f94u;
    // NOP
    // 0x402f98: 0x0  nop
    ctx->pc = 0x402f98u;
    // NOP
    // 0x402f9c: 0x0  nop
    ctx->pc = 0x402f9cu;
    // NOP
}
