#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161DA0
// Address: 0x161da0 - 0x161ec0
void sub_00161DA0_0x161da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161DA0_0x161da0");
#endif

    switch (ctx->pc) {
        case 0x161da0u: goto label_161da0;
        case 0x161da4u: goto label_161da4;
        case 0x161da8u: goto label_161da8;
        case 0x161dacu: goto label_161dac;
        case 0x161db0u: goto label_161db0;
        case 0x161db4u: goto label_161db4;
        case 0x161db8u: goto label_161db8;
        case 0x161dbcu: goto label_161dbc;
        case 0x161dc0u: goto label_161dc0;
        case 0x161dc4u: goto label_161dc4;
        case 0x161dc8u: goto label_161dc8;
        case 0x161dccu: goto label_161dcc;
        case 0x161dd0u: goto label_161dd0;
        case 0x161dd4u: goto label_161dd4;
        case 0x161dd8u: goto label_161dd8;
        case 0x161ddcu: goto label_161ddc;
        case 0x161de0u: goto label_161de0;
        case 0x161de4u: goto label_161de4;
        case 0x161de8u: goto label_161de8;
        case 0x161decu: goto label_161dec;
        case 0x161df0u: goto label_161df0;
        case 0x161df4u: goto label_161df4;
        case 0x161df8u: goto label_161df8;
        case 0x161dfcu: goto label_161dfc;
        case 0x161e00u: goto label_161e00;
        case 0x161e04u: goto label_161e04;
        case 0x161e08u: goto label_161e08;
        case 0x161e0cu: goto label_161e0c;
        case 0x161e10u: goto label_161e10;
        case 0x161e14u: goto label_161e14;
        case 0x161e18u: goto label_161e18;
        case 0x161e1cu: goto label_161e1c;
        case 0x161e20u: goto label_161e20;
        case 0x161e24u: goto label_161e24;
        case 0x161e28u: goto label_161e28;
        case 0x161e2cu: goto label_161e2c;
        case 0x161e30u: goto label_161e30;
        case 0x161e34u: goto label_161e34;
        case 0x161e38u: goto label_161e38;
        case 0x161e3cu: goto label_161e3c;
        case 0x161e40u: goto label_161e40;
        case 0x161e44u: goto label_161e44;
        case 0x161e48u: goto label_161e48;
        case 0x161e4cu: goto label_161e4c;
        case 0x161e50u: goto label_161e50;
        case 0x161e54u: goto label_161e54;
        case 0x161e58u: goto label_161e58;
        case 0x161e5cu: goto label_161e5c;
        case 0x161e60u: goto label_161e60;
        case 0x161e64u: goto label_161e64;
        case 0x161e68u: goto label_161e68;
        case 0x161e6cu: goto label_161e6c;
        case 0x161e70u: goto label_161e70;
        case 0x161e74u: goto label_161e74;
        case 0x161e78u: goto label_161e78;
        case 0x161e7cu: goto label_161e7c;
        case 0x161e80u: goto label_161e80;
        case 0x161e84u: goto label_161e84;
        case 0x161e88u: goto label_161e88;
        case 0x161e8cu: goto label_161e8c;
        case 0x161e90u: goto label_161e90;
        case 0x161e94u: goto label_161e94;
        case 0x161e98u: goto label_161e98;
        case 0x161e9cu: goto label_161e9c;
        case 0x161ea0u: goto label_161ea0;
        case 0x161ea4u: goto label_161ea4;
        case 0x161ea8u: goto label_161ea8;
        case 0x161eacu: goto label_161eac;
        case 0x161eb0u: goto label_161eb0;
        case 0x161eb4u: goto label_161eb4;
        case 0x161eb8u: goto label_161eb8;
        case 0x161ebcu: goto label_161ebc;
        default: break;
    }

    ctx->pc = 0x161da0u;

label_161da0:
    // 0x161da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_161da4:
    // 0x161da4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161da8:
    // 0x161da8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x161da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_161dac:
    // 0x161dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161db0:
    // 0x161db0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x161db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_161db4:
    // 0x161db4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_161db8:
    // 0x161db8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x161db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_161dbc:
    // 0x161dbc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x161dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161dc0:
    // 0x161dc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x161dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_161dc4:
    // 0x161dc4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161dc8:
    // 0x161dc8: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_161dcc:
    // 0x161dcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161dd0:
    // 0x161dd0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x161dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_161dd4:
    // 0x161dd4: 0x40f809  jalr        $v0
label_161dd8:
    if (ctx->pc == 0x161DD8u) {
        ctx->pc = 0x161DD8u;
            // 0x161dd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161DDCu;
        goto label_161ddc;
    }
    ctx->pc = 0x161DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161DDCu);
        ctx->pc = 0x161DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161DD4u;
            // 0x161dd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161DDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161DDCu; }
            if (ctx->pc != 0x161DDCu) { return; }
        }
        }
    }
    ctx->pc = 0x161DDCu;
label_161ddc:
    // 0x161ddc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x161ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_161de0:
    // 0x161de0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_161de4:
    // 0x161de4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161de8:
    // 0x161de8: 0xc04a508  jal         func_129420
label_161dec:
    if (ctx->pc == 0x161DECu) {
        ctx->pc = 0x161DECu;
            // 0x161dec: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->pc = 0x161DF0u;
        goto label_161df0;
    }
    ctx->pc = 0x161DE8u;
    SET_GPR_U32(ctx, 31, 0x161DF0u);
    ctx->pc = 0x161DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DE8u;
            // 0x161dec: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DF0u; }
        if (ctx->pc != 0x161DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DF0u; }
        if (ctx->pc != 0x161DF0u) { return; }
    }
    ctx->pc = 0x161DF0u;
label_161df0:
    // 0x161df0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161df4:
    // 0x161df4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x161df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161df8:
    // 0x161df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161dfc:
    // 0x161dfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161e00:
    // 0x161e00: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x161e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161e04:
    // 0x161e04: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_161e08:
    // 0x161e08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_161e0c:
    // 0x161e0c: 0x40f809  jalr        $v0
label_161e10:
    if (ctx->pc == 0x161E10u) {
        ctx->pc = 0x161E10u;
            // 0x161e10: 0xf29021  addu        $s2, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->pc = 0x161E14u;
        goto label_161e14;
    }
    ctx->pc = 0x161E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161E14u);
        ctx->pc = 0x161E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E0Cu;
            // 0x161e10: 0xf29021  addu        $s2, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161E14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161E14u; }
            if (ctx->pc != 0x161E14u) { return; }
        }
        }
    }
    ctx->pc = 0x161E14u;
label_161e14:
    // 0x161e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161e18:
    // 0x161e18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161e1c:
    // 0x161e1c: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
label_161e20:
    if (ctx->pc == 0x161E20u) {
        ctx->pc = 0x161E20u;
            // 0x161e20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161E24u;
        goto label_161e24;
    }
    ctx->pc = 0x161E1Cu;
    {
        const bool branch_taken_0x161e1c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x161E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E1Cu;
            // 0x161e20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e1c) {
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E24u;
label_161e24:
    // 0x161e24: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x161e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161e28:
    // 0x161e28: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x161e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_161e2c:
    // 0x161e2c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_161e30:
    // 0x161e30: 0x60f809  jalr        $v1
label_161e34:
    if (ctx->pc == 0x161E34u) {
        ctx->pc = 0x161E34u;
            // 0x161e34: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161E38u;
        goto label_161e38;
    }
    ctx->pc = 0x161E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161E38u);
        ctx->pc = 0x161E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E30u;
            // 0x161e34: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161E38u; }
            if (ctx->pc != 0x161E38u) { return; }
        }
        }
    }
    ctx->pc = 0x161E38u;
label_161e38:
    // 0x161e38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x161e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_161e3c:
    // 0x161e3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_161e40:
    // 0x161e40: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x161e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161e44:
    // 0x161e44: 0xc04a508  jal         func_129420
label_161e48:
    if (ctx->pc == 0x161E48u) {
        ctx->pc = 0x161E48u;
            // 0x161e48: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->pc = 0x161E4Cu;
        goto label_161e4c;
    }
    ctx->pc = 0x161E44u;
    SET_GPR_U32(ctx, 31, 0x161E4Cu);
    ctx->pc = 0x161E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E44u;
            // 0x161e48: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E4Cu; }
        if (ctx->pc != 0x161E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E4Cu; }
        if (ctx->pc != 0x161E4Cu) { return; }
    }
    ctx->pc = 0x161E4Cu;
label_161e4c:
    // 0x161e4c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x161e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161e50:
    // 0x161e50: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x161e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161e54:
    // 0x161e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161e58:
    // 0x161e58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161e5c:
    // 0x161e5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x161e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161e60:
    // 0x161e60: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x161e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_161e64:
    // 0x161e64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_161e68:
    // 0x161e68: 0x40f809  jalr        $v0
label_161e6c:
    if (ctx->pc == 0x161E6Cu) {
        ctx->pc = 0x161E6Cu;
            // 0x161e6c: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->pc = 0x161E70u;
        goto label_161e70;
    }
    ctx->pc = 0x161E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161E70u);
        ctx->pc = 0x161E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E68u;
            // 0x161e6c: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161E70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161E70u; }
            if (ctx->pc != 0x161E70u) { return; }
        }
        }
    }
    ctx->pc = 0x161E70u;
label_161e70:
    // 0x161e70: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_161e74:
    if (ctx->pc == 0x161E74u) {
        ctx->pc = 0x161E74u;
            // 0x161e74: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x161E78u;
        goto label_161e78;
    }
    ctx->pc = 0x161E70u;
    {
        const bool branch_taken_0x161e70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E70u;
            // 0x161e74: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e70) {
            ctx->pc = 0x161E88u;
            goto label_161e88;
        }
    }
    ctx->pc = 0x161E78u;
label_161e78:
    // 0x161e78: 0xc05856c  jal         func_1615B0
label_161e7c:
    if (ctx->pc == 0x161E7Cu) {
        ctx->pc = 0x161E7Cu;
            // 0x161e7c: 0x24842840  addiu       $a0, $a0, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10304));
        ctx->pc = 0x161E80u;
        goto label_161e80;
    }
    ctx->pc = 0x161E78u;
    SET_GPR_U32(ctx, 31, 0x161E80u);
    ctx->pc = 0x161E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E78u;
            // 0x161e7c: 0x24842840  addiu       $a0, $a0, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E80u; }
        if (ctx->pc != 0x161E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001615B0_0x1615b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E80u; }
        if (ctx->pc != 0x161E80u) { return; }
    }
    ctx->pc = 0x161E80u;
label_161e80:
    // 0x161e80: 0x10000008  b           . + 4 + (0x8 << 2)
label_161e84:
    if (ctx->pc == 0x161E84u) {
        ctx->pc = 0x161E84u;
            // 0x161e84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x161E88u;
        goto label_161e88;
    }
    ctx->pc = 0x161E80u;
    {
        const bool branch_taken_0x161e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E80u;
            // 0x161e84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e80) {
            ctx->pc = 0x161EA4u;
            goto label_161ea4;
        }
    }
    ctx->pc = 0x161E88u;
label_161e88:
    // 0x161e88: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x161e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_161e8c:
    // 0x161e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161e90:
    // 0x161e90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x161e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_161e94:
    // 0x161e94: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x161e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_161e98:
    // 0x161e98: 0xc04a576  jal         func_1295D8
label_161e9c:
    if (ctx->pc == 0x161E9Cu) {
        ctx->pc = 0x161E9Cu;
            // 0x161e9c: 0xd23023  subu        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->pc = 0x161EA0u;
        goto label_161ea0;
    }
    ctx->pc = 0x161E98u;
    SET_GPR_U32(ctx, 31, 0x161EA0u);
    ctx->pc = 0x161E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E98u;
            // 0x161e9c: 0xd23023  subu        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA0u; }
        if (ctx->pc != 0x161EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA0u; }
        if (ctx->pc != 0x161EA0u) { return; }
    }
    ctx->pc = 0x161EA0u;
label_161ea0:
    // 0x161ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161ea4:
    // 0x161ea4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x161ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161ea8:
    // 0x161ea8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x161ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_161eac:
    // 0x161eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x161eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161eb0:
    // 0x161eb0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x161eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_161eb4:
    // 0x161eb4: 0x3e00008  jr          $ra
label_161eb8:
    if (ctx->pc == 0x161EB8u) {
        ctx->pc = 0x161EB8u;
            // 0x161eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x161EBCu;
        goto label_161ebc;
    }
    ctx->pc = 0x161EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161EB4u;
            // 0x161eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161EBCu;
label_161ebc:
    // 0x161ebc: 0x0  nop
    ctx->pc = 0x161ebcu;
    // NOP
}
