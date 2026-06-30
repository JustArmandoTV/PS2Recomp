#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00370FD0
// Address: 0x370fd0 - 0x371020
void sub_00370FD0_0x370fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370FD0_0x370fd0");
#endif

    switch (ctx->pc) {
        case 0x370fd0u: goto label_370fd0;
        case 0x370fd4u: goto label_370fd4;
        case 0x370fd8u: goto label_370fd8;
        case 0x370fdcu: goto label_370fdc;
        case 0x370fe0u: goto label_370fe0;
        case 0x370fe4u: goto label_370fe4;
        case 0x370fe8u: goto label_370fe8;
        case 0x370fecu: goto label_370fec;
        case 0x370ff0u: goto label_370ff0;
        case 0x370ff4u: goto label_370ff4;
        case 0x370ff8u: goto label_370ff8;
        case 0x370ffcu: goto label_370ffc;
        case 0x371000u: goto label_371000;
        case 0x371004u: goto label_371004;
        case 0x371008u: goto label_371008;
        case 0x37100cu: goto label_37100c;
        case 0x371010u: goto label_371010;
        case 0x371014u: goto label_371014;
        case 0x371018u: goto label_371018;
        case 0x37101cu: goto label_37101c;
        default: break;
    }

    ctx->pc = 0x370fd0u;

label_370fd0:
    // 0x370fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x370fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_370fd4:
    // 0x370fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x370fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_370fd8:
    // 0x370fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_370fdc:
    // 0x370fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_370fe0:
    // 0x370fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x370fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_370fe4:
    // 0x370fe4: 0xc088b74  jal         func_222DD0
label_370fe8:
    if (ctx->pc == 0x370FE8u) {
        ctx->pc = 0x370FE8u;
            // 0x370fe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370FECu;
        goto label_370fec;
    }
    ctx->pc = 0x370FE4u;
    SET_GPR_U32(ctx, 31, 0x370FECu);
    ctx->pc = 0x370FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370FE4u;
            // 0x370fe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370FECu; }
        if (ctx->pc != 0x370FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370FECu; }
        if (ctx->pc != 0x370FECu) { return; }
    }
    ctx->pc = 0x370FECu;
label_370fec:
    // 0x370fec: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x370fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_370ff0:
    // 0x370ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x370ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_370ff4:
    // 0x370ff4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x370ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_370ff8:
    // 0x370ff8: 0x320f809  jalr        $t9
label_370ffc:
    if (ctx->pc == 0x370FFCu) {
        ctx->pc = 0x370FFCu;
            // 0x370ffc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x371000u;
        goto label_371000;
    }
    ctx->pc = 0x370FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x371000u);
        ctx->pc = 0x370FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370FF8u;
            // 0x370ffc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x371000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x371000u; }
            if (ctx->pc != 0x371000u) { return; }
        }
        }
    }
    ctx->pc = 0x371000u;
label_371000:
    // 0x371000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x371000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_371004:
    // 0x371004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_371008:
    // 0x371008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37100c:
    // 0x37100c: 0x3e00008  jr          $ra
label_371010:
    if (ctx->pc == 0x371010u) {
        ctx->pc = 0x371010u;
            // 0x371010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x371014u;
        goto label_371014;
    }
    ctx->pc = 0x37100Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37100Cu;
            // 0x371010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371014u;
label_371014:
    // 0x371014: 0x0  nop
    ctx->pc = 0x371014u;
    // NOP
label_371018:
    // 0x371018: 0x0  nop
    ctx->pc = 0x371018u;
    // NOP
label_37101c:
    // 0x37101c: 0x0  nop
    ctx->pc = 0x37101cu;
    // NOP
}
