#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4CF8
// Address: 0x1a4cf8 - 0x1a4da8
void sub_001A4CF8_0x1a4cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4CF8_0x1a4cf8");
#endif

    switch (ctx->pc) {
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d28u: goto label_1a4d28;
        case 0x1a4d80u: goto label_1a4d80;
        case 0x1a4d94u: goto label_1a4d94;
        default: break;
    }

    ctx->pc = 0x1a4cf8u;

    // 0x1a4cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4cfc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4d0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4d10: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1A4D10u;
    SET_GPR_U32(ctx, 31, 0x1A4D18u);
    ctx->pc = 0x1A4D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D10u;
            // 0x1a4d14: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D18u; }
        if (ctx->pc != 0x1A4D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D18u; }
        if (ctx->pc != 0x1A4D18u) { return; }
    }
    ctx->pc = 0x1A4D18u;
label_1a4d18:
    // 0x1a4d18: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4D18u;
    {
        const bool branch_taken_0x1a4d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A4D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D18u;
            // 0x1a4d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d18) {
            ctx->pc = 0x1A4D50u;
            goto label_1a4d50;
        }
    }
    ctx->pc = 0x1A4D20u;
    // 0x1a4d20: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1A4D20u;
    SET_GPR_U32(ctx, 31, 0x1A4D28u);
    ctx->pc = 0x1A4D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D20u;
            // 0x1a4d24: 0x8e05218c  lw          $a1, 0x218C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D28u; }
        if (ctx->pc != 0x1A4D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D28u; }
        if (ctx->pc != 0x1A4D28u) { return; }
    }
    ctx->pc = 0x1A4D28u;
label_1a4d28:
    // 0x1a4d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a4d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4d30: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4D30u;
    {
        const bool branch_taken_0x1a4d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A4D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D30u;
            // 0x1a4d34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d30) {
            ctx->pc = 0x1A4D50u;
            goto label_1a4d50;
        }
    }
    ctx->pc = 0x1A4D38u;
    // 0x1a4d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4d44: 0x806e37c  j           func_1B8DF0
    ctx->pc = 0x1A4D44u;
    ctx->pc = 0x1A4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D44u;
            // 0x1a4d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A4D4Cu;
    // 0x1a4d4c: 0x0  nop
    ctx->pc = 0x1a4d4cu;
    // NOP
label_1a4d50:
    // 0x1a4d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D5Cu;
            // 0x1a4d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4D64u;
    // 0x1a4d64: 0x0  nop
    ctx->pc = 0x1a4d64u;
    // NOP
    // 0x1a4d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4d6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4d74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a4d78: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4D78u;
    SET_GPR_U32(ctx, 31, 0x1A4D80u);
    ctx->pc = 0x1A4D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D78u;
            // 0x1a4d7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D80u; }
        if (ctx->pc != 0x1A4D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D80u; }
        if (ctx->pc != 0x1A4D80u) { return; }
    }
    ctx->pc = 0x1A4D80u;
label_1a4d80:
    // 0x1a4d80: 0x260336cc  addiu       $v1, $s0, 0x36CC
    ctx->pc = 0x1a4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 14028));
    // 0x1a4d84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4D84u;
    {
        const bool branch_taken_0x1a4d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D84u;
            // 0x1a4d88: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d84) {
            ctx->pc = 0x1A4D98u;
            goto label_1a4d98;
        }
    }
    ctx->pc = 0x1A4D8Cu;
    // 0x1a4d8c: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x1A4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D94u);
    ctx->pc = 0x1A4D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D8Cu;
            // 0x1a4d90: 0xae032184  sw          $v1, 0x2184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8580), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (runtime->hasFunction(0x1A4DA8u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D94u; }
        if (ctx->pc != 0x1A4D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DA8_0x1a4da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D94u; }
        if (ctx->pc != 0x1A4D94u) { return; }
    }
    ctx->pc = 0x1A4D94u;
label_1a4d94:
    // 0x1a4d94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d98:
    // 0x1a4d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DA0u;
            // 0x1a4da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4DA8u;
}
