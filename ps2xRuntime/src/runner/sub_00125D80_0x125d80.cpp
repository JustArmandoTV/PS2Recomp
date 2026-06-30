#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125D80
// Address: 0x125d80 - 0x125dd8
void sub_00125D80_0x125d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125D80_0x125d80");
#endif

    switch (ctx->pc) {
        case 0x125dacu: goto label_125dac;
        case 0x125db8u: goto label_125db8;
        case 0x125dc4u: goto label_125dc4;
        default: break;
    }

    ctx->pc = 0x125d80u;

    // 0x125d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x125d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x125d84: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125d84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d88: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x125d88u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d8c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x125d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x125d90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x125d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125d94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d98: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x125d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125d9c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x125d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x125da0: 0xffaf0040  sd          $t7, 0x40($sp)
    ctx->pc = 0x125da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 15));
    // 0x125da4: 0xc04955a  jal         func_125568
    ctx->pc = 0x125DA4u;
    SET_GPR_U32(ctx, 31, 0x125DACu);
    ctx->pc = 0x125DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DA4u;
            // 0x125da8: 0xffae0048  sd          $t6, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DACu; }
        if (ctx->pc != 0x125DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DACu; }
        if (ctx->pc != 0x125DACu) { return; }
    }
    ctx->pc = 0x125DACu;
label_125dac:
    // 0x125dac: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x125dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x125db0: 0xc04955a  jal         func_125568
    ctx->pc = 0x125DB0u;
    SET_GPR_U32(ctx, 31, 0x125DB8u);
    ctx->pc = 0x125DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DB0u;
            // 0x125db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DB8u; }
        if (ctx->pc != 0x125DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DB8u; }
        if (ctx->pc != 0x125DB8u) { return; }
    }
    ctx->pc = 0x125DB8u;
label_125db8:
    // 0x125db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dbc: 0xc04971c  jal         func_125C70
    ctx->pc = 0x125DBCu;
    SET_GPR_U32(ctx, 31, 0x125DC4u);
    ctx->pc = 0x125DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DBCu;
            // 0x125dc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125C70u;
    if (runtime->hasFunction(0x125C70u)) {
        auto targetFn = runtime->lookupFunction(0x125C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DC4u; }
        if (ctx->pc != 0x125DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125C70_0x125c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DC4u; }
        if (ctx->pc != 0x125DC4u) { return; }
    }
    ctx->pc = 0x125DC4u;
label_125dc4:
    // 0x125dc4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x125dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125dc8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x125dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x125DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DCCu;
            // 0x125dd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125DD4u;
    // 0x125dd4: 0x0  nop
    ctx->pc = 0x125dd4u;
    // NOP
}
