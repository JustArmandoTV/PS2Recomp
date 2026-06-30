#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1CC0
// Address: 0x1a1cc0 - 0x1a1d48
void sub_001A1CC0_0x1a1cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1CC0_0x1a1cc0");
#endif

    switch (ctx->pc) {
        case 0x1a1ce0u: goto label_1a1ce0;
        case 0x1a1cf8u: goto label_1a1cf8;
        case 0x1a1d08u: goto label_1a1d08;
        case 0x1a1d10u: goto label_1a1d10;
        default: break;
    }

    ctx->pc = 0x1a1cc0u;

    // 0x1a1cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1cc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1cd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a1cd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a1cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a1cd8: 0xc067628  jal         func_19D8A0
    ctx->pc = 0x1A1CD8u;
    SET_GPR_U32(ctx, 31, 0x1A1CE0u);
    ctx->pc = 0x1A1CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CD8u;
            // 0x1a1cdc: 0x8e120048  lw          $s2, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D8A0u;
    if (runtime->hasFunction(0x19D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x19D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CE0u; }
        if (ctx->pc != 0x1A1CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D8A0_0x19d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CE0u; }
        if (ctx->pc != 0x1A1CE0u) { return; }
    }
    ctx->pc = 0x1A1CE0u;
label_1a1ce0:
    // 0x1a1ce0: 0x8e110420  lw          $s1, 0x420($s0)
    ctx->pc = 0x1a1ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x1a1ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ce8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1CE8u;
    {
        const bool branch_taken_0x1a1ce8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CE8u;
            // 0x1a1cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ce8) {
            ctx->pc = 0x1A1D00u;
            goto label_1a1d00;
        }
    }
    ctx->pc = 0x1A1CF0u;
    // 0x1a1cf0: 0xc0687d8  jal         func_1A1F60
    ctx->pc = 0x1A1CF0u;
    SET_GPR_U32(ctx, 31, 0x1A1CF8u);
    ctx->pc = 0x1A1F60u;
    if (runtime->hasFunction(0x1A1F60u)) {
        auto targetFn = runtime->lookupFunction(0x1A1F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CF8u; }
        if (ctx->pc != 0x1A1CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1F60_0x1a1f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CF8u; }
        if (ctx->pc != 0x1A1CF8u) { return; }
    }
    ctx->pc = 0x1A1CF8u;
label_1a1cf8:
    // 0x1a1cf8: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A1CF8u;
    {
        const bool branch_taken_0x1a1cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a1cf8) {
            ctx->pc = 0x1A1CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CF8u;
            // 0x1a1cfc: 0xae000420  sw          $zero, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1D00u;
            goto label_1a1d00;
        }
    }
    ctx->pc = 0x1A1D00u;
label_1a1d00:
    // 0x1a1d00: 0xc068752  jal         func_1A1D48
    ctx->pc = 0x1A1D00u;
    SET_GPR_U32(ctx, 31, 0x1A1D08u);
    ctx->pc = 0x1A1D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D00u;
            // 0x1a1d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1D48u;
    if (runtime->hasFunction(0x1A1D48u)) {
        auto targetFn = runtime->lookupFunction(0x1A1D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D08u; }
        if (ctx->pc != 0x1A1D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1D48_0x1a1d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D08u; }
        if (ctx->pc != 0x1A1D08u) { return; }
    }
    ctx->pc = 0x1A1D08u;
label_1a1d08:
    // 0x1a1d08: 0xc06d74a  jal         func_1B5D28
    ctx->pc = 0x1A1D08u;
    SET_GPR_U32(ctx, 31, 0x1A1D10u);
    ctx->pc = 0x1A1D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D08u;
            // 0x1a1d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D28u;
    if (runtime->hasFunction(0x1B5D28u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D10u; }
        if (ctx->pc != 0x1A1D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D28_0x1b5d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D10u; }
        if (ctx->pc != 0x1A1D10u) { return; }
    }
    ctx->pc = 0x1A1D10u;
label_1a1d10:
    // 0x1a1d10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1d10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1d18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1D18u;
    {
        const bool branch_taken_0x1a1d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D18u;
            // 0x1a1d1c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d18) {
            ctx->pc = 0x1A1D28u;
            goto label_1a1d28;
        }
    }
    ctx->pc = 0x1A1D20u;
    // 0x1a1d20: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1D20u;
    {
        const bool branch_taken_0x1a1d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1d20) {
            ctx->pc = 0x1A1D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D20u;
            // 0x1a1d24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1D34u;
            goto label_1a1d34;
        }
    }
    ctx->pc = 0x1A1D28u;
label_1a1d28:
    // 0x1a1d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1d2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a1d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1d34:
    // 0x1a1d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1d3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D40u;
            // 0x1a1d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1D48u;
}
