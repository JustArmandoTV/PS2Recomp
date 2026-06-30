#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5D80
// Address: 0x1c5d80 - 0x1c5df0
void sub_001C5D80_0x1c5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5D80_0x1c5d80");
#endif

    switch (ctx->pc) {
        case 0x1c5db4u: goto label_1c5db4;
        case 0x1c5dccu: goto label_1c5dcc;
        default: break;
    }

    ctx->pc = 0x1c5d80u;

    // 0x1c5d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5d84: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1c5d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c5d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c5d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5d9c: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x1c5d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x1c5da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5da4: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5DA4u;
    {
        const bool branch_taken_0x1c5da4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DA4u;
            // 0x1c5da8: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5da4) {
            ctx->pc = 0x1C5DDCu;
            goto label_1c5ddc;
        }
    }
    ctx->pc = 0x1C5DACu;
    // 0x1c5dac: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1C5DACu;
    SET_GPR_U32(ctx, 31, 0x1C5DB4u);
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DB4u; }
        if (ctx->pc != 0x1C5DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DB4u; }
        if (ctx->pc != 0x1C5DB4u) { return; }
    }
    ctx->pc = 0x1C5DB4u;
label_1c5db4:
    // 0x1c5db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5db8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1c5db8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c5dbc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1c5dbcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1c5dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dc4: 0xc071582  jal         func_1C5608
    ctx->pc = 0x1C5DC4u;
    SET_GPR_U32(ctx, 31, 0x1C5DCCu);
    ctx->pc = 0x1C5DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DC4u;
            // 0x1c5dc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5608u;
    if (runtime->hasFunction(0x1C5608u)) {
        auto targetFn = runtime->lookupFunction(0x1C5608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DCCu; }
        if (ctx->pc != 0x1C5DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5608_0x1c5608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DCCu; }
        if (ctx->pc != 0x1C5DCCu) { return; }
    }
    ctx->pc = 0x1C5DCCu;
label_1c5dcc:
    // 0x1c5dcc: 0x2403ff33  addiu       $v1, $zero, -0xCD
    ctx->pc = 0x1c5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967091));
    // 0x1c5dd0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1c5dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1c5dd4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1c5dd4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1c5dd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c5dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c5ddc:
    // 0x1c5ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DE8u;
            // 0x1c5dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5DF0u;
}
