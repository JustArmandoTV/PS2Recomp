#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9D80
// Address: 0x1b9d80 - 0x1b9eb0
void sub_001B9D80_0x1b9d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9D80_0x1b9d80");
#endif

    switch (ctx->pc) {
        case 0x1b9e74u: goto label_1b9e74;
        case 0x1b9e84u: goto label_1b9e84;
        case 0x1b9e8cu: goto label_1b9e8c;
        case 0x1b9e98u: goto label_1b9e98;
        default: break;
    }

    ctx->pc = 0x1b9d80u;

    // 0x1b9d80: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x1b9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x1b9d84: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1b9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1b9d88: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1b9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1b9d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D8Cu;
            // 0x1b9d90: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9D94u;
    // 0x1b9d94: 0x0  nop
    ctx->pc = 0x1b9d94u;
    // NOP
    // 0x1b9d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D98u;
            // 0x1b9d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9DA0u;
    // 0x1b9da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DA0u;
            // 0x1b9da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9DA8u;
    // 0x1b9da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DA8u;
            // 0x1b9dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9DB0u;
    // 0x1b9db0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DB0u;
            // 0x1b9db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9DB8u;
    // 0x1b9db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DB8u;
            // 0x1b9dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9DC0u;
    // 0x1b9dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9dc4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b9dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9dcc: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1b9dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1b9dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9dd4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B9DD4u;
    ctx->pc = 0x1B9DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DD4u;
            // 0x1b9dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9DDCu;
    // 0x1b9ddc: 0x0  nop
    ctx->pc = 0x1b9ddcu;
    // NOP
    // 0x1b9de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9de4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b9de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b9de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9dec: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1b9decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1b9df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9df4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B9DF4u;
    ctx->pc = 0x1B9DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DF4u;
            // 0x1b9df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9DFCu;
    // 0x1b9dfc: 0x0  nop
    ctx->pc = 0x1b9dfcu;
    // NOP
    // 0x1b9e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9e04: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b9e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b9e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9e0c: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1b9e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1b9e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9e14: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B9E14u;
    ctx->pc = 0x1B9E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E14u;
            // 0x1b9e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9E1Cu;
    // 0x1b9e1c: 0x0  nop
    ctx->pc = 0x1b9e1cu;
    // NOP
    // 0x1b9e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9e24: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b9e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9e2c: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1b9e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1b9e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9e34: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B9E34u;
    ctx->pc = 0x1B9E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E34u;
            // 0x1b9e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9E3Cu;
    // 0x1b9e3c: 0x0  nop
    ctx->pc = 0x1b9e3cu;
    // NOP
    // 0x1b9e40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E40u;
            // 0x1b9e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9E48u;
    // 0x1b9e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E48u;
            // 0x1b9e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9E50u;
    // 0x1b9e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E50u;
            // 0x1b9e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9E58u;
    // 0x1b9e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9e5c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b9e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9e60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9e68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9e6c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B9E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E74u);
    ctx->pc = 0x1B9E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E6Cu;
            // 0x1b9e70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E74u; }
        if (ctx->pc != 0x1B9E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E74u; }
        if (ctx->pc != 0x1B9E74u) { return; }
    }
    ctx->pc = 0x1B9E74u;
label_1b9e74:
    // 0x1b9e74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9E74u;
    {
        const bool branch_taken_0x1b9e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E74u;
            // 0x1b9e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e74) {
            ctx->pc = 0x1B9E9Cu;
            goto label_1b9e9c;
        }
    }
    ctx->pc = 0x1B9E7Cu;
    // 0x1b9e7c: 0xc06e7ac  jal         func_1B9EB0
    ctx->pc = 0x1B9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E84u);
    ctx->pc = 0x1B9EB0u;
    if (runtime->hasFunction(0x1B9EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E84u; }
        if (ctx->pc != 0x1B9E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9EB0_0x1b9eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E84u; }
        if (ctx->pc != 0x1B9E84u) { return; }
    }
    ctx->pc = 0x1B9E84u;
label_1b9e84:
    // 0x1b9e84: 0xc06e800  jal         func_1BA000
    ctx->pc = 0x1B9E84u;
    SET_GPR_U32(ctx, 31, 0x1B9E8Cu);
    ctx->pc = 0x1B9E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E84u;
            // 0x1b9e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA000u;
    if (runtime->hasFunction(0x1BA000u)) {
        auto targetFn = runtime->lookupFunction(0x1BA000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E8Cu; }
        if (ctx->pc != 0x1B9E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA000_0x1ba000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E8Cu; }
        if (ctx->pc != 0x1B9E8Cu) { return; }
    }
    ctx->pc = 0x1B9E8Cu;
label_1b9e8c:
    // 0x1b9e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e90: 0xc06e7de  jal         func_1B9F78
    ctx->pc = 0x1B9E90u;
    SET_GPR_U32(ctx, 31, 0x1B9E98u);
    ctx->pc = 0x1B9E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E90u;
            // 0x1b9e94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F78u;
    if (runtime->hasFunction(0x1B9F78u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E98u; }
        if (ctx->pc != 0x1B9E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F78_0x1b9f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E98u; }
        if (ctx->pc != 0x1B9E98u) { return; }
    }
    ctx->pc = 0x1B9E98u;
label_1b9e98:
    // 0x1b9e98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e9c:
    // 0x1b9e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EA8u;
            // 0x1b9eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9EB0u;
}
