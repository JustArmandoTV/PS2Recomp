#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFDA0
// Address: 0x1bfda0 - 0x1bfde8
void sub_001BFDA0_0x1bfda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFDA0_0x1bfda0");
#endif

    switch (ctx->pc) {
        case 0x1bfdd8u: goto label_1bfdd8;
        default: break;
    }

    ctx->pc = 0x1bfda0u;

    // 0x1bfda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfda4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bfda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfda8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFDA8u;
    {
        const bool branch_taken_0x1bfda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDA8u;
            // 0x1bfdac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfda8) {
            ctx->pc = 0x1BFDB8u;
            goto label_1bfdb8;
        }
    }
    ctx->pc = 0x1BFDB0u;
    // 0x1bfdb0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFDB0u;
    {
        const bool branch_taken_0x1bfdb0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1bfdb0) {
            ctx->pc = 0x1BFDC0u;
            goto label_1bfdc0;
        }
    }
    ctx->pc = 0x1BFDB8u;
label_1bfdb8:
    // 0x1bfdb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFDB8u;
    {
        const bool branch_taken_0x1bfdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDB8u;
            // 0x1bfdbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdb8) {
            ctx->pc = 0x1BFDD8u;
            goto label_1bfdd8;
        }
    }
    ctx->pc = 0x1BFDC0u;
label_1bfdc0:
    // 0x1bfdc0: 0x80430010  lb          $v1, 0x10($v0)
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bfdc4: 0x80450011  lb          $a1, 0x11($v0)
    ctx->pc = 0x1bfdc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1bfdc8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1bfdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bfdcc: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x1bfdccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bfdd0: 0xc049824  jal         func_126090
    ctx->pc = 0x1BFDD0u;
    SET_GPR_U32(ctx, 31, 0x1BFDD8u);
    ctx->pc = 0x1BFDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDD0u;
            // 0x1bfdd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126090u;
    if (runtime->hasFunction(0x126090u)) {
        auto targetFn = runtime->lookupFunction(0x126090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD8u; }
        if (ctx->pc != 0x1BFDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126090_0x126090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD8u; }
        if (ctx->pc != 0x1BFDD8u) { return; }
    }
    ctx->pc = 0x1BFDD8u;
label_1bfdd8:
    // 0x1bfdd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bfdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDDCu;
            // 0x1bfde0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFDE4u;
    // 0x1bfde4: 0x0  nop
    ctx->pc = 0x1bfde4u;
    // NOP
}
