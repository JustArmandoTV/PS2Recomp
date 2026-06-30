#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6D18
// Address: 0x1a6d18 - 0x1a6dc8
void sub_001A6D18_0x1a6d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6D18_0x1a6d18");
#endif

    switch (ctx->pc) {
        case 0x1a6d40u: goto label_1a6d40;
        case 0x1a6d50u: goto label_1a6d50;
        case 0x1a6d68u: goto label_1a6d68;
        case 0x1a6d80u: goto label_1a6d80;
        case 0x1a6d98u: goto label_1a6d98;
        case 0x1a6db0u: goto label_1a6db0;
        default: break;
    }

    ctx->pc = 0x1a6d18u;

    // 0x1a6d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6d20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a6d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6d28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6d30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a6d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6d38: 0xc069b72  jal         func_1A6DC8
    ctx->pc = 0x1A6D38u;
    SET_GPR_U32(ctx, 31, 0x1A6D40u);
    ctx->pc = 0x1A6D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D38u;
            // 0x1a6d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DC8u;
    if (runtime->hasFunction(0x1A6DC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A6DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D40u; }
        if (ctx->pc != 0x1A6D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6DC8_0x1a6dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D40u; }
        if (ctx->pc != 0x1A6D40u) { return; }
    }
    ctx->pc = 0x1A6D40u;
label_1a6d40:
    // 0x1a6d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d48: 0xc069b8a  jal         func_1A6E28
    ctx->pc = 0x1A6D48u;
    SET_GPR_U32(ctx, 31, 0x1A6D50u);
    ctx->pc = 0x1A6D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D48u;
            // 0x1a6d4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E28u;
    if (runtime->hasFunction(0x1A6E28u)) {
        auto targetFn = runtime->lookupFunction(0x1A6E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D50u; }
        if (ctx->pc != 0x1A6D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6E28_0x1a6e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D50u; }
        if (ctx->pc != 0x1A6D50u) { return; }
    }
    ctx->pc = 0x1A6D50u;
label_1a6d50:
    // 0x1a6d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d58: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A6D58u;
    {
        const bool branch_taken_0x1a6d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D58u;
            // 0x1a6d5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d58) {
            ctx->pc = 0x1A6DB0u;
            goto label_1a6db0;
        }
    }
    ctx->pc = 0x1A6D60u;
    // 0x1a6d60: 0xc069b8c  jal         func_1A6E30
    ctx->pc = 0x1A6D60u;
    SET_GPR_U32(ctx, 31, 0x1A6D68u);
    ctx->pc = 0x1A6E30u;
    if (runtime->hasFunction(0x1A6E30u)) {
        auto targetFn = runtime->lookupFunction(0x1A6E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D68u; }
        if (ctx->pc != 0x1A6D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6E30_0x1a6e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D68u; }
        if (ctx->pc != 0x1A6D68u) { return; }
    }
    ctx->pc = 0x1A6D68u;
label_1a6d68:
    // 0x1a6d68: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A6D68u;
    {
        const bool branch_taken_0x1a6d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d68) {
            ctx->pc = 0x1A6D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D68u;
            // 0x1a6d6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6D70u;
    // 0x1a6d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d78: 0xc069e0c  jal         func_1A7830
    ctx->pc = 0x1A6D78u;
    SET_GPR_U32(ctx, 31, 0x1A6D80u);
    ctx->pc = 0x1A6D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D78u;
            // 0x1a6d7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7830u;
    if (runtime->hasFunction(0x1A7830u)) {
        auto targetFn = runtime->lookupFunction(0x1A7830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D80u; }
        if (ctx->pc != 0x1A6D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7830_0x1a7830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D80u; }
        if (ctx->pc != 0x1A6D80u) { return; }
    }
    ctx->pc = 0x1A6D80u;
label_1a6d80:
    // 0x1a6d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6D88u;
    {
        const bool branch_taken_0x1a6d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D88u;
            // 0x1a6d8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d88) {
            ctx->pc = 0x1A6DB0u;
            goto label_1a6db0;
        }
    }
    ctx->pc = 0x1A6D90u;
    // 0x1a6d90: 0xc069ce6  jal         func_1A7398
    ctx->pc = 0x1A6D90u;
    SET_GPR_U32(ctx, 31, 0x1A6D98u);
    ctx->pc = 0x1A7398u;
    if (runtime->hasFunction(0x1A7398u)) {
        auto targetFn = runtime->lookupFunction(0x1A7398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D98u; }
        if (ctx->pc != 0x1A6D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7398_0x1a7398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D98u; }
        if (ctx->pc != 0x1A6D98u) { return; }
    }
    ctx->pc = 0x1A6D98u;
label_1a6d98:
    // 0x1a6d98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6D98u;
    {
        const bool branch_taken_0x1a6d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d98) {
            ctx->pc = 0x1A6D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D98u;
            // 0x1a6d9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6DA0u;
    // 0x1a6da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6da8: 0xc069d8e  jal         func_1A7638
    ctx->pc = 0x1A6DA8u;
    SET_GPR_U32(ctx, 31, 0x1A6DB0u);
    ctx->pc = 0x1A6DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DA8u;
            // 0x1a6dac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7638u;
    if (runtime->hasFunction(0x1A7638u)) {
        auto targetFn = runtime->lookupFunction(0x1A7638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DB0u; }
        if (ctx->pc != 0x1A6DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7638_0x1a7638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DB0u; }
        if (ctx->pc != 0x1A6DB0u) { return; }
    }
    ctx->pc = 0x1A6DB0u;
label_1a6db0:
    // 0x1a6db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6db4:
    // 0x1a6db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6db8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6dbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DC0u;
            // 0x1a6dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6DC8u;
}
