#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8E60
// Address: 0x1a8e60 - 0x1a8ec8
void sub_001A8E60_0x1a8e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8E60_0x1a8e60");
#endif

    switch (ctx->pc) {
        case 0x1a8e84u: goto label_1a8e84;
        case 0x1a8eb0u: goto label_1a8eb0;
        default: break;
    }

    ctx->pc = 0x1a8e60u;

    // 0x1a8e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8e70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a8e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8e78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a8e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e7c: 0xc06964c  jal         func_1A5930
    ctx->pc = 0x1A8E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E84u);
    ctx->pc = 0x1A8E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E7Cu;
            // 0x1a8e80: 0x8e051ff4  lw          $a1, 0x1FF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5930u;
    if (runtime->hasFunction(0x1A5930u)) {
        auto targetFn = runtime->lookupFunction(0x1A5930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E84u; }
        if (ctx->pc != 0x1A8E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5930_0x1a5930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E84u; }
        if (ctx->pc != 0x1A8E84u) { return; }
    }
    ctx->pc = 0x1A8E84u;
label_1a8e84:
    // 0x1a8e84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8E84u;
    {
        const bool branch_taken_0x1a8e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e84) {
            ctx->pc = 0x1A8E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E84u;
            // 0x1a8e88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8E9Cu;
            goto label_1a8e9c;
        }
    }
    ctx->pc = 0x1A8E8Cu;
    // 0x1a8e8c: 0x8e033818  lw          $v1, 0x3818($s0)
    ctx->pc = 0x1a8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14360)));
    // 0x1a8e90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a8e94: 0xae033818  sw          $v1, 0x3818($s0)
    ctx->pc = 0x1a8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14360), GPR_U32(ctx, 3));
    // 0x1a8e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8e9c:
    // 0x1a8e9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8EA4u;
            // 0x1a8ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8EACu;
    // 0x1a8eac: 0x0  nop
    ctx->pc = 0x1a8eacu;
    // NOP
label_1a8eb0:
    // 0x1a8eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8EB0u;
    {
        const bool branch_taken_0x1a8eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8eb0) {
            ctx->pc = 0x1A8EC0u;
            goto label_1a8ec0;
        }
    }
    ctx->pc = 0x1A8EB8u;
    // 0x1a8eb8: 0xac863814  sw          $a2, 0x3814($a0)
    ctx->pc = 0x1a8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14356), GPR_U32(ctx, 6));
    // 0x1a8ebc: 0xac853810  sw          $a1, 0x3810($a0)
    ctx->pc = 0x1a8ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14352), GPR_U32(ctx, 5));
label_1a8ec0:
    // 0x1a8ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8EC8u;
}
