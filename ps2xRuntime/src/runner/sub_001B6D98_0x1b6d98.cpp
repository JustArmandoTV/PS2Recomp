#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6D98
// Address: 0x1b6d98 - 0x1b6ec0
void sub_001B6D98_0x1b6d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D98_0x1b6d98");
#endif

    switch (ctx->pc) {
        case 0x1b6dccu: goto label_1b6dcc;
        case 0x1b6e14u: goto label_1b6e14;
        case 0x1b6e6cu: goto label_1b6e6c;
        default: break;
    }

    ctx->pc = 0x1b6d98u;

    // 0x1b6d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6d9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b6d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6da4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b6da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6da8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6dac: 0x24510ea0  addiu       $s1, $v0, 0xEA0
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
    // 0x1b6db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6db4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b6db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6db8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b6db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b6dbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b6dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b6dc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b6dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b6dc4: 0xc06dbb0  jal         func_1B6EC0
    ctx->pc = 0x1B6DC4u;
    SET_GPR_U32(ctx, 31, 0x1B6DCCu);
    ctx->pc = 0x1B6DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DC4u;
            // 0x1b6dc8: 0x24530d88  addiu       $s3, $v0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EC0u;
    if (runtime->hasFunction(0x1B6EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DCCu; }
        if (ctx->pc != 0x1B6DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6EC0_0x1b6ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DCCu; }
        if (ctx->pc != 0x1B6DCCu) { return; }
    }
    ctx->pc = 0x1B6DCCu;
label_1b6dcc:
    // 0x1b6dcc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6dd4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6DD4u;
    {
        const bool branch_taken_0x1b6dd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B6DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DD4u;
            // 0x1b6dd8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dd4) {
            ctx->pc = 0x1B6E24u;
            goto label_1b6e24;
        }
    }
    ctx->pc = 0x1B6DDCu;
    // 0x1b6ddc: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x1b6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x1b6de0: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6DE0u;
    {
        const bool branch_taken_0x1b6de0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6de0) {
            ctx->pc = 0x1B6DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DE0u;
            // 0x1b6de4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6E00u;
            goto label_1b6e00;
        }
    }
    ctx->pc = 0x1B6DE8u;
    // 0x1b6de8: 0x8e630144  lw          $v1, 0x144($s3)
    ctx->pc = 0x1b6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x1b6dec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b6decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b6df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6df4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B6DF4u;
    {
        const bool branch_taken_0x1b6df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DF4u;
            // 0x1b6df8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6df4) {
            ctx->pc = 0x1B6E20u;
            goto label_1b6e20;
        }
    }
    ctx->pc = 0x1B6DFCu;
    // 0x1b6dfc: 0x0  nop
    ctx->pc = 0x1b6dfcu;
    // NOP
label_1b6e00:
    // 0x1b6e00: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6E00u;
    {
        const bool branch_taken_0x1b6e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e00) {
            ctx->pc = 0x1B6E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E00u;
            // 0x1b6e04: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6E24u;
            goto label_1b6e24;
        }
    }
    ctx->pc = 0x1B6E08u;
    // 0x1b6e08: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1b6e0c: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E14u);
    ctx->pc = 0x1B6E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E0Cu;
            // 0x1b6e10: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E14u; }
        if (ctx->pc != 0x1B6E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E14u; }
        if (ctx->pc != 0x1B6E14u) { return; }
    }
    ctx->pc = 0x1B6E14u;
label_1b6e14:
    // 0x1b6e14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b6e18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b6e1c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1b6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1b6e20:
    // 0x1b6e20: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1b6e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e24:
    // 0x1b6e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6e2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b6e30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6e34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b6e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6e38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b6e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b6e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E3Cu;
            // 0x1b6e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6E44u;
    // 0x1b6e44: 0x0  nop
    ctx->pc = 0x1b6e44u;
    // NOP
    // 0x1b6e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6e58: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b6e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6e60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b6e64: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B6E64u;
    SET_GPR_U32(ctx, 31, 0x1B6E6Cu);
    ctx->pc = 0x1B6E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E64u;
            // 0x1b6e68: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E6Cu; }
        if (ctx->pc != 0x1B6E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E6Cu; }
        if (ctx->pc != 0x1B6E6Cu) { return; }
    }
    ctx->pc = 0x1B6E6Cu;
label_1b6e6c:
    // 0x1b6e6c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b6e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b6e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6E78u;
    {
        const bool branch_taken_0x1b6e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E78u;
            // 0x1b6e7c: 0x34a50127  ori         $a1, $a1, 0x127 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e78) {
            ctx->pc = 0x1B6EA0u;
            goto label_1b6ea0;
        }
    }
    ctx->pc = 0x1B6E80u;
    // 0x1b6e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6e8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6e94: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B6E94u;
    ctx->pc = 0x1B6E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E94u;
            // 0x1b6e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6E9Cu;
    // 0x1b6e9c: 0x0  nop
    ctx->pc = 0x1b6e9cu;
    // NOP
label_1b6ea0:
    // 0x1b6ea0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6eb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6eb4: 0x806dbb0  j           func_1B6EC0
    ctx->pc = 0x1B6EB4u;
    ctx->pc = 0x1B6EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EB4u;
            // 0x1b6eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EC0u;
    if (runtime->hasFunction(0x1B6EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6EC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6EC0_0x1b6ec0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6EBCu;
    // 0x1b6ebc: 0x0  nop
    ctx->pc = 0x1b6ebcu;
    // NOP
}
