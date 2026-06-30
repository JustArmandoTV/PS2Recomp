#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051A9D0
// Address: 0x51a9d0 - 0x51ab90
void sub_0051A9D0_0x51a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051A9D0_0x51a9d0");
#endif

    switch (ctx->pc) {
        case 0x51a9d0u: goto label_51a9d0;
        case 0x51a9d4u: goto label_51a9d4;
        case 0x51a9d8u: goto label_51a9d8;
        case 0x51a9dcu: goto label_51a9dc;
        case 0x51a9e0u: goto label_51a9e0;
        case 0x51a9e4u: goto label_51a9e4;
        case 0x51a9e8u: goto label_51a9e8;
        case 0x51a9ecu: goto label_51a9ec;
        case 0x51a9f0u: goto label_51a9f0;
        case 0x51a9f4u: goto label_51a9f4;
        case 0x51a9f8u: goto label_51a9f8;
        case 0x51a9fcu: goto label_51a9fc;
        case 0x51aa00u: goto label_51aa00;
        case 0x51aa04u: goto label_51aa04;
        case 0x51aa08u: goto label_51aa08;
        case 0x51aa0cu: goto label_51aa0c;
        case 0x51aa10u: goto label_51aa10;
        case 0x51aa14u: goto label_51aa14;
        case 0x51aa18u: goto label_51aa18;
        case 0x51aa1cu: goto label_51aa1c;
        case 0x51aa20u: goto label_51aa20;
        case 0x51aa24u: goto label_51aa24;
        case 0x51aa28u: goto label_51aa28;
        case 0x51aa2cu: goto label_51aa2c;
        case 0x51aa30u: goto label_51aa30;
        case 0x51aa34u: goto label_51aa34;
        case 0x51aa38u: goto label_51aa38;
        case 0x51aa3cu: goto label_51aa3c;
        case 0x51aa40u: goto label_51aa40;
        case 0x51aa44u: goto label_51aa44;
        case 0x51aa48u: goto label_51aa48;
        case 0x51aa4cu: goto label_51aa4c;
        case 0x51aa50u: goto label_51aa50;
        case 0x51aa54u: goto label_51aa54;
        case 0x51aa58u: goto label_51aa58;
        case 0x51aa5cu: goto label_51aa5c;
        case 0x51aa60u: goto label_51aa60;
        case 0x51aa64u: goto label_51aa64;
        case 0x51aa68u: goto label_51aa68;
        case 0x51aa6cu: goto label_51aa6c;
        case 0x51aa70u: goto label_51aa70;
        case 0x51aa74u: goto label_51aa74;
        case 0x51aa78u: goto label_51aa78;
        case 0x51aa7cu: goto label_51aa7c;
        case 0x51aa80u: goto label_51aa80;
        case 0x51aa84u: goto label_51aa84;
        case 0x51aa88u: goto label_51aa88;
        case 0x51aa8cu: goto label_51aa8c;
        case 0x51aa90u: goto label_51aa90;
        case 0x51aa94u: goto label_51aa94;
        case 0x51aa98u: goto label_51aa98;
        case 0x51aa9cu: goto label_51aa9c;
        case 0x51aaa0u: goto label_51aaa0;
        case 0x51aaa4u: goto label_51aaa4;
        case 0x51aaa8u: goto label_51aaa8;
        case 0x51aaacu: goto label_51aaac;
        case 0x51aab0u: goto label_51aab0;
        case 0x51aab4u: goto label_51aab4;
        case 0x51aab8u: goto label_51aab8;
        case 0x51aabcu: goto label_51aabc;
        case 0x51aac0u: goto label_51aac0;
        case 0x51aac4u: goto label_51aac4;
        case 0x51aac8u: goto label_51aac8;
        case 0x51aaccu: goto label_51aacc;
        case 0x51aad0u: goto label_51aad0;
        case 0x51aad4u: goto label_51aad4;
        case 0x51aad8u: goto label_51aad8;
        case 0x51aadcu: goto label_51aadc;
        case 0x51aae0u: goto label_51aae0;
        case 0x51aae4u: goto label_51aae4;
        case 0x51aae8u: goto label_51aae8;
        case 0x51aaecu: goto label_51aaec;
        case 0x51aaf0u: goto label_51aaf0;
        case 0x51aaf4u: goto label_51aaf4;
        case 0x51aaf8u: goto label_51aaf8;
        case 0x51aafcu: goto label_51aafc;
        case 0x51ab00u: goto label_51ab00;
        case 0x51ab04u: goto label_51ab04;
        case 0x51ab08u: goto label_51ab08;
        case 0x51ab0cu: goto label_51ab0c;
        case 0x51ab10u: goto label_51ab10;
        case 0x51ab14u: goto label_51ab14;
        case 0x51ab18u: goto label_51ab18;
        case 0x51ab1cu: goto label_51ab1c;
        case 0x51ab20u: goto label_51ab20;
        case 0x51ab24u: goto label_51ab24;
        case 0x51ab28u: goto label_51ab28;
        case 0x51ab2cu: goto label_51ab2c;
        case 0x51ab30u: goto label_51ab30;
        case 0x51ab34u: goto label_51ab34;
        case 0x51ab38u: goto label_51ab38;
        case 0x51ab3cu: goto label_51ab3c;
        case 0x51ab40u: goto label_51ab40;
        case 0x51ab44u: goto label_51ab44;
        case 0x51ab48u: goto label_51ab48;
        case 0x51ab4cu: goto label_51ab4c;
        case 0x51ab50u: goto label_51ab50;
        case 0x51ab54u: goto label_51ab54;
        case 0x51ab58u: goto label_51ab58;
        case 0x51ab5cu: goto label_51ab5c;
        case 0x51ab60u: goto label_51ab60;
        case 0x51ab64u: goto label_51ab64;
        case 0x51ab68u: goto label_51ab68;
        case 0x51ab6cu: goto label_51ab6c;
        case 0x51ab70u: goto label_51ab70;
        case 0x51ab74u: goto label_51ab74;
        case 0x51ab78u: goto label_51ab78;
        case 0x51ab7cu: goto label_51ab7c;
        case 0x51ab80u: goto label_51ab80;
        case 0x51ab84u: goto label_51ab84;
        case 0x51ab88u: goto label_51ab88;
        case 0x51ab8cu: goto label_51ab8c;
        default: break;
    }

    ctx->pc = 0x51a9d0u;

label_51a9d0:
    // 0x51a9d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x51a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_51a9d4:
    // 0x51a9d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51a9d8:
    // 0x51a9d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x51a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_51a9dc:
    // 0x51a9dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51a9e0:
    // 0x51a9e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51a9e4:
    // 0x51a9e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51a9e8:
    // 0x51a9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51a9ec:
    // 0x51a9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51a9f0:
    // 0x51a9f0: 0x8c528a08  lw          $s2, -0x75F8($v0)
    ctx->pc = 0x51a9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51a9f4:
    // 0x51a9f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51a9f8:
    // 0x51a9f8: 0xc0b369c  jal         func_2CDA70
label_51a9fc:
    if (ctx->pc == 0x51A9FCu) {
        ctx->pc = 0x51A9FCu;
            // 0x51a9fc: 0x8c5089e8  lw          $s0, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->pc = 0x51AA00u;
        goto label_51aa00;
    }
    ctx->pc = 0x51A9F8u;
    SET_GPR_U32(ctx, 31, 0x51AA00u);
    ctx->pc = 0x51A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A9F8u;
            // 0x51a9fc: 0x8c5089e8  lw          $s0, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA70u;
    if (runtime->hasFunction(0x2CDA70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA00u; }
        if (ctx->pc != 0x51AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDA70_0x2cda70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA00u; }
        if (ctx->pc != 0x51AA00u) { return; }
    }
    ctx->pc = 0x51AA00u;
label_51aa00:
    // 0x51aa00: 0xc0c8f7c  jal         func_323DF0
label_51aa04:
    if (ctx->pc == 0x51AA04u) {
        ctx->pc = 0x51AA04u;
            // 0x51aa04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AA08u;
        goto label_51aa08;
    }
    ctx->pc = 0x51AA00u;
    SET_GPR_U32(ctx, 31, 0x51AA08u);
    ctx->pc = 0x51AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA00u;
            // 0x51aa04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA08u; }
        if (ctx->pc != 0x51AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA08u; }
        if (ctx->pc != 0x51AA08u) { return; }
    }
    ctx->pc = 0x51AA08u;
label_51aa08:
    // 0x51aa08: 0xc0fd04c  jal         func_3F4130
label_51aa0c:
    if (ctx->pc == 0x51AA0Cu) {
        ctx->pc = 0x51AA0Cu;
            // 0x51aa0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AA10u;
        goto label_51aa10;
    }
    ctx->pc = 0x51AA08u;
    SET_GPR_U32(ctx, 31, 0x51AA10u);
    ctx->pc = 0x51AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA08u;
            // 0x51aa0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4130u;
    if (runtime->hasFunction(0x3F4130u)) {
        auto targetFn = runtime->lookupFunction(0x3F4130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA10u; }
        if (ctx->pc != 0x51AA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4130_0x3f4130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA10u; }
        if (ctx->pc != 0x51AA10u) { return; }
    }
    ctx->pc = 0x51AA10u;
label_51aa10:
    // 0x51aa10: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x51aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_51aa14:
    // 0x51aa14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51aa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51aa18:
    // 0x51aa18: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x51aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_51aa1c:
    // 0x51aa1c: 0xc04a576  jal         func_1295D8
label_51aa20:
    if (ctx->pc == 0x51AA20u) {
        ctx->pc = 0x51AA20u;
            // 0x51aa20: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x51AA24u;
        goto label_51aa24;
    }
    ctx->pc = 0x51AA1Cu;
    SET_GPR_U32(ctx, 31, 0x51AA24u);
    ctx->pc = 0x51AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA1Cu;
            // 0x51aa20: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA24u; }
        if (ctx->pc != 0x51AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA24u; }
        if (ctx->pc != 0x51AA24u) { return; }
    }
    ctx->pc = 0x51AA24u;
label_51aa24:
    // 0x51aa24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x51aa24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51aa28:
    // 0x51aa28: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x51aa28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_51aa2c:
    // 0x51aa2c: 0x320f809  jalr        $t9
label_51aa30:
    if (ctx->pc == 0x51AA30u) {
        ctx->pc = 0x51AA30u;
            // 0x51aa30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AA34u;
        goto label_51aa34;
    }
    ctx->pc = 0x51AA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51AA34u);
        ctx->pc = 0x51AA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA2Cu;
            // 0x51aa30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51AA34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51AA34u; }
            if (ctx->pc != 0x51AA34u) { return; }
        }
        }
    }
    ctx->pc = 0x51AA34u;
label_51aa34:
    // 0x51aa34: 0xc072864  jal         func_1CA190
label_51aa38:
    if (ctx->pc == 0x51AA38u) {
        ctx->pc = 0x51AA3Cu;
        goto label_51aa3c;
    }
    ctx->pc = 0x51AA34u;
    SET_GPR_U32(ctx, 31, 0x51AA3Cu);
    ctx->pc = 0x1CA190u;
    if (runtime->hasFunction(0x1CA190u)) {
        auto targetFn = runtime->lookupFunction(0x1CA190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA3Cu; }
        if (ctx->pc != 0x51AA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA190_0x1ca190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA3Cu; }
        if (ctx->pc != 0x51AA3Cu) { return; }
    }
    ctx->pc = 0x51AA3Cu;
label_51aa3c:
    // 0x51aa3c: 0xc072dee  jal         func_1CB7B8
label_51aa40:
    if (ctx->pc == 0x51AA40u) {
        ctx->pc = 0x51AA44u;
        goto label_51aa44;
    }
    ctx->pc = 0x51AA3Cu;
    SET_GPR_U32(ctx, 31, 0x51AA44u);
    ctx->pc = 0x1CB7B8u;
    if (runtime->hasFunction(0x1CB7B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CB7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA44u; }
        if (ctx->pc != 0x51AA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB7B8_0x1cb7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA44u; }
        if (ctx->pc != 0x51AA44u) { return; }
    }
    ctx->pc = 0x51AA44u;
label_51aa44:
    // 0x51aa44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x51aa44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51aa48:
    // 0x51aa48: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x51aa48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51aa4c:
    // 0x51aa4c: 0xc05cc84  jal         func_173210
label_51aa50:
    if (ctx->pc == 0x51AA50u) {
        ctx->pc = 0x51AA50u;
            // 0x51aa50: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x51AA54u;
        goto label_51aa54;
    }
    ctx->pc = 0x51AA4Cu;
    SET_GPR_U32(ctx, 31, 0x51AA54u);
    ctx->pc = 0x51AA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA4Cu;
            // 0x51aa50: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA54u; }
        if (ctx->pc != 0x51AA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA54u; }
        if (ctx->pc != 0x51AA54u) { return; }
    }
    ctx->pc = 0x51AA54u;
label_51aa54:
    // 0x51aa54: 0x920201b8  lbu         $v0, 0x1B8($s0)
    ctx->pc = 0x51aa54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 440)));
label_51aa58:
    // 0x51aa58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x51aa58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_51aa5c:
    // 0x51aa5c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x51aa5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_51aa60:
    // 0x51aa60: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_51aa64:
    if (ctx->pc == 0x51AA64u) {
        ctx->pc = 0x51AA64u;
            // 0x51aa64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x51AA68u;
        goto label_51aa68;
    }
    ctx->pc = 0x51AA60u;
    {
        const bool branch_taken_0x51aa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51AA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA60u;
            // 0x51aa64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51aa60) {
            ctx->pc = 0x51AA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51aa4c;
        }
    }
    ctx->pc = 0x51AA68u;
label_51aa68:
    // 0x51aa68: 0xc05cc84  jal         func_173210
label_51aa6c:
    if (ctx->pc == 0x51AA6Cu) {
        ctx->pc = 0x51AA6Cu;
            // 0x51aa6c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->pc = 0x51AA70u;
        goto label_51aa70;
    }
    ctx->pc = 0x51AA68u;
    SET_GPR_U32(ctx, 31, 0x51AA70u);
    ctx->pc = 0x51AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA68u;
            // 0x51aa6c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA70u; }
        if (ctx->pc != 0x51AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA70u; }
        if (ctx->pc != 0x51AA70u) { return; }
    }
    ctx->pc = 0x51AA70u;
label_51aa70:
    // 0x51aa70: 0xc05cc84  jal         func_173210
label_51aa74:
    if (ctx->pc == 0x51AA74u) {
        ctx->pc = 0x51AA74u;
            // 0x51aa74: 0x8e04019c  lw          $a0, 0x19C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
        ctx->pc = 0x51AA78u;
        goto label_51aa78;
    }
    ctx->pc = 0x51AA70u;
    SET_GPR_U32(ctx, 31, 0x51AA78u);
    ctx->pc = 0x51AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA70u;
            // 0x51aa74: 0x8e04019c  lw          $a0, 0x19C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA78u; }
        if (ctx->pc != 0x51AA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA78u; }
        if (ctx->pc != 0x51AA78u) { return; }
    }
    ctx->pc = 0x51AA78u;
label_51aa78:
    // 0x51aa78: 0xc05b774  jal         func_16DDD0
label_51aa7c:
    if (ctx->pc == 0x51AA7Cu) {
        ctx->pc = 0x51AA80u;
        goto label_51aa80;
    }
    ctx->pc = 0x51AA78u;
    SET_GPR_U32(ctx, 31, 0x51AA80u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA80u; }
        if (ctx->pc != 0x51AA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA80u; }
        if (ctx->pc != 0x51AA80u) { return; }
    }
    ctx->pc = 0x51AA80u;
label_51aa80:
    // 0x51aa80: 0xc072cd2  jal         func_1CB348
label_51aa84:
    if (ctx->pc == 0x51AA84u) {
        ctx->pc = 0x51AA88u;
        goto label_51aa88;
    }
    ctx->pc = 0x51AA80u;
    SET_GPR_U32(ctx, 31, 0x51AA88u);
    ctx->pc = 0x1CB348u;
    if (runtime->hasFunction(0x1CB348u)) {
        auto targetFn = runtime->lookupFunction(0x1CB348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA88u; }
        if (ctx->pc != 0x51AA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB348_0x1cb348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AA88u; }
        if (ctx->pc != 0x51AA88u) { return; }
    }
    ctx->pc = 0x51AA88u;
label_51aa88:
    // 0x51aa88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x51aa88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51aa8c:
    // 0x51aa8c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x51aa8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_51aa90:
    // 0x51aa90: 0x320f809  jalr        $t9
label_51aa94:
    if (ctx->pc == 0x51AA94u) {
        ctx->pc = 0x51AA94u;
            // 0x51aa94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AA98u;
        goto label_51aa98;
    }
    ctx->pc = 0x51AA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51AA98u);
        ctx->pc = 0x51AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AA90u;
            // 0x51aa94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51AA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51AA98u; }
            if (ctx->pc != 0x51AA98u) { return; }
        }
        }
    }
    ctx->pc = 0x51AA98u;
label_51aa98:
    // 0x51aa98: 0xc05b774  jal         func_16DDD0
label_51aa9c:
    if (ctx->pc == 0x51AA9Cu) {
        ctx->pc = 0x51AAA0u;
        goto label_51aaa0;
    }
    ctx->pc = 0x51AA98u;
    SET_GPR_U32(ctx, 31, 0x51AAA0u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAA0u; }
        if (ctx->pc != 0x51AAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAA0u; }
        if (ctx->pc != 0x51AAA0u) { return; }
    }
    ctx->pc = 0x51AAA0u;
label_51aaa0:
    // 0x51aaa0: 0xc072cd2  jal         func_1CB348
label_51aaa4:
    if (ctx->pc == 0x51AAA4u) {
        ctx->pc = 0x51AAA8u;
        goto label_51aaa8;
    }
    ctx->pc = 0x51AAA0u;
    SET_GPR_U32(ctx, 31, 0x51AAA8u);
    ctx->pc = 0x1CB348u;
    if (runtime->hasFunction(0x1CB348u)) {
        auto targetFn = runtime->lookupFunction(0x1CB348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAA8u; }
        if (ctx->pc != 0x51AAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB348_0x1cb348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAA8u; }
        if (ctx->pc != 0x51AAA8u) { return; }
    }
    ctx->pc = 0x51AAA8u;
label_51aaa8:
    // 0x51aaa8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x51aaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51aaac:
    // 0x51aaac: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x51aaacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_51aab0:
    // 0x51aab0: 0x320f809  jalr        $t9
label_51aab4:
    if (ctx->pc == 0x51AAB4u) {
        ctx->pc = 0x51AAB4u;
            // 0x51aab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AAB8u;
        goto label_51aab8;
    }
    ctx->pc = 0x51AAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51AAB8u);
        ctx->pc = 0x51AAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AAB0u;
            // 0x51aab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51AAB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51AAB8u; }
            if (ctx->pc != 0x51AAB8u) { return; }
        }
        }
    }
    ctx->pc = 0x51AAB8u;
label_51aab8:
    // 0x51aab8: 0xc074514  jal         func_1D1450
label_51aabc:
    if (ctx->pc == 0x51AABCu) {
        ctx->pc = 0x51AABCu;
            // 0x51aabc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x51AAC0u;
        goto label_51aac0;
    }
    ctx->pc = 0x51AAB8u;
    SET_GPR_U32(ctx, 31, 0x51AAC0u);
    ctx->pc = 0x51AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AAB8u;
            // 0x51aabc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1450u;
    if (runtime->hasFunction(0x1D1450u)) {
        auto targetFn = runtime->lookupFunction(0x1D1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAC0u; }
        if (ctx->pc != 0x51AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1450_0x1d1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAC0u; }
        if (ctx->pc != 0x51AAC0u) { return; }
    }
    ctx->pc = 0x51AAC0u;
label_51aac0:
    // 0x51aac0: 0xc074650  jal         func_1D1940
label_51aac4:
    if (ctx->pc == 0x51AAC4u) {
        ctx->pc = 0x51AAC4u;
            // 0x51aac4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x51AAC8u;
        goto label_51aac8;
    }
    ctx->pc = 0x51AAC0u;
    SET_GPR_U32(ctx, 31, 0x51AAC8u);
    ctx->pc = 0x51AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AAC0u;
            // 0x51aac4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1940u;
    if (runtime->hasFunction(0x1D1940u)) {
        auto targetFn = runtime->lookupFunction(0x1D1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAC8u; }
        if (ctx->pc != 0x51AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1940_0x1d1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAC8u; }
        if (ctx->pc != 0x51AAC8u) { return; }
    }
    ctx->pc = 0x51AAC8u;
label_51aac8:
    // 0x51aac8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x51aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_51aacc:
    // 0x51aacc: 0xc074658  jal         func_1D1960
label_51aad0:
    if (ctx->pc == 0x51AAD0u) {
        ctx->pc = 0x51AAD0u;
            // 0x51aad0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x51AAD4u;
        goto label_51aad4;
    }
    ctx->pc = 0x51AACCu;
    SET_GPR_U32(ctx, 31, 0x51AAD4u);
    ctx->pc = 0x51AAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AACCu;
            // 0x51aad0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1960u;
    if (runtime->hasFunction(0x1D1960u)) {
        auto targetFn = runtime->lookupFunction(0x1D1960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAD4u; }
        if (ctx->pc != 0x51AAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1960_0x1d1960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AAD4u; }
        if (ctx->pc != 0x51AAD4u) { return; }
    }
    ctx->pc = 0x51AAD4u;
label_51aad4:
    // 0x51aad4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51aad8:
    // 0x51aad8: 0x8c43ce48  lw          $v1, -0x31B8($v0)
    ctx->pc = 0x51aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954568)));
label_51aadc:
    // 0x51aadc: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x51aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_51aae0:
    // 0x51aae0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x51aae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_51aae4:
    // 0x51aae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_51aae8:
    if (ctx->pc == 0x51AAE8u) {
        ctx->pc = 0x51AAE8u;
            // 0x51aae8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x51AAECu;
        goto label_51aaec;
    }
    ctx->pc = 0x51AAE4u;
    {
        const bool branch_taken_0x51aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51AAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AAE4u;
            // 0x51aae8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51aae4) {
            ctx->pc = 0x51AAFCu;
            goto label_51aafc;
        }
    }
    ctx->pc = 0x51AAECu;
label_51aaec:
    // 0x51aaec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51aaf0:
    // 0x51aaf0: 0x8c42ce40  lw          $v0, -0x31C0($v0)
    ctx->pc = 0x51aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954560)));
label_51aaf4:
    // 0x51aaf4: 0x401027  not         $v0, $v0
    ctx->pc = 0x51aaf4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_51aaf8:
    // 0x51aaf8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x51aaf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_51aafc:
    // 0x51aafc: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x51aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_51ab00:
    // 0x51ab00: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x51ab00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_51ab04:
    // 0x51ab04: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x51ab04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_51ab08:
    // 0x51ab08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51ab0c:
    // 0x51ab0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x51ab0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_51ab10:
    // 0x51ab10: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x51ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_51ab14:
    // 0x51ab14: 0xa242007f  sb          $v0, 0x7F($s2)
    ctx->pc = 0x51ab14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 127), (uint8_t)GPR_U32(ctx, 2));
label_51ab18:
    // 0x51ab18: 0xa2400080  sb          $zero, 0x80($s2)
    ctx->pc = 0x51ab18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 0));
label_51ab1c:
    // 0x51ab1c: 0xa2400081  sb          $zero, 0x81($s2)
    ctx->pc = 0x51ab1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 0));
label_51ab20:
    // 0x51ab20: 0xc0bb640  jal         func_2ED900
label_51ab24:
    if (ctx->pc == 0x51AB24u) {
        ctx->pc = 0x51AB24u;
            // 0x51ab24: 0xa28200f0  sb          $v0, 0xF0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 240), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x51AB28u;
        goto label_51ab28;
    }
    ctx->pc = 0x51AB20u;
    SET_GPR_U32(ctx, 31, 0x51AB28u);
    ctx->pc = 0x51AB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AB20u;
            // 0x51ab24: 0xa28200f0  sb          $v0, 0xF0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 240), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED900u;
    if (runtime->hasFunction(0x2ED900u)) {
        auto targetFn = runtime->lookupFunction(0x2ED900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AB28u; }
        if (ctx->pc != 0x51AB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED900_0x2ed900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AB28u; }
        if (ctx->pc != 0x51AB28u) { return; }
    }
    ctx->pc = 0x51AB28u;
label_51ab28:
    // 0x51ab28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x51ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_51ab2c:
    // 0x51ab2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51ab30:
    // 0x51ab30: 0xac603db8  sw          $zero, 0x3DB8($v1)
    ctx->pc = 0x51ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15800), GPR_U32(ctx, 0));
label_51ab34:
    // 0x51ab34: 0xac403dc0  sw          $zero, 0x3DC0($v0)
    ctx->pc = 0x51ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15808), GPR_U32(ctx, 0));
label_51ab38:
    // 0x51ab38: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x51ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_51ab3c:
    // 0x51ab3c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x51ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_51ab40:
    // 0x51ab40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51ab44:
    if (ctx->pc == 0x51AB44u) {
        ctx->pc = 0x51AB44u;
            // 0x51ab44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51AB48u;
        goto label_51ab48;
    }
    ctx->pc = 0x51AB40u;
    {
        const bool branch_taken_0x51ab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ab40) {
            ctx->pc = 0x51AB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51AB40u;
            // 0x51ab44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51AB54u;
            goto label_51ab54;
        }
    }
    ctx->pc = 0x51AB48u;
label_51ab48:
    // 0x51ab48: 0xc0b90cc  jal         func_2E4330
label_51ab4c:
    if (ctx->pc == 0x51AB4Cu) {
        ctx->pc = 0x51AB4Cu;
            // 0x51ab4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AB50u;
        goto label_51ab50;
    }
    ctx->pc = 0x51AB48u;
    SET_GPR_U32(ctx, 31, 0x51AB50u);
    ctx->pc = 0x51AB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AB48u;
            // 0x51ab4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4330u;
    if (runtime->hasFunction(0x2E4330u)) {
        auto targetFn = runtime->lookupFunction(0x2E4330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AB50u; }
        if (ctx->pc != 0x51AB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4330_0x2e4330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AB50u; }
        if (ctx->pc != 0x51AB50u) { return; }
    }
    ctx->pc = 0x51AB50u;
label_51ab50:
    // 0x51ab50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51ab50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51ab54:
    // 0x51ab54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x51ab54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51ab58:
    // 0x51ab58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51ab58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51ab5c:
    // 0x51ab5c: 0xc0506b8  jal         func_141AE0
label_51ab60:
    if (ctx->pc == 0x51AB60u) {
        ctx->pc = 0x51AB60u;
            // 0x51ab60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AB64u;
        goto label_51ab64;
    }
    ctx->pc = 0x51AB5Cu;
    SET_GPR_U32(ctx, 31, 0x51AB64u);
    ctx->pc = 0x51AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AB5Cu;
            // 0x51ab60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AB64u; }
        if (ctx->pc != 0x51AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AB64u; }
        if (ctx->pc != 0x51AB64u) { return; }
    }
    ctx->pc = 0x51AB64u;
label_51ab64:
    // 0x51ab64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51ab64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_51ab68:
    // 0x51ab68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51ab68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51ab6c:
    // 0x51ab6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51ab6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51ab70:
    // 0x51ab70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51ab70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51ab74:
    // 0x51ab74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51ab74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51ab78:
    // 0x51ab78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51ab78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51ab7c:
    // 0x51ab7c: 0x3e00008  jr          $ra
label_51ab80:
    if (ctx->pc == 0x51AB80u) {
        ctx->pc = 0x51AB80u;
            // 0x51ab80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x51AB84u;
        goto label_51ab84;
    }
    ctx->pc = 0x51AB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51AB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AB7Cu;
            // 0x51ab80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51AB84u;
label_51ab84:
    // 0x51ab84: 0x0  nop
    ctx->pc = 0x51ab84u;
    // NOP
label_51ab88:
    // 0x51ab88: 0x0  nop
    ctx->pc = 0x51ab88u;
    // NOP
label_51ab8c:
    // 0x51ab8c: 0x0  nop
    ctx->pc = 0x51ab8cu;
    // NOP
}
