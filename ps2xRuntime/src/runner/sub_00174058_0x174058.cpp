#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174058
// Address: 0x174058 - 0x174100
void sub_00174058_0x174058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174058_0x174058");
#endif

    switch (ctx->pc) {
        case 0x1740a0u: goto label_1740a0;
        case 0x1740c8u: goto label_1740c8;
        case 0x1740dcu: goto label_1740dc;
        case 0x1740e4u: goto label_1740e4;
        case 0x1740ecu: goto label_1740ec;
        default: break;
    }

    ctx->pc = 0x174058u;

    // 0x174058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17405c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174064: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174064u;
    {
        const bool branch_taken_0x174064 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x174068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174064u;
            // 0x174068: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174064) {
            ctx->pc = 0x174088u;
            goto label_174088;
        }
    }
    ctx->pc = 0x17406Cu;
    // 0x17406c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17406cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174074: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174078: 0x248443f8  addiu       $a0, $a0, 0x43F8
    ctx->pc = 0x174078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
    // 0x17407c: 0x8059f4e  j           func_167D38
    ctx->pc = 0x17407Cu;
    ctx->pc = 0x174080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17407Cu;
            // 0x174080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174084u;
    // 0x174084: 0x0  nop
    ctx->pc = 0x174084u;
    // NOP
label_174088:
    // 0x174088: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x174088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x17408c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174090: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174090u;
    {
        const bool branch_taken_0x174090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174090u;
            // 0x174094: 0xa6050040  sh          $a1, 0x40($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174090) {
            ctx->pc = 0x1740A8u;
            goto label_1740a8;
        }
    }
    ctx->pc = 0x174098u;
    // 0x174098: 0xc05c0a0  jal         func_170280
    ctx->pc = 0x174098u;
    SET_GPR_U32(ctx, 31, 0x1740A0u);
    ctx->pc = 0x17409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174098u;
            // 0x17409c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170280u;
    if (runtime->hasFunction(0x170280u)) {
        auto targetFn = runtime->lookupFunction(0x170280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740A0u; }
        if (ctx->pc != 0x1740A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170280_0x170280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740A0u; }
        if (ctx->pc != 0x1740A0u) { return; }
    }
    ctx->pc = 0x1740A0u;
label_1740a0:
    // 0x1740a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1740A0u;
    {
        const bool branch_taken_0x1740a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740A0u;
            // 0x1740a4: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740a0) {
            ctx->pc = 0x1740B0u;
            goto label_1740b0;
        }
    }
    ctx->pc = 0x1740A8u;
label_1740a8:
    // 0x1740a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1740a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740ac: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1740b0:
    // 0x1740b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1740b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1740b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1740b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1740b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1740b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1740bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1740bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1740c0: 0x805bab4  j           func_16EAD0
    ctx->pc = 0x1740C0u;
    ctx->pc = 0x1740C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740C0u;
            // 0x1740c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EAD0u;
    {
        auto targetFn = runtime->lookupFunction(0x16EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1740C8u;
label_1740c8:
    // 0x1740c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1740c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1740cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1740ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1740d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1740d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1740d4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1740D4u;
    SET_GPR_U32(ctx, 31, 0x1740DCu);
    ctx->pc = 0x1740D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740D4u;
            // 0x1740d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740DCu; }
        if (ctx->pc != 0x1740DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740DCu; }
        if (ctx->pc != 0x1740DCu) { return; }
    }
    ctx->pc = 0x1740DCu;
label_1740dc:
    // 0x1740dc: 0xc05d040  jal         func_174100
    ctx->pc = 0x1740DCu;
    SET_GPR_U32(ctx, 31, 0x1740E4u);
    ctx->pc = 0x1740E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740DCu;
            // 0x1740e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174100u;
    if (runtime->hasFunction(0x174100u)) {
        auto targetFn = runtime->lookupFunction(0x174100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740E4u; }
        if (ctx->pc != 0x1740E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174100_0x174100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740E4u; }
        if (ctx->pc != 0x1740E4u) { return; }
    }
    ctx->pc = 0x1740E4u;
label_1740e4:
    // 0x1740e4: 0xc0599e0  jal         func_166780
    ctx->pc = 0x1740E4u;
    SET_GPR_U32(ctx, 31, 0x1740ECu);
    ctx->pc = 0x1740E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740E4u;
            // 0x1740e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740ECu; }
        if (ctx->pc != 0x1740ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740ECu; }
        if (ctx->pc != 0x1740ECu) { return; }
    }
    ctx->pc = 0x1740ECu;
label_1740ec:
    // 0x1740ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1740ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1740f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1740f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1740f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1740f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1740F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1740FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740F8u;
            // 0x1740fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174100u;
}
