#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FA70
// Address: 0x13fa70 - 0x13fb10
void sub_0013FA70_0x13fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FA70_0x13fa70");
#endif

    switch (ctx->pc) {
        case 0x13fa70u: goto label_13fa70;
        case 0x13fa74u: goto label_13fa74;
        case 0x13fa78u: goto label_13fa78;
        case 0x13fa7cu: goto label_13fa7c;
        case 0x13fa80u: goto label_13fa80;
        case 0x13fa84u: goto label_13fa84;
        case 0x13fa88u: goto label_13fa88;
        case 0x13fa8cu: goto label_13fa8c;
        case 0x13fa90u: goto label_13fa90;
        case 0x13fa94u: goto label_13fa94;
        case 0x13fa98u: goto label_13fa98;
        case 0x13fa9cu: goto label_13fa9c;
        case 0x13faa0u: goto label_13faa0;
        case 0x13faa4u: goto label_13faa4;
        case 0x13faa8u: goto label_13faa8;
        case 0x13faacu: goto label_13faac;
        case 0x13fab0u: goto label_13fab0;
        case 0x13fab4u: goto label_13fab4;
        case 0x13fab8u: goto label_13fab8;
        case 0x13fabcu: goto label_13fabc;
        case 0x13fac0u: goto label_13fac0;
        case 0x13fac4u: goto label_13fac4;
        case 0x13fac8u: goto label_13fac8;
        case 0x13faccu: goto label_13facc;
        case 0x13fad0u: goto label_13fad0;
        case 0x13fad4u: goto label_13fad4;
        case 0x13fad8u: goto label_13fad8;
        case 0x13fadcu: goto label_13fadc;
        case 0x13fae0u: goto label_13fae0;
        case 0x13fae4u: goto label_13fae4;
        case 0x13fae8u: goto label_13fae8;
        case 0x13faecu: goto label_13faec;
        case 0x13faf0u: goto label_13faf0;
        case 0x13faf4u: goto label_13faf4;
        case 0x13faf8u: goto label_13faf8;
        case 0x13fafcu: goto label_13fafc;
        case 0x13fb00u: goto label_13fb00;
        case 0x13fb04u: goto label_13fb04;
        case 0x13fb08u: goto label_13fb08;
        case 0x13fb0cu: goto label_13fb0c;
        default: break;
    }

    ctx->pc = 0x13fa70u;

label_13fa70:
    // 0x13fa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13fa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13fa74:
    // 0x13fa74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13fa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13fa78:
    // 0x13fa78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13fa7c:
    // 0x13fa7c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x13fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_13fa80:
    // 0x13fa80: 0x8f828034  lw          $v0, -0x7FCC($gp)
    ctx->pc = 0x13fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934580)));
label_13fa84:
    // 0x13fa84: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x13fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
label_13fa88:
    // 0x13fa88: 0x2484cc70  addiu       $a0, $a0, -0x3390
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954096));
label_13fa8c:
    // 0x13fa8c: 0x40f809  jalr        $v0
label_13fa90:
    if (ctx->pc == 0x13FA90u) {
        ctx->pc = 0x13FA90u;
            // 0x13fa90: 0x24a5ccf0  addiu       $a1, $a1, -0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
        ctx->pc = 0x13FA94u;
        goto label_13fa94;
    }
    ctx->pc = 0x13FA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FA94u);
        ctx->pc = 0x13FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA8Cu;
            // 0x13fa90: 0x24a5ccf0  addiu       $a1, $a1, -0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13FA94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FA94u; }
            if (ctx->pc != 0x13FA94u) { return; }
        }
        }
    }
    ctx->pc = 0x13FA94u;
label_13fa94:
    // 0x13fa94: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_13fa98:
    // 0x13fa98: 0xc056ce0  jal         func_15B380
label_13fa9c:
    if (ctx->pc == 0x13FA9Cu) {
        ctx->pc = 0x13FA9Cu;
            // 0x13fa9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13FAA0u;
        goto label_13faa0;
    }
    ctx->pc = 0x13FA98u;
    SET_GPR_U32(ctx, 31, 0x13FAA0u);
    ctx->pc = 0x13FA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA98u;
            // 0x13fa9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B380u;
    if (runtime->hasFunction(0x15B380u)) {
        auto targetFn = runtime->lookupFunction(0x15B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FAA0u; }
        if (ctx->pc != 0x13FAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B380_0x15b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FAA0u; }
        if (ctx->pc != 0x13FAA0u) { return; }
    }
    ctx->pc = 0x13FAA0u;
label_13faa0:
    // 0x13faa0: 0x8f868418  lw          $a2, -0x7BE8($gp)
    ctx->pc = 0x13faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_13faa4:
    // 0x13faa4: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x13faa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13faa8:
    // 0x13faa8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_13faac:
    // 0x13faac: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x13faacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
label_13fab0:
    // 0x13fab0: 0x34640404  ori         $a0, $v1, 0x404
    ctx->pc = 0x13fab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_13fab4:
    // 0x13fab4: 0x2508cc70  addiu       $t0, $t0, -0x3390
    ctx->pc = 0x13fab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954096));
label_13fab8:
    // 0x13fab8: 0xacc70014  sw          $a3, 0x14($a2)
    ctx->pc = 0x13fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
label_13fabc:
    // 0x13fabc: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x13fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
label_13fac0:
    // 0x13fac0: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x13fac0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_13fac4:
    // 0x13fac4: 0x346303f8  ori         $v1, $v1, 0x3F8
    ctx->pc = 0x13fac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1016);
label_13fac8:
    // 0x13fac8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_13facc:
    // 0x13facc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13faccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_13fad0:
    // 0x13fad0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x13fad0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_13fad4:
    // 0x13fad4: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x13fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
label_13fad8:
    // 0x13fad8: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x13fad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_13fadc:
    // 0x13fadc: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x13fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
label_13fae0:
    // 0x13fae0: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x13fae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_13fae4:
    // 0x13fae4: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x13fae4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
label_13fae8:
    // 0x13fae8: 0x79030030  lq          $v1, 0x30($t0)
    ctx->pc = 0x13fae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_13faec:
    // 0x13faec: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x13faecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_13faf0:
    // 0x13faf0: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x13faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_13faf4:
    // 0x13faf4: 0xc056d60  jal         func_15B580
label_13faf8:
    if (ctx->pc == 0x13FAF8u) {
        ctx->pc = 0x13FAF8u;
            // 0x13faf8: 0x24e50040  addiu       $a1, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->pc = 0x13FAFCu;
        goto label_13fafc;
    }
    ctx->pc = 0x13FAF4u;
    SET_GPR_U32(ctx, 31, 0x13FAFCu);
    ctx->pc = 0x13FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAF4u;
            // 0x13faf8: 0x24e50040  addiu       $a1, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FAFCu; }
        if (ctx->pc != 0x13FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B580_0x15b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FAFCu; }
        if (ctx->pc != 0x13FAFCu) { return; }
    }
    ctx->pc = 0x13FAFCu;
label_13fafc:
    // 0x13fafc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13fb00:
    // 0x13fb00: 0xac6054d8  sw          $zero, 0x54D8($v1)
    ctx->pc = 0x13fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21720), GPR_U32(ctx, 0));
label_13fb04:
    // 0x13fb04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fb08:
    // 0x13fb08: 0x3e00008  jr          $ra
label_13fb0c:
    if (ctx->pc == 0x13FB0Cu) {
        ctx->pc = 0x13FB0Cu;
            // 0x13fb0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13FB10u;
        goto label_fallthrough_0x13fb08;
    }
    ctx->pc = 0x13FB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB08u;
            // 0x13fb0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13fb08:
    ctx->pc = 0x13FB10u;
}
