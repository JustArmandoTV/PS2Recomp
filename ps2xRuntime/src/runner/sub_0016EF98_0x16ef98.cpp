#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EF98
// Address: 0x16ef98 - 0x16efd8
void sub_0016EF98_0x16ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EF98_0x16ef98");
#endif

    switch (ctx->pc) {
        case 0x16efbcu: goto label_16efbc;
        default: break;
    }

    ctx->pc = 0x16ef98u;

    // 0x16ef98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ef9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16efa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16efa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16efa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16efa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16efa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16efac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16efacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16efb0: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x16efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x16efb4: 0xc058ba6  jal         func_162E98
    ctx->pc = 0x16EFB4u;
    SET_GPR_U32(ctx, 31, 0x16EFBCu);
    ctx->pc = 0x16EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EFB4u;
            // 0x16efb8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162E98u;
    if (runtime->hasFunction(0x162E98u)) {
        auto targetFn = runtime->lookupFunction(0x162E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFBCu; }
        if (ctx->pc != 0x16EFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162E98_0x162e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFBCu; }
        if (ctx->pc != 0x16EFBCu) { return; }
    }
    ctx->pc = 0x16EFBCu;
label_16efbc:
    // 0x16efbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16efc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16efc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16efc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16efc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16efc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16efc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16efcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16efccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16efd0: 0x8058b2c  j           func_162CB0
    ctx->pc = 0x16EFD0u;
    ctx->pc = 0x16EFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EFD0u;
            // 0x16efd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162CB0u;
    {
        auto targetFn = runtime->lookupFunction(0x162CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EFD8u;
}
