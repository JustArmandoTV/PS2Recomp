#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CF20
// Address: 0x19cf20 - 0x19cfa8
void sub_0019CF20_0x19cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CF20_0x19cf20");
#endif

    switch (ctx->pc) {
        case 0x19cf5cu: goto label_19cf5c;
        default: break;
    }

    ctx->pc = 0x19cf20u;

    // 0x19cf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cf24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19cf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19cf2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19cf30: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19cf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf38: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19CF38u;
    ctx->pc = 0x19CF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF38u;
            // 0x19cf3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19CF40u;
    // 0x19cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cf44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cf48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cf48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19cf50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cf54: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19CF54u;
    SET_GPR_U32(ctx, 31, 0x19CF5Cu);
    ctx->pc = 0x19CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF54u;
            // 0x19cf58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF5Cu; }
        if (ctx->pc != 0x19CF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF5Cu; }
        if (ctx->pc != 0x19CF5Cu) { return; }
    }
    ctx->pc = 0x19CF5Cu;
label_19cf5c:
    // 0x19cf5c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19cf60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cf64: 0x24849730  addiu       $a0, $a0, -0x68D0
    ctx->pc = 0x19cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940464));
    // 0x19cf68: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19CF68u;
    {
        const bool branch_taken_0x19cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF68u;
            // 0x19cf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf68) {
            ctx->pc = 0x19CF88u;
            goto label_19cf88;
        }
    }
    ctx->pc = 0x19CF70u;
    // 0x19cf70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19cf74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cf78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf7c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19CF7Cu;
    ctx->pc = 0x19CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF7Cu;
            // 0x19cf80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19CF84u;
    // 0x19cf84: 0x0  nop
    ctx->pc = 0x19cf84u;
    // NOP
label_19cf88:
    // 0x19cf88: 0xae110078  sw          $s1, 0x78($s0)
    ctx->pc = 0x19cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 17));
    // 0x19cf8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19cf90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf9c: 0x80673ea  j           func_19CFA8
    ctx->pc = 0x19CF9Cu;
    ctx->pc = 0x19CFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF9Cu;
            // 0x19cfa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFA8u;
    if (runtime->hasFunction(0x19CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019CFA8_0x19cfa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19CFA4u;
    // 0x19cfa4: 0x0  nop
    ctx->pc = 0x19cfa4u;
    // NOP
}
