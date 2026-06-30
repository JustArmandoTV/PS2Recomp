#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161CF8
// Address: 0x161cf8 - 0x161d50
void sub_00161CF8_0x161cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161CF8_0x161cf8");
#endif

    switch (ctx->pc) {
        case 0x161d34u: goto label_161d34;
        default: break;
    }

    ctx->pc = 0x161cf8u;

    // 0x161cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161d00: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x161d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x161d04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x161d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x161d08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x161d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x161d0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x161d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x161d10: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x161d10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161d14: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x161d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x161d18: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x161d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x161d1c: 0x2c630009  sltiu       $v1, $v1, 0x9
    ctx->pc = 0x161d1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x161d20: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x161D20u;
    {
        const bool branch_taken_0x161d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161d20) {
            ctx->pc = 0x161D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161D20u;
            // 0x161d24: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161D40u;
            goto label_161d40;
        }
    }
    ctx->pc = 0x161D28u;
    // 0x161d28: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x161d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x161d2c: 0xc05856c  jal         func_1615B0
    ctx->pc = 0x161D2Cu;
    SET_GPR_U32(ctx, 31, 0x161D34u);
    ctx->pc = 0x161D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D2Cu;
            // 0x161d30: 0x24842808  addiu       $a0, $a0, 0x2808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D34u; }
        if (ctx->pc != 0x161D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001615B0_0x1615b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D34u; }
        if (ctx->pc != 0x161D34u) { return; }
    }
    ctx->pc = 0x161D34u;
label_161d34:
    // 0x161d34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161D34u;
    {
        const bool branch_taken_0x161d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D34u;
            // 0x161d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d34) {
            ctx->pc = 0x161D44u;
            goto label_161d44;
        }
    }
    ctx->pc = 0x161D3Cu;
    // 0x161d3c: 0x0  nop
    ctx->pc = 0x161d3cu;
    // NOP
label_161d40:
    // 0x161d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161d44:
    // 0x161d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d48: 0x3e00008  jr          $ra
    ctx->pc = 0x161D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D48u;
            // 0x161d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161D50u;
}
