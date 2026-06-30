#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172E00
// Address: 0x172e00 - 0x172e88
void sub_00172E00_0x172e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172E00_0x172e00");
#endif

    switch (ctx->pc) {
        case 0x172e28u: goto label_172e28;
        case 0x172e3cu: goto label_172e3c;
        case 0x172e70u: goto label_172e70;
        case 0x172e78u: goto label_172e78;
        default: break;
    }

    ctx->pc = 0x172e00u;

    // 0x172e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172e04: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x172e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x172e08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x172e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x172e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172e10: 0x24509d90  addiu       $s0, $v0, -0x6270
    ctx->pc = 0x172e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942096));
    // 0x172e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172e18: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x172e1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x172e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x172e20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172e24: 0x0  nop
    ctx->pc = 0x172e24u;
    // NOP
label_172e28:
    // 0x172e28: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x172e28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172e2c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E2Cu;
    {
        const bool branch_taken_0x172e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x172e2c) {
            ctx->pc = 0x172E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172E2Cu;
            // 0x172e30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172E40u;
            goto label_172e40;
        }
    }
    ctx->pc = 0x172E34u;
    // 0x172e34: 0xc05cb00  jal         func_172C00
    ctx->pc = 0x172E34u;
    SET_GPR_U32(ctx, 31, 0x172E3Cu);
    ctx->pc = 0x172E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E34u;
            // 0x172e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172C00u;
    if (runtime->hasFunction(0x172C00u)) {
        auto targetFn = runtime->lookupFunction(0x172C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E3Cu; }
        if (ctx->pc != 0x172E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172C00_0x172c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E3Cu; }
        if (ctx->pc != 0x172E3Cu) { return; }
    }
    ctx->pc = 0x172E3Cu;
label_172e3c:
    // 0x172e3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x172e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_172e40:
    // 0x172e40: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172E40u;
    {
        const bool branch_taken_0x172e40 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x172E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E40u;
            // 0x172e44: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e40) {
            ctx->pc = 0x172E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172e28;
        }
    }
    ctx->pc = 0x172E48u;
    // 0x172e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x172e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172e54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x172e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172e58: 0x3e00008  jr          $ra
    ctx->pc = 0x172E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E58u;
            // 0x172e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172E60u;
    // 0x172e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172e68: 0xc0599de  jal         func_166778
    ctx->pc = 0x172E68u;
    SET_GPR_U32(ctx, 31, 0x172E70u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E70u; }
        if (ctx->pc != 0x172E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E70u; }
        if (ctx->pc != 0x172E70u) { return; }
    }
    ctx->pc = 0x172E70u;
label_172e70:
    // 0x172e70: 0xc05cba2  jal         func_172E88
    ctx->pc = 0x172E70u;
    SET_GPR_U32(ctx, 31, 0x172E78u);
    ctx->pc = 0x172E88u;
    if (runtime->hasFunction(0x172E88u)) {
        auto targetFn = runtime->lookupFunction(0x172E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E78u; }
        if (ctx->pc != 0x172E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172E88_0x172e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E78u; }
        if (ctx->pc != 0x172E78u) { return; }
    }
    ctx->pc = 0x172E78u;
label_172e78:
    // 0x172e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172e7c: 0x80599e0  j           func_166780
    ctx->pc = 0x172E7Cu;
    ctx->pc = 0x172E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E7Cu;
            // 0x172e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172E84u;
    // 0x172e84: 0x0  nop
    ctx->pc = 0x172e84u;
    // NOP
}
