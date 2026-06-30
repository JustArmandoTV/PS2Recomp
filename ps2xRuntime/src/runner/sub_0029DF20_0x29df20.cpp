#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DF20
// Address: 0x29df20 - 0x29dfa0
void sub_0029DF20_0x29df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DF20_0x29df20");
#endif

    switch (ctx->pc) {
        case 0x29df8cu: goto label_29df8c;
        default: break;
    }

    ctx->pc = 0x29df20u;

    // 0x29df20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29df24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29df28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29df28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29df2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29df2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df30: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x29DF30u;
    {
        const bool branch_taken_0x29df30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df30) {
            ctx->pc = 0x29DF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF30u;
            // 0x29df34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DF90u;
            goto label_29df90;
        }
    }
    ctx->pc = 0x29DF38u;
    // 0x29df38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29df38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29df3c: 0x2442f7a0  addiu       $v0, $v0, -0x860
    ctx->pc = 0x29df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
    // 0x29df40: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29DF40u;
    {
        const bool branch_taken_0x29df40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF40u;
            // 0x29df44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df40) {
            ctx->pc = 0x29DF64u;
            goto label_29df64;
        }
    }
    ctx->pc = 0x29DF48u;
    // 0x29df48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29df4c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x29df50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DF50u;
    {
        const bool branch_taken_0x29df50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF50u;
            // 0x29df54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df50) {
            ctx->pc = 0x29DF64u;
            goto label_29df64;
        }
    }
    ctx->pc = 0x29DF58u;
    // 0x29df58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29df58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29df5c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x29df60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29df60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29df64:
    // 0x29df64: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x29df68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29df68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29df6c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DF6Cu;
    {
        const bool branch_taken_0x29df6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29df6c) {
            ctx->pc = 0x29DF8Cu;
            goto label_29df8c;
        }
    }
    ctx->pc = 0x29DF74u;
    // 0x29df74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29df78: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29df78u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29df7c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29df80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29df80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df84: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29DF84u;
    SET_GPR_U32(ctx, 31, 0x29DF8Cu);
    ctx->pc = 0x29DF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF84u;
            // 0x29df88: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DF8Cu; }
        if (ctx->pc != 0x29DF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DF8Cu; }
        if (ctx->pc != 0x29DF8Cu) { return; }
    }
    ctx->pc = 0x29DF8Cu;
label_29df8c:
    // 0x29df8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29df8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29df90:
    // 0x29df90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29df90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29df94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29df94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29df98: 0x3e00008  jr          $ra
    ctx->pc = 0x29DF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF98u;
            // 0x29df9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DFA0u;
}
