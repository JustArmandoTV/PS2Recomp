#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCCF0
// Address: 0x1bccf0 - 0x1bcd58
void sub_001BCCF0_0x1bccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCCF0_0x1bccf0");
#endif

    switch (ctx->pc) {
        case 0x1bcd08u: goto label_1bcd08;
        default: break;
    }

    ctx->pc = 0x1bccf0u;

    // 0x1bccf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bccf4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bccf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bccf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bccfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bcd00: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCD00u;
    SET_GPR_U32(ctx, 31, 0x1BCD08u);
    ctx->pc = 0x1BCD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD00u;
            // 0x1bcd04: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD08u; }
        if (ctx->pc != 0x1BCD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD08u; }
        if (ctx->pc != 0x1BCD08u) { return; }
    }
    ctx->pc = 0x1BCD08u;
label_1bcd08:
    // 0x1bcd08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bcd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd0c: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x1bcd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x1bcd10: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1BCD10u;
    {
        const bool branch_taken_0x1bcd10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD10u;
            // 0x1bcd14: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd10) {
            ctx->pc = 0x1BCD44u;
            goto label_1bcd44;
        }
    }
    ctx->pc = 0x1BCD18u;
    // 0x1bcd18: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x1bcd18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1bcd1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcd20: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x1bcd20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1bcd24: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1bcd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1bcd28: 0x90c60004  lbu         $a2, 0x4($a2)
    ctx->pc = 0x1bcd28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1bcd2c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcd30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1bcd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1bcd34: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bcd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcd38: 0x861825  or          $v1, $a0, $a2
    ctx->pc = 0x1bcd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1bcd3c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1bcd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1bcd40: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bcd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bcd44:
    // 0x1bcd44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcd48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bcd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD4Cu;
            // 0x1bcd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCD54u;
    // 0x1bcd54: 0x0  nop
    ctx->pc = 0x1bcd54u;
    // NOP
}
