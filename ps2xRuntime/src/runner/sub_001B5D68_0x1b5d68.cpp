#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5D68
// Address: 0x1b5d68 - 0x1b5e20
void sub_001B5D68_0x1b5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5D68_0x1b5d68");
#endif

    switch (ctx->pc) {
        case 0x1b5d98u: goto label_1b5d98;
        case 0x1b5db8u: goto label_1b5db8;
        case 0x1b5df0u: goto label_1b5df0;
        case 0x1b5e00u: goto label_1b5e00;
        default: break;
    }

    ctx->pc = 0x1b5d68u;

    // 0x1b5d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5d78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b5d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5d80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b5d80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d84: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5D84u;
    {
        const bool branch_taken_0x1b5d84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D84u;
            // 0x1b5d88: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d84) {
            ctx->pc = 0x1B5DB0u;
            goto label_1b5db0;
        }
    }
    ctx->pc = 0x1B5D8Cu;
    // 0x1b5d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d90: 0xc06d788  jal         func_1B5E20
    ctx->pc = 0x1B5D90u;
    SET_GPR_U32(ctx, 31, 0x1B5D98u);
    ctx->pc = 0x1B5D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D90u;
            // 0x1b5d94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5E20u;
    if (runtime->hasFunction(0x1B5E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B5E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D98u; }
        if (ctx->pc != 0x1B5D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5E20_0x1b5e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D98u; }
        if (ctx->pc != 0x1B5D98u) { return; }
    }
    ctx->pc = 0x1B5D98u;
label_1b5d98:
    // 0x1b5d98: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b5d9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1b5d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1b5da0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b5da0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b5da4: 0xac329980  sw          $s2, -0x6680($at)
    ctx->pc = 0x1b5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941056), GPR_U32(ctx, 18));
    // 0x1b5da8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5DA8u;
    {
        const bool branch_taken_0x1b5da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DA8u;
            // 0x1b5dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5da8) {
            ctx->pc = 0x1B5E04u;
            goto label_1b5e04;
        }
    }
    ctx->pc = 0x1B5DB0u;
label_1b5db0:
    // 0x1b5db0: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5DB0u;
    SET_GPR_U32(ctx, 31, 0x1B5DB8u);
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DB8u; }
        if (ctx->pc != 0x1B5DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DB8u; }
        if (ctx->pc != 0x1B5DB8u) { return; }
    }
    ctx->pc = 0x1B5DB8u;
label_1b5db8:
    // 0x1b5db8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5dbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5DBCu;
    {
        const bool branch_taken_0x1b5dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DBCu;
            // 0x1b5dc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dbc) {
            ctx->pc = 0x1B5DE0u;
            goto label_1b5de0;
        }
    }
    ctx->pc = 0x1B5DC4u;
    // 0x1b5dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5dc8: 0x34a50112  ori         $a1, $a1, 0x112
    ctx->pc = 0x1b5dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
    // 0x1b5dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5dd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5dd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5dd8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B5DD8u;
    ctx->pc = 0x1B5DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DD8u;
            // 0x1b5ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5DE0u;
label_1b5de0:
    // 0x1b5de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5de8: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B5DE8u;
    SET_GPR_U32(ctx, 31, 0x1B5DF0u);
    ctx->pc = 0x1B5DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DE8u;
            // 0x1b5dec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DF0u; }
        if (ctx->pc != 0x1B5DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DF0u; }
        if (ctx->pc != 0x1B5DF0u) { return; }
    }
    ctx->pc = 0x1B5DF0u;
label_1b5df0:
    // 0x1b5df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5df8: 0xc06d7be  jal         func_1B5EF8
    ctx->pc = 0x1B5DF8u;
    SET_GPR_U32(ctx, 31, 0x1B5E00u);
    ctx->pc = 0x1B5DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DF8u;
            // 0x1b5dfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EF8u;
    if (runtime->hasFunction(0x1B5EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E00u; }
        if (ctx->pc != 0x1B5E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EF8_0x1b5ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E00u; }
        if (ctx->pc != 0x1B5E00u) { return; }
    }
    ctx->pc = 0x1B5E00u;
label_1b5e00:
    // 0x1b5e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5e04:
    // 0x1b5e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5e0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5e10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5e14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E14u;
            // 0x1b5e18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5E1Cu;
    // 0x1b5e1c: 0x0  nop
    ctx->pc = 0x1b5e1cu;
    // NOP
}
