#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169F10
// Address: 0x169f10 - 0x169fa0
void sub_00169F10_0x169f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169F10_0x169f10");
#endif

    switch (ctx->pc) {
        case 0x169f44u: goto label_169f44;
        case 0x169f4cu: goto label_169f4c;
        case 0x169f68u: goto label_169f68;
        case 0x169f80u: goto label_169f80;
        default: break;
    }

    ctx->pc = 0x169f10u;

    // 0x169f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169f14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169f18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x169f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x169f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169f24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x169f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x169f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169f38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x169f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x169f3c: 0xc05a148  jal         func_168520
    ctx->pc = 0x169F3Cu;
    SET_GPR_U32(ctx, 31, 0x169F44u);
    ctx->pc = 0x169F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F3Cu;
            // 0x169f40: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F44u; }
        if (ctx->pc != 0x169F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F44u; }
        if (ctx->pc != 0x169F44u) { return; }
    }
    ctx->pc = 0x169F44u;
label_169f44:
    // 0x169f44: 0xc05a5ba  jal         func_1696E8
    ctx->pc = 0x169F44u;
    SET_GPR_U32(ctx, 31, 0x169F4Cu);
    ctx->pc = 0x1696E8u;
    if (runtime->hasFunction(0x1696E8u)) {
        auto targetFn = runtime->lookupFunction(0x1696E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F4Cu; }
        if (ctx->pc != 0x169F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001696E8_0x1696e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F4Cu; }
        if (ctx->pc != 0x169F4Cu) { return; }
    }
    ctx->pc = 0x169F4Cu;
label_169f4c:
    // 0x169f4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x169f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x169f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f58: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169F58u;
    {
        const bool branch_taken_0x169f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F58u;
            // 0x169f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f58) {
            ctx->pc = 0x169F68u;
            goto label_169f68;
        }
    }
    ctx->pc = 0x169F60u;
    // 0x169f60: 0xc05a752  jal         func_169D48
    ctx->pc = 0x169F60u;
    SET_GPR_U32(ctx, 31, 0x169F68u);
    ctx->pc = 0x169D48u;
    if (runtime->hasFunction(0x169D48u)) {
        auto targetFn = runtime->lookupFunction(0x169D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F68u; }
        if (ctx->pc != 0x169F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169D48_0x169d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F68u; }
        if (ctx->pc != 0x169F68u) { return; }
    }
    ctx->pc = 0x169F68u;
label_169f68:
    // 0x169f68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x169f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x169f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f78: 0xc05a148  jal         func_168520
    ctx->pc = 0x169F78u;
    SET_GPR_U32(ctx, 31, 0x169F80u);
    ctx->pc = 0x169F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F78u;
            // 0x169f7c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F80u; }
        if (ctx->pc != 0x169F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F80u; }
        if (ctx->pc != 0x169F80u) { return; }
    }
    ctx->pc = 0x169F80u;
label_169f80:
    // 0x169f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x169f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169f90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x169f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169f94: 0x3e00008  jr          $ra
    ctx->pc = 0x169F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F94u;
            // 0x169f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F9Cu;
    // 0x169f9c: 0x0  nop
    ctx->pc = 0x169f9cu;
    // NOP
}
