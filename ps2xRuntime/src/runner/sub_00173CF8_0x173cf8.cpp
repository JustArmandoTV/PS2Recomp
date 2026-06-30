#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173CF8
// Address: 0x173cf8 - 0x173d48
void sub_00173CF8_0x173cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173CF8_0x173cf8");
#endif

    switch (ctx->pc) {
        case 0x173d1cu: goto label_173d1c;
        case 0x173d2cu: goto label_173d2c;
        default: break;
    }

    ctx->pc = 0x173cf8u;

    // 0x173cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173d08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x173d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173d10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x173d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x173d14: 0xc0599de  jal         func_166778
    ctx->pc = 0x173D14u;
    SET_GPR_U32(ctx, 31, 0x173D1Cu);
    ctx->pc = 0x173D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D14u;
            // 0x173d18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D1Cu; }
        if (ctx->pc != 0x173D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D1Cu; }
        if (ctx->pc != 0x173D1Cu) { return; }
    }
    ctx->pc = 0x173D1Cu;
label_173d1c:
    // 0x173d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d24: 0xc05cf52  jal         func_173D48
    ctx->pc = 0x173D24u;
    SET_GPR_U32(ctx, 31, 0x173D2Cu);
    ctx->pc = 0x173D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D24u;
            // 0x173d28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D48u;
    if (runtime->hasFunction(0x173D48u)) {
        auto targetFn = runtime->lookupFunction(0x173D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D2Cu; }
        if (ctx->pc != 0x173D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173D48_0x173d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D2Cu; }
        if (ctx->pc != 0x173D2Cu) { return; }
    }
    ctx->pc = 0x173D2Cu;
label_173d2c:
    // 0x173d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173d38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x173d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173d3c: 0x80599e0  j           func_166780
    ctx->pc = 0x173D3Cu;
    ctx->pc = 0x173D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D3Cu;
            // 0x173d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173D44u;
    // 0x173d44: 0x0  nop
    ctx->pc = 0x173d44u;
    // NOP
}
