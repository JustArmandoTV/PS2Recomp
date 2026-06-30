#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5FD0
// Address: 0x1b5fd0 - 0x1b6070
void sub_001B5FD0_0x1b5fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5FD0_0x1b5fd0");
#endif

    switch (ctx->pc) {
        case 0x1b6018u: goto label_1b6018;
        case 0x1b604cu: goto label_1b604c;
        default: break;
    }

    ctx->pc = 0x1b5fd0u;

    // 0x1b5fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5fd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5fe0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b5fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fe4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5fe8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b5fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b5fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b5ff0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5FF0u;
    {
        const bool branch_taken_0x1b5ff0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FF0u;
            // 0x1b5ff4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ff0) {
            ctx->pc = 0x1B6010u;
            goto label_1b6010;
        }
    }
    ctx->pc = 0x1B5FF8u;
    // 0x1b5ff8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1b5ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1b5ffc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b5ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b6000: 0x8c229980  lw          $v0, -0x6680($at)
    ctx->pc = 0x1b6000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941056)));
    // 0x1b6004: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6004u;
    {
        const bool branch_taken_0x1b6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6004u;
            // 0x1b6008: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6004) {
            ctx->pc = 0x1B6050u;
            goto label_1b6050;
        }
    }
    ctx->pc = 0x1B600Cu;
    // 0x1b600c: 0x0  nop
    ctx->pc = 0x1b600cu;
    // NOP
label_1b6010:
    // 0x1b6010: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B6010u;
    SET_GPR_U32(ctx, 31, 0x1B6018u);
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6018u; }
        if (ctx->pc != 0x1B6018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6018u; }
        if (ctx->pc != 0x1B6018u) { return; }
    }
    ctx->pc = 0x1B6018u;
label_1b6018:
    // 0x1b6018: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b6018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b601c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B601Cu;
    {
        const bool branch_taken_0x1b601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B601Cu;
            // 0x1b6020: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b601c) {
            ctx->pc = 0x1B6040u;
            goto label_1b6040;
        }
    }
    ctx->pc = 0x1B6024u;
    // 0x1b6024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6028: 0x34a50113  ori         $a1, $a1, 0x113
    ctx->pc = 0x1b6028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)275);
    // 0x1b602c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b602cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6034: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6038: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B6038u;
    ctx->pc = 0x1B603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6038u;
            // 0x1b603c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6040u;
label_1b6040:
    // 0x1b6040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6044: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B6044u;
    SET_GPR_U32(ctx, 31, 0x1B604Cu);
    ctx->pc = 0x1B6048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6044u;
            // 0x1b6048: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B604Cu; }
        if (ctx->pc != 0x1B604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B604Cu; }
        if (ctx->pc != 0x1B604Cu) { return; }
    }
    ctx->pc = 0x1B604Cu;
label_1b604c:
    // 0x1b604c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b604cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b6050:
    // 0x1b6050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b605c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b605cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6060: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6064: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6064u;
            // 0x1b6068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B606Cu;
    // 0x1b606c: 0x0  nop
    ctx->pc = 0x1b606cu;
    // NOP
}
