#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EBB8
// Address: 0x19ebb8 - 0x19ec00
void sub_0019EBB8_0x19ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EBB8_0x19ebb8");
#endif

    switch (ctx->pc) {
        case 0x19ebd8u: goto label_19ebd8;
        default: break;
    }

    ctx->pc = 0x19ebb8u;

    // 0x19ebb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ebbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19ebbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19ebc0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19ebc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebc4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19ebc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ebc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebcc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x19ebccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19ebd0: 0xc06fa46  jal         func_1BE918
    ctx->pc = 0x19EBD0u;
    SET_GPR_U32(ctx, 31, 0x19EBD8u);
    ctx->pc = 0x19EBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBD0u;
            // 0x19ebd4: 0x8c8400b8  lw          $a0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (runtime->hasFunction(0x1BE918u)) {
        auto targetFn = runtime->lookupFunction(0x1BE918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBD8u; }
        if (ctx->pc != 0x19EBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE918_0x1be918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBD8u; }
        if (ctx->pc != 0x19EBD8u) { return; }
    }
    ctx->pc = 0x19EBD8u;
label_19ebd8:
    // 0x19ebd8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x19ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x19ebdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ebe0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ebe4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19ebe8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x19ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x19ebec: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x19ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x19ebf0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x19ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x19ebf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19ebf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ebf8: 0x3e00008  jr          $ra
    ctx->pc = 0x19EBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBF8u;
            // 0x19ebfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC00u;
}
