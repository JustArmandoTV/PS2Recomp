#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176270
// Address: 0x176270 - 0x176398
void sub_00176270_0x176270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176270_0x176270");
#endif

    switch (ctx->pc) {
        case 0x1762d0u: goto label_1762d0;
        case 0x1762d8u: goto label_1762d8;
        case 0x1762e4u: goto label_1762e4;
        case 0x1762f8u: goto label_1762f8;
        case 0x176324u: goto label_176324;
        case 0x176330u: goto label_176330;
        case 0x17636cu: goto label_17636c;
        case 0x17637cu: goto label_17637c;
        default: break;
    }

    ctx->pc = 0x176270u;

    // 0x176270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17627c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x176288: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x176288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17628c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17628Cu;
    {
        const bool branch_taken_0x17628c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17628Cu;
            // 0x176290: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17628c) {
            ctx->pc = 0x1762A4u;
            goto label_1762a4;
        }
    }
    ctx->pc = 0x176294u;
    // 0x176294: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x176294u;
    {
        const bool branch_taken_0x176294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x176294) {
            ctx->pc = 0x176298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176294u;
            // 0x176298: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1762A8u;
            goto label_1762a8;
        }
    }
    ctx->pc = 0x17629Cu;
    // 0x17629c: 0x641000a  bgez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x17629Cu;
    {
        const bool branch_taken_0x17629c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x17629c) {
            ctx->pc = 0x1762C8u;
            goto label_1762c8;
        }
    }
    ctx->pc = 0x1762A4u;
label_1762a4:
    // 0x1762a4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1762a8:
    // 0x1762a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1762a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1762ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1762acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1762b0: 0x24844958  addiu       $a0, $a0, 0x4958
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18776));
    // 0x1762b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1762b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1762b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1762b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1762bc: 0x8059f4e  j           func_167D38
    ctx->pc = 0x1762BCu;
    ctx->pc = 0x1762C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1762BCu;
            // 0x1762c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1762C4u;
    // 0x1762c4: 0x0  nop
    ctx->pc = 0x1762c4u;
    // NOP
label_1762c8:
    // 0x1762c8: 0xc05cc84  jal         func_173210
    ctx->pc = 0x1762C8u;
    SET_GPR_U32(ctx, 31, 0x1762D0u);
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762D0u; }
        if (ctx->pc != 0x1762D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762D0u; }
        if (ctx->pc != 0x1762D0u) { return; }
    }
    ctx->pc = 0x1762D0u;
label_1762d0:
    // 0x1762d0: 0xc0599d2  jal         func_166748
    ctx->pc = 0x1762D0u;
    SET_GPR_U32(ctx, 31, 0x1762D8u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762D8u; }
        if (ctx->pc != 0x1762D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762D8u; }
        if (ctx->pc != 0x1762D8u) { return; }
    }
    ctx->pc = 0x1762D8u;
label_1762d8:
    // 0x1762d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1762d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762dc: 0xc0612e8  jal         func_184BA0
    ctx->pc = 0x1762DCu;
    SET_GPR_U32(ctx, 31, 0x1762E4u);
    ctx->pc = 0x1762E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1762DCu;
            // 0x1762e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BA0u;
    if (runtime->hasFunction(0x184BA0u)) {
        auto targetFn = runtime->lookupFunction(0x184BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762E4u; }
        if (ctx->pc != 0x1762E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BA0_0x184ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762E4u; }
        if (ctx->pc != 0x1762E4u) { return; }
    }
    ctx->pc = 0x1762E4u;
label_1762e4:
    // 0x1762e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1762e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1762E8u;
    {
        const bool branch_taken_0x1762e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1762ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1762E8u;
            // 0x1762ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762e8) {
            ctx->pc = 0x176318u;
            goto label_176318;
        }
    }
    ctx->pc = 0x1762F0u;
    // 0x1762f0: 0xc0599d8  jal         func_166760
    ctx->pc = 0x1762F0u;
    SET_GPR_U32(ctx, 31, 0x1762F8u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762F8u; }
        if (ctx->pc != 0x1762F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762F8u; }
        if (ctx->pc != 0x1762F8u) { return; }
    }
    ctx->pc = 0x1762F8u;
label_1762f8:
    // 0x1762f8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1762f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1762fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1762fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176300: 0x24844988  addiu       $a0, $a0, 0x4988
    ctx->pc = 0x176300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18824));
    // 0x176304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176308: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17630c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17630cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176310: 0x8059f4e  j           func_167D38
    ctx->pc = 0x176310u;
    ctx->pc = 0x176314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176310u;
            // 0x176314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176318u;
label_176318:
    // 0x176318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17631c: 0xc05cba8  jal         func_172EA0
    ctx->pc = 0x17631Cu;
    SET_GPR_U32(ctx, 31, 0x176324u);
    ctx->pc = 0x176320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17631Cu;
            // 0x176320: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172EA0u;
    if (runtime->hasFunction(0x172EA0u)) {
        auto targetFn = runtime->lookupFunction(0x172EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176324u; }
        if (ctx->pc != 0x176324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172EA0_0x172ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176324u; }
        if (ctx->pc != 0x176324u) { return; }
    }
    ctx->pc = 0x176324u;
label_176324:
    // 0x176324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176328: 0xc05d5c0  jal         func_175700
    ctx->pc = 0x176328u;
    SET_GPR_U32(ctx, 31, 0x176330u);
    ctx->pc = 0x17632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176328u;
            // 0x17632c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176330u; }
        if (ctx->pc != 0x176330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175700_0x175700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176330u; }
        if (ctx->pc != 0x176330u) { return; }
    }
    ctx->pc = 0x176330u;
label_176330:
    // 0x176330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17633c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17633cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176340: 0x80599d8  j           func_166760
    ctx->pc = 0x176340u;
    ctx->pc = 0x176344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176340u;
            // 0x176344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176348u;
    // 0x176348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17634c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176358: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17635c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x176360: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x176360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x176364: 0xc0599de  jal         func_166778
    ctx->pc = 0x176364u;
    SET_GPR_U32(ctx, 31, 0x17636Cu);
    ctx->pc = 0x176368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176364u;
            // 0x176368: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17636Cu; }
        if (ctx->pc != 0x17636Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17636Cu; }
        if (ctx->pc != 0x17636Cu) { return; }
    }
    ctx->pc = 0x17636Cu;
label_17636c:
    // 0x17636c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176374: 0xc05d8e6  jal         func_176398
    ctx->pc = 0x176374u;
    SET_GPR_U32(ctx, 31, 0x17637Cu);
    ctx->pc = 0x176378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176374u;
            // 0x176378: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176398u;
    if (runtime->hasFunction(0x176398u)) {
        auto targetFn = runtime->lookupFunction(0x176398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17637Cu; }
        if (ctx->pc != 0x17637Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176398_0x176398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17637Cu; }
        if (ctx->pc != 0x17637Cu) { return; }
    }
    ctx->pc = 0x17637Cu;
label_17637c:
    // 0x17637c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17637cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176388: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x176388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17638c: 0x80599e0  j           func_166780
    ctx->pc = 0x17638Cu;
    ctx->pc = 0x176390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17638Cu;
            // 0x176390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176394u;
    // 0x176394: 0x0  nop
    ctx->pc = 0x176394u;
    // NOP
}
