#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CE40
// Address: 0x21ce40 - 0x21ced0
void sub_0021CE40_0x21ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE40_0x21ce40");
#endif

    switch (ctx->pc) {
        case 0x21ce60u: goto label_21ce60;
        case 0x21ce8cu: goto label_21ce8c;
        default: break;
    }

    ctx->pc = 0x21ce40u;

    // 0x21ce40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ce44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21ce48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21ce4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ce50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ce58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ce5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ce60:
    // 0x21ce60: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x21ce60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ce64: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x21ce64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x21ce68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21ce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x21ce6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ce70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21ce70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21ce74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x21ce78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21CE78u;
    {
        const bool branch_taken_0x21ce78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ce78) {
            ctx->pc = 0x21CE98u;
            goto label_21ce98;
        }
    }
    ctx->pc = 0x21CE80u;
    // 0x21ce80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ce80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce84: 0xc087378  jal         func_21CDE0
    ctx->pc = 0x21CE84u;
    SET_GPR_U32(ctx, 31, 0x21CE8Cu);
    ctx->pc = 0x21CE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE84u;
            // 0x21ce88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CDE0u;
    if (runtime->hasFunction(0x21CDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21CDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE8Cu; }
        if (ctx->pc != 0x21CE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CDE0_0x21cde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE8Cu; }
        if (ctx->pc != 0x21CE8Cu) { return; }
    }
    ctx->pc = 0x21CE8Cu;
label_21ce8c:
    // 0x21ce8c: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x21ce8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21ce90: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x21CE90u;
    {
        const bool branch_taken_0x21ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE90u;
            // 0x21ce94: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce90) {
            ctx->pc = 0x21CE60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ce60;
        }
    }
    ctx->pc = 0x21CE98u;
label_21ce98:
    // 0x21ce98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21ce98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21cea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21cea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ceac: 0x3e00008  jr          $ra
    ctx->pc = 0x21CEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEACu;
            // 0x21ceb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CEB4u;
    // 0x21ceb4: 0x0  nop
    ctx->pc = 0x21ceb4u;
    // NOP
    // 0x21ceb8: 0x0  nop
    ctx->pc = 0x21ceb8u;
    // NOP
    // 0x21cebc: 0x0  nop
    ctx->pc = 0x21cebcu;
    // NOP
    // 0x21cec0: 0x3e00008  jr          $ra
    ctx->pc = 0x21CEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEC0u;
            // 0x21cec4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CEC8u;
    // 0x21cec8: 0x0  nop
    ctx->pc = 0x21cec8u;
    // NOP
    // 0x21cecc: 0x0  nop
    ctx->pc = 0x21ceccu;
    // NOP
}
