#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174168
// Address: 0x174168 - 0x1741d0
void sub_00174168_0x174168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174168_0x174168");
#endif

    switch (ctx->pc) {
        case 0x174178u: goto label_174178;
        case 0x1741a4u: goto label_1741a4;
        case 0x1741b0u: goto label_1741b0;
        case 0x1741b8u: goto label_1741b8;
        default: break;
    }

    ctx->pc = 0x174168u;

    // 0x174168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17416c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174170: 0xc05c0a0  jal         func_170280
    ctx->pc = 0x174170u;
    SET_GPR_U32(ctx, 31, 0x174178u);
    ctx->pc = 0x174174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174170u;
            // 0x174174: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170280u;
    if (runtime->hasFunction(0x170280u)) {
        auto targetFn = runtime->lookupFunction(0x170280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174178u; }
        if (ctx->pc != 0x174178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170280_0x170280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174178u; }
        if (ctx->pc != 0x174178u) { return; }
    }
    ctx->pc = 0x174178u;
label_174178:
    // 0x174178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17417c: 0x3e00008  jr          $ra
    ctx->pc = 0x17417Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17417Cu;
            // 0x174180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174184u;
    // 0x174184: 0x0  nop
    ctx->pc = 0x174184u;
    // NOP
    // 0x174188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17418c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17419c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17419Cu;
    SET_GPR_U32(ctx, 31, 0x1741A4u);
    ctx->pc = 0x1741A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17419Cu;
            // 0x1741a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741A4u; }
        if (ctx->pc != 0x1741A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741A4u; }
        if (ctx->pc != 0x1741A4u) { return; }
    }
    ctx->pc = 0x1741A4u;
label_1741a4:
    // 0x1741a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1741a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741a8: 0xc05d074  jal         func_1741D0
    ctx->pc = 0x1741A8u;
    SET_GPR_U32(ctx, 31, 0x1741B0u);
    ctx->pc = 0x1741ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741A8u;
            // 0x1741ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1741D0u;
    if (runtime->hasFunction(0x1741D0u)) {
        auto targetFn = runtime->lookupFunction(0x1741D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741B0u; }
        if (ctx->pc != 0x1741B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001741D0_0x1741d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741B0u; }
        if (ctx->pc != 0x1741B0u) { return; }
    }
    ctx->pc = 0x1741B0u;
label_1741b0:
    // 0x1741b0: 0xc0599e0  jal         func_166780
    ctx->pc = 0x1741B0u;
    SET_GPR_U32(ctx, 31, 0x1741B8u);
    ctx->pc = 0x1741B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741B0u;
            // 0x1741b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741B8u; }
        if (ctx->pc != 0x1741B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741B8u; }
        if (ctx->pc != 0x1741B8u) { return; }
    }
    ctx->pc = 0x1741B8u;
label_1741b8:
    // 0x1741b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1741b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1741bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1741bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1741c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1741c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1741c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1741c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1741C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1741C8u;
            // 0x1741cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1741D0u;
}
