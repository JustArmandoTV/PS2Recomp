#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00381FE0
// Address: 0x381fe0 - 0x382030
void sub_00381FE0_0x381fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381FE0_0x381fe0");
#endif

    switch (ctx->pc) {
        case 0x381fe0u: goto label_381fe0;
        case 0x381fe4u: goto label_381fe4;
        case 0x381fe8u: goto label_381fe8;
        case 0x381fecu: goto label_381fec;
        case 0x381ff0u: goto label_381ff0;
        case 0x381ff4u: goto label_381ff4;
        case 0x381ff8u: goto label_381ff8;
        case 0x381ffcu: goto label_381ffc;
        case 0x382000u: goto label_382000;
        case 0x382004u: goto label_382004;
        case 0x382008u: goto label_382008;
        case 0x38200cu: goto label_38200c;
        case 0x382010u: goto label_382010;
        case 0x382014u: goto label_382014;
        case 0x382018u: goto label_382018;
        case 0x38201cu: goto label_38201c;
        case 0x382020u: goto label_382020;
        case 0x382024u: goto label_382024;
        case 0x382028u: goto label_382028;
        case 0x38202cu: goto label_38202c;
        default: break;
    }

    ctx->pc = 0x381fe0u;

label_381fe0:
    // 0x381fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_381fe4:
    // 0x381fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x381fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_381fe8:
    // 0x381fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_381fec:
    // 0x381fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_381ff0:
    // 0x381ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x381ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381ff4:
    // 0x381ff4: 0xc088b74  jal         func_222DD0
label_381ff8:
    if (ctx->pc == 0x381FF8u) {
        ctx->pc = 0x381FF8u;
            // 0x381ff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381FFCu;
        goto label_381ffc;
    }
    ctx->pc = 0x381FF4u;
    SET_GPR_U32(ctx, 31, 0x381FFCu);
    ctx->pc = 0x381FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381FF4u;
            // 0x381ff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381FFCu; }
        if (ctx->pc != 0x381FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381FFCu; }
        if (ctx->pc != 0x381FFCu) { return; }
    }
    ctx->pc = 0x381FFCu;
label_381ffc:
    // 0x381ffc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x381ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_382000:
    // 0x382000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x382000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382004:
    // 0x382004: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x382004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_382008:
    // 0x382008: 0x320f809  jalr        $t9
label_38200c:
    if (ctx->pc == 0x38200Cu) {
        ctx->pc = 0x38200Cu;
            // 0x38200c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x382010u;
        goto label_382010;
    }
    ctx->pc = 0x382008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x382010u);
        ctx->pc = 0x38200Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382008u;
            // 0x38200c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x382010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x382010u; }
            if (ctx->pc != 0x382010u) { return; }
        }
        }
    }
    ctx->pc = 0x382010u;
label_382010:
    // 0x382010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x382010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_382014:
    // 0x382014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382018:
    // 0x382018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38201c:
    // 0x38201c: 0x3e00008  jr          $ra
label_382020:
    if (ctx->pc == 0x382020u) {
        ctx->pc = 0x382020u;
            // 0x382020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x382024u;
        goto label_382024;
    }
    ctx->pc = 0x38201Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38201Cu;
            // 0x382020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382024u;
label_382024:
    // 0x382024: 0x0  nop
    ctx->pc = 0x382024u;
    // NOP
label_382028:
    // 0x382028: 0x0  nop
    ctx->pc = 0x382028u;
    // NOP
label_38202c:
    // 0x38202c: 0x0  nop
    ctx->pc = 0x38202cu;
    // NOP
}
