#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8080
// Address: 0x2c8080 - 0x2c80f0
void sub_002C8080_0x2c8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8080_0x2c8080");
#endif

    switch (ctx->pc) {
        case 0x2c80c0u: goto label_2c80c0;
        case 0x2c80d8u: goto label_2c80d8;
        default: break;
    }

    ctx->pc = 0x2c8080u;

    // 0x2c8080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c808c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8094: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C8094u;
    {
        const bool branch_taken_0x2c8094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8094u;
            // 0x2c8098: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8094) {
            ctx->pc = 0x2C80D8u;
            goto label_2c80d8;
        }
    }
    ctx->pc = 0x2C809Cu;
    // 0x2c809c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C809Cu;
    {
        const bool branch_taken_0x2c809c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c809c) {
            ctx->pc = 0x2C80A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C809Cu;
            // 0x2c80a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C80C4u;
            goto label_2c80c4;
        }
    }
    ctx->pc = 0x2C80A4u;
    // 0x2c80a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C80A4u;
    {
        const bool branch_taken_0x2c80a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80a4) {
            ctx->pc = 0x2C80C0u;
            goto label_2c80c0;
        }
    }
    ctx->pc = 0x2C80ACu;
    // 0x2c80ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c80acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c80b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C80B0u;
    {
        const bool branch_taken_0x2c80b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80b0) {
            ctx->pc = 0x2C80C0u;
            goto label_2c80c0;
        }
    }
    ctx->pc = 0x2C80B8u;
    // 0x2c80b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C80B8u;
    SET_GPR_U32(ctx, 31, 0x2C80C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80C0u; }
        if (ctx->pc != 0x2C80C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80C0u; }
        if (ctx->pc != 0x2C80C0u) { return; }
    }
    ctx->pc = 0x2C80C0u;
label_2c80c0:
    // 0x2c80c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c80c4:
    // 0x2c80c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c80c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c80c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C80C8u;
    {
        const bool branch_taken_0x2c80c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c80c8) {
            ctx->pc = 0x2C80CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80C8u;
            // 0x2c80cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C80DCu;
            goto label_2c80dc;
        }
    }
    ctx->pc = 0x2C80D0u;
    // 0x2c80d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C80D0u;
    SET_GPR_U32(ctx, 31, 0x2C80D8u);
    ctx->pc = 0x2C80D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80D0u;
            // 0x2c80d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80D8u; }
        if (ctx->pc != 0x2C80D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80D8u; }
        if (ctx->pc != 0x2C80D8u) { return; }
    }
    ctx->pc = 0x2C80D8u;
label_2c80d8:
    // 0x2c80d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c80d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c80dc:
    // 0x2c80dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c80dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c80e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c80e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c80e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c80e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c80e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C80E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C80ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80E8u;
            // 0x2c80ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C80F0u;
}
