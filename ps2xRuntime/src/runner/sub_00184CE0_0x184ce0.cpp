#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184CE0
// Address: 0x184ce0 - 0x184da0
void sub_00184CE0_0x184ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184CE0_0x184ce0");
#endif

    switch (ctx->pc) {
        case 0x184d50u: goto label_184d50;
        case 0x184d7cu: goto label_184d7c;
        case 0x184d84u: goto label_184d84;
        case 0x184d8cu: goto label_184d8c;
        default: break;
    }

    ctx->pc = 0x184ce0u;

    // 0x184ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cec: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x184CECu;
    {
        const bool branch_taken_0x184cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x184CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CECu;
            // 0x184cf0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cec) {
            ctx->pc = 0x184D18u;
            goto label_184d18;
        }
    }
    ctx->pc = 0x184CF4u;
    // 0x184cf4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x184cf8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x184cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d00: 0x24847978  addiu       $a0, $a0, 0x7978
    ctx->pc = 0x184d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31096));
    // 0x184d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184d08: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x184d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x184d0c: 0x8061296  j           func_184A58
    ctx->pc = 0x184D0Cu;
    ctx->pc = 0x184D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D0Cu;
            // 0x184d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184D14u;
    // 0x184d14: 0x0  nop
    ctx->pc = 0x184d14u;
    // NOP
label_184d18:
    // 0x184d18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x184d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x184d1c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x184D1Cu;
    {
        const bool branch_taken_0x184d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D1Cu;
            // 0x184d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d1c) {
            ctx->pc = 0x184D48u;
            goto label_184d48;
        }
    }
    ctx->pc = 0x184D24u;
    // 0x184d24: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x184d28: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x184d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d30: 0x248479a8  addiu       $a0, $a0, 0x79A8
    ctx->pc = 0x184d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31144));
    // 0x184d34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184d38: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x184d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
    // 0x184d3c: 0x8061296  j           func_184A58
    ctx->pc = 0x184D3Cu;
    ctx->pc = 0x184D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D3Cu;
            // 0x184d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184D44u;
    // 0x184d44: 0x0  nop
    ctx->pc = 0x184d44u;
    // NOP
label_184d48:
    // 0x184d48: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x184D48u;
    SET_GPR_U32(ctx, 31, 0x184D50u);
    ctx->pc = 0x184D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D48u;
            // 0x184d4c: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D50u; }
        if (ctx->pc != 0x184D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D50u; }
        if (ctx->pc != 0x184D50u) { return; }
    }
    ctx->pc = 0x184D50u;
label_184d50:
    // 0x184d50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x184d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x184d54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x184D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D5Cu;
            // 0x184d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184D64u;
    // 0x184d64: 0x0  nop
    ctx->pc = 0x184d64u;
    // NOP
    // 0x184d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184d70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x184d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x184d74: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184D74u;
    SET_GPR_U32(ctx, 31, 0x184D7Cu);
    ctx->pc = 0x184D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D74u;
            // 0x184d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D7Cu; }
        if (ctx->pc != 0x184D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D7Cu; }
        if (ctx->pc != 0x184D7Cu) { return; }
    }
    ctx->pc = 0x184D7Cu;
label_184d7c:
    // 0x184d7c: 0xc061368  jal         func_184DA0
    ctx->pc = 0x184D7Cu;
    SET_GPR_U32(ctx, 31, 0x184D84u);
    ctx->pc = 0x184D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D7Cu;
            // 0x184d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184DA0u;
    if (runtime->hasFunction(0x184DA0u)) {
        auto targetFn = runtime->lookupFunction(0x184DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D84u; }
        if (ctx->pc != 0x184D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184DA0_0x184da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D84u; }
        if (ctx->pc != 0x184D84u) { return; }
    }
    ctx->pc = 0x184D84u;
label_184d84:
    // 0x184d84: 0xc061282  jal         func_184A08
    ctx->pc = 0x184D84u;
    SET_GPR_U32(ctx, 31, 0x184D8Cu);
    ctx->pc = 0x184D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D84u;
            // 0x184d88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D8Cu; }
        if (ctx->pc != 0x184D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D8Cu; }
        if (ctx->pc != 0x184D8Cu) { return; }
    }
    ctx->pc = 0x184D8Cu;
label_184d8c:
    // 0x184d8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d98: 0x3e00008  jr          $ra
    ctx->pc = 0x184D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D98u;
            // 0x184d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184DA0u;
}
