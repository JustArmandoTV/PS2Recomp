#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2EB0
// Address: 0x2d2eb0 - 0x2d2f20
void sub_002D2EB0_0x2d2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2EB0_0x2d2eb0");
#endif

    switch (ctx->pc) {
        case 0x2d2ed4u: goto label_2d2ed4;
        case 0x2d2ee8u: goto label_2d2ee8;
        case 0x2d2f00u: goto label_2d2f00;
        default: break;
    }

    ctx->pc = 0x2d2eb0u;

    // 0x2d2eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ec4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2EC4u;
    {
        const bool branch_taken_0x2d2ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2EC4u;
            // 0x2d2ec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ec4) {
            ctx->pc = 0x2D2F00u;
            goto label_2d2f00;
        }
    }
    ctx->pc = 0x2D2ECCu;
    // 0x2d2ecc: 0xc0b648c  jal         func_2D9230
    ctx->pc = 0x2D2ECCu;
    SET_GPR_U32(ctx, 31, 0x2D2ED4u);
    ctx->pc = 0x2D9230u;
    if (runtime->hasFunction(0x2D9230u)) {
        auto targetFn = runtime->lookupFunction(0x2D9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2ED4u; }
        if (ctx->pc != 0x2D2ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9230_0x2d9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2ED4u; }
        if (ctx->pc != 0x2D2ED4u) { return; }
    }
    ctx->pc = 0x2D2ED4u;
label_2d2ed4:
    // 0x2d2ed4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2d2ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d2ed8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2ED8u;
    {
        const bool branch_taken_0x2d2ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ed8) {
            ctx->pc = 0x2D2EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2ED8u;
            // 0x2d2edc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2EECu;
            goto label_2d2eec;
        }
    }
    ctx->pc = 0x2D2EE0u;
    // 0x2d2ee0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2EE0u;
    SET_GPR_U32(ctx, 31, 0x2D2EE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2EE8u; }
        if (ctx->pc != 0x2D2EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2EE8u; }
        if (ctx->pc != 0x2D2EE8u) { return; }
    }
    ctx->pc = 0x2D2EE8u;
label_2d2ee8:
    // 0x2d2ee8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d2ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d2eec:
    // 0x2d2eec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d2eecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d2ef0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2EF0u;
    {
        const bool branch_taken_0x2d2ef0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d2ef0) {
            ctx->pc = 0x2D2EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2EF0u;
            // 0x2d2ef4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2F04u;
            goto label_2d2f04;
        }
    }
    ctx->pc = 0x2D2EF8u;
    // 0x2d2ef8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2EF8u;
    SET_GPR_U32(ctx, 31, 0x2D2F00u);
    ctx->pc = 0x2D2EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2EF8u;
            // 0x2d2efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F00u; }
        if (ctx->pc != 0x2D2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F00u; }
        if (ctx->pc != 0x2D2F00u) { return; }
    }
    ctx->pc = 0x2D2F00u;
label_2d2f00:
    // 0x2d2f00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d2f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2f04:
    // 0x2d2f04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F10u;
            // 0x2d2f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2F18u;
    // 0x2d2f18: 0x0  nop
    ctx->pc = 0x2d2f18u;
    // NOP
    // 0x2d2f1c: 0x0  nop
    ctx->pc = 0x2d2f1cu;
    // NOP
}
