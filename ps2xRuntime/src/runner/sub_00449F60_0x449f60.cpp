#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00449F60
// Address: 0x449f60 - 0x449fc0
void sub_00449F60_0x449f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449F60_0x449f60");
#endif

    switch (ctx->pc) {
        case 0x449fa0u: goto label_449fa0;
        default: break;
    }

    ctx->pc = 0x449f60u;

    // 0x449f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x449f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x449f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x449f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x449f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x449f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449f70: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x449F70u;
    {
        const bool branch_taken_0x449f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x449f70) {
            ctx->pc = 0x449F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449F70u;
            // 0x449f74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449FA4u;
            goto label_449fa4;
        }
    }
    ctx->pc = 0x449F78u;
    // 0x449f78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x449f7c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x449f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x449f80: 0x2442d7c0  addiu       $v0, $v0, -0x2840
    ctx->pc = 0x449f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x449f84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x449f84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x449f88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x449f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x449f8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x449f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x449f90: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x449F90u;
    {
        const bool branch_taken_0x449f90 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x449F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449F90u;
            // 0x449f94: 0xac407540  sw          $zero, 0x7540($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f90) {
            ctx->pc = 0x449FA0u;
            goto label_449fa0;
        }
    }
    ctx->pc = 0x449F98u;
    // 0x449f98: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x449F98u;
    SET_GPR_U32(ctx, 31, 0x449FA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449FA0u; }
        if (ctx->pc != 0x449FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449FA0u; }
        if (ctx->pc != 0x449FA0u) { return; }
    }
    ctx->pc = 0x449FA0u;
label_449fa0:
    // 0x449fa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x449fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449fa4:
    // 0x449fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x449fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x449fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449fac: 0x3e00008  jr          $ra
    ctx->pc = 0x449FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449FACu;
            // 0x449fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449FB4u;
    // 0x449fb4: 0x0  nop
    ctx->pc = 0x449fb4u;
    // NOP
    // 0x449fb8: 0x0  nop
    ctx->pc = 0x449fb8u;
    // NOP
    // 0x449fbc: 0x0  nop
    ctx->pc = 0x449fbcu;
    // NOP
}
