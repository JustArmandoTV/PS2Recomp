#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170ED8
// Address: 0x170ed8 - 0x170f28
void sub_00170ED8_0x170ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170ED8_0x170ed8");
#endif

    switch (ctx->pc) {
        case 0x170efcu: goto label_170efc;
        case 0x170f0cu: goto label_170f0c;
        default: break;
    }

    ctx->pc = 0x170ed8u;

    // 0x170ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170ee8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170eec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170ef0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x170ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x170ef4: 0xc05c846  jal         func_172118
    ctx->pc = 0x170EF4u;
    SET_GPR_U32(ctx, 31, 0x170EFCu);
    ctx->pc = 0x170EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170EF4u;
            // 0x170ef8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170EFCu; }
        if (ctx->pc != 0x170EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170EFCu; }
        if (ctx->pc != 0x170EFCu) { return; }
    }
    ctx->pc = 0x170EFCu;
label_170efc:
    // 0x170efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f04: 0xc05c3ca  jal         func_170F28
    ctx->pc = 0x170F04u;
    SET_GPR_U32(ctx, 31, 0x170F0Cu);
    ctx->pc = 0x170F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F04u;
            // 0x170f08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F28u;
    if (runtime->hasFunction(0x170F28u)) {
        auto targetFn = runtime->lookupFunction(0x170F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F0Cu; }
        if (ctx->pc != 0x170F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F28_0x170f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F0Cu; }
        if (ctx->pc != 0x170F0Cu) { return; }
    }
    ctx->pc = 0x170F0Cu;
label_170f0c:
    // 0x170f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170f10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170f14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170f18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x170f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170f1c: 0x805c84c  j           func_172130
    ctx->pc = 0x170F1Cu;
    ctx->pc = 0x170F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F1Cu;
            // 0x170f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170F24u;
    // 0x170f24: 0x0  nop
    ctx->pc = 0x170f24u;
    // NOP
}
