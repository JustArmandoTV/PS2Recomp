#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012BA00
// Address: 0x12ba00 - 0x12bc88
void sub_0012BA00_0x12ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BA00_0x12ba00");
#endif

    switch (ctx->pc) {
        case 0x12ba3cu: goto label_12ba3c;
        case 0x12ba78u: goto label_12ba78;
        case 0x12baccu: goto label_12bacc;
        case 0x12bb08u: goto label_12bb08;
        case 0x12bb48u: goto label_12bb48;
        case 0x12bb64u: goto label_12bb64;
        case 0x12bbc0u: goto label_12bbc0;
        case 0x12bbe0u: goto label_12bbe0;
        case 0x12bc28u: goto label_12bc28;
        case 0x12bc40u: goto label_12bc40;
        default: break;
    }

    ctx->pc = 0x12ba00u;

    // 0x12ba00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12ba04: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x12ba04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ba08: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12ba0c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x12ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x12ba10: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x12ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x12ba14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12ba14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba18: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x12ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x12ba1c: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x12ba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x12ba20: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x12ba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x12ba24: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x12ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x12ba28: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x12ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x12ba2c: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12ba2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12ba30: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12ba34: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x12BA34u;
    SET_GPR_U32(ctx, 31, 0x12BA3Cu);
    ctx->pc = 0x12BA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA34u;
            // 0x12ba38: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA3Cu; }
        if (ctx->pc != 0x12BA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA3Cu; }
        if (ctx->pc != 0x12BA3Cu) { return; }
    }
    ctx->pc = 0x12BA3Cu;
label_12ba3c:
    // 0x12ba3c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12ba3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12ba40: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12ba44: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x12ba44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12ba48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba4c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x12ba50: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x12ba50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12ba54: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12ba54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x12ba58: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12ba5c: 0x25efb9f8  addiu       $t7, $t7, -0x4608
    ctx->pc = 0x12ba5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949368));
    // 0x12ba60: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x12ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x12ba64: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x12ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x12ba68: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba6c: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x12ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x12ba70: 0xc04bdd6  jal         func_12F758
    ctx->pc = 0x12BA70u;
    SET_GPR_U32(ctx, 31, 0x12BA78u);
    ctx->pc = 0x12BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA70u;
            // 0x12ba74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F758u;
    if (runtime->hasFunction(0x12F758u)) {
        auto targetFn = runtime->lookupFunction(0x12F758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA78u; }
        if (ctx->pc != 0x12BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F758_0x12f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA78u; }
        if (ctx->pc != 0x12BA78u) { return; }
    }
    ctx->pc = 0x12BA78u;
label_12ba78:
    // 0x12ba78: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12ba78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ba7c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x12ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x12BA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA80u;
            // 0x12ba84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BA88u;
    // 0x12ba88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12ba8c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x12ba8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ba90: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12ba94: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x12ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x12ba98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12ba9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baa0: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x12baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x12baa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12baa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baa8: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x12baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x12baac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bab0: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x12bab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x12bab4: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x12bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x12bab8: 0xffab00a8  sd          $t3, 0xA8($sp)
    ctx->pc = 0x12bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x12babc: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12babcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12bac0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x12bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x12bac4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x12BAC4u;
    SET_GPR_U32(ctx, 31, 0x12BACCu);
    ctx->pc = 0x12BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAC4u;
            // 0x12bac8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BACCu; }
        if (ctx->pc != 0x12BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BACCu; }
        if (ctx->pc != 0x12BACCu) { return; }
    }
    ctx->pc = 0x12BACCu;
label_12bacc:
    // 0x12bacc: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12baccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12bad0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12bad4: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x12bad4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12bad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12badc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12badcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x12bae0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12bae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bae4: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12bae4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x12bae8: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x12bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x12baec: 0x25efb9f8  addiu       $t7, $t7, -0x4608
    ctx->pc = 0x12baecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949368));
    // 0x12baf0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12baf4: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x12baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x12baf8: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x12bafc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x12bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x12bb00: 0xc04bdd6  jal         func_12F758
    ctx->pc = 0x12BB00u;
    SET_GPR_U32(ctx, 31, 0x12BB08u);
    ctx->pc = 0x12BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB00u;
            // 0x12bb04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F758u;
    if (runtime->hasFunction(0x12F758u)) {
        auto targetFn = runtime->lookupFunction(0x12F758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB08u; }
        if (ctx->pc != 0x12BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F758_0x12f758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB08u; }
        if (ctx->pc != 0x12BB08u) { return; }
    }
    ctx->pc = 0x12BB08u;
label_12bb08:
    // 0x12bb08: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12bb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12bb0c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bb10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12bb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12bb14: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB14u;
            // 0x12bb18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BB1Cu;
    // 0x12bb1c: 0x0  nop
    ctx->pc = 0x12bb1cu;
    // NOP
    // 0x12bb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bb24: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x12bb24u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bb2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12bb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bb34: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x12bb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb3c: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x12bb3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12bb40: 0xc04ab7c  jal         func_12ADF0
    ctx->pc = 0x12BB40u;
    SET_GPR_U32(ctx, 31, 0x12BB48u);
    ctx->pc = 0x12BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB40u;
            // 0x12bb44: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ADF0u;
    if (runtime->hasFunction(0x12ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x12ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB48u; }
        if (ctx->pc != 0x12BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012ADF0_0x12adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB48u; }
        if (ctx->pc != 0x12BB48u) { return; }
    }
    ctx->pc = 0x12BB48u;
label_12bb48:
    // 0x12bb48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12bb4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12bb4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12bb50: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BB50u;
    {
        const bool branch_taken_0x12bb50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12bb50) {
            ctx->pc = 0x12BB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB50u;
            // 0x12bb54: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BB74u;
            goto label_12bb74;
        }
    }
    ctx->pc = 0x12BB58u;
    // 0x12bb58: 0x8e0f0050  lw          $t7, 0x50($s0)
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x12bb5c: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x12bb5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12bb60: 0xae0f0050  sw          $t7, 0x50($s0)
    ctx->pc = 0x12bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 15));
label_12bb64:
    // 0x12bb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12bb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB6Cu;
            // 0x12bb70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BB74u;
label_12bb74:
    // 0x12bb74: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x12bb74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
    // 0x12bb78: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x12BB78u;
    {
        const bool branch_taken_0x12bb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB78u;
            // 0x12bb7c: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb78) {
            ctx->pc = 0x12BB64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bb64;
        }
    }
    ctx->pc = 0x12BB80u;
    // 0x12bb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bb84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bb88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bb8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12bb90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12bb98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12bb98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12bb9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bba0: 0x948f000c  lhu         $t7, 0xC($a0)
    ctx->pc = 0x12bba0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12bba4: 0x31ef0100  andi        $t7, $t7, 0x100
    ctx->pc = 0x12bba4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)256);
    // 0x12bba8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BBA8u;
    {
        const bool branch_taken_0x12bba8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBA8u;
            // 0x12bbac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bba8) {
            ctx->pc = 0x12BBC0u;
            goto label_12bbc0;
        }
    }
    ctx->pc = 0x12BBB0u;
    // 0x12bbb0: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x12bbb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12bbb4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12bbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bbb8: 0xc04a158  jal         func_128560
    ctx->pc = 0x12BBB8u;
    SET_GPR_U32(ctx, 31, 0x12BBC0u);
    ctx->pc = 0x12BBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBB8u;
            // 0x12bbbc: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128560u;
    if (runtime->hasFunction(0x128560u)) {
        auto targetFn = runtime->lookupFunction(0x128560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBC0u; }
        if (ctx->pc != 0x12BBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128560_0x128560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBC0u; }
        if (ctx->pc != 0x12BBC0u) { return; }
    }
    ctx->pc = 0x12BBC0u;
label_12bbc0:
    // 0x12bbc0: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12bbc0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12bbc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12bbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbc8: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x12bbc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12bbcc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12bbccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbd0: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x12bbd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
    // 0x12bbd4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12bbd8: 0xc04c160  jal         func_130580
    ctx->pc = 0x12BBD8u;
    SET_GPR_U32(ctx, 31, 0x12BBE0u);
    ctx->pc = 0x12BBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBD8u;
            // 0x12bbdc: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130580u;
    if (runtime->hasFunction(0x130580u)) {
        auto targetFn = runtime->lookupFunction(0x130580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBE0u; }
        if (ctx->pc != 0x12BBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130580_0x130580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBE0u; }
        if (ctx->pc != 0x12BBE0u) { return; }
    }
    ctx->pc = 0x12BBE0u;
label_12bbe0:
    // 0x12bbe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12bbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12bbe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bbe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bbec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12bbecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12bbf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12bbf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bbf4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12bbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBF8u;
            // 0x12bbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BC00u;
    // 0x12bc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc04: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x12bc04u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bc0c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12bc0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bc14: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x12bc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc1c: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x12bc1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12bc20: 0xc04a158  jal         func_128560
    ctx->pc = 0x12BC20u;
    SET_GPR_U32(ctx, 31, 0x12BC28u);
    ctx->pc = 0x12BC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC20u;
            // 0x12bc24: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128560u;
    if (runtime->hasFunction(0x128560u)) {
        auto targetFn = runtime->lookupFunction(0x128560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC28u; }
        if (ctx->pc != 0x12BC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128560_0x128560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC28u; }
        if (ctx->pc != 0x12BC28u) { return; }
    }
    ctx->pc = 0x12BC28u;
label_12bc28:
    // 0x12bc28: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x12bc28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12bc2c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12bc2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12bc30: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BC30u;
    {
        const bool branch_taken_0x12bc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x12BC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC30u;
            // 0x12bc34: 0xe703f  dsra32      $t6, $t6, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc30) {
            ctx->pc = 0x12BC54u;
            goto label_12bc54;
        }
    }
    ctx->pc = 0x12BC38u;
    // 0x12bc38: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12bc38u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12bc3c: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x12bc3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
label_12bc40:
    // 0x12bc40: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12bc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12bc44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12bc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bc48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC4Cu;
            // 0x12bc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BC54u;
label_12bc54:
    // 0x12bc54: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12bc54u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12bc58: 0xae0e0050  sw          $t6, 0x50($s0)
    ctx->pc = 0x12bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 14));
    // 0x12bc5c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12BC5Cu;
    {
        const bool branch_taken_0x12bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC5Cu;
            // 0x12bc60: 0x35ef1000  ori         $t7, $t7, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc5c) {
            ctx->pc = 0x12BC40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bc40;
        }
    }
    ctx->pc = 0x12BC64u;
    // 0x12bc64: 0x0  nop
    ctx->pc = 0x12bc64u;
    // NOP
    // 0x12bc68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bc70: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x12bc70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12bc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc78: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12bc7c: 0x804985c  j           func_126170
    ctx->pc = 0x12BC7Cu;
    ctx->pc = 0x12BC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC7Cu;
            // 0x12bc80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126170u;
    {
        auto targetFn = runtime->lookupFunction(0x126170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x12BC84u;
    // 0x12bc84: 0x0  nop
    ctx->pc = 0x12bc84u;
    // NOP
}
