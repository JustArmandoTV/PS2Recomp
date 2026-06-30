#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016BD98
// Address: 0x16bd98 - 0x16bde0
void sub_0016BD98_0x16bd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BD98_0x16bd98");
#endif

    switch (ctx->pc) {
        case 0x16bdbcu: goto label_16bdbc;
        case 0x16bdc8u: goto label_16bdc8;
        default: break;
    }

    ctx->pc = 0x16bd98u;

    // 0x16bd98: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BDA0u;
    // 0x16bda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bda8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bdb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bdb4: 0xc0599de  jal         func_166778
    ctx->pc = 0x16BDB4u;
    SET_GPR_U32(ctx, 31, 0x16BDBCu);
    ctx->pc = 0x16BDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDB4u;
            // 0x16bdb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDBCu; }
        if (ctx->pc != 0x16BDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDBCu; }
        if (ctx->pc != 0x16BDBCu) { return; }
    }
    ctx->pc = 0x16BDBCu;
label_16bdbc:
    // 0x16bdbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdc0: 0xc05af78  jal         func_16BDE0
    ctx->pc = 0x16BDC0u;
    SET_GPR_U32(ctx, 31, 0x16BDC8u);
    ctx->pc = 0x16BDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDC0u;
            // 0x16bdc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BDE0u;
    if (runtime->hasFunction(0x16BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x16BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDC8u; }
        if (ctx->pc != 0x16BDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BDE0_0x16bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDC8u; }
        if (ctx->pc != 0x16BDC8u) { return; }
    }
    ctx->pc = 0x16BDC8u;
label_16bdc8:
    // 0x16bdc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bdc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bdcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bdccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bdd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bdd4: 0x80599e0  j           func_166780
    ctx->pc = 0x16BDD4u;
    ctx->pc = 0x16BDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDD4u;
            // 0x16bdd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BDDCu;
    // 0x16bddc: 0x0  nop
    ctx->pc = 0x16bddcu;
    // NOP
}
