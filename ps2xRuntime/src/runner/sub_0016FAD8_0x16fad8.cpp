#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016FAD8
// Address: 0x16fad8 - 0x16fb88
void sub_0016FAD8_0x16fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FAD8_0x16fad8");
#endif

    switch (ctx->pc) {
        case 0x16faf8u: goto label_16faf8;
        case 0x16fb08u: goto label_16fb08;
        case 0x16fb10u: goto label_16fb10;
        case 0x16fb18u: goto label_16fb18;
        case 0x16fb2cu: goto label_16fb2c;
        default: break;
    }

    ctx->pc = 0x16fad8u;

    // 0x16fad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16fae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16faec: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16faf0: 0xc059472  jal         func_1651C8
    ctx->pc = 0x16FAF0u;
    SET_GPR_U32(ctx, 31, 0x16FAF8u);
    ctx->pc = 0x16FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAF0u;
            // 0x16faf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1651C8u;
    if (runtime->hasFunction(0x1651C8u)) {
        auto targetFn = runtime->lookupFunction(0x1651C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAF8u; }
        if (ctx->pc != 0x16FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001651C8_0x1651c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAF8u; }
        if (ctx->pc != 0x16FAF8u) { return; }
    }
    ctx->pc = 0x16FAF8u;
label_16faf8:
    // 0x16faf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FAF8u;
    {
        const bool branch_taken_0x16faf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16faf8) {
            ctx->pc = 0x16FB08u;
            goto label_16fb08;
        }
    }
    ctx->pc = 0x16FB00u;
    // 0x16fb00: 0xc05bd24  jal         func_16F490
    ctx->pc = 0x16FB00u;
    SET_GPR_U32(ctx, 31, 0x16FB08u);
    ctx->pc = 0x16FB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB00u;
            // 0x16fb04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F490u;
    if (runtime->hasFunction(0x16F490u)) {
        auto targetFn = runtime->lookupFunction(0x16F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB08u; }
        if (ctx->pc != 0x16FB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F490_0x16f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB08u; }
        if (ctx->pc != 0x16FB08u) { return; }
    }
    ctx->pc = 0x16FB08u;
label_16fb08:
    // 0x16fb08: 0xc05962e  jal         func_1658B8
    ctx->pc = 0x16FB08u;
    SET_GPR_U32(ctx, 31, 0x16FB10u);
    ctx->pc = 0x16FB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB08u;
            // 0x16fb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1658B8u;
    if (runtime->hasFunction(0x1658B8u)) {
        auto targetFn = runtime->lookupFunction(0x1658B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB10u; }
        if (ctx->pc != 0x16FB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001658B8_0x1658b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB10u; }
        if (ctx->pc != 0x16FB10u) { return; }
    }
    ctx->pc = 0x16FB10u;
label_16fb10:
    // 0x16fb10: 0xc059472  jal         func_1651C8
    ctx->pc = 0x16FB10u;
    SET_GPR_U32(ctx, 31, 0x16FB18u);
    ctx->pc = 0x16FB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB10u;
            // 0x16fb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1651C8u;
    if (runtime->hasFunction(0x1651C8u)) {
        auto targetFn = runtime->lookupFunction(0x1651C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB18u; }
        if (ctx->pc != 0x16FB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001651C8_0x1651c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB18u; }
        if (ctx->pc != 0x16FB18u) { return; }
    }
    ctx->pc = 0x16FB18u;
label_16fb18:
    // 0x16fb18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16fb1c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FB1Cu;
    {
        const bool branch_taken_0x16fb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fb1c) {
            ctx->pc = 0x16FB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB1Cu;
            // 0x16fb20: 0x86040098  lh          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FB30u;
            goto label_16fb30;
        }
    }
    ctx->pc = 0x16FB24u;
    // 0x16fb24: 0xc05be18  jal         func_16F860
    ctx->pc = 0x16FB24u;
    SET_GPR_U32(ctx, 31, 0x16FB2Cu);
    ctx->pc = 0x16FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB24u;
            // 0x16fb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F860u;
    if (runtime->hasFunction(0x16F860u)) {
        auto targetFn = runtime->lookupFunction(0x16F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB2Cu; }
        if (ctx->pc != 0x16FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F860_0x16f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB2Cu; }
        if (ctx->pc != 0x16FB2Cu) { return; }
    }
    ctx->pc = 0x16FB2Cu;
label_16fb2c:
    // 0x16fb2c: 0x86040098  lh          $a0, 0x98($s0)
    ctx->pc = 0x16fb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_16fb30:
    // 0x16fb30: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16fb34: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16FB34u;
    {
        const bool branch_taken_0x16fb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB34u;
            // 0x16fb38: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb34) {
            ctx->pc = 0x16FB5Cu;
            goto label_16fb5c;
        }
    }
    ctx->pc = 0x16FB3Cu;
    // 0x16fb3c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FB3Cu;
    {
        const bool branch_taken_0x16fb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB3Cu;
            // 0x16fb40: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb3c) {
            ctx->pc = 0x16FB5Cu;
            goto label_16fb5c;
        }
    }
    ctx->pc = 0x16FB44u;
    // 0x16fb44: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16FB44u;
    {
        const bool branch_taken_0x16fb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB44u;
            // 0x16fb48: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb44) {
            ctx->pc = 0x16FB5Cu;
            goto label_16fb5c;
        }
    }
    ctx->pc = 0x16FB4Cu;
    // 0x16fb4c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FB4Cu;
    {
        const bool branch_taken_0x16fb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB4Cu;
            // 0x16fb50: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb4c) {
            ctx->pc = 0x16FB5Cu;
            goto label_16fb5c;
        }
    }
    ctx->pc = 0x16FB54u;
    // 0x16fb54: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16FB54u;
    {
        const bool branch_taken_0x16fb54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16FB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB54u;
            // 0x16fb58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb54) {
            ctx->pc = 0x16FB78u;
            goto label_16fb78;
        }
    }
    ctx->pc = 0x16FB5Cu;
label_16fb5c:
    // 0x16fb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fb68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16fb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fb6c: 0x805be92  j           func_16FA48
    ctx->pc = 0x16FB6Cu;
    ctx->pc = 0x16FB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB6Cu;
            // 0x16fb70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FA48u;
    {
        auto targetFn = runtime->lookupFunction(0x16FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16FB74u;
    // 0x16fb74: 0x0  nop
    ctx->pc = 0x16fb74u;
    // NOP
label_16fb78:
    // 0x16fb78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fb78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fb7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16fb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x16FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB80u;
            // 0x16fb84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FB88u;
}
