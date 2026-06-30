#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DE090
// Address: 0x4de090 - 0x4de100
void sub_004DE090_0x4de090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE090_0x4de090");
#endif

    switch (ctx->pc) {
        case 0x4de0d0u: goto label_4de0d0;
        case 0x4de0e8u: goto label_4de0e8;
        default: break;
    }

    ctx->pc = 0x4de090u;

    // 0x4de090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4de090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4de094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4de094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4de098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4de098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4de09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4de0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4de0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de0a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4DE0A4u;
    {
        const bool branch_taken_0x4de0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE0A4u;
            // 0x4de0a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de0a4) {
            ctx->pc = 0x4DE0E8u;
            goto label_4de0e8;
        }
    }
    ctx->pc = 0x4DE0ACu;
    // 0x4de0ac: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DE0ACu;
    {
        const bool branch_taken_0x4de0ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de0ac) {
            ctx->pc = 0x4DE0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE0ACu;
            // 0x4de0b0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE0D4u;
            goto label_4de0d4;
        }
    }
    ctx->pc = 0x4DE0B4u;
    // 0x4de0b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DE0B4u;
    {
        const bool branch_taken_0x4de0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de0b4) {
            ctx->pc = 0x4DE0D0u;
            goto label_4de0d0;
        }
    }
    ctx->pc = 0x4DE0BCu;
    // 0x4de0bc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4de0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4de0c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE0C0u;
    {
        const bool branch_taken_0x4de0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de0c0) {
            ctx->pc = 0x4DE0D0u;
            goto label_4de0d0;
        }
    }
    ctx->pc = 0x4DE0C8u;
    // 0x4de0c8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DE0C8u;
    SET_GPR_U32(ctx, 31, 0x4DE0D0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE0D0u; }
        if (ctx->pc != 0x4DE0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE0D0u; }
        if (ctx->pc != 0x4DE0D0u) { return; }
    }
    ctx->pc = 0x4DE0D0u;
label_4de0d0:
    // 0x4de0d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4de0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4de0d4:
    // 0x4de0d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4de0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4de0d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DE0D8u;
    {
        const bool branch_taken_0x4de0d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4de0d8) {
            ctx->pc = 0x4DE0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE0D8u;
            // 0x4de0dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE0ECu;
            goto label_4de0ec;
        }
    }
    ctx->pc = 0x4DE0E0u;
    // 0x4de0e0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DE0E0u;
    SET_GPR_U32(ctx, 31, 0x4DE0E8u);
    ctx->pc = 0x4DE0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE0E0u;
            // 0x4de0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE0E8u; }
        if (ctx->pc != 0x4DE0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE0E8u; }
        if (ctx->pc != 0x4DE0E8u) { return; }
    }
    ctx->pc = 0x4DE0E8u;
label_4de0e8:
    // 0x4de0e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4de0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de0ec:
    // 0x4de0ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4de0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE0F8u;
            // 0x4de0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE100u;
}
