#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4C08
// Address: 0x1b4c08 - 0x1b4c98
void sub_001B4C08_0x1b4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C08_0x1b4c08");
#endif

    switch (ctx->pc) {
        case 0x1b4c5cu: goto label_1b4c5c;
        default: break;
    }

    ctx->pc = 0x1b4c08u;

    // 0x1b4c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4c0c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1b4c0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b4c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b4c1c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1b4c20: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b4c24: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1b4c24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1b4c28: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x1b4c28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b4c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c34: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4C34u;
    {
        const bool branch_taken_0x1b4c34 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B4C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C34u;
            // 0x1b4c38: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c34) {
            ctx->pc = 0x1B4C84u;
            goto label_1b4c84;
        }
    }
    ctx->pc = 0x1B4C3Cu;
    // 0x1b4c3c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4c40: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1b4c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1b4c44: 0x248413b8  addiu       $a0, $a0, 0x13B8
    ctx->pc = 0x1b4c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5048));
    // 0x1b4c48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4c4c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4C4Cu;
    {
        const bool branch_taken_0x1b4c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C4Cu;
            // 0x1b4c50: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c4c) {
            ctx->pc = 0x1B4C84u;
            goto label_1b4c84;
        }
    }
    ctx->pc = 0x1B4C54u;
    // 0x1b4c54: 0xc06d326  jal         func_1B4C98
    ctx->pc = 0x1B4C54u;
    SET_GPR_U32(ctx, 31, 0x1B4C5Cu);
    ctx->pc = 0x1B4C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C54u;
            // 0x1b4c58: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C98u;
    if (runtime->hasFunction(0x1B4C98u)) {
        auto targetFn = runtime->lookupFunction(0x1B4C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C5Cu; }
        if (ctx->pc != 0x1B4C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4C98_0x1b4c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C5Cu; }
        if (ctx->pc != 0x1B4C5Cu) { return; }
    }
    ctx->pc = 0x1B4C5Cu;
label_1b4c5c:
    // 0x1b4c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c60: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4c64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4c68: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4C68u;
    {
        const bool branch_taken_0x1b4c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C68u;
            // 0x1b4c6c: 0x34a50421  ori         $a1, $a1, 0x421 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1057);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c68) {
            ctx->pc = 0x1B4C80u;
            goto label_1b4c80;
        }
    }
    ctx->pc = 0x1B4C70u;
    // 0x1b4c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4c78: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B4C78u;
    ctx->pc = 0x1B4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C78u;
            // 0x1b4c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4C80u;
label_1b4c80:
    // 0x1b4c80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4c84:
    // 0x1b4c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C8Cu;
            // 0x1b4c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4C94u;
    // 0x1b4c94: 0x0  nop
    ctx->pc = 0x1b4c94u;
    // NOP
}
