#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00402FA0
// Address: 0x402fa0 - 0x403010
void sub_00402FA0_0x402fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402FA0_0x402fa0");
#endif

    switch (ctx->pc) {
        case 0x402fe0u: goto label_402fe0;
        case 0x402ff8u: goto label_402ff8;
        default: break;
    }

    ctx->pc = 0x402fa0u;

    // 0x402fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x402fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x402fa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x402fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x402fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x402fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x402fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x402facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x402fb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x402fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402fb4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x402FB4u;
    {
        const bool branch_taken_0x402fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x402FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402FB4u;
            // 0x402fb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402fb4) {
            ctx->pc = 0x402FF8u;
            goto label_402ff8;
        }
    }
    ctx->pc = 0x402FBCu;
    // 0x402fbc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x402FBCu;
    {
        const bool branch_taken_0x402fbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x402fbc) {
            ctx->pc = 0x402FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402FBCu;
            // 0x402fc0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402FE4u;
            goto label_402fe4;
        }
    }
    ctx->pc = 0x402FC4u;
    // 0x402fc4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x402FC4u;
    {
        const bool branch_taken_0x402fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x402fc4) {
            ctx->pc = 0x402FE0u;
            goto label_402fe0;
        }
    }
    ctx->pc = 0x402FCCu;
    // 0x402fcc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x402fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x402fd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x402FD0u;
    {
        const bool branch_taken_0x402fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x402fd0) {
            ctx->pc = 0x402FE0u;
            goto label_402fe0;
        }
    }
    ctx->pc = 0x402FD8u;
    // 0x402fd8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x402FD8u;
    SET_GPR_U32(ctx, 31, 0x402FE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402FE0u; }
        if (ctx->pc != 0x402FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402FE0u; }
        if (ctx->pc != 0x402FE0u) { return; }
    }
    ctx->pc = 0x402FE0u;
label_402fe0:
    // 0x402fe0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x402fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_402fe4:
    // 0x402fe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x402fe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x402fe8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x402FE8u;
    {
        const bool branch_taken_0x402fe8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x402fe8) {
            ctx->pc = 0x402FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402FE8u;
            // 0x402fec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402FFCu;
            goto label_402ffc;
        }
    }
    ctx->pc = 0x402FF0u;
    // 0x402ff0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x402FF0u;
    SET_GPR_U32(ctx, 31, 0x402FF8u);
    ctx->pc = 0x402FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402FF0u;
            // 0x402ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402FF8u; }
        if (ctx->pc != 0x402FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402FF8u; }
        if (ctx->pc != 0x402FF8u) { return; }
    }
    ctx->pc = 0x402FF8u;
label_402ff8:
    // 0x402ff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x402ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402ffc:
    // 0x402ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x402ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x403000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x403004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403008: 0x3e00008  jr          $ra
    ctx->pc = 0x403008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403008u;
            // 0x40300c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x403010u;
}
