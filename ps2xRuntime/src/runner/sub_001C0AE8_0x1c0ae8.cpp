#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0AE8
// Address: 0x1c0ae8 - 0x1c0b40
void sub_001C0AE8_0x1c0ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0AE8_0x1c0ae8");
#endif

    switch (ctx->pc) {
        case 0x1c0b2cu: goto label_1c0b2c;
        default: break;
    }

    ctx->pc = 0x1c0ae8u;

    // 0x1c0ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0aec: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1c0aecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0af8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0AF8u;
    {
        const bool branch_taken_0x1c0af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AF8u;
            // 0x1c0afc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0af8) {
            ctx->pc = 0x1C0B08u;
            goto label_1c0b08;
        }
    }
    ctx->pc = 0x1C0B00u;
    // 0x1c0b00: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0B00u;
    {
        const bool branch_taken_0x1c0b00 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b00) {
            ctx->pc = 0x1C0B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B00u;
            // 0x1c0b04: 0x86030034  lh          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B10u;
            goto label_1c0b10;
        }
    }
    ctx->pc = 0x1C0B08u;
label_1c0b08:
    // 0x1c0b08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0B08u;
    {
        const bool branch_taken_0x1c0b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B08u;
            // 0x1c0b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b08) {
            ctx->pc = 0x1C0B30u;
            goto label_1c0b30;
        }
    }
    ctx->pc = 0x1C0B10u;
label_1c0b10:
    // 0x1c0b10: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0B10u;
    {
        const bool branch_taken_0x1c0b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B10u;
            // 0x1c0b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b10) {
            ctx->pc = 0x1C0B30u;
            goto label_1c0b30;
        }
    }
    ctx->pc = 0x1C0B18u;
    // 0x1c0b18: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c0b1c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0B1Cu;
    {
        const bool branch_taken_0x1c0b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b1c) {
            ctx->pc = 0x1C0B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B1Cu;
            // 0x1c0b20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B34u;
            goto label_1c0b34;
        }
    }
    ctx->pc = 0x1C0B24u;
    // 0x1c0b24: 0xc07028e  jal         func_1C0A38
    ctx->pc = 0x1C0B24u;
    SET_GPR_U32(ctx, 31, 0x1C0B2Cu);
    ctx->pc = 0x1C0A38u;
    if (runtime->hasFunction(0x1C0A38u)) {
        auto targetFn = runtime->lookupFunction(0x1C0A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B2Cu; }
        if (ctx->pc != 0x1C0B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0A38_0x1c0a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B2Cu; }
        if (ctx->pc != 0x1C0B2Cu) { return; }
    }
    ctx->pc = 0x1C0B2Cu;
label_1c0b2c:
    // 0x1c0b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c0b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b30:
    // 0x1c0b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0b34:
    // 0x1c0b34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B38u;
            // 0x1c0b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0B40u;
}
