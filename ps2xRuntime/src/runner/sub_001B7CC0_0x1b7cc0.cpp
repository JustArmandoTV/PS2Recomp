#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7CC0
// Address: 0x1b7cc0 - 0x1b7e48
void sub_001B7CC0_0x1b7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7CC0_0x1b7cc0");
#endif

    switch (ctx->pc) {
        case 0x1b7ce4u: goto label_1b7ce4;
        case 0x1b7d1cu: goto label_1b7d1c;
        case 0x1b7db0u: goto label_1b7db0;
        case 0x1b7e24u: goto label_1b7e24;
        default: break;
    }

    ctx->pc = 0x1b7cc0u;

    // 0x1b7cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7cc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b7cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7ccc: 0x8ce30a44  lw          $v1, 0xA44($a3)
    ctx->pc = 0x1b7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2628)));
    // 0x1b7cd0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7CD0u;
    {
        const bool branch_taken_0x1b7cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CD0u;
            // 0x1b7cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cd0) {
            ctx->pc = 0x1B7CE8u;
            goto label_1b7ce8;
        }
    }
    ctx->pc = 0x1B7CD8u;
    // 0x1b7cd8: 0x8ce80abc  lw          $t0, 0xABC($a3)
    ctx->pc = 0x1b7cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2748)));
    // 0x1b7cdc: 0xc06df92  jal         func_1B7E48
    ctx->pc = 0x1B7CDCu;
    SET_GPR_U32(ctx, 31, 0x1B7CE4u);
    ctx->pc = 0x1B7CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CDCu;
            // 0x1b7ce0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E48u;
    if (runtime->hasFunction(0x1B7E48u)) {
        auto targetFn = runtime->lookupFunction(0x1B7E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CE4u; }
        if (ctx->pc != 0x1B7CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7E48_0x1b7e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CE4u; }
        if (ctx->pc != 0x1B7CE4u) { return; }
    }
    ctx->pc = 0x1B7CE4u;
label_1b7ce4:
    // 0x1b7ce4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7ce8:
    // 0x1b7ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CECu;
            // 0x1b7cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7CF4u;
    // 0x1b7cf4: 0x0  nop
    ctx->pc = 0x1b7cf4u;
    // NOP
    // 0x1b7cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7d08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b7d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b7d10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b7d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b7d14: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B7D14u;
    SET_GPR_U32(ctx, 31, 0x1B7D1Cu);
    ctx->pc = 0x1B7D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D14u;
            // 0x1b7d18: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D1Cu; }
        if (ctx->pc != 0x1B7D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D1Cu; }
        if (ctx->pc != 0x1B7D1Cu) { return; }
    }
    ctx->pc = 0x1B7D1Cu;
label_1b7d1c:
    // 0x1b7d1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7d20: 0x26060d88  addiu       $a2, $s0, 0xD88
    ctx->pc = 0x1b7d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1b7d24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7D28u;
    {
        const bool branch_taken_0x1b7d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D28u;
            // 0x1b7d2c: 0x34a50125  ori         $a1, $a1, 0x125 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)293);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d28) {
            ctx->pc = 0x1B7D48u;
            goto label_1b7d48;
        }
    }
    ctx->pc = 0x1B7D30u;
    // 0x1b7d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7d3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7d40: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B7D40u;
    ctx->pc = 0x1B7D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D40u;
            // 0x1b7d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7D48u;
label_1b7d48:
    // 0x1b7d48: 0x8cc302b0  lw          $v1, 0x2B0($a2)
    ctx->pc = 0x1b7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 688)));
    // 0x1b7d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7d50: 0xacd102b8  sw          $s1, 0x2B8($a2)
    ctx->pc = 0x1b7d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 696), GPR_U32(ctx, 17));
    // 0x1b7d54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b7d58: 0xacd202b4  sw          $s2, 0x2B4($a2)
    ctx->pc = 0x1b7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 692), GPR_U32(ctx, 18));
    // 0x1b7d5c: 0xacc302b0  sw          $v1, 0x2B0($a2)
    ctx->pc = 0x1b7d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 688), GPR_U32(ctx, 3));
    // 0x1b7d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7d64: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x1b7d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1b7d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D74u;
            // 0x1b7d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7D7Cu;
    // 0x1b7d7c: 0x0  nop
    ctx->pc = 0x1b7d7cu;
    // NOP
    // 0x1b7d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7d88: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b7d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b7d98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b7d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b7d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b7da0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7da8: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B7DA8u;
    SET_GPR_U32(ctx, 31, 0x1B7DB0u);
    ctx->pc = 0x1B7DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DA8u;
            // 0x1b7dac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DB0u; }
        if (ctx->pc != 0x1B7DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DB0u; }
        if (ctx->pc != 0x1B7DB0u) { return; }
    }
    ctx->pc = 0x1B7DB0u;
label_1b7db0:
    // 0x1b7db0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b7db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7db4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7DB4u;
    {
        const bool branch_taken_0x1b7db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DB4u;
            // 0x1b7db8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7db4) {
            ctx->pc = 0x1B7DE0u;
            goto label_1b7de0;
        }
    }
    ctx->pc = 0x1B7DBCu;
    // 0x1b7dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7dc0: 0x34a50126  ori         $a1, $a1, 0x126
    ctx->pc = 0x1b7dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)294);
    // 0x1b7dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7dc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7dcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b7dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7dd4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B7DD4u;
    ctx->pc = 0x1B7DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DD4u;
            // 0x1b7dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7DDCu;
    // 0x1b7ddc: 0x0  nop
    ctx->pc = 0x1b7ddcu;
    // NOP
label_1b7de0:
    // 0x1b7de0: 0x8e030a44  lw          $v1, 0xA44($s0)
    ctx->pc = 0x1b7de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2628)));
    // 0x1b7de4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7DE4u;
    {
        const bool branch_taken_0x1b7de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7de4) {
            ctx->pc = 0x1B7DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DE4u;
            // 0x1b7de8: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7DF8u;
            goto label_1b7df8;
        }
    }
    ctx->pc = 0x1B7DECu;
    // 0x1b7dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7df0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B7DF0u;
    {
        const bool branch_taken_0x1b7df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DF0u;
            // 0x1b7df4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7df0) {
            ctx->pc = 0x1B7E28u;
            goto label_1b7e28;
        }
    }
    ctx->pc = 0x1B7DF8u;
label_1b7df8:
    // 0x1b7df8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b7dfc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7DFCu;
    {
        const bool branch_taken_0x1b7dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DFCu;
            // 0x1b7e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7dfc) {
            ctx->pc = 0x1B7E10u;
            goto label_1b7e10;
        }
    }
    ctx->pc = 0x1B7E04u;
    // 0x1b7e04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7E04u;
    {
        const bool branch_taken_0x1b7e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E04u;
            // 0x1b7e08: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e04) {
            ctx->pc = 0x1B7E28u;
            goto label_1b7e28;
        }
    }
    ctx->pc = 0x1B7E0Cu;
    // 0x1b7e0c: 0x0  nop
    ctx->pc = 0x1b7e0cu;
    // NOP
label_1b7e10:
    // 0x1b7e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b7e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e14: 0x8c880ac0  lw          $t0, 0xAC0($a0)
    ctx->pc = 0x1b7e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2752)));
    // 0x1b7e18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b7e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e1c: 0xc06df92  jal         func_1B7E48
    ctx->pc = 0x1B7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E24u);
    ctx->pc = 0x1B7E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E1Cu;
            // 0x1b7e20: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E48u;
    if (runtime->hasFunction(0x1B7E48u)) {
        auto targetFn = runtime->lookupFunction(0x1B7E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E24u; }
        if (ctx->pc != 0x1B7E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7E48_0x1b7e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E24u; }
        if (ctx->pc != 0x1B7E24u) { return; }
    }
    ctx->pc = 0x1B7E24u;
label_1b7e24:
    // 0x1b7e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e28:
    // 0x1b7e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7e30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b7e34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7e38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E3Cu;
            // 0x1b7e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7E44u;
    // 0x1b7e44: 0x0  nop
    ctx->pc = 0x1b7e44u;
    // NOP
}
