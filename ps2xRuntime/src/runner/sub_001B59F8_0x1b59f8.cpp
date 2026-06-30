#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B59F8
// Address: 0x1b59f8 - 0x1b5a80
void sub_001B59F8_0x1b59f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B59F8_0x1b59f8");
#endif

    switch (ctx->pc) {
        case 0x1b5a1cu: goto label_1b5a1c;
        case 0x1b5a60u: goto label_1b5a60;
        default: break;
    }

    ctx->pc = 0x1b59f8u;

    // 0x1b59f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b59f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b59fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b59fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5a08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5a10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b5a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b5a14: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5A14u;
    SET_GPR_U32(ctx, 31, 0x1B5A1Cu);
    ctx->pc = 0x1B5A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A14u;
            // 0x1b5a18: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A1Cu; }
        if (ctx->pc != 0x1B5A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A1Cu; }
        if (ctx->pc != 0x1B5A1Cu) { return; }
    }
    ctx->pc = 0x1B5A1Cu;
label_1b5a1c:
    // 0x1b5a1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5a20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5A24u;
    {
        const bool branch_taken_0x1b5a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A24u;
            // 0x1b5a28: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a24) {
            ctx->pc = 0x1B5A48u;
            goto label_1b5a48;
        }
    }
    ctx->pc = 0x1B5A2Cu;
    // 0x1b5a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5a38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5a3c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B5A3Cu;
    ctx->pc = 0x1B5A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A3Cu;
            // 0x1b5a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5A44u;
    // 0x1b5a44: 0x0  nop
    ctx->pc = 0x1b5a44u;
    // NOP
label_1b5a48:
    // 0x1b5a48: 0x8e033720  lw          $v1, 0x3720($s0)
    ctx->pc = 0x1b5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1b5a4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5A4Cu;
    {
        const bool branch_taken_0x1b5a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A4Cu;
            // 0x1b5a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a4c) {
            ctx->pc = 0x1B5A64u;
            goto label_1b5a64;
        }
    }
    ctx->pc = 0x1B5A54u;
    // 0x1b5a54: 0xac710dcc  sw          $s1, 0xDCC($v1)
    ctx->pc = 0x1b5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3532), GPR_U32(ctx, 17));
    // 0x1b5a58: 0xc06d722  jal         func_1B5C88
    ctx->pc = 0x1B5A58u;
    SET_GPR_U32(ctx, 31, 0x1B5A60u);
    ctx->pc = 0x1B5A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A58u;
            // 0x1b5a5c: 0xac720dc8  sw          $s2, 0xDC8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3528), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (runtime->hasFunction(0x1B5C88u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A60u; }
        if (ctx->pc != 0x1B5A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5C88_0x1b5c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A60u; }
        if (ctx->pc != 0x1B5A60u) { return; }
    }
    ctx->pc = 0x1B5A60u;
label_1b5a60:
    // 0x1b5a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a64:
    // 0x1b5a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5a68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5a70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A74u;
            // 0x1b5a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5A7Cu;
    // 0x1b5a7c: 0x0  nop
    ctx->pc = 0x1b5a7cu;
    // NOP
}
