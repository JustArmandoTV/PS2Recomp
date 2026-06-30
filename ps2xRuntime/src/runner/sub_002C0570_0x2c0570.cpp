#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0570
// Address: 0x2c0570 - 0x2c05e0
void sub_002C0570_0x2c0570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0570_0x2c0570");
#endif

    switch (ctx->pc) {
        case 0x2c05b0u: goto label_2c05b0;
        case 0x2c05c8u: goto label_2c05c8;
        default: break;
    }

    ctx->pc = 0x2c0570u;

    // 0x2c0570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c0578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c057c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0584: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C0584u;
    {
        const bool branch_taken_0x2c0584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0584u;
            // 0x2c0588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0584) {
            ctx->pc = 0x2C05C8u;
            goto label_2c05c8;
        }
    }
    ctx->pc = 0x2C058Cu;
    // 0x2c058c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C058Cu;
    {
        const bool branch_taken_0x2c058c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c058c) {
            ctx->pc = 0x2C0590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C058Cu;
            // 0x2c0590: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C05B4u;
            goto label_2c05b4;
        }
    }
    ctx->pc = 0x2C0594u;
    // 0x2c0594: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0594u;
    {
        const bool branch_taken_0x2c0594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0594) {
            ctx->pc = 0x2C05B0u;
            goto label_2c05b0;
        }
    }
    ctx->pc = 0x2C059Cu;
    // 0x2c059c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c05a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C05A0u;
    {
        const bool branch_taken_0x2c05a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c05a0) {
            ctx->pc = 0x2C05B0u;
            goto label_2c05b0;
        }
    }
    ctx->pc = 0x2C05A8u;
    // 0x2c05a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C05A8u;
    SET_GPR_U32(ctx, 31, 0x2C05B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05B0u; }
        if (ctx->pc != 0x2C05B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05B0u; }
        if (ctx->pc != 0x2C05B0u) { return; }
    }
    ctx->pc = 0x2C05B0u;
label_2c05b0:
    // 0x2c05b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c05b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c05b4:
    // 0x2c05b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c05b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c05b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C05B8u;
    {
        const bool branch_taken_0x2c05b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c05b8) {
            ctx->pc = 0x2C05BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05B8u;
            // 0x2c05bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C05CCu;
            goto label_2c05cc;
        }
    }
    ctx->pc = 0x2C05C0u;
    // 0x2c05c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C05C0u;
    SET_GPR_U32(ctx, 31, 0x2C05C8u);
    ctx->pc = 0x2C05C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05C0u;
            // 0x2c05c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05C8u; }
        if (ctx->pc != 0x2C05C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05C8u; }
        if (ctx->pc != 0x2C05C8u) { return; }
    }
    ctx->pc = 0x2C05C8u;
label_2c05c8:
    // 0x2c05c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c05c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c05cc:
    // 0x2c05cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c05ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c05d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c05d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c05d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c05d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c05d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C05D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C05DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05D8u;
            // 0x2c05dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C05E0u;
}
