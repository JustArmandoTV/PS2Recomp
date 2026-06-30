#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167F50
// Address: 0x167f50 - 0x167fd8
void sub_00167F50_0x167f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167F50_0x167f50");
#endif

    switch (ctx->pc) {
        case 0x167f7cu: goto label_167f7c;
        case 0x167f84u: goto label_167f84;
        case 0x167f9cu: goto label_167f9c;
        case 0x167fa4u: goto label_167fa4;
        case 0x167fb0u: goto label_167fb0;
        default: break;
    }

    ctx->pc = 0x167f50u;

    // 0x167f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167f58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x167f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x167f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x167f60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x167f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x167f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x167f68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x167f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x167f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x167f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x167f74: 0xc059f92  jal         func_167E48
    ctx->pc = 0x167F74u;
    SET_GPR_U32(ctx, 31, 0x167F7Cu);
    ctx->pc = 0x167F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167F74u;
            // 0x167f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167E48u;
    if (runtime->hasFunction(0x167E48u)) {
        auto targetFn = runtime->lookupFunction(0x167E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F7Cu; }
        if (ctx->pc != 0x167F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167E48_0x167e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F7Cu; }
        if (ctx->pc != 0x167F7Cu) { return; }
    }
    ctx->pc = 0x167F7Cu;
label_167f7c:
    // 0x167f7c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x167F7Cu;
    SET_GPR_U32(ctx, 31, 0x167F84u);
    ctx->pc = 0x167F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167F7Cu;
            // 0x167f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F84u; }
        if (ctx->pc != 0x167F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F84u; }
        if (ctx->pc != 0x167F84u) { return; }
    }
    ctx->pc = 0x167F84u;
label_167f84:
    // 0x167f84: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x167f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x167f88: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x167f88u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x167f8c: 0x24a53330  addiu       $a1, $a1, 0x3330
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13104));
    // 0x167f90: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x167f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x167f94: 0xc04b07c  jal         func_12C1F0
    ctx->pc = 0x167F94u;
    SET_GPR_U32(ctx, 31, 0x167F9Cu);
    ctx->pc = 0x167F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167F94u;
            // 0x167f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F9Cu; }
        if (ctx->pc != 0x167F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C1F0_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F9Cu; }
        if (ctx->pc != 0x167F9Cu) { return; }
    }
    ctx->pc = 0x167F9Cu;
label_167f9c:
    // 0x167f9c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x167F9Cu;
    SET_GPR_U32(ctx, 31, 0x167FA4u);
    ctx->pc = 0x167FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167F9Cu;
            // 0x167fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FA4u; }
        if (ctx->pc != 0x167FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FA4u; }
        if (ctx->pc != 0x167FA4u) { return; }
    }
    ctx->pc = 0x167FA4u;
label_167fa4:
    // 0x167fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fa8: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x167FA8u;
    SET_GPR_U32(ctx, 31, 0x167FB0u);
    ctx->pc = 0x167FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167FA8u;
            // 0x167fac: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FB0u; }
        if (ctx->pc != 0x167FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FB0u; }
        if (ctx->pc != 0x167FB0u) { return; }
    }
    ctx->pc = 0x167FB0u;
label_167fb0:
    // 0x167fb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x167fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167fc0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x167fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x167fc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x167fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167fc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x167fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167fcc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x167fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x167fd0: 0x8059f92  j           func_167E48
    ctx->pc = 0x167FD0u;
    ctx->pc = 0x167FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167FD0u;
            // 0x167fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167E48u;
    if (runtime->hasFunction(0x167E48u)) {
        auto targetFn = runtime->lookupFunction(0x167E48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167E48_0x167e48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x167FD8u;
}
