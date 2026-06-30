#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001758C8
// Address: 0x1758c8 - 0x175950
void sub_001758C8_0x1758c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001758C8_0x1758c8");
#endif

    switch (ctx->pc) {
        case 0x1758e0u: goto label_1758e0;
        case 0x175924u: goto label_175924;
        case 0x175934u: goto label_175934;
        default: break;
    }

    ctx->pc = 0x1758c8u;

    // 0x1758c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1758cc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1758CCu;
    {
        const bool branch_taken_0x1758cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1758D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758CCu;
            // 0x1758d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758cc) {
            ctx->pc = 0x1758F0u;
            goto label_1758f0;
        }
    }
    ctx->pc = 0x1758D4u;
    // 0x1758d4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1758d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1758d8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x1758D8u;
    SET_GPR_U32(ctx, 31, 0x1758E0u);
    ctx->pc = 0x1758DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758D8u;
            // 0x1758dc: 0x24844840  addiu       $a0, $a0, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758E0u; }
        if (ctx->pc != 0x1758E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758E0u; }
        if (ctx->pc != 0x1758E0u) { return; }
    }
    ctx->pc = 0x1758E0u;
label_1758e0:
    // 0x1758e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1758e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1758e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1758E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758E8u;
            // 0x1758ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1758F0u;
label_1758f0:
    // 0x1758f0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1758f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1758f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758f8: 0x805bfde  j           func_16FF78
    ctx->pc = 0x1758F8u;
    ctx->pc = 0x1758FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758F8u;
            // 0x1758fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF78u;
    if (runtime->hasFunction(0x16FF78u)) {
        auto targetFn = runtime->lookupFunction(0x16FF78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016FF78_0x16ff78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175900u;
    // 0x175900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17590c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175910: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175914: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175918: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17591c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17591Cu;
    SET_GPR_U32(ctx, 31, 0x175924u);
    ctx->pc = 0x175920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17591Cu;
            // 0x175920: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175924u; }
        if (ctx->pc != 0x175924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175924u; }
        if (ctx->pc != 0x175924u) { return; }
    }
    ctx->pc = 0x175924u;
label_175924:
    // 0x175924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17592c: 0xc05d654  jal         func_175950
    ctx->pc = 0x17592Cu;
    SET_GPR_U32(ctx, 31, 0x175934u);
    ctx->pc = 0x175930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17592Cu;
            // 0x175930: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175950u;
    if (runtime->hasFunction(0x175950u)) {
        auto targetFn = runtime->lookupFunction(0x175950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175934u; }
        if (ctx->pc != 0x175934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175950_0x175950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175934u; }
        if (ctx->pc != 0x175934u) { return; }
    }
    ctx->pc = 0x175934u;
label_175934:
    // 0x175934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17593c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17593cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175940: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x175940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175944: 0x80599e0  j           func_166780
    ctx->pc = 0x175944u;
    ctx->pc = 0x175948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175944u;
            // 0x175948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17594Cu;
    // 0x17594c: 0x0  nop
    ctx->pc = 0x17594cu;
    // NOP
}
