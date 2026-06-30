#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F4950
// Address: 0x4f4950 - 0x4f49c0
void sub_004F4950_0x4f4950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4950_0x4f4950");
#endif

    switch (ctx->pc) {
        case 0x4f4990u: goto label_4f4990;
        case 0x4f49a8u: goto label_4f49a8;
        default: break;
    }

    ctx->pc = 0x4f4950u;

    // 0x4f4950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f4954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f4954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f4958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f4958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f495c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f4960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f4960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4964: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F4964u;
    {
        const bool branch_taken_0x4f4964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4964u;
            // 0x4f4968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4964) {
            ctx->pc = 0x4F49A8u;
            goto label_4f49a8;
        }
    }
    ctx->pc = 0x4F496Cu;
    // 0x4f496c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F496Cu;
    {
        const bool branch_taken_0x4f496c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f496c) {
            ctx->pc = 0x4F4970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F496Cu;
            // 0x4f4970: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4994u;
            goto label_4f4994;
        }
    }
    ctx->pc = 0x4F4974u;
    // 0x4f4974: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F4974u;
    {
        const bool branch_taken_0x4f4974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4974) {
            ctx->pc = 0x4F4990u;
            goto label_4f4990;
        }
    }
    ctx->pc = 0x4F497Cu;
    // 0x4f497c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4f497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4f4980: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F4980u;
    {
        const bool branch_taken_0x4f4980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4980) {
            ctx->pc = 0x4F4990u;
            goto label_4f4990;
        }
    }
    ctx->pc = 0x4F4988u;
    // 0x4f4988: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F4988u;
    SET_GPR_U32(ctx, 31, 0x4F4990u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4990u; }
        if (ctx->pc != 0x4F4990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4990u; }
        if (ctx->pc != 0x4F4990u) { return; }
    }
    ctx->pc = 0x4F4990u;
label_4f4990:
    // 0x4f4990: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f4990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f4994:
    // 0x4f4994: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f4994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f4998: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F4998u;
    {
        const bool branch_taken_0x4f4998 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f4998) {
            ctx->pc = 0x4F499Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4998u;
            // 0x4f499c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F49ACu;
            goto label_4f49ac;
        }
    }
    ctx->pc = 0x4F49A0u;
    // 0x4f49a0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F49A0u;
    SET_GPR_U32(ctx, 31, 0x4F49A8u);
    ctx->pc = 0x4F49A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F49A0u;
            // 0x4f49a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F49A8u; }
        if (ctx->pc != 0x4F49A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F49A8u; }
        if (ctx->pc != 0x4F49A8u) { return; }
    }
    ctx->pc = 0x4F49A8u;
label_4f49a8:
    // 0x4f49a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f49a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f49ac:
    // 0x4f49ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f49acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f49b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f49b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f49b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f49b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f49b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F49B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F49BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F49B8u;
            // 0x4f49bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F49C0u;
}
