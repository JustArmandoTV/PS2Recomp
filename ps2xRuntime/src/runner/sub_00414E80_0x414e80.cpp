#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414E80
// Address: 0x414e80 - 0x414ef0
void sub_00414E80_0x414e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414E80_0x414e80");
#endif

    switch (ctx->pc) {
        case 0x414ec0u: goto label_414ec0;
        case 0x414ed8u: goto label_414ed8;
        default: break;
    }

    ctx->pc = 0x414e80u;

    // 0x414e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x414e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x414e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x414e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x414e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x414e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x414e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x414e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x414e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414e94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x414E94u;
    {
        const bool branch_taken_0x414e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x414E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414E94u;
            // 0x414e98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414e94) {
            ctx->pc = 0x414ED8u;
            goto label_414ed8;
        }
    }
    ctx->pc = 0x414E9Cu;
    // 0x414e9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x414E9Cu;
    {
        const bool branch_taken_0x414e9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x414e9c) {
            ctx->pc = 0x414EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414E9Cu;
            // 0x414ea0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414EC4u;
            goto label_414ec4;
        }
    }
    ctx->pc = 0x414EA4u;
    // 0x414ea4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x414EA4u;
    {
        const bool branch_taken_0x414ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x414ea4) {
            ctx->pc = 0x414EC0u;
            goto label_414ec0;
        }
    }
    ctx->pc = 0x414EACu;
    // 0x414eac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x414eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x414eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x414EB0u;
    {
        const bool branch_taken_0x414eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x414eb0) {
            ctx->pc = 0x414EC0u;
            goto label_414ec0;
        }
    }
    ctx->pc = 0x414EB8u;
    // 0x414eb8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x414EB8u;
    SET_GPR_U32(ctx, 31, 0x414EC0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414EC0u; }
        if (ctx->pc != 0x414EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414EC0u; }
        if (ctx->pc != 0x414EC0u) { return; }
    }
    ctx->pc = 0x414EC0u;
label_414ec0:
    // 0x414ec0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x414ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_414ec4:
    // 0x414ec4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x414ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x414ec8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x414EC8u;
    {
        const bool branch_taken_0x414ec8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x414ec8) {
            ctx->pc = 0x414ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414EC8u;
            // 0x414ecc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414EDCu;
            goto label_414edc;
        }
    }
    ctx->pc = 0x414ED0u;
    // 0x414ed0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x414ED0u;
    SET_GPR_U32(ctx, 31, 0x414ED8u);
    ctx->pc = 0x414ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414ED0u;
            // 0x414ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414ED8u; }
        if (ctx->pc != 0x414ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414ED8u; }
        if (ctx->pc != 0x414ED8u) { return; }
    }
    ctx->pc = 0x414ED8u;
label_414ed8:
    // 0x414ed8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x414ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414edc:
    // 0x414edc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x414edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x414EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414EE8u;
            // 0x414eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414EF0u;
}
