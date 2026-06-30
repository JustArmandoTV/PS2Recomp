#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA288
// Address: 0x1aa288 - 0x1aa2e8
void sub_001AA288_0x1aa288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA288_0x1aa288");
#endif

    switch (ctx->pc) {
        case 0x1aa29cu: goto label_1aa29c;
        case 0x1aa2ccu: goto label_1aa2cc;
        default: break;
    }

    ctx->pc = 0x1aa288u;

    // 0x1aa288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aa290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aa294: 0xc06a4d0  jal         func_1A9340
    ctx->pc = 0x1AA294u;
    SET_GPR_U32(ctx, 31, 0x1AA29Cu);
    ctx->pc = 0x1AA298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA294u;
            // 0x1aa298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9340u;
    if (runtime->hasFunction(0x1A9340u)) {
        auto targetFn = runtime->lookupFunction(0x1A9340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA29Cu; }
        if (ctx->pc != 0x1AA29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9340_0x1a9340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA29Cu; }
        if (ctx->pc != 0x1AA29Cu) { return; }
    }
    ctx->pc = 0x1AA29Cu;
label_1aa29c:
    // 0x1aa29c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1aa29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1aa2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2a8: 0x1cc00002  bgtz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA2A8u;
    {
        const bool branch_taken_0x1aa2a8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1AA2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2A8u;
            // 0x1aa2ac: 0x8e070a64  lw          $a3, 0xA64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2a8) {
            ctx->pc = 0x1AA2B4u;
            goto label_1aa2b4;
        }
    }
    ctx->pc = 0x1AA2B0u;
    // 0x1aa2b0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1aa2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1aa2b4:
    // 0x1aa2b4: 0x6102a  slt         $v0, $zero, $a2
    ctx->pc = 0x1aa2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1aa2b8: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x1aa2b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x1aa2bc: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x1aa2bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1aa2c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1aa2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2c4: 0xc069764  jal         func_1A5D90
    ctx->pc = 0x1AA2C4u;
    SET_GPR_U32(ctx, 31, 0x1AA2CCu);
    ctx->pc = 0x1AA2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2C4u;
            // 0x1aa2c8: 0xe3800a  movz        $s0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D90u;
    if (runtime->hasFunction(0x1A5D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2CCu; }
        if (ctx->pc != 0x1AA2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D90_0x1a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2CCu; }
        if (ctx->pc != 0x1AA2CCu) { return; }
    }
    ctx->pc = 0x1AA2CCu;
label_1aa2cc:
    // 0x1aa2cc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1aa2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1aa2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa2d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aa2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa2d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1aa2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1aa2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2DCu;
            // 0x1aa2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA2E4u;
    // 0x1aa2e4: 0x0  nop
    ctx->pc = 0x1aa2e4u;
    // NOP
}
