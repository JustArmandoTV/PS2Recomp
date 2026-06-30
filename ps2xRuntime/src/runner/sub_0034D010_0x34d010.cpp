#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034D010
// Address: 0x34d010 - 0x34d090
void sub_0034D010_0x34d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D010_0x34d010");
#endif

    switch (ctx->pc) {
        case 0x34d060u: goto label_34d060;
        default: break;
    }

    ctx->pc = 0x34d010u;

    // 0x34d010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d014: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34d018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34d020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d024: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x34d024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34d028: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D028u;
    {
        const bool branch_taken_0x34d028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34d028) {
            ctx->pc = 0x34D040u;
            goto label_34d040;
        }
    }
    ctx->pc = 0x34D030u;
    // 0x34d030: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x34d030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x34d034: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x34d034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x34d038: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34D038u;
    {
        const bool branch_taken_0x34d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D038u;
            // 0x34d03c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d038) {
            ctx->pc = 0x34D068u;
            goto label_34d068;
        }
    }
    ctx->pc = 0x34D040u;
label_34d040:
    // 0x34d040: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34d040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34d044: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34d044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34d048: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x34d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
    // 0x34d04c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x34d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x34d050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d054: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x34d054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d058: 0xc074d18  jal         func_1D3460
    ctx->pc = 0x34D058u;
    SET_GPR_U32(ctx, 31, 0x34D060u);
    ctx->pc = 0x34D05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D058u;
            // 0x34d05c: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3460u;
    if (runtime->hasFunction(0x1D3460u)) {
        auto targetFn = runtime->lookupFunction(0x1D3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D060u; }
        if (ctx->pc != 0x34D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3460_0x1d3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D060u; }
        if (ctx->pc != 0x34D060u) { return; }
    }
    ctx->pc = 0x34D060u;
label_34d060:
    // 0x34d060: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34d064: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x34d064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_34d068:
    // 0x34d068: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x34d068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x34d06c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34d070: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x34d070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x34d074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d07c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D07Cu;
            // 0x34d080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D084u;
    // 0x34d084: 0x0  nop
    ctx->pc = 0x34d084u;
    // NOP
    // 0x34d088: 0x0  nop
    ctx->pc = 0x34d088u;
    // NOP
    // 0x34d08c: 0x0  nop
    ctx->pc = 0x34d08cu;
    // NOP
}
