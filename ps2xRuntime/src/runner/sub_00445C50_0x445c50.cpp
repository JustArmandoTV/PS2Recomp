#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00445C50
// Address: 0x445c50 - 0x445cc0
void sub_00445C50_0x445c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445C50_0x445c50");
#endif

    switch (ctx->pc) {
        case 0x445c80u: goto label_445c80;
        case 0x445c90u: goto label_445c90;
        case 0x445ca8u: goto label_445ca8;
        default: break;
    }

    ctx->pc = 0x445c50u;

    // 0x445c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x445c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x445c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x445c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x445c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x445c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x445c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x445c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x445c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445c64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x445C64u;
    {
        const bool branch_taken_0x445c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x445C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445C64u;
            // 0x445c68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445c64) {
            ctx->pc = 0x445CA8u;
            goto label_445ca8;
        }
    }
    ctx->pc = 0x445C6Cu;
    // 0x445c6c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x445c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x445c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x445C70u;
    {
        const bool branch_taken_0x445c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445c70) {
            ctx->pc = 0x445C80u;
            goto label_445c80;
        }
    }
    ctx->pc = 0x445C78u;
    // 0x445c78: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x445C78u;
    SET_GPR_U32(ctx, 31, 0x445C80u);
    ctx->pc = 0x445C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445C78u;
            // 0x445c7c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C80u; }
        if (ctx->pc != 0x445C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C80u; }
        if (ctx->pc != 0x445C80u) { return; }
    }
    ctx->pc = 0x445C80u;
label_445c80:
    // 0x445c80: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x445C80u;
    {
        const bool branch_taken_0x445c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x445c80) {
            ctx->pc = 0x445C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445C80u;
            // 0x445c84: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445C94u;
            goto label_445c94;
        }
    }
    ctx->pc = 0x445C88u;
    // 0x445c88: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x445C88u;
    SET_GPR_U32(ctx, 31, 0x445C90u);
    ctx->pc = 0x445C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445C88u;
            // 0x445c8c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C90u; }
        if (ctx->pc != 0x445C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C90u; }
        if (ctx->pc != 0x445C90u) { return; }
    }
    ctx->pc = 0x445C90u;
label_445c90:
    // 0x445c90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x445c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_445c94:
    // 0x445c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x445c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x445c98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x445C98u;
    {
        const bool branch_taken_0x445c98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x445c98) {
            ctx->pc = 0x445C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445C98u;
            // 0x445c9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445CACu;
            goto label_445cac;
        }
    }
    ctx->pc = 0x445CA0u;
    // 0x445ca0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x445CA0u;
    SET_GPR_U32(ctx, 31, 0x445CA8u);
    ctx->pc = 0x445CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445CA0u;
            // 0x445ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445CA8u; }
        if (ctx->pc != 0x445CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445CA8u; }
        if (ctx->pc != 0x445CA8u) { return; }
    }
    ctx->pc = 0x445CA8u;
label_445ca8:
    // 0x445ca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x445ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_445cac:
    // 0x445cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x445cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x445cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x445cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x445cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x445cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x445CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445CB8u;
            // 0x445cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445CC0u;
}
