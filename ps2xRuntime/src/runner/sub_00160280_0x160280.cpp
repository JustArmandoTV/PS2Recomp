#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160280
// Address: 0x160280 - 0x1604d0
void sub_00160280_0x160280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160280_0x160280");
#endif

    switch (ctx->pc) {
        case 0x1602c8u: goto label_1602c8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602fcu: goto label_1602fc;
        case 0x16030cu: goto label_16030c;
        case 0x16032cu: goto label_16032c;
        case 0x160340u: goto label_160340;
        case 0x16034cu: goto label_16034c;
        case 0x160358u: goto label_160358;
        case 0x160360u: goto label_160360;
        case 0x160370u: goto label_160370;
        case 0x16037cu: goto label_16037c;
        case 0x160384u: goto label_160384;
        case 0x160398u: goto label_160398;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f8u: goto label_1603f8;
        case 0x160408u: goto label_160408;
        case 0x160428u: goto label_160428;
        case 0x16043cu: goto label_16043c;
        case 0x160448u: goto label_160448;
        case 0x160454u: goto label_160454;
        case 0x16045cu: goto label_16045c;
        case 0x16046cu: goto label_16046c;
        case 0x160478u: goto label_160478;
        case 0x160480u: goto label_160480;
        case 0x160494u: goto label_160494;
        case 0x1604acu: goto label_1604ac;
        default: break;
    }

    ctx->pc = 0x160280u;

label_160280:
    // 0x160280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x160280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x160284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x160284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x160288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16028c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x160298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16029c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x16029cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1602a0: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x1602A0u;
    {
        const bool branch_taken_0x1602a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1602A0u;
            // 0x1602a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602a0) {
            ctx->pc = 0x160398u;
            goto label_160398;
        }
    }
    ctx->pc = 0x1602A8u;
    // 0x1602a8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1602ac: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1602ACu;
    {
        const bool branch_taken_0x1602ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1602ac) {
            ctx->pc = 0x1602B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1602ACu;
            // 0x1602b0: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160310u;
            goto label_160310;
        }
    }
    ctx->pc = 0x1602B4u;
    // 0x1602b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1602b8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1602B8u;
    {
        const bool branch_taken_0x1602b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1602b8) {
            ctx->pc = 0x1602BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1602B8u;
            // 0x1602bc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1602CCu;
            goto label_1602cc;
        }
    }
    ctx->pc = 0x1602C0u;
    // 0x1602c0: 0xc0580a0  jal         func_160280
    ctx->pc = 0x1602C0u;
    SET_GPR_U32(ctx, 31, 0x1602C8u);
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x1602C8u;
label_1602c8:
    // 0x1602c8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1602cc:
    // 0x1602cc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1602CCu;
    {
        const bool branch_taken_0x1602cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1602cc) {
            ctx->pc = 0x1602D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1602CCu;
            // 0x1602d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1602E0u;
            goto label_1602e0;
        }
    }
    ctx->pc = 0x1602D4u;
    // 0x1602d4: 0xc0580a0  jal         func_160280
    ctx->pc = 0x1602D4u;
    SET_GPR_U32(ctx, 31, 0x1602DCu);
    ctx->pc = 0x1602D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1602D4u;
            // 0x1602d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x1602DCu;
label_1602dc:
    // 0x1602dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1602dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1602e0:
    // 0x1602e0: 0xc058144  jal         func_160510
    ctx->pc = 0x1602E0u;
    SET_GPR_U32(ctx, 31, 0x1602E8u);
    ctx->pc = 0x160510u;
    if (runtime->hasFunction(0x160510u)) {
        auto targetFn = runtime->lookupFunction(0x160510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602E8u; }
        if (ctx->pc != 0x1602E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160510_0x160510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602E8u; }
        if (ctx->pc != 0x1602E8u) { return; }
    }
    ctx->pc = 0x1602E8u;
label_1602e8:
    // 0x1602e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1602e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602ec: 0xc058140  jal         func_160500
    ctx->pc = 0x1602ECu;
    SET_GPR_U32(ctx, 31, 0x1602F4u);
    ctx->pc = 0x1602F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1602ECu;
            // 0x1602f0: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160500u;
    if (runtime->hasFunction(0x160500u)) {
        auto targetFn = runtime->lookupFunction(0x160500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602F4u; }
        if (ctx->pc != 0x1602F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160500_0x160500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602F4u; }
        if (ctx->pc != 0x1602F4u) { return; }
    }
    ctx->pc = 0x1602F4u;
label_1602f4:
    // 0x1602f4: 0xc05813c  jal         func_1604F0
    ctx->pc = 0x1602F4u;
    SET_GPR_U32(ctx, 31, 0x1602FCu);
    ctx->pc = 0x1602F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1602F4u;
            // 0x1602f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604F0u;
    if (runtime->hasFunction(0x1604F0u)) {
        auto targetFn = runtime->lookupFunction(0x1604F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602FCu; }
        if (ctx->pc != 0x1602FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604F0_0x1604f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602FCu; }
        if (ctx->pc != 0x1602FCu) { return; }
    }
    ctx->pc = 0x1602FCu;
label_1602fc:
    // 0x1602fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1602fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160300: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160304: 0xc058134  jal         func_1604D0
    ctx->pc = 0x160304u;
    SET_GPR_U32(ctx, 31, 0x16030Cu);
    ctx->pc = 0x160308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160304u;
            // 0x160308: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604D0u;
    if (runtime->hasFunction(0x1604D0u)) {
        auto targetFn = runtime->lookupFunction(0x1604D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16030Cu; }
        if (ctx->pc != 0x16030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604D0_0x1604d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16030Cu; }
        if (ctx->pc != 0x16030Cu) { return; }
    }
    ctx->pc = 0x16030Cu;
label_16030c:
    // 0x16030c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x16030cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_160310:
    // 0x160310: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x160310u;
    {
        const bool branch_taken_0x160310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160310) {
            ctx->pc = 0x160314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160310u;
            // 0x160314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160374u;
            goto label_160374;
        }
    }
    ctx->pc = 0x160318u;
    // 0x160318: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x160318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16031c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16031Cu;
    {
        const bool branch_taken_0x16031c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16031c) {
            ctx->pc = 0x160320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16031Cu;
            // 0x160320: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160330u;
            goto label_160330;
        }
    }
    ctx->pc = 0x160324u;
    // 0x160324: 0xc0580a0  jal         func_160280
    ctx->pc = 0x160324u;
    SET_GPR_U32(ctx, 31, 0x16032Cu);
    ctx->pc = 0x160328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160324u;
            // 0x160328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x16032Cu;
label_16032c:
    // 0x16032c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_160330:
    // 0x160330: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160330u;
    {
        const bool branch_taken_0x160330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160330) {
            ctx->pc = 0x160334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160330u;
            // 0x160334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160344u;
            goto label_160344;
        }
    }
    ctx->pc = 0x160338u;
    // 0x160338: 0xc0580a0  jal         func_160280
    ctx->pc = 0x160338u;
    SET_GPR_U32(ctx, 31, 0x160340u);
    ctx->pc = 0x16033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160338u;
            // 0x16033c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x160340u;
label_160340:
    // 0x160340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160344:
    // 0x160344: 0xc058144  jal         func_160510
    ctx->pc = 0x160344u;
    SET_GPR_U32(ctx, 31, 0x16034Cu);
    ctx->pc = 0x160510u;
    if (runtime->hasFunction(0x160510u)) {
        auto targetFn = runtime->lookupFunction(0x160510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16034Cu; }
        if (ctx->pc != 0x16034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160510_0x160510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16034Cu; }
        if (ctx->pc != 0x16034Cu) { return; }
    }
    ctx->pc = 0x16034Cu;
label_16034c:
    // 0x16034c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160350: 0xc058140  jal         func_160500
    ctx->pc = 0x160350u;
    SET_GPR_U32(ctx, 31, 0x160358u);
    ctx->pc = 0x160354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160350u;
            // 0x160354: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160500u;
    if (runtime->hasFunction(0x160500u)) {
        auto targetFn = runtime->lookupFunction(0x160500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160358u; }
        if (ctx->pc != 0x160358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160500_0x160500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160358u; }
        if (ctx->pc != 0x160358u) { return; }
    }
    ctx->pc = 0x160358u;
label_160358:
    // 0x160358: 0xc05813c  jal         func_1604F0
    ctx->pc = 0x160358u;
    SET_GPR_U32(ctx, 31, 0x160360u);
    ctx->pc = 0x16035Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160358u;
            // 0x16035c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604F0u;
    if (runtime->hasFunction(0x1604F0u)) {
        auto targetFn = runtime->lookupFunction(0x1604F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160360u; }
        if (ctx->pc != 0x160360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604F0_0x1604f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160360u; }
        if (ctx->pc != 0x160360u) { return; }
    }
    ctx->pc = 0x160360u;
label_160360:
    // 0x160360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160368: 0xc058134  jal         func_1604D0
    ctx->pc = 0x160368u;
    SET_GPR_U32(ctx, 31, 0x160370u);
    ctx->pc = 0x16036Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160368u;
            // 0x16036c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604D0u;
    if (runtime->hasFunction(0x1604D0u)) {
        auto targetFn = runtime->lookupFunction(0x1604D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160370u; }
        if (ctx->pc != 0x160370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604D0_0x1604d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160370u; }
        if (ctx->pc != 0x160370u) { return; }
    }
    ctx->pc = 0x160370u;
label_160370:
    // 0x160370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160374:
    // 0x160374: 0xc058144  jal         func_160510
    ctx->pc = 0x160374u;
    SET_GPR_U32(ctx, 31, 0x16037Cu);
    ctx->pc = 0x160510u;
    if (runtime->hasFunction(0x160510u)) {
        auto targetFn = runtime->lookupFunction(0x160510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16037Cu; }
        if (ctx->pc != 0x16037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160510_0x160510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16037Cu; }
        if (ctx->pc != 0x16037Cu) { return; }
    }
    ctx->pc = 0x16037Cu;
label_16037c:
    // 0x16037c: 0xc05813c  jal         func_1604F0
    ctx->pc = 0x16037Cu;
    SET_GPR_U32(ctx, 31, 0x160384u);
    ctx->pc = 0x160380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16037Cu;
            // 0x160380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604F0u;
    if (runtime->hasFunction(0x1604F0u)) {
        auto targetFn = runtime->lookupFunction(0x1604F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160384u; }
        if (ctx->pc != 0x160384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604F0_0x1604f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160384u; }
        if (ctx->pc != 0x160384u) { return; }
    }
    ctx->pc = 0x160384u;
label_160384:
    // 0x160384: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160384u;
    {
        const bool branch_taken_0x160384 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160384) {
            ctx->pc = 0x160388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160384u;
            // 0x160388: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16039Cu;
            goto label_16039c;
        }
    }
    ctx->pc = 0x16038Cu;
    // 0x16038c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160390: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160390u;
    SET_GPR_U32(ctx, 31, 0x160398u);
    ctx->pc = 0x160394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160390u;
            // 0x160394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160398u; }
        if (ctx->pc != 0x160398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160398u; }
        if (ctx->pc != 0x160398u) { return; }
    }
    ctx->pc = 0x160398u;
label_160398:
    // 0x160398: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16039c:
    // 0x16039c: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x16039Cu;
    {
        const bool branch_taken_0x16039c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16039c) {
            ctx->pc = 0x1603A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16039Cu;
            // 0x1603a0: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160498u;
            goto label_160498;
        }
    }
    ctx->pc = 0x1603A4u;
    // 0x1603a4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1603a8: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1603A8u;
    {
        const bool branch_taken_0x1603a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1603a8) {
            ctx->pc = 0x1603ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1603A8u;
            // 0x1603ac: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16040Cu;
            goto label_16040c;
        }
    }
    ctx->pc = 0x1603B0u;
    // 0x1603b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1603b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1603b4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1603B4u;
    {
        const bool branch_taken_0x1603b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1603b4) {
            ctx->pc = 0x1603B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1603B4u;
            // 0x1603b8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1603C8u;
            goto label_1603c8;
        }
    }
    ctx->pc = 0x1603BCu;
    // 0x1603bc: 0xc0580a0  jal         func_160280
    ctx->pc = 0x1603BCu;
    SET_GPR_U32(ctx, 31, 0x1603C4u);
    ctx->pc = 0x1603C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603BCu;
            // 0x1603c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x1603C4u;
label_1603c4:
    // 0x1603c4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1603c8:
    // 0x1603c8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1603C8u;
    {
        const bool branch_taken_0x1603c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1603c8) {
            ctx->pc = 0x1603CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1603C8u;
            // 0x1603cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1603DCu;
            goto label_1603dc;
        }
    }
    ctx->pc = 0x1603D0u;
    // 0x1603d0: 0xc0580a0  jal         func_160280
    ctx->pc = 0x1603D0u;
    SET_GPR_U32(ctx, 31, 0x1603D8u);
    ctx->pc = 0x1603D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603D0u;
            // 0x1603d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x1603D8u;
label_1603d8:
    // 0x1603d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1603d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1603dc:
    // 0x1603dc: 0xc058144  jal         func_160510
    ctx->pc = 0x1603DCu;
    SET_GPR_U32(ctx, 31, 0x1603E4u);
    ctx->pc = 0x160510u;
    if (runtime->hasFunction(0x160510u)) {
        auto targetFn = runtime->lookupFunction(0x160510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603E4u; }
        if (ctx->pc != 0x1603E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160510_0x160510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603E4u; }
        if (ctx->pc != 0x1603E4u) { return; }
    }
    ctx->pc = 0x1603E4u;
label_1603e4:
    // 0x1603e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1603e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603e8: 0xc058140  jal         func_160500
    ctx->pc = 0x1603E8u;
    SET_GPR_U32(ctx, 31, 0x1603F0u);
    ctx->pc = 0x1603ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603E8u;
            // 0x1603ec: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160500u;
    if (runtime->hasFunction(0x160500u)) {
        auto targetFn = runtime->lookupFunction(0x160500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603F0u; }
        if (ctx->pc != 0x1603F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160500_0x160500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603F0u; }
        if (ctx->pc != 0x1603F0u) { return; }
    }
    ctx->pc = 0x1603F0u;
label_1603f0:
    // 0x1603f0: 0xc05813c  jal         func_1604F0
    ctx->pc = 0x1603F0u;
    SET_GPR_U32(ctx, 31, 0x1603F8u);
    ctx->pc = 0x1603F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603F0u;
            // 0x1603f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604F0u;
    if (runtime->hasFunction(0x1604F0u)) {
        auto targetFn = runtime->lookupFunction(0x1604F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603F8u; }
        if (ctx->pc != 0x1603F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604F0_0x1604f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603F8u; }
        if (ctx->pc != 0x1603F8u) { return; }
    }
    ctx->pc = 0x1603F8u;
label_1603f8:
    // 0x1603f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1603f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1603fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160400: 0xc058134  jal         func_1604D0
    ctx->pc = 0x160400u;
    SET_GPR_U32(ctx, 31, 0x160408u);
    ctx->pc = 0x160404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160400u;
            // 0x160404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604D0u;
    if (runtime->hasFunction(0x1604D0u)) {
        auto targetFn = runtime->lookupFunction(0x1604D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160408u; }
        if (ctx->pc != 0x160408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604D0_0x1604d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160408u; }
        if (ctx->pc != 0x160408u) { return; }
    }
    ctx->pc = 0x160408u;
label_160408:
    // 0x160408: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_16040c:
    // 0x16040c: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x16040Cu;
    {
        const bool branch_taken_0x16040c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16040c) {
            ctx->pc = 0x160410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16040Cu;
            // 0x160410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160470u;
            goto label_160470;
        }
    }
    ctx->pc = 0x160414u;
    // 0x160414: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160418: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160418u;
    {
        const bool branch_taken_0x160418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160418) {
            ctx->pc = 0x16041Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160418u;
            // 0x16041c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16042Cu;
            goto label_16042c;
        }
    }
    ctx->pc = 0x160420u;
    // 0x160420: 0xc0580a0  jal         func_160280
    ctx->pc = 0x160420u;
    SET_GPR_U32(ctx, 31, 0x160428u);
    ctx->pc = 0x160424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160420u;
            // 0x160424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x160428u;
label_160428:
    // 0x160428: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16042c:
    // 0x16042c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16042Cu;
    {
        const bool branch_taken_0x16042c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16042c) {
            ctx->pc = 0x160430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16042Cu;
            // 0x160430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160440u;
            goto label_160440;
        }
    }
    ctx->pc = 0x160434u;
    // 0x160434: 0xc0580a0  jal         func_160280
    ctx->pc = 0x160434u;
    SET_GPR_U32(ctx, 31, 0x16043Cu);
    ctx->pc = 0x160438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160434u;
            // 0x160438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160280u;
    goto label_160280;
    ctx->pc = 0x16043Cu;
label_16043c:
    // 0x16043c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160440:
    // 0x160440: 0xc058144  jal         func_160510
    ctx->pc = 0x160440u;
    SET_GPR_U32(ctx, 31, 0x160448u);
    ctx->pc = 0x160510u;
    if (runtime->hasFunction(0x160510u)) {
        auto targetFn = runtime->lookupFunction(0x160510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160448u; }
        if (ctx->pc != 0x160448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160510_0x160510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160448u; }
        if (ctx->pc != 0x160448u) { return; }
    }
    ctx->pc = 0x160448u;
label_160448:
    // 0x160448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16044c: 0xc058140  jal         func_160500
    ctx->pc = 0x16044Cu;
    SET_GPR_U32(ctx, 31, 0x160454u);
    ctx->pc = 0x160450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16044Cu;
            // 0x160450: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160500u;
    if (runtime->hasFunction(0x160500u)) {
        auto targetFn = runtime->lookupFunction(0x160500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160454u; }
        if (ctx->pc != 0x160454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160500_0x160500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160454u; }
        if (ctx->pc != 0x160454u) { return; }
    }
    ctx->pc = 0x160454u;
label_160454:
    // 0x160454: 0xc05813c  jal         func_1604F0
    ctx->pc = 0x160454u;
    SET_GPR_U32(ctx, 31, 0x16045Cu);
    ctx->pc = 0x160458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160454u;
            // 0x160458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604F0u;
    if (runtime->hasFunction(0x1604F0u)) {
        auto targetFn = runtime->lookupFunction(0x1604F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16045Cu; }
        if (ctx->pc != 0x16045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604F0_0x1604f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16045Cu; }
        if (ctx->pc != 0x16045Cu) { return; }
    }
    ctx->pc = 0x16045Cu;
label_16045c:
    // 0x16045c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160460: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160464: 0xc058134  jal         func_1604D0
    ctx->pc = 0x160464u;
    SET_GPR_U32(ctx, 31, 0x16046Cu);
    ctx->pc = 0x160468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160464u;
            // 0x160468: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604D0u;
    if (runtime->hasFunction(0x1604D0u)) {
        auto targetFn = runtime->lookupFunction(0x1604D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16046Cu; }
        if (ctx->pc != 0x16046Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604D0_0x1604d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16046Cu; }
        if (ctx->pc != 0x16046Cu) { return; }
    }
    ctx->pc = 0x16046Cu;
label_16046c:
    // 0x16046c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160470:
    // 0x160470: 0xc058144  jal         func_160510
    ctx->pc = 0x160470u;
    SET_GPR_U32(ctx, 31, 0x160478u);
    ctx->pc = 0x160510u;
    if (runtime->hasFunction(0x160510u)) {
        auto targetFn = runtime->lookupFunction(0x160510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160478u; }
        if (ctx->pc != 0x160478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160510_0x160510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160478u; }
        if (ctx->pc != 0x160478u) { return; }
    }
    ctx->pc = 0x160478u;
label_160478:
    // 0x160478: 0xc05813c  jal         func_1604F0
    ctx->pc = 0x160478u;
    SET_GPR_U32(ctx, 31, 0x160480u);
    ctx->pc = 0x16047Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160478u;
            // 0x16047c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1604F0u;
    if (runtime->hasFunction(0x1604F0u)) {
        auto targetFn = runtime->lookupFunction(0x1604F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160480u; }
        if (ctx->pc != 0x160480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001604F0_0x1604f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160480u; }
        if (ctx->pc != 0x160480u) { return; }
    }
    ctx->pc = 0x160480u;
label_160480:
    // 0x160480: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x160480u;
    {
        const bool branch_taken_0x160480 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160480) {
            ctx->pc = 0x160494u;
            goto label_160494;
        }
    }
    ctx->pc = 0x160488u;
    // 0x160488: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x160488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16048c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x16048Cu;
    SET_GPR_U32(ctx, 31, 0x160494u);
    ctx->pc = 0x160490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16048Cu;
            // 0x160490: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160494u; }
        if (ctx->pc != 0x160494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160494u; }
        if (ctx->pc != 0x160494u) { return; }
    }
    ctx->pc = 0x160494u;
label_160494:
    // 0x160494: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x160494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_160498:
    // 0x160498: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160498u;
    {
        const bool branch_taken_0x160498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160498) {
            ctx->pc = 0x16049Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160498u;
            // 0x16049c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1604B0u;
            goto label_1604b0;
        }
    }
    ctx->pc = 0x1604A0u;
    // 0x1604a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1604a4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x1604A4u;
    SET_GPR_U32(ctx, 31, 0x1604ACu);
    ctx->pc = 0x1604A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604A4u;
            // 0x1604a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604ACu; }
        if (ctx->pc != 0x1604ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604ACu; }
        if (ctx->pc != 0x1604ACu) { return; }
    }
    ctx->pc = 0x1604ACu;
label_1604ac:
    // 0x1604ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1604acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1604b0:
    // 0x1604b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1604b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1604b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1604b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1604b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1604b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1604bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1604bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1604c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1604C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1604C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1604C0u;
            // 0x1604c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1604C8u;
    // 0x1604c8: 0x0  nop
    ctx->pc = 0x1604c8u;
    // NOP
    // 0x1604cc: 0x0  nop
    ctx->pc = 0x1604ccu;
    // NOP
}
