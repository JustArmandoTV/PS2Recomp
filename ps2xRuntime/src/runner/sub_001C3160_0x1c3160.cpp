#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3160
// Address: 0x1c3160 - 0x1c3430
void sub_001C3160_0x1c3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3160_0x1c3160");
#endif

    switch (ctx->pc) {
        case 0x1c3180u: goto label_1c3180;
        case 0x1c3190u: goto label_1c3190;
        case 0x1c31ecu: goto label_1c31ec;
        case 0x1c325cu: goto label_1c325c;
        case 0x1c32d0u: goto label_1c32d0;
        case 0x1c32fcu: goto label_1c32fc;
        case 0x1c3320u: goto label_1c3320;
        case 0x1c3394u: goto label_1c3394;
        case 0x1c33d8u: goto label_1c33d8;
        default: break;
    }

    ctx->pc = 0x1c3160u;

    // 0x1c3160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c316c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3170: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3170u;
    {
        const bool branch_taken_0x1c3170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3170u;
            // 0x1c3174: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3170) {
            ctx->pc = 0x1C3180u;
            goto label_1c3180;
        }
    }
    ctx->pc = 0x1C3178u;
    // 0x1c3178: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C3178u;
    SET_GPR_U32(ctx, 31, 0x1C3180u);
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3180u; }
        if (ctx->pc != 0x1C3180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3180u; }
        if (ctx->pc != 0x1C3180u) { return; }
    }
    ctx->pc = 0x1C3180u;
label_1c3180:
    // 0x1c3180: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3180u;
    {
        const bool branch_taken_0x1c3180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3180) {
            ctx->pc = 0x1C3184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3180u;
            // 0x1c3184: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3194u;
            goto label_1c3194;
        }
    }
    ctx->pc = 0x1C3188u;
    // 0x1c3188: 0xc070322  jal         func_1C0C88
    ctx->pc = 0x1C3188u;
    SET_GPR_U32(ctx, 31, 0x1C3190u);
    ctx->pc = 0x1C318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3188u;
            // 0x1c318c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C88u;
    if (runtime->hasFunction(0x1C0C88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3190u; }
        if (ctx->pc != 0x1C3190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0C88_0x1c0c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3190u; }
        if (ctx->pc != 0x1C3190u) { return; }
    }
    ctx->pc = 0x1C3190u;
label_1c3190:
    // 0x1c3190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3194:
    // 0x1c3194: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3198: 0x807172a  j           func_1C5CA8
    ctx->pc = 0x1C3198u;
    ctx->pc = 0x1C319Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3198u;
            // 0x1c319c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA8u;
    if (runtime->hasFunction(0x1C5CA8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C5CA8_0x1c5ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C31A0u;
    // 0x1c31a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31ac: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C31ACu;
    {
        const bool branch_taken_0x1c31ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31ACu;
            // 0x1c31b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31ac) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C31B4u;
    // 0x1c31b4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c31b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c31b8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c31b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c31bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31c0: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c31c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c31c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31c8: 0x24c6bc48  addiu       $a2, $a2, -0x43B8
    ctx->pc = 0x1c31c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949960));
    // 0x1c31cc: 0x24050485  addiu       $a1, $zero, 0x485
    ctx->pc = 0x1c31ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1157));
    // 0x1c31d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c31d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31d4: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c31d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c31d8: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C31D8u;
    ctx->pc = 0x1C31DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31D8u;
            // 0x1c31dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C31E0u;
label_1c31e0:
    // 0x1c31e0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1c31e4: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C31E4u;
    SET_GPR_U32(ctx, 31, 0x1C31ECu);
    ctx->pc = 0x1C31E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31E4u;
            // 0x1c31e8: 0x24a5bb80  addiu       $a1, $a1, -0x4480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31ECu; }
        if (ctx->pc != 0x1C31ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31ECu; }
        if (ctx->pc != 0x1C31ECu) { return; }
    }
    ctx->pc = 0x1C31ECu;
label_1c31ec:
    // 0x1c31ec: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c31ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c31f0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c31f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c31f4: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c31f8: 0x24c6bc48  addiu       $a2, $a2, -0x43B8
    ctx->pc = 0x1c31f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949960));
    // 0x1c31fc: 0x2405048a  addiu       $a1, $zero, 0x48A
    ctx->pc = 0x1c31fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1162));
    // 0x1c3200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3204: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3204u;
    {
        const bool branch_taken_0x1c3204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3204u;
            // 0x1c3208: 0x2408ff99  addiu       $t0, $zero, -0x67 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3204) {
            ctx->pc = 0x1C3220u;
            goto label_1c3220;
        }
    }
    ctx->pc = 0x1C320Cu;
    // 0x1c320c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c320cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3214: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C3214u;
    ctx->pc = 0x1C3218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3214u;
            // 0x1c3218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C321Cu;
    // 0x1c321c: 0x0  nop
    ctx->pc = 0x1c321cu;
    // NOP
label_1c3220:
    // 0x1c3220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3228: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c322c: 0x8070c8e  j           func_1C3238
    ctx->pc = 0x1C322Cu;
    ctx->pc = 0x1C3230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C322Cu;
            // 0x1c3230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3238u;
    goto label_1c3238;
    ctx->pc = 0x1C3234u;
    // 0x1c3234: 0x0  nop
    ctx->pc = 0x1c3234u;
    // NOP
label_1c3238:
    // 0x1c3238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c323c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c324c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c3250: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c3254: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C3254u;
    SET_GPR_U32(ctx, 31, 0x1C325Cu);
    ctx->pc = 0x1C3258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3254u;
            // 0x1c3258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C325Cu; }
        if (ctx->pc != 0x1C325Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C325Cu; }
        if (ctx->pc != 0x1C325Cu) { return; }
    }
    ctx->pc = 0x1C325Cu;
label_1c325c:
    // 0x1c325c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c325cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3260: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3260u;
    {
        const bool branch_taken_0x1c3260 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3260) {
            ctx->pc = 0x1C3264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3260u;
            // 0x1c3264: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C32A8u;
            goto label_1c32a8;
        }
    }
    ctx->pc = 0x1C3268u;
    // 0x1c3268: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c326c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c326cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3274: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c327c: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c327cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c3280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3284: 0x2405049b  addiu       $a1, $zero, 0x49B
    ctx->pc = 0x1c3284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1179));
    // 0x1c3288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c328c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c328cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3290: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3294: 0x2408ff97  addiu       $t0, $zero, -0x69
    ctx->pc = 0x1c3294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1c3298: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c329c: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C329Cu;
    ctx->pc = 0x1C32A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C329Cu;
            // 0x1c32a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C32A4u;
    // 0x1c32a4: 0x0  nop
    ctx->pc = 0x1c32a4u;
    // NOP
label_1c32a8:
    // 0x1c32a8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C32A8u;
    {
        const bool branch_taken_0x1c32a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32A8u;
            // 0x1c32ac: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32a8) {
            ctx->pc = 0x1C3318u;
            goto label_1c3318;
        }
    }
    ctx->pc = 0x1C32B0u;
    // 0x1c32b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c32b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32b4: 0x8e62a4d8  lw          $v0, -0x5B28($s3)
    ctx->pc = 0x1c32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943960)));
    // 0x1c32b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c32bc: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C32BCu;
    {
        const bool branch_taken_0x1c32bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C32C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32BCu;
            // 0x1c32c0: 0x2450108c  addiu       $s0, $v0, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32bc) {
            ctx->pc = 0x1C3318u;
            goto label_1c3318;
        }
    }
    ctx->pc = 0x1C32C4u;
    // 0x1c32c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c32c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32c8: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c32c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c32cc: 0x0  nop
    ctx->pc = 0x1c32ccu;
    // NOP
label_1c32d0:
    // 0x1c32d0: 0x1454000c  bne         $v0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x1C32D0u;
    {
        const bool branch_taken_0x1c32d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C32D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32D0u;
            // 0x1c32d4: 0x8e63a4d8  lw          $v1, -0x5B28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32d0) {
            ctx->pc = 0x1C3304u;
            goto label_1c3304;
        }
    }
    ctx->pc = 0x1C32D8u;
    // 0x1c32d8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c32d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c32dc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C32DCu;
    {
        const bool branch_taken_0x1c32dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32dc) {
            ctx->pc = 0x1C32E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32DCu;
            // 0x1c32e0: 0x8e63a4d8  lw          $v1, -0x5B28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943960)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3304u;
            goto label_1c3304;
        }
    }
    ctx->pc = 0x1C32E4u;
    // 0x1c32e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c32e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c32ec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C32ECu;
    {
        const bool branch_taken_0x1c32ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c32ec) {
            ctx->pc = 0x1C32F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32ECu;
            // 0x1c32f0: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3300u;
            goto label_1c3300;
        }
    }
    ctx->pc = 0x1C32F4u;
    // 0x1c32f4: 0xc070322  jal         func_1C0C88
    ctx->pc = 0x1C32F4u;
    SET_GPR_U32(ctx, 31, 0x1C32FCu);
    ctx->pc = 0x1C32F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32F4u;
            // 0x1c32f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C88u;
    if (runtime->hasFunction(0x1C0C88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32FCu; }
        if (ctx->pc != 0x1C32FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0C88_0x1c0c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32FCu; }
        if (ctx->pc != 0x1C32FCu) { return; }
    }
    ctx->pc = 0x1C32FCu;
label_1c32fc:
    // 0x1c32fc: 0x2610003c  addiu       $s0, $s0, 0x3C
    ctx->pc = 0x1c32fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_1c3300:
    // 0x1c3300: 0x8e63a4d8  lw          $v1, -0x5B28($s3)
    ctx->pc = 0x1c3300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943960)));
label_1c3304:
    // 0x1c3304: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c3304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c3308: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c3308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c330c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1c330cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3310: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C3310u;
    {
        const bool branch_taken_0x1c3310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3310) {
            ctx->pc = 0x1C3314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3310u;
            // 0x1c3314: 0x86020034  lh          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C32D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c32d0;
        }
    }
    ctx->pc = 0x1C3318u;
label_1c3318:
    // 0x1c3318: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C3318u;
    SET_GPR_U32(ctx, 31, 0x1C3320u);
    ctx->pc = 0x1C331Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3318u;
            // 0x1c331c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3320u; }
        if (ctx->pc != 0x1C3320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3320u; }
        if (ctx->pc != 0x1C3320u) { return; }
    }
    ctx->pc = 0x1C3320u;
label_1c3320:
    // 0x1c3320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c332c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c332cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3330: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3334: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3338: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c333c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C333Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C333Cu;
            // 0x1c3340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3344u;
    // 0x1c3344: 0x0  nop
    ctx->pc = 0x1c3344u;
    // NOP
    // 0x1c3348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c334c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3354: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3354u;
    {
        const bool branch_taken_0x1c3354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3354u;
            // 0x1c3358: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3354) {
            ctx->pc = 0x1C3388u;
            goto label_1c3388;
        }
    }
    ctx->pc = 0x1C335Cu;
    // 0x1c335c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c335cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3360: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3368: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c336c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c336cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3370: 0x24c6bc68  addiu       $a2, $a2, -0x4398
    ctx->pc = 0x1c3370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949992));
    // 0x1c3374: 0x240504bb  addiu       $a1, $zero, 0x4BB
    ctx->pc = 0x1c3374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1211));
    // 0x1c3378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c337c: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c337cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c3380: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C3380u;
    ctx->pc = 0x1C3384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3380u;
            // 0x1c3384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C3388u;
label_1c3388:
    // 0x1c3388: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c3388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1c338c: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C338Cu;
    SET_GPR_U32(ctx, 31, 0x1C3394u);
    ctx->pc = 0x1C3390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C338Cu;
            // 0x1c3390: 0x24a5bb80  addiu       $a1, $a1, -0x4480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3394u; }
        if (ctx->pc != 0x1C3394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3394u; }
        if (ctx->pc != 0x1C3394u) { return; }
    }
    ctx->pc = 0x1C3394u;
label_1c3394:
    // 0x1c3394: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c339c: 0x24c6bc68  addiu       $a2, $a2, -0x4398
    ctx->pc = 0x1c339cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949992));
    // 0x1c33a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c33a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c33a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C33A8u;
    {
        const bool branch_taken_0x1c33a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C33ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33A8u;
            // 0x1c33ac: 0x2408ff99  addiu       $t0, $zero, -0x67 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33a8) {
            ctx->pc = 0x1C33D0u;
            goto label_1c33d0;
        }
    }
    ctx->pc = 0x1C33B0u;
    // 0x1c33b0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c33b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c33b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c33b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c33b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c33b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c33bc: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c33bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c33c0: 0x240504c0  addiu       $a1, $zero, 0x4C0
    ctx->pc = 0x1c33c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x1c33c4: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C33C4u;
    ctx->pc = 0x1C33C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33C4u;
            // 0x1c33c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C33CCu;
    // 0x1c33cc: 0x0  nop
    ctx->pc = 0x1c33ccu;
    // NOP
label_1c33d0:
    // 0x1c33d0: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C33D0u;
    SET_GPR_U32(ctx, 31, 0x1C33D8u);
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33D8u; }
        if (ctx->pc != 0x1C33D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33D8u; }
        if (ctx->pc != 0x1C33D8u) { return; }
    }
    ctx->pc = 0x1C33D8u;
label_1c33d8:
    // 0x1c33d8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c33d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c33dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c33dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c33e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33e4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c33e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c33e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c33e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33ec: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c33f0: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c33f4: 0x2408ff99  addiu       $t0, $zero, -0x67
    ctx->pc = 0x1c33f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x1c33f8: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C33F8u;
    {
        const bool branch_taken_0x1c33f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C33FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33F8u;
            // 0x1c33fc: 0x240504c6  addiu       $a1, $zero, 0x4C6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33f8) {
            ctx->pc = 0x1C3410u;
            goto label_1c3410;
        }
    }
    ctx->pc = 0x1C3400u;
    // 0x1c3400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3404: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3408: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C3408u;
    ctx->pc = 0x1C340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3408u;
            // 0x1c340c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C3410u;
label_1c3410:
    // 0x1c3410: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c3410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c3414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3418: 0x8c64a4d8  lw          $a0, -0x5B28($v1)
    ctx->pc = 0x1c3418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943960)));
    // 0x1c341c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3420: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x1c3420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x1c3424: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3424u;
            // 0x1c3428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C342Cu;
    // 0x1c342c: 0x0  nop
    ctx->pc = 0x1c342cu;
    // NOP
}
