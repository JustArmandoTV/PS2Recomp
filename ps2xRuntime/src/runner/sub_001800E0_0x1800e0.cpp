#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001800E0
// Address: 0x1800e0 - 0x180128
void sub_001800E0_0x1800e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001800E0_0x1800e0");
#endif

    switch (ctx->pc) {
        case 0x1800fcu: goto label_1800fc;
        case 0x180108u: goto label_180108;
        case 0x180110u: goto label_180110;
        default: break;
    }

    ctx->pc = 0x1800e0u;

    // 0x1800e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1800e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1800e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1800e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1800e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1800e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1800ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1800f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1800f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1800f4: 0xc06031a  jal         func_180C68
    ctx->pc = 0x1800F4u;
    SET_GPR_U32(ctx, 31, 0x1800FCu);
    ctx->pc = 0x1800F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800F4u;
            // 0x1800f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800FCu; }
        if (ctx->pc != 0x1800FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800FCu; }
        if (ctx->pc != 0x1800FCu) { return; }
    }
    ctx->pc = 0x1800FCu;
label_1800fc:
    // 0x1800fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1800fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180100: 0xc06004a  jal         func_180128
    ctx->pc = 0x180100u;
    SET_GPR_U32(ctx, 31, 0x180108u);
    ctx->pc = 0x180104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180100u;
            // 0x180104: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180128u;
    if (runtime->hasFunction(0x180128u)) {
        auto targetFn = runtime->lookupFunction(0x180128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180108u; }
        if (ctx->pc != 0x180108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180128_0x180128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180108u; }
        if (ctx->pc != 0x180108u) { return; }
    }
    ctx->pc = 0x180108u;
label_180108:
    // 0x180108: 0xc06031c  jal         func_180C70
    ctx->pc = 0x180108u;
    SET_GPR_U32(ctx, 31, 0x180110u);
    ctx->pc = 0x18010Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180108u;
            // 0x18010c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180110u; }
        if (ctx->pc != 0x180110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180110u; }
        if (ctx->pc != 0x180110u) { return; }
    }
    ctx->pc = 0x180110u;
label_180110:
    // 0x180110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18011c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18011cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180120: 0x3e00008  jr          $ra
    ctx->pc = 0x180120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180120u;
            // 0x180124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180128u;
}
