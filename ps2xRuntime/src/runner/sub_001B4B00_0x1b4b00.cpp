#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4B00
// Address: 0x1b4b00 - 0x1b4b88
void sub_001B4B00_0x1b4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4B00_0x1b4b00");
#endif

    switch (ctx->pc) {
        case 0x1b4b34u: goto label_1b4b34;
        case 0x1b4b6cu: goto label_1b4b6c;
        default: break;
    }

    ctx->pc = 0x1b4b00u;

    // 0x1b4b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4b08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b4b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4b10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b4b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b4b18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b4b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b1c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4B1Cu;
    {
        const bool branch_taken_0x1b4b1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B1Cu;
            // 0x1b4b20: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b1c) {
            ctx->pc = 0x1B4B6Cu;
            goto label_1b4b6c;
        }
    }
    ctx->pc = 0x1B4B24u;
    // 0x1b4b24: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4B24u;
    {
        const bool branch_taken_0x1b4b24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B4B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B24u;
            // 0x1b4b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b24) {
            ctx->pc = 0x1B4B70u;
            goto label_1b4b70;
        }
    }
    ctx->pc = 0x1B4B2Cu;
    // 0x1b4b2c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B34u);
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B34u; }
        if (ctx->pc != 0x1B4B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B34u; }
        if (ctx->pc != 0x1B4B34u) { return; }
    }
    ctx->pc = 0x1B4B34u;
label_1b4b34:
    // 0x1b4b34: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b3c: 0x34a50165  ori         $a1, $a1, 0x165
    ctx->pc = 0x1b4b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)357);
    // 0x1b4b40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4B40u;
    {
        const bool branch_taken_0x1b4b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B40u;
            // 0x1b4b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b40) {
            ctx->pc = 0x1B4B60u;
            goto label_1b4b60;
        }
    }
    ctx->pc = 0x1B4B48u;
    // 0x1b4b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4b50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4b54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4b58: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B4B58u;
    ctx->pc = 0x1B4B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B58u;
            // 0x1b4b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4B60u;
label_1b4b60:
    // 0x1b4b60: 0x2644142c  addiu       $a0, $s2, 0x142C
    ctx->pc = 0x1b4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5164));
    // 0x1b4b64: 0xc06d2e2  jal         func_1B4B88
    ctx->pc = 0x1B4B64u;
    SET_GPR_U32(ctx, 31, 0x1B4B6Cu);
    ctx->pc = 0x1B4B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B64u;
            // 0x1b4b68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B88u;
    if (runtime->hasFunction(0x1B4B88u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B6Cu; }
        if (ctx->pc != 0x1B4B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4B88_0x1b4b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B6Cu; }
        if (ctx->pc != 0x1B4B6Cu) { return; }
    }
    ctx->pc = 0x1B4B6Cu;
label_1b4b6c:
    // 0x1b4b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b70:
    // 0x1b4b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B80u;
            // 0x1b4b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4B88u;
}
