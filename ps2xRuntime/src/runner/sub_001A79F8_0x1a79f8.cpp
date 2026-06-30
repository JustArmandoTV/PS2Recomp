#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A79F8
// Address: 0x1a79f8 - 0x1a7ab0
void sub_001A79F8_0x1a79f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A79F8_0x1a79f8");
#endif

    switch (ctx->pc) {
        case 0x1a7a44u: goto label_1a7a44;
        case 0x1a7a5cu: goto label_1a7a5c;
        case 0x1a7a74u: goto label_1a7a74;
        case 0x1a7a8cu: goto label_1a7a8c;
        default: break;
    }

    ctx->pc = 0x1a79f8u;

    // 0x1a79f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a79f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a79fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7a00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7a04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a7a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7a0c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a7a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7a14: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a7a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a18: 0x2610fffa  addiu       $s0, $s0, -0x6
    ctx->pc = 0x1a7a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x1a7a1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7a20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7a24: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1a7a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1a7a28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a7a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a30: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1a7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1a7a34: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7A34u;
    {
        const bool branch_taken_0x1a7a34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A34u;
            // 0x1a7a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a34) {
            ctx->pc = 0x1A7A94u;
            goto label_1a7a94;
        }
    }
    ctx->pc = 0x1A7A3Cu;
    // 0x1a7a3c: 0xc069eac  jal         func_1A7AB0
    ctx->pc = 0x1A7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A44u);
    ctx->pc = 0x1A7AB0u;
    if (runtime->hasFunction(0x1A7AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A7AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A44u; }
        if (ctx->pc != 0x1A7A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7AB0_0x1a7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A44u; }
        if (ctx->pc != 0x1A7A44u) { return; }
    }
    ctx->pc = 0x1A7A44u;
label_1a7a44:
    // 0x1a7a44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7A44u;
    {
        const bool branch_taken_0x1a7a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7a44) {
            ctx->pc = 0x1A7A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A44u;
            // 0x1a7a48: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7A64u;
            goto label_1a7a64;
        }
    }
    ctx->pc = 0x1A7A4Cu;
    // 0x1a7a4c: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x1a7a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1a7a50: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1a7a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1a7a54: 0xc069eac  jal         func_1A7AB0
    ctx->pc = 0x1A7A54u;
    SET_GPR_U32(ctx, 31, 0x1A7A5Cu);
    ctx->pc = 0x1A7A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A54u;
            // 0x1a7a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7AB0u;
    if (runtime->hasFunction(0x1A7AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A7AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A5Cu; }
        if (ctx->pc != 0x1A7A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7AB0_0x1a7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A5Cu; }
        if (ctx->pc != 0x1A7A5Cu) { return; }
    }
    ctx->pc = 0x1A7A5Cu;
label_1a7a5c:
    // 0x1a7a5c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A7A5Cu;
    {
        const bool branch_taken_0x1a7a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A5Cu;
            // 0x1a7a60: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a5c) {
            ctx->pc = 0x1A7A94u;
            goto label_1a7a94;
        }
    }
    ctx->pc = 0x1A7A64u;
label_1a7a64:
    // 0x1a7a64: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1a7a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a6c: 0xc069ec2  jal         func_1A7B08
    ctx->pc = 0x1A7A6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A74u);
    ctx->pc = 0x1A7A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A6Cu;
            // 0x1a7a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7B08u;
    if (runtime->hasFunction(0x1A7B08u)) {
        auto targetFn = runtime->lookupFunction(0x1A7B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A74u; }
        if (ctx->pc != 0x1A7A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7B08_0x1a7b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A74u; }
        if (ctx->pc != 0x1A7A74u) { return; }
    }
    ctx->pc = 0x1A7A74u;
label_1a7a74:
    // 0x1a7a74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a7a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7A7Cu;
    {
        const bool branch_taken_0x1a7a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A7Cu;
            // 0x1a7a80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a7c) {
            ctx->pc = 0x1A7A94u;
            goto label_1a7a94;
        }
    }
    ctx->pc = 0x1A7A84u;
    // 0x1a7a84: 0xc069ed8  jal         func_1A7B60
    ctx->pc = 0x1A7A84u;
    SET_GPR_U32(ctx, 31, 0x1A7A8Cu);
    ctx->pc = 0x1A7B60u;
    if (runtime->hasFunction(0x1A7B60u)) {
        auto targetFn = runtime->lookupFunction(0x1A7B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A8Cu; }
        if (ctx->pc != 0x1A7A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7B60_0x1a7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A8Cu; }
        if (ctx->pc != 0x1A7A8Cu) { return; }
    }
    ctx->pc = 0x1A7A8Cu;
label_1a7a8c:
    // 0x1a7a8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a7a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a7a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7a94:
    // 0x1a7a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7aa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AA8u;
            // 0x1a7aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7AB0u;
}
