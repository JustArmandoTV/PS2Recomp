#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C79B0
// Address: 0x2c79b0 - 0x2c7a20
void sub_002C79B0_0x2c79b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C79B0_0x2c79b0");
#endif

    switch (ctx->pc) {
        case 0x2c79f0u: goto label_2c79f0;
        case 0x2c7a08u: goto label_2c7a08;
        default: break;
    }

    ctx->pc = 0x2c79b0u;

    // 0x2c79b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c79b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c79b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c79b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c79b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c79b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c79bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c79bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c79c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c79c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C79C4u;
    {
        const bool branch_taken_0x2c79c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C79C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C79C4u;
            // 0x2c79c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79c4) {
            ctx->pc = 0x2C7A08u;
            goto label_2c7a08;
        }
    }
    ctx->pc = 0x2C79CCu;
    // 0x2c79cc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C79CCu;
    {
        const bool branch_taken_0x2c79cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c79cc) {
            ctx->pc = 0x2C79D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C79CCu;
            // 0x2c79d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C79F4u;
            goto label_2c79f4;
        }
    }
    ctx->pc = 0x2C79D4u;
    // 0x2c79d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C79D4u;
    {
        const bool branch_taken_0x2c79d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c79d4) {
            ctx->pc = 0x2C79F0u;
            goto label_2c79f0;
        }
    }
    ctx->pc = 0x2C79DCu;
    // 0x2c79dc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c79e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C79E0u;
    {
        const bool branch_taken_0x2c79e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c79e0) {
            ctx->pc = 0x2C79F0u;
            goto label_2c79f0;
        }
    }
    ctx->pc = 0x2C79E8u;
    // 0x2c79e8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C79E8u;
    SET_GPR_U32(ctx, 31, 0x2C79F0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C79F0u; }
        if (ctx->pc != 0x2C79F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C79F0u; }
        if (ctx->pc != 0x2C79F0u) { return; }
    }
    ctx->pc = 0x2C79F0u;
label_2c79f0:
    // 0x2c79f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c79f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c79f4:
    // 0x2c79f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c79f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c79f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C79F8u;
    {
        const bool branch_taken_0x2c79f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c79f8) {
            ctx->pc = 0x2C79FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C79F8u;
            // 0x2c79fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7A0Cu;
            goto label_2c7a0c;
        }
    }
    ctx->pc = 0x2C7A00u;
    // 0x2c7a00: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C7A00u;
    SET_GPR_U32(ctx, 31, 0x2C7A08u);
    ctx->pc = 0x2C7A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A00u;
            // 0x2c7a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A08u; }
        if (ctx->pc != 0x2C7A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A08u; }
        if (ctx->pc != 0x2C7A08u) { return; }
    }
    ctx->pc = 0x2C7A08u;
label_2c7a08:
    // 0x2c7a08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c7a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a0c:
    // 0x2c7a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7a18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A18u;
            // 0x2c7a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7A20u;
}
