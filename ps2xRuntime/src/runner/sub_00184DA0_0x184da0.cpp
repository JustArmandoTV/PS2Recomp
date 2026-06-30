#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184DA0
// Address: 0x184da0 - 0x184e48
void sub_00184DA0_0x184da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184DA0_0x184da0");
#endif

    switch (ctx->pc) {
        case 0x184de4u: goto label_184de4;
        case 0x184e1cu: goto label_184e1c;
        case 0x184e2cu: goto label_184e2c;
        default: break;
    }

    ctx->pc = 0x184da0u;

    // 0x184da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184da4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184DA4u;
    {
        const bool branch_taken_0x184da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x184DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DA4u;
            // 0x184da8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184da4) {
            ctx->pc = 0x184DC0u;
            goto label_184dc0;
        }
    }
    ctx->pc = 0x184DACu;
    // 0x184dac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x184db0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x184db4: 0x248479d8  addiu       $a0, $a0, 0x79D8
    ctx->pc = 0x184db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31192));
    // 0x184db8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184DB8u;
    {
        const bool branch_taken_0x184db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DB8u;
            // 0x184dbc: 0x24a57988  addiu       $a1, $a1, 0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184db8) {
            ctx->pc = 0x184DDCu;
            goto label_184ddc;
        }
    }
    ctx->pc = 0x184DC0u;
label_184dc0:
    // 0x184dc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x184dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x184dc4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x184DC4u;
    {
        const bool branch_taken_0x184dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184dc4) {
            ctx->pc = 0x184DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184DC4u;
            // 0x184dc8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x184DE8u;
            goto label_184de8;
        }
    }
    ctx->pc = 0x184DCCu;
    // 0x184dcc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x184dd0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x184dd4: 0x248479e8  addiu       $a0, $a0, 0x79E8
    ctx->pc = 0x184dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31208));
    // 0x184dd8: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x184dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
label_184ddc:
    // 0x184ddc: 0xc061296  jal         func_184A58
    ctx->pc = 0x184DDCu;
    SET_GPR_U32(ctx, 31, 0x184DE4u);
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DE4u; }
        if (ctx->pc != 0x184DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A58_0x184a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DE4u; }
        if (ctx->pc != 0x184DE4u) { return; }
    }
    ctx->pc = 0x184DE4u;
label_184de4:
    // 0x184de4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184de8:
    // 0x184de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184dec: 0x3e00008  jr          $ra
    ctx->pc = 0x184DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DECu;
            // 0x184df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184DF4u;
    // 0x184df4: 0x0  nop
    ctx->pc = 0x184df4u;
    // NOP
    // 0x184df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x184e08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x184e10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x184e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x184e14: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184E14u;
    SET_GPR_U32(ctx, 31, 0x184E1Cu);
    ctx->pc = 0x184E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184E14u;
            // 0x184e18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E1Cu; }
        if (ctx->pc != 0x184E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E1Cu; }
        if (ctx->pc != 0x184E1Cu) { return; }
    }
    ctx->pc = 0x184E1Cu;
label_184e1c:
    // 0x184e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x184e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e24: 0xc061392  jal         func_184E48
    ctx->pc = 0x184E24u;
    SET_GPR_U32(ctx, 31, 0x184E2Cu);
    ctx->pc = 0x184E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184E24u;
            // 0x184e28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184E48u;
    if (runtime->hasFunction(0x184E48u)) {
        auto targetFn = runtime->lookupFunction(0x184E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E2Cu; }
        if (ctx->pc != 0x184E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184E48_0x184e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E2Cu; }
        if (ctx->pc != 0x184E2Cu) { return; }
    }
    ctx->pc = 0x184E2Cu;
label_184e2c:
    // 0x184e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184e34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x184e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184e38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184e3c: 0x8061282  j           func_184A08
    ctx->pc = 0x184E3Cu;
    ctx->pc = 0x184E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184E3Cu;
            // 0x184e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184E44u;
    // 0x184e44: 0x0  nop
    ctx->pc = 0x184e44u;
    // NOP
}
