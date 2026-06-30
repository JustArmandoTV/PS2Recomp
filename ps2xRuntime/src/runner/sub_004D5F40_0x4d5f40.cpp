#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D5F40
// Address: 0x4d5f40 - 0x4d5fb0
void sub_004D5F40_0x4d5f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5F40_0x4d5f40");
#endif

    switch (ctx->pc) {
        case 0x4d5f80u: goto label_4d5f80;
        case 0x4d5f98u: goto label_4d5f98;
        default: break;
    }

    ctx->pc = 0x4d5f40u;

    // 0x4d5f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d5f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d5f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d5f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d5f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d5f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d5f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5f54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D5F54u;
    {
        const bool branch_taken_0x4d5f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5F54u;
            // 0x4d5f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5f54) {
            ctx->pc = 0x4D5F98u;
            goto label_4d5f98;
        }
    }
    ctx->pc = 0x4D5F5Cu;
    // 0x4d5f5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D5F5Cu;
    {
        const bool branch_taken_0x4d5f5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5f5c) {
            ctx->pc = 0x4D5F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5F5Cu;
            // 0x4d5f60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5F84u;
            goto label_4d5f84;
        }
    }
    ctx->pc = 0x4D5F64u;
    // 0x4d5f64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D5F64u;
    {
        const bool branch_taken_0x4d5f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5f64) {
            ctx->pc = 0x4D5F80u;
            goto label_4d5f80;
        }
    }
    ctx->pc = 0x4D5F6Cu;
    // 0x4d5f6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4d5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4d5f70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D5F70u;
    {
        const bool branch_taken_0x4d5f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5f70) {
            ctx->pc = 0x4D5F80u;
            goto label_4d5f80;
        }
    }
    ctx->pc = 0x4D5F78u;
    // 0x4d5f78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D5F78u;
    SET_GPR_U32(ctx, 31, 0x4D5F80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5F80u; }
        if (ctx->pc != 0x4D5F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5F80u; }
        if (ctx->pc != 0x4D5F80u) { return; }
    }
    ctx->pc = 0x4D5F80u;
label_4d5f80:
    // 0x4d5f80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d5f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d5f84:
    // 0x4d5f84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d5f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d5f88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D5F88u;
    {
        const bool branch_taken_0x4d5f88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d5f88) {
            ctx->pc = 0x4D5F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5F88u;
            // 0x4d5f8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5F9Cu;
            goto label_4d5f9c;
        }
    }
    ctx->pc = 0x4D5F90u;
    // 0x4d5f90: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D5F90u;
    SET_GPR_U32(ctx, 31, 0x4D5F98u);
    ctx->pc = 0x4D5F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5F90u;
            // 0x4d5f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5F98u; }
        if (ctx->pc != 0x4D5F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5F98u; }
        if (ctx->pc != 0x4D5F98u) { return; }
    }
    ctx->pc = 0x4D5F98u;
label_4d5f98:
    // 0x4d5f98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d5f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d5f9c:
    // 0x4d5f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d5f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d5fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5FA8u;
            // 0x4d5fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5FB0u;
}
