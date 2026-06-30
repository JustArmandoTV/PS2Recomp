#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5CF0
// Address: 0x1c5cf0 - 0x1c5d80
void sub_001C5CF0_0x1c5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5CF0_0x1c5cf0");
#endif

    switch (ctx->pc) {
        case 0x1c5d18u: goto label_1c5d18;
        case 0x1c5d20u: goto label_1c5d20;
        case 0x1c5d44u: goto label_1c5d44;
        case 0x1c5d4cu: goto label_1c5d4c;
        case 0x1c5d54u: goto label_1c5d54;
        default: break;
    }

    ctx->pc = 0x1c5cf0u;

    // 0x1c5cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5cf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5cf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5cfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c5cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c5d00: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c5d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5d04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c5d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c5d08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5d0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c5d10: 0xc070ed0  jal         func_1C3B40
    ctx->pc = 0x1C5D10u;
    SET_GPR_U32(ctx, 31, 0x1C5D18u);
    ctx->pc = 0x1C5D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D10u;
            // 0x1c5d14: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3B40u;
    if (runtime->hasFunction(0x1C3B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C3B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D18u; }
        if (ctx->pc != 0x1C5D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3B40_0x1c3b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D18u; }
        if (ctx->pc != 0x1C5D18u) { return; }
    }
    ctx->pc = 0x1C5D18u;
label_1c5d18:
    // 0x1c5d18: 0xc0715e6  jal         func_1C5798
    ctx->pc = 0x1C5D18u;
    SET_GPR_U32(ctx, 31, 0x1C5D20u);
    ctx->pc = 0x1C5D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D18u;
            // 0x1c5d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5798u;
    if (runtime->hasFunction(0x1C5798u)) {
        auto targetFn = runtime->lookupFunction(0x1C5798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D20u; }
        if (ctx->pc != 0x1C5D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5798_0x1c5798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D20u; }
        if (ctx->pc != 0x1C5D20u) { return; }
    }
    ctx->pc = 0x1C5D20u;
label_1c5d20:
    // 0x1c5d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d24: 0x5212000f  beql        $s0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1C5D24u;
    {
        const bool branch_taken_0x1c5d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x1c5d24) {
            ctx->pc = 0x1C5D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D24u;
            // 0x1c5d28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D64u;
            goto label_1c5d64;
        }
    }
    ctx->pc = 0x1C5D2Cu;
    // 0x1c5d2c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5D2Cu;
    {
        const bool branch_taken_0x1c5d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D2Cu;
            // 0x1c5d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d2c) {
            ctx->pc = 0x1C5D60u;
            goto label_1c5d60;
        }
    }
    ctx->pc = 0x1C5D34u;
    // 0x1c5d34: 0x5613000b  bnel        $s0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5D34u;
    {
        const bool branch_taken_0x1c5d34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x1c5d34) {
            ctx->pc = 0x1C5D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D34u;
            // 0x1c5d38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D64u;
            goto label_1c5d64;
        }
    }
    ctx->pc = 0x1C5D3Cu;
    // 0x1c5d3c: 0xc0715d8  jal         func_1C5760
    ctx->pc = 0x1C5D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D44u);
    ctx->pc = 0x1C5760u;
    if (runtime->hasFunction(0x1C5760u)) {
        auto targetFn = runtime->lookupFunction(0x1C5760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D44u; }
        if (ctx->pc != 0x1C5D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5760_0x1c5760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D44u; }
        if (ctx->pc != 0x1C5D44u) { return; }
    }
    ctx->pc = 0x1C5D44u;
label_1c5d44:
    // 0x1c5d44: 0xc071710  jal         func_1C5C40
    ctx->pc = 0x1C5D44u;
    SET_GPR_U32(ctx, 31, 0x1C5D4Cu);
    ctx->pc = 0x1C5C40u;
    if (runtime->hasFunction(0x1C5C40u)) {
        auto targetFn = runtime->lookupFunction(0x1C5C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D4Cu; }
        if (ctx->pc != 0x1C5D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5C40_0x1c5c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D4Cu; }
        if (ctx->pc != 0x1C5D4Cu) { return; }
    }
    ctx->pc = 0x1C5D4Cu;
label_1c5d4c:
    // 0x1c5d4c: 0xc070ee2  jal         func_1C3B88
    ctx->pc = 0x1C5D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D54u);
    ctx->pc = 0x1C5D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D4Cu;
            // 0x1c5d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3B88u;
    if (runtime->hasFunction(0x1C3B88u)) {
        auto targetFn = runtime->lookupFunction(0x1C3B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D54u; }
        if (ctx->pc != 0x1C5D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3B88_0x1c3b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D54u; }
        if (ctx->pc != 0x1C5D54u) { return; }
    }
    ctx->pc = 0x1C5D54u;
label_1c5d54:
    // 0x1c5d54: 0x1052fff0  beq         $v0, $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C5D54u;
    {
        const bool branch_taken_0x1c5d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C5D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D54u;
            // 0x1c5d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d54) {
            ctx->pc = 0x1C5D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5d18;
        }
    }
    ctx->pc = 0x1C5D5Cu;
    // 0x1c5d5c: 0xa6300036  sh          $s0, 0x36($s1)
    ctx->pc = 0x1c5d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 16));
label_1c5d60:
    // 0x1c5d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5d64:
    // 0x1c5d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5d6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c5d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c5d70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c5d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D74u;
            // 0x1c5d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5D7Cu;
    // 0x1c5d7c: 0x0  nop
    ctx->pc = 0x1c5d7cu;
    // NOP
}
