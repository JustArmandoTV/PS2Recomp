#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00474840
// Address: 0x474840 - 0x4748b0
void sub_00474840_0x474840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474840_0x474840");
#endif

    switch (ctx->pc) {
        case 0x474880u: goto label_474880;
        case 0x474898u: goto label_474898;
        default: break;
    }

    ctx->pc = 0x474840u;

    // 0x474840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x474840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x474844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x474844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x474848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x474848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47484c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x474850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x474850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474854: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x474854u;
    {
        const bool branch_taken_0x474854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x474858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474854u;
            // 0x474858: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474854) {
            ctx->pc = 0x474898u;
            goto label_474898;
        }
    }
    ctx->pc = 0x47485Cu;
    // 0x47485c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x47485Cu;
    {
        const bool branch_taken_0x47485c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47485c) {
            ctx->pc = 0x474860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47485Cu;
            // 0x474860: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474884u;
            goto label_474884;
        }
    }
    ctx->pc = 0x474864u;
    // 0x474864: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x474864u;
    {
        const bool branch_taken_0x474864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x474864) {
            ctx->pc = 0x474880u;
            goto label_474880;
        }
    }
    ctx->pc = 0x47486Cu;
    // 0x47486c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x47486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x474870: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x474870u;
    {
        const bool branch_taken_0x474870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x474870) {
            ctx->pc = 0x474880u;
            goto label_474880;
        }
    }
    ctx->pc = 0x474878u;
    // 0x474878: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x474878u;
    SET_GPR_U32(ctx, 31, 0x474880u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474880u; }
        if (ctx->pc != 0x474880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474880u; }
        if (ctx->pc != 0x474880u) { return; }
    }
    ctx->pc = 0x474880u;
label_474880:
    // 0x474880: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x474880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_474884:
    // 0x474884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x474884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x474888: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x474888u;
    {
        const bool branch_taken_0x474888 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x474888) {
            ctx->pc = 0x47488Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474888u;
            // 0x47488c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47489Cu;
            goto label_47489c;
        }
    }
    ctx->pc = 0x474890u;
    // 0x474890: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x474890u;
    SET_GPR_U32(ctx, 31, 0x474898u);
    ctx->pc = 0x474894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474890u;
            // 0x474894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474898u; }
        if (ctx->pc != 0x474898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474898u; }
        if (ctx->pc != 0x474898u) { return; }
    }
    ctx->pc = 0x474898u;
label_474898:
    // 0x474898: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x474898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47489c:
    // 0x47489c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4748a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4748a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4748a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4748a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4748a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4748A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4748ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4748A8u;
            // 0x4748ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4748B0u;
}
