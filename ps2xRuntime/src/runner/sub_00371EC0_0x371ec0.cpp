#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371EC0
// Address: 0x371ec0 - 0x371f20
void sub_00371EC0_0x371ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371EC0_0x371ec0");
#endif

    switch (ctx->pc) {
        case 0x371eecu: goto label_371eec;
        case 0x371f04u: goto label_371f04;
        default: break;
    }

    ctx->pc = 0x371ec0u;

    // 0x371ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x371ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x371ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x371ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x371ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371ed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x371ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ed4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x371ED4u;
    {
        const bool branch_taken_0x371ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x371ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371ED4u;
            // 0x371ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ed4) {
            ctx->pc = 0x371F04u;
            goto label_371f04;
        }
    }
    ctx->pc = 0x371EDCu;
    // 0x371edc: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x371EDCu;
    {
        const bool branch_taken_0x371edc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x371edc) {
            ctx->pc = 0x371EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371EDCu;
            // 0x371ee0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371EF0u;
            goto label_371ef0;
        }
    }
    ctx->pc = 0x371EE4u;
    // 0x371ee4: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x371EE4u;
    SET_GPR_U32(ctx, 31, 0x371EECu);
    ctx->pc = 0x371EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371EE4u;
            // 0x371ee8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371EECu; }
        if (ctx->pc != 0x371EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371EECu; }
        if (ctx->pc != 0x371EECu) { return; }
    }
    ctx->pc = 0x371EECu;
label_371eec:
    // 0x371eec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x371eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_371ef0:
    // 0x371ef0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x371ef0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x371ef4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371EF4u;
    {
        const bool branch_taken_0x371ef4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x371ef4) {
            ctx->pc = 0x371EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371EF4u;
            // 0x371ef8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371F08u;
            goto label_371f08;
        }
    }
    ctx->pc = 0x371EFCu;
    // 0x371efc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x371EFCu;
    SET_GPR_U32(ctx, 31, 0x371F04u);
    ctx->pc = 0x371F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371EFCu;
            // 0x371f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371F04u; }
        if (ctx->pc != 0x371F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371F04u; }
        if (ctx->pc != 0x371F04u) { return; }
    }
    ctx->pc = 0x371F04u;
label_371f04:
    // 0x371f04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x371f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371f08:
    // 0x371f08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x371f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371f14: 0x3e00008  jr          $ra
    ctx->pc = 0x371F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371F14u;
            // 0x371f18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371F1Cu;
    // 0x371f1c: 0x0  nop
    ctx->pc = 0x371f1cu;
    // NOP
}
