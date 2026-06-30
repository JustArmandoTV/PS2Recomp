#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DC50
// Address: 0x11dc50 - 0x11dd00
void sub_0011DC50_0x11dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DC50_0x11dc50");
#endif

    switch (ctx->pc) {
        case 0x11dc84u: goto label_11dc84;
        case 0x11dca4u: goto label_11dca4;
        case 0x11dcb0u: goto label_11dcb0;
        case 0x11dcb4u: goto label_11dcb4;
        case 0x11dcc8u: goto label_11dcc8;
        case 0x11dce0u: goto label_11dce0;
        case 0x11dcf8u: goto label_11dcf8;
        default: break;
    }

    ctx->pc = 0x11dc50u;

    // 0x11dc50: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11dc50u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11dc54: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11dc54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11dc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11dc5c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11dc5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11dc60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11dc64: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11dc64u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11dc68: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11dc68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11dc6c: 0x35ce0fd8  ori         $t6, $t6, 0xFD8
    ctx->pc = 0x11dc6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4056);
    // 0x11dc70: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11dc70u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11dc74: 0x11c00012  beqz        $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x11DC74u;
    {
        const bool branch_taken_0x11dc74 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC74u;
            // 0x11dc78: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc74) {
            ctx->pc = 0x11DCC0u;
            goto label_11dcc0;
        }
    }
    ctx->pc = 0x11DC7Cu;
    // 0x11dc7c: 0xc046ba0  jal         func_11AE80
    ctx->pc = 0x11DC7Cu;
    SET_GPR_U32(ctx, 31, 0x11DC84u);
    ctx->pc = 0x11DC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC7Cu;
            // 0x11dc80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AE80u;
    if (runtime->hasFunction(0x11AE80u)) {
        auto targetFn = runtime->lookupFunction(0x11AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DC84u; }
        if (ctx->pc != 0x11DC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AE80_0x11ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DC84u; }
        if (ctx->pc != 0x11DC84u) { return; }
    }
    ctx->pc = 0x11DC84u;
label_11dc84:
    // 0x11dc84: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11dc88: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11dc88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dc8c: 0x104f0016  beq         $v0, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x11DC8Cu;
    {
        const bool branch_taken_0x11dc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11DC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC8Cu;
            // 0x11dc90: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc8c) {
            ctx->pc = 0x11DCE8u;
            goto label_11dce8;
        }
    }
    ctx->pc = 0x11DC94u;
    // 0x11dc94: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11DC94u;
    {
        const bool branch_taken_0x11dc94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC94u;
            // 0x11dc98: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc94) {
            ctx->pc = 0x11DCD0u;
            goto label_11dcd0;
        }
    }
    ctx->pc = 0x11DC9Cu;
    // 0x11dc9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DC9Cu;
    {
        const bool branch_taken_0x11dc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC9Cu;
            // 0x11dca0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc9c) {
            ctx->pc = 0x11DCBCu;
            goto label_11dcbc;
        }
    }
    ctx->pc = 0x11DCA4u;
label_11dca4:
    // 0x11dca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dca8: 0xc0472b2  jal         func_11CAC8
    ctx->pc = 0x11DCA8u;
    SET_GPR_U32(ctx, 31, 0x11DCB0u);
    ctx->pc = 0x11DCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCA8u;
            // 0x11dcac: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CAC8u;
    if (runtime->hasFunction(0x11CAC8u)) {
        auto targetFn = runtime->lookupFunction(0x11CAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCB0u; }
        if (ctx->pc != 0x11DCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CAC8_0x11cac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCB0u; }
        if (ctx->pc != 0x11DCB0u) { return; }
    }
    ctx->pc = 0x11DCB0u;
label_11dcb0:
    // 0x11dcb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11dcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11dcb4:
    // 0x11dcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x11DCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCB4u;
            // 0x11dcb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DCBCu;
label_11dcbc:
    // 0x11dcbc: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11dcc0:
    // 0x11dcc0: 0xc047056  jal         func_11C158
    ctx->pc = 0x11DCC0u;
    SET_GPR_U32(ctx, 31, 0x11DCC8u);
    ctx->pc = 0x11C158u;
    if (runtime->hasFunction(0x11C158u)) {
        auto targetFn = runtime->lookupFunction(0x11C158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCC8u; }
        if (ctx->pc != 0x11DCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C158_0x11c158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCC8u; }
        if (ctx->pc != 0x11DCC8u) { return; }
    }
    ctx->pc = 0x11DCC8u;
label_11dcc8:
    // 0x11dcc8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11DCC8u;
    {
        const bool branch_taken_0x11dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCC8u;
            // 0x11dccc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcc8) {
            ctx->pc = 0x11DCB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dcb4;
        }
    }
    ctx->pc = 0x11DCD0u;
label_11dcd0:
    // 0x11dcd0: 0x144ffff4  bne         $v0, $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x11DCD0u;
    {
        const bool branch_taken_0x11dcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11DCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCD0u;
            // 0x11dcd4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcd0) {
            ctx->pc = 0x11DCA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dca4;
        }
    }
    ctx->pc = 0x11DCD8u;
    // 0x11dcd8: 0xc047056  jal         func_11C158
    ctx->pc = 0x11DCD8u;
    SET_GPR_U32(ctx, 31, 0x11DCE0u);
    ctx->pc = 0x11DCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCD8u;
            // 0x11dcdc: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C158u;
    if (runtime->hasFunction(0x11C158u)) {
        auto targetFn = runtime->lookupFunction(0x11C158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCE0u; }
        if (ctx->pc != 0x11DCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C158_0x11c158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCE0u; }
        if (ctx->pc != 0x11DCE0u) { return; }
    }
    ctx->pc = 0x11DCE0u;
label_11dce0:
    // 0x11dce0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11DCE0u;
    {
        const bool branch_taken_0x11dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCE0u;
            // 0x11dce4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dce0) {
            ctx->pc = 0x11DCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dcb0;
        }
    }
    ctx->pc = 0x11DCE8u;
label_11dce8:
    // 0x11dce8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11dcec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dcf0: 0xc0472b2  jal         func_11CAC8
    ctx->pc = 0x11DCF0u;
    SET_GPR_U32(ctx, 31, 0x11DCF8u);
    ctx->pc = 0x11DCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCF0u;
            // 0x11dcf4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CAC8u;
    if (runtime->hasFunction(0x11CAC8u)) {
        auto targetFn = runtime->lookupFunction(0x11CAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCF8u; }
        if (ctx->pc != 0x11DCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CAC8_0x11cac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCF8u; }
        if (ctx->pc != 0x11DCF8u) { return; }
    }
    ctx->pc = 0x11DCF8u;
label_11dcf8:
    // 0x11dcf8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x11DCF8u;
    {
        const bool branch_taken_0x11dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCF8u;
            // 0x11dcfc: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcf8) {
            ctx->pc = 0x11DCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dcb0;
        }
    }
    ctx->pc = 0x11DD00u;
}
