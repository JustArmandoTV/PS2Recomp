#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B998
// Address: 0x16b998 - 0x16ba88
void sub_0016B998_0x16b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B998_0x16b998");
#endif

    switch (ctx->pc) {
        case 0x16ba38u: goto label_16ba38;
        case 0x16ba58u: goto label_16ba58;
        case 0x16ba78u: goto label_16ba78;
        default: break;
    }

    ctx->pc = 0x16b998u;

    // 0x16b998: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16b998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16b99c: 0x24639d48  addiu       $v1, $v1, -0x62B8
    ctx->pc = 0x16b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942024));
    // 0x16b9a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9A4u;
            // 0x16b9a8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B9ACu;
    // 0x16b9ac: 0x0  nop
    ctx->pc = 0x16b9acu;
    // NOP
    // 0x16b9b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x16b9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9B4u;
            // 0x16b9b8: 0x24423b90  addiu       $v0, $v0, 0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B9BCu;
    // 0x16b9bc: 0x0  nop
    ctx->pc = 0x16b9bcu;
    // NOP
    // 0x16b9c0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9C4u;
            // 0x16b9c8: 0xac449d7c  sw          $a0, -0x6284($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942076), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B9CCu;
    // 0x16b9cc: 0x0  nop
    ctx->pc = 0x16b9ccu;
    // NOP
    // 0x16b9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b9d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b9e0: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16B9E0u;
    ctx->pc = 0x16B9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9E0u;
            // 0x16b9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B9E8u;
    // 0x16b9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b9ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b9f8: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16B9F8u;
    ctx->pc = 0x16B9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9F8u;
            // 0x16b9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BA00u;
    // 0x16ba00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba04: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16ba08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ba0c: 0x24639d88  addiu       $v1, $v1, -0x6278
    ctx->pc = 0x16ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942088));
    // 0x16ba10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ba14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ba1c: 0x0  nop
    ctx->pc = 0x16ba1cu;
    // NOP
    // 0x16ba20: 0x805d2aa  j           func_174AA8
    ctx->pc = 0x16BA20u;
    ctx->pc = 0x16BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA20u;
            // 0x16ba24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AA8u;
    if (runtime->hasFunction(0x174AA8u)) {
        auto targetFn = runtime->lookupFunction(0x174AA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00174AA8_0x174aa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BA28u;
    // 0x16ba28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ba30: 0xc05b12e  jal         func_16C4B8
    ctx->pc = 0x16BA30u;
    SET_GPR_U32(ctx, 31, 0x16BA38u);
    ctx->pc = 0x16C4B8u;
    if (runtime->hasFunction(0x16C4B8u)) {
        auto targetFn = runtime->lookupFunction(0x16C4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA38u; }
        if (ctx->pc != 0x16BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C4B8_0x16c4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA38u; }
        if (ctx->pc != 0x16BA38u) { return; }
    }
    ctx->pc = 0x16BA38u;
label_16ba38:
    // 0x16ba38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ba3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x16BA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA40u;
            // 0x16ba44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BA48u;
    // 0x16ba48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ba50: 0xc05d2aa  jal         func_174AA8
    ctx->pc = 0x16BA50u;
    SET_GPR_U32(ctx, 31, 0x16BA58u);
    ctx->pc = 0x174AA8u;
    if (runtime->hasFunction(0x174AA8u)) {
        auto targetFn = runtime->lookupFunction(0x174AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA58u; }
        if (ctx->pc != 0x16BA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174AA8_0x174aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA58u; }
        if (ctx->pc != 0x16BA58u) { return; }
    }
    ctx->pc = 0x16BA58u;
label_16ba58:
    // 0x16ba58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ba5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba60: 0x3e00008  jr          $ra
    ctx->pc = 0x16BA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA60u;
            // 0x16ba64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BA68u;
    // 0x16ba68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ba70: 0xc05adda  jal         func_16B768
    ctx->pc = 0x16BA70u;
    SET_GPR_U32(ctx, 31, 0x16BA78u);
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA78u; }
        if (ctx->pc != 0x16BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B768_0x16b768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA78u; }
        if (ctx->pc != 0x16BA78u) { return; }
    }
    ctx->pc = 0x16BA78u;
label_16ba78:
    // 0x16ba78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ba7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x16BA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA80u;
            // 0x16ba84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BA88u;
}
