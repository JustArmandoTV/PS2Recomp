#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A6A0
// Address: 0x16a6a0 - 0x16a718
void sub_0016A6A0_0x16a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A6A0_0x16a6a0");
#endif

    switch (ctx->pc) {
        case 0x16a6bcu: goto label_16a6bc;
        case 0x16a6e0u: goto label_16a6e0;
        case 0x16a6f4u: goto label_16a6f4;
        case 0x16a6fcu: goto label_16a6fc;
        case 0x16a704u: goto label_16a704;
        default: break;
    }

    ctx->pc = 0x16a6a0u;

    // 0x16a6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a6a4: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x16a6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x16a6a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A6A8u;
    {
        const bool branch_taken_0x16a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6A8u;
            // 0x16a6ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6a8) {
            ctx->pc = 0x16A6D0u;
            goto label_16a6d0;
        }
    }
    ctx->pc = 0x16A6B0u;
    // 0x16a6b0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a6b4: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16A6B4u;
    SET_GPR_U32(ctx, 31, 0x16A6BCu);
    ctx->pc = 0x16A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6B4u;
            // 0x16a6b8: 0x24843898  addiu       $a0, $a0, 0x3898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6BCu; }
        if (ctx->pc != 0x16A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6BCu; }
        if (ctx->pc != 0x16A6BCu) { return; }
    }
    ctx->pc = 0x16A6BCu;
label_16a6bc:
    // 0x16a6bc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x16a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x16a6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6C4u;
            // 0x16a6c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A6CCu;
    // 0x16a6cc: 0x0  nop
    ctx->pc = 0x16a6ccu;
    // NOP
label_16a6d0:
    // 0x16a6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a6d4: 0x805a910  j           func_16A440
    ctx->pc = 0x16A6D4u;
    ctx->pc = 0x16A6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6D4u;
            // 0x16a6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A440u;
    if (runtime->hasFunction(0x16A440u)) {
        auto targetFn = runtime->lookupFunction(0x16A440u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016A440_0x16a440(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16A6DCu;
    // 0x16a6dc: 0x0  nop
    ctx->pc = 0x16a6dcu;
    // NOP
label_16a6e0:
    // 0x16a6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a6e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a6ec: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A6ECu;
    SET_GPR_U32(ctx, 31, 0x16A6F4u);
    ctx->pc = 0x16A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6ECu;
            // 0x16a6f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6F4u; }
        if (ctx->pc != 0x16A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6F4u; }
        if (ctx->pc != 0x16A6F4u) { return; }
    }
    ctx->pc = 0x16A6F4u;
label_16a6f4:
    // 0x16a6f4: 0xc05a9c6  jal         func_16A718
    ctx->pc = 0x16A6F4u;
    SET_GPR_U32(ctx, 31, 0x16A6FCu);
    ctx->pc = 0x16A6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6F4u;
            // 0x16a6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A718u;
    if (runtime->hasFunction(0x16A718u)) {
        auto targetFn = runtime->lookupFunction(0x16A718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6FCu; }
        if (ctx->pc != 0x16A6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A718_0x16a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6FCu; }
        if (ctx->pc != 0x16A6FCu) { return; }
    }
    ctx->pc = 0x16A6FCu;
label_16a6fc:
    // 0x16a6fc: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16A6FCu;
    SET_GPR_U32(ctx, 31, 0x16A704u);
    ctx->pc = 0x16A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6FCu;
            // 0x16a700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A704u; }
        if (ctx->pc != 0x16A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A704u; }
        if (ctx->pc != 0x16A704u) { return; }
    }
    ctx->pc = 0x16A704u;
label_16a704:
    // 0x16a704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a708: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a70c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a710: 0x3e00008  jr          $ra
    ctx->pc = 0x16A710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A710u;
            // 0x16a714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A718u;
}
