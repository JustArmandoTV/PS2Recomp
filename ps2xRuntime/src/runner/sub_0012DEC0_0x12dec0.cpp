#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DEC0
// Address: 0x12dec0 - 0x12f420
void sub_0012DEC0_0x12dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DEC0_0x12dec0");
#endif

    switch (ctx->pc) {
        case 0x12df00u: goto label_12df00;
        case 0x12df3cu: goto label_12df3c;
        case 0x12df78u: goto label_12df78;
        case 0x12df7cu: goto label_12df7c;
        case 0x12dfc4u: goto label_12dfc4;
        case 0x12dfd4u: goto label_12dfd4;
        case 0x12dfecu: goto label_12dfec;
        case 0x12dff4u: goto label_12dff4;
        case 0x12e038u: goto label_12e038;
        case 0x12e068u: goto label_12e068;
        case 0x12e06cu: goto label_12e06c;
        case 0x12e078u: goto label_12e078;
        case 0x12e0acu: goto label_12e0ac;
        case 0x12e0b4u: goto label_12e0b4;
        case 0x12e0c8u: goto label_12e0c8;
        case 0x12e100u: goto label_12e100;
        case 0x12e15cu: goto label_12e15c;
        case 0x12e1b0u: goto label_12e1b0;
        case 0x12e1f8u: goto label_12e1f8;
        case 0x12e200u: goto label_12e200;
        case 0x12e214u: goto label_12e214;
        case 0x12e270u: goto label_12e270;
        case 0x12e274u: goto label_12e274;
        case 0x12e29cu: goto label_12e29c;
        case 0x12e2d0u: goto label_12e2d0;
        case 0x12e304u: goto label_12e304;
        case 0x12e35cu: goto label_12e35c;
        case 0x12e368u: goto label_12e368;
        case 0x12e3b4u: goto label_12e3b4;
        case 0x12e3bcu: goto label_12e3bc;
        case 0x12e3c0u: goto label_12e3c0;
        case 0x12e3d8u: goto label_12e3d8;
        case 0x12e3dcu: goto label_12e3dc;
        case 0x12e40cu: goto label_12e40c;
        case 0x12e440u: goto label_12e440;
        case 0x12e498u: goto label_12e498;
        case 0x12e4c4u: goto label_12e4c4;
        case 0x12e4f8u: goto label_12e4f8;
        case 0x12e550u: goto label_12e550;
        case 0x12e57cu: goto label_12e57c;
        case 0x12e588u: goto label_12e588;
        case 0x12e5a8u: goto label_12e5a8;
        case 0x12e5b0u: goto label_12e5b0;
        case 0x12e5b4u: goto label_12e5b4;
        case 0x12e5e4u: goto label_12e5e4;
        case 0x12e618u: goto label_12e618;
        case 0x12e66cu: goto label_12e66c;
        case 0x12e6a0u: goto label_12e6a0;
        case 0x12e6c8u: goto label_12e6c8;
        case 0x12e714u: goto label_12e714;
        case 0x12e778u: goto label_12e778;
        case 0x12e7a4u: goto label_12e7a4;
        case 0x12e7d8u: goto label_12e7d8;
        case 0x12e868u: goto label_12e868;
        case 0x12e8c0u: goto label_12e8c0;
        case 0x12e8ecu: goto label_12e8ec;
        case 0x12e920u: goto label_12e920;
        case 0x12e978u: goto label_12e978;
        case 0x12e988u: goto label_12e988;
        case 0x12e9e4u: goto label_12e9e4;
        case 0x12ea14u: goto label_12ea14;
        case 0x12ea48u: goto label_12ea48;
        case 0x12eaa0u: goto label_12eaa0;
        case 0x12eb0cu: goto label_12eb0c;
        case 0x12eb60u: goto label_12eb60;
        case 0x12ebe8u: goto label_12ebe8;
        case 0x12ebfcu: goto label_12ebfc;
        case 0x12ec3cu: goto label_12ec3c;
        case 0x12ec48u: goto label_12ec48;
        case 0x12ec50u: goto label_12ec50;
        case 0x12ec54u: goto label_12ec54;
        case 0x12ec94u: goto label_12ec94;
        case 0x12ecc8u: goto label_12ecc8;
        case 0x12ecfcu: goto label_12ecfc;
        case 0x12ed88u: goto label_12ed88;
        case 0x12edf0u: goto label_12edf0;
        case 0x12ee18u: goto label_12ee18;
        case 0x12ee40u: goto label_12ee40;
        case 0x12ee44u: goto label_12ee44;
        case 0x12ee4cu: goto label_12ee4c;
        case 0x12eea0u: goto label_12eea0;
        case 0x12eeacu: goto label_12eeac;
        case 0x12eec8u: goto label_12eec8;
        case 0x12ef60u: goto label_12ef60;
        case 0x12ef68u: goto label_12ef68;
        case 0x12ef6cu: goto label_12ef6c;
        case 0x12efb8u: goto label_12efb8;
        case 0x12efc0u: goto label_12efc0;
        case 0x12eff4u: goto label_12eff4;
        case 0x12f00cu: goto label_12f00c;
        case 0x12f014u: goto label_12f014;
        case 0x12f090u: goto label_12f090;
        case 0x12f094u: goto label_12f094;
        case 0x12f0b4u: goto label_12f0b4;
        case 0x12f0bcu: goto label_12f0bc;
        case 0x12f0ccu: goto label_12f0cc;
        case 0x12f0f0u: goto label_12f0f0;
        case 0x12f134u: goto label_12f134;
        case 0x12f194u: goto label_12f194;
        case 0x12f1bcu: goto label_12f1bc;
        case 0x12f1c0u: goto label_12f1c0;
        case 0x12f2d8u: goto label_12f2d8;
        case 0x12f388u: goto label_12f388;
        case 0x12f3a4u: goto label_12f3a4;
        case 0x12f3b4u: goto label_12f3b4;
        case 0x12f3e8u: goto label_12f3e8;
        default: break;
    }

    ctx->pc = 0x12dec0u;

    // 0x12dec0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x12dec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x12dec4: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x12dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x12dec8: 0xffb10238  sd          $s1, 0x238($sp)
    ctx->pc = 0x12dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 17));
    // 0x12decc: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x12deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x12ded0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12ded0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ded4: 0xffb30248  sd          $s3, 0x248($sp)
    ctx->pc = 0x12ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 19));
    // 0x12ded8: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x12ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x12dedc: 0xffb50258  sd          $s5, 0x258($sp)
    ctx->pc = 0x12dedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 21));
    // 0x12dee0: 0xffb60260  sd          $s6, 0x260($sp)
    ctx->pc = 0x12dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x12dee4: 0xffb70268  sd          $s7, 0x268($sp)
    ctx->pc = 0x12dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 23));
    // 0x12dee8: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x12dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x12deec: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x12deecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x12def0: 0xafa501f4  sw          $a1, 0x1F4($sp)
    ctx->pc = 0x12def0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 5));
    // 0x12def4: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x12def4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
    // 0x12def8: 0xc04a150  jal         func_128540
    ctx->pc = 0x12DEF8u;
    SET_GPR_U32(ctx, 31, 0x12DF00u);
    ctx->pc = 0x12DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DEF8u;
            // 0x12defc: 0xafa701f8  sw          $a3, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128540u;
    if (runtime->hasFunction(0x128540u)) {
        auto targetFn = runtime->lookupFunction(0x128540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF00u; }
        if (ctx->pc != 0x12DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128540_0x128540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF00u; }
        if (ctx->pc != 0x12DF00u) { return; }
    }
    ctx->pc = 0x12DF00u;
label_12df00:
    // 0x12df00: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x12df00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12df04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12df08: 0x95ae000c  lhu         $t6, 0xC($t5)
    ctx->pc = 0x12df08u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x12df0c: 0xffa00210  sd          $zero, 0x210($sp)
    ctx->pc = 0x12df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 0));
    // 0x12df10: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x12df10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x12df14: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x12df14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x12df18: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x12df18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x12df1c: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x12df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x12df20: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DF20u;
    {
        const bool branch_taken_0x12df20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF20u;
            // 0x12df24: 0xafa001e4  sw          $zero, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df20) {
            ctx->pc = 0x12DF34u;
            goto label_12df34;
        }
    }
    ctx->pc = 0x12DF28u;
    // 0x12df28: 0x8daf0010  lw          $t7, 0x10($t5)
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x12df2c: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DF2Cu;
    {
        const bool branch_taken_0x12df2c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF2Cu;
            // 0x12df30: 0x31ce001a  andi        $t6, $t6, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df2c) {
            ctx->pc = 0x12DF50u;
            goto label_12df50;
        }
    }
    ctx->pc = 0x12DF34u;
label_12df34:
    // 0x12df34: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x12DF34u;
    SET_GPR_U32(ctx, 31, 0x12DF3Cu);
    ctx->pc = 0x12DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF34u;
            // 0x12df38: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (runtime->hasFunction(0x1305E0u)) {
        auto targetFn = runtime->lookupFunction(0x1305E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF3Cu; }
        if (ctx->pc != 0x12DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001305E0_0x1305e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF3Cu; }
        if (ctx->pc != 0x12DF3Cu) { return; }
    }
    ctx->pc = 0x12DF3Cu;
label_12df3c:
    // 0x12df3c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12DF3Cu;
    {
        const bool branch_taken_0x12df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF3Cu;
            // 0x12df40: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df3c) {
            ctx->pc = 0x12DF7Cu;
            goto label_12df7c;
        }
    }
    ctx->pc = 0x12DF44u;
    // 0x12df44: 0x8faf01f4  lw          $t7, 0x1F4($sp)
    ctx->pc = 0x12df44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12df48: 0x95ee000c  lhu         $t6, 0xC($t7)
    ctx->pc = 0x12df48u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x12df4c: 0x31ce001a  andi        $t6, $t6, 0x1A
    ctx->pc = 0x12df4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)26);
label_12df50:
    // 0x12df50: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12df54: 0x15cf0016  bne         $t6, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x12DF54u;
    {
        const bool branch_taken_0x12df54 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12DF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF54u;
            // 0x12df58: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df54) {
            ctx->pc = 0x12DFB0u;
            goto label_12dfb0;
        }
    }
    ctx->pc = 0x12DF5Cu;
    // 0x12df5c: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x12df5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12df60: 0x85af000e  lh          $t7, 0xE($t5)
    ctx->pc = 0x12df60u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 14)));
    // 0x12df64: 0x5e00012  bltz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12DF64u;
    {
        const bool branch_taken_0x12df64 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x12DF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF64u;
            // 0x12df68: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df64) {
            ctx->pc = 0x12DFB0u;
            goto label_12dfb0;
        }
    }
    ctx->pc = 0x12DF6Cu;
    // 0x12df6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12df6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df70: 0xc04b766  jal         func_12DD98
    ctx->pc = 0x12DF70u;
    SET_GPR_U32(ctx, 31, 0x12DF78u);
    ctx->pc = 0x12DF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF70u;
            // 0x12df74: 0x8fa601f8  lw          $a2, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD98u;
    if (runtime->hasFunction(0x12DD98u)) {
        auto targetFn = runtime->lookupFunction(0x12DD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF78u; }
        if (ctx->pc != 0x12DF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD98_0x12dd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF78u; }
        if (ctx->pc != 0x12DF78u) { return; }
    }
    ctx->pc = 0x12DF78u;
label_12df78:
    // 0x12df78: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x12df78u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12df7c:
    // 0x12df7c: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x12df7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x12df80: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x12df80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df84: 0xdfb10238  ld          $s1, 0x238($sp)
    ctx->pc = 0x12df84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x12df88: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x12df88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x12df8c: 0xdfb30248  ld          $s3, 0x248($sp)
    ctx->pc = 0x12df8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x12df90: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x12df90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x12df94: 0xdfb50258  ld          $s5, 0x258($sp)
    ctx->pc = 0x12df94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x12df98: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x12df98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x12df9c: 0xdfb70268  ld          $s7, 0x268($sp)
    ctx->pc = 0x12df9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x12dfa0: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x12dfa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x12dfa4: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x12dfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x12dfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x12DFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DFA8u;
            // 0x12dfac: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DFB0u;
label_12dfb0:
    // 0x12dfb0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x12dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x12dfb4: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x12dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x12dfb8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x12dfb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfbc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x12dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x12dfc0: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x12dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_12dfc4:
    // 0x12dfc4: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x12dfc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfc8: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x12dfc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
    // 0x12dfcc: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x12dfccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x12dfd0: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x12dfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12dfd4:
    // 0x12dfd4: 0x8e641ad8  lw          $a0, 0x1AD8($s3)
    ctx->pc = 0x12dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6872)));
    // 0x12dfd8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x12dfdc: 0x8e471ae0  lw          $a3, 0x1AE0($s2)
    ctx->pc = 0x12dfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6880)));
    // 0x12dfe0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12dfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfe4: 0xc04a49e  jal         func_129278
    ctx->pc = 0x12DFE4u;
    SET_GPR_U32(ctx, 31, 0x12DFECu);
    ctx->pc = 0x12DFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DFE4u;
            // 0x12dfe8: 0x27a801e4  addiu       $t0, $sp, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129278u;
    if (runtime->hasFunction(0x129278u)) {
        auto targetFn = runtime->lookupFunction(0x129278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DFECu; }
        if (ctx->pc != 0x12DFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129278_0x129278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DFECu; }
        if (ctx->pc != 0x12DFECu) { return; }
    }
    ctx->pc = 0x12DFECu;
label_12dfec:
    // 0x12dfec: 0x1c400506  bgtz        $v0, . + 4 + (0x506 << 2)
    ctx->pc = 0x12DFECu;
    {
        const bool branch_taken_0x12dfec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DFECu;
            // 0x12dff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfec) {
            ctx->pc = 0x12F408u;
            goto label_12f408;
        }
    }
    ctx->pc = 0x12DFF4u;
label_12dff4:
    // 0x12dff4: 0x2b68823  subu        $s1, $s5, $s6
    ctx->pc = 0x12dff4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x12dff8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12DFF8u;
    {
        const bool branch_taken_0x12dff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dff8) {
            ctx->pc = 0x12E04Cu;
            goto label_12e04c;
        }
    }
    ctx->pc = 0x12E000u;
    // 0x12e000: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x12e000u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
    // 0x12e004: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12e004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12e008: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e008u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e00c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e00cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e010: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e014: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e018: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x12e018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x12e01c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e020: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e020u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e024: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E024u;
    {
        const bool branch_taken_0x12e024 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E024u;
            // 0x12e028: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e024) {
            ctx->pc = 0x12E040u;
            goto label_12e040;
        }
    }
    ctx->pc = 0x12E02Cu;
    // 0x12e02c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e030: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E030u;
    SET_GPR_U32(ctx, 31, 0x12E038u);
    ctx->pc = 0x12E034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E030u;
            // 0x12e034: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E038u; }
        if (ctx->pc != 0x12E038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E038u; }
        if (ctx->pc != 0x12E038u) { return; }
    }
    ctx->pc = 0x12E038u;
label_12e038:
    // 0x12e038: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x12E038u;
    {
        const bool branch_taken_0x12e038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E038u;
            // 0x12e03c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e038) {
            ctx->pc = 0x12E3BCu;
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E040u;
label_12e040:
    // 0x12e040: 0x8fae0200  lw          $t6, 0x200($sp)
    ctx->pc = 0x12e040u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12e044: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x12e044u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x12e048: 0xafae0200  sw          $t6, 0x200($sp)
    ctx->pc = 0x12e048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 14));
label_12e04c:
    // 0x12e04c: 0x1a0004e1  blez        $s0, . + 4 + (0x4E1 << 2)
    ctx->pc = 0x12E04Cu;
    {
        const bool branch_taken_0x12e04c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E04Cu;
            // 0x12e050: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e04c) {
            ctx->pc = 0x12F3D4u;
            goto label_12f3d4;
        }
    }
    ctx->pc = 0x12E054u;
    // 0x12e054: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12e054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e058: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x12e058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
    // 0x12e05c: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x12e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x12e060: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12e060u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e064: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x12e064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_12e068:
    // 0x12e068: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x12e068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12e06c:
    // 0x12e06c: 0x69e00  sll         $s3, $a2, 24
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x12e070: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12e070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12e074: 0x139e03  sra         $s3, $s3, 24
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 24));
label_12e078:
    // 0x12e078: 0x266effe0  addiu       $t6, $s3, -0x20
    ctx->pc = 0x12e078u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x12e07c: 0x2dcf0059  sltiu       $t7, $t6, 0x59
    ctx->pc = 0x12e07cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x12e080: 0x11e004ce  beqz        $t7, . + 4 + (0x4CE << 2)
    ctx->pc = 0x12E080u;
    {
        const bool branch_taken_0x12e080 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E080u;
            // 0x12e084: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e080) {
            ctx->pc = 0x12F3BCu;
            goto label_12f3bc;
        }
    }
    ctx->pc = 0x12E088u;
    // 0x12e088: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12e088u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x12e08c: 0x25ce0c00  addiu       $t6, $t6, 0xC00
    ctx->pc = 0x12e08cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3072));
    // 0x12e090: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12e090u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12e094: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12e094u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12e098: 0x1a00008  jr          $t5
    ctx->pc = 0x12E098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E0A0u: goto label_12e0a0;
            case 0x12E0BCu: goto label_12e0bc;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0F4u: goto label_12e0f4;
            case 0x12E108u: goto label_12e108;
            case 0x12E110u: goto label_12e110;
            case 0x12E190u: goto label_12e190;
            case 0x12E1A4u: goto label_12e1a4;
            case 0x12E1D8u: goto label_12e1d8;
            case 0x12E1E4u: goto label_12e1e4;
            case 0x12EF30u: goto label_12ef30;
            case 0x12EF40u: goto label_12ef40;
            case 0x12EF4Cu: goto label_12ef4c;
            case 0x12EF98u: goto label_12ef98;
            case 0x12EFA4u: goto label_12efa4;
            case 0x12EFECu: goto label_12efec;
            case 0x12F058u: goto label_12f058;
            case 0x12F080u: goto label_12f080;
            case 0x12F274u: goto label_12f274;
            case 0x12F284u: goto label_12f284;
            case 0x12F2B8u: goto label_12f2b8;
            case 0x12F314u: goto label_12f314;
            case 0x12F348u: goto label_12f348;
            case 0x12F358u: goto label_12f358;
            case 0x12F3BCu: goto label_12f3bc;
            case 0x12F3F8u: goto label_12f3f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E0A0u;
label_12e0a0:
    // 0x12e0a0: 0x83af0000  lb          $t7, 0x0($sp)
    ctx->pc = 0x12e0a0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e0a4: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E0A4u;
    {
        const bool branch_taken_0x12e0a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0A4u;
            // 0x12e0a8: 0x240d0020  addiu       $t5, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0a4) {
            ctx->pc = 0x12E0B4u;
            goto label_12e0b4;
        }
    }
    ctx->pc = 0x12E0ACu;
label_12e0ac:
    // 0x12e0ac: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x12E0ACu;
    {
        const bool branch_taken_0x12e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0ACu;
            // 0x12e0b0: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0ac) {
            ctx->pc = 0x12E06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e06c;
        }
    }
    ctx->pc = 0x12E0B4u;
label_12e0b4:
    // 0x12e0b4: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x12E0B4u;
    {
        const bool branch_taken_0x12e0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0B4u;
            // 0x12e0b8: 0xa3ad0000  sb          $t5, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0b4) {
            ctx->pc = 0x12E0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0ac;
        }
    }
    ctx->pc = 0x12E0BCu;
label_12e0bc:
    // 0x12e0bc: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e0c0: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12e0c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e0c4: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x12e0c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
label_12e0c8:
    // 0x12e0c8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x12E0C8u;
    {
        const bool branch_taken_0x12e0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0C8u;
            // 0x12e0cc: 0xafaf01fc  sw          $t7, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0c8) {
            ctx->pc = 0x12E06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e06c;
        }
    }
    ctx->pc = 0x12E0D0u;
label_12e0d0:
    // 0x12e0d0: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12e0d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12e0d4: 0x8fad01f8  lw          $t5, 0x1F8($sp)
    ctx->pc = 0x12e0d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12e0d8: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12e0d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12e0dc: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12e0dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x12e0e0: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x12e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
    // 0x12e0e4: 0x5e1fff1  bgez        $t7, . + 4 + (-0xF << 2)
    ctx->pc = 0x12E0E4u;
    {
        const bool branch_taken_0x12e0e4 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x12E0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0E4u;
            // 0x12e0e8: 0xafad01f8  sw          $t5, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0e4) {
            ctx->pc = 0x12E0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0ac;
        }
    }
    ctx->pc = 0x12E0ECu;
    // 0x12e0ec: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x12e0ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12e0f0: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x12e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
label_12e0f4:
    // 0x12e0f4: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12e0f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e0f8: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12e0f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e0fc: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x12e0fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
label_12e100:
    // 0x12e100: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x12E100u;
    {
        const bool branch_taken_0x12e100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E100u;
            // 0x12e104: 0xafae01fc  sw          $t6, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e100) {
            ctx->pc = 0x12E06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e06c;
        }
    }
    ctx->pc = 0x12E108u;
label_12e108:
    // 0x12e108: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x12E108u;
    {
        const bool branch_taken_0x12e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E108u;
            // 0x12e10c: 0x240d002b  addiu       $t5, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e108) {
            ctx->pc = 0x12E0B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0b4;
        }
    }
    ctx->pc = 0x12E110u;
label_12e110:
    // 0x12e110: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x12e110u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e114: 0x240f002a  addiu       $t7, $zero, 0x2A
    ctx->pc = 0x12e114u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12e118: 0x166f000b  bne         $s3, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12E118u;
    {
        const bool branch_taken_0x12e118 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12E11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E118u;
            // 0x12e11c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e118) {
            ctx->pc = 0x12E148u;
            goto label_12e148;
        }
    }
    ctx->pc = 0x12E120u;
    // 0x12e120: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12e120u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12e124: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x12e124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12e128: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12e128u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12e12c: 0xafaf01f8  sw          $t7, 0x1F8($sp)
    ctx->pc = 0x12e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
    // 0x12e130: 0x2a0fffff  slti        $t7, $s0, -0x1
    ctx->pc = 0x12e130u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x12e134: 0x11e0ffdd  beqz        $t7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12E134u;
    {
        const bool branch_taken_0x12e134 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E134u;
            // 0x12e138: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e134) {
            ctx->pc = 0x12E0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0ac;
        }
    }
    ctx->pc = 0x12E13Cu;
    // 0x12e13c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x12E13Cu;
    {
        const bool branch_taken_0x12e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E13Cu;
            // 0x12e140: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e13c) {
            ctx->pc = 0x12E068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e068;
        }
    }
    ctx->pc = 0x12E144u;
    // 0x12e144: 0x0  nop
    ctx->pc = 0x12e144u;
    // NOP
label_12e148:
    // 0x12e148: 0x266fffd0  addiu       $t7, $s3, -0x30
    ctx->pc = 0x12e148u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x12e14c: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x12e14cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12e150: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12E150u;
    {
        const bool branch_taken_0x12e150 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E150u;
            // 0x12e154: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e150) {
            ctx->pc = 0x12E17Cu;
            goto label_12e17c;
        }
    }
    ctx->pc = 0x12E158u;
    // 0x12e158: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12e15c:
    // 0x12e15c: 0x20d7818  mult        $t7, $s0, $t5
    ctx->pc = 0x12e15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12e160: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x12e160u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x12e164: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x12e164u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e168: 0x25f0ffd0  addiu       $s0, $t7, -0x30
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x12e16c: 0x266effd0  addiu       $t6, $s3, -0x30
    ctx->pc = 0x12e16cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x12e170: 0x2dce000a  sltiu       $t6, $t6, 0xA
    ctx->pc = 0x12e170u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12e174: 0x15c0fff9  bnez        $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12E174u;
    {
        const bool branch_taken_0x12e174 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E174u;
            // 0x12e178: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e174) {
            ctx->pc = 0x12E15Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e15c;
        }
    }
    ctx->pc = 0x12E17Cu;
label_12e17c:
    // 0x12e17c: 0x2a0fffff  slti        $t7, $s0, -0x1
    ctx->pc = 0x12e17cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x12e180: 0x11e0ffbd  beqz        $t7, . + 4 + (-0x43 << 2)
    ctx->pc = 0x12E180u;
    {
        const bool branch_taken_0x12e180 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E180u;
            // 0x12e184: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e180) {
            ctx->pc = 0x12E078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e078;
        }
    }
    ctx->pc = 0x12E188u;
    // 0x12e188: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x12E188u;
    {
        const bool branch_taken_0x12e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E188u;
            // 0x12e18c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e188) {
            ctx->pc = 0x12E078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e078;
        }
    }
    ctx->pc = 0x12E190u;
label_12e190:
    // 0x12e190: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e194: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12e194u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e198: 0x35ad0080  ori         $t5, $t5, 0x80
    ctx->pc = 0x12e198u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)128);
    // 0x12e19c: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x12E19Cu;
    {
        const bool branch_taken_0x12e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E19Cu;
            // 0x12e1a0: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e19c) {
            ctx->pc = 0x12E06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e06c;
        }
    }
    ctx->pc = 0x12E1A4u;
label_12e1a4:
    // 0x12e1a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12e1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a8: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x12e1a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12e1ac: 0x20e7818  mult        $t7, $s0, $t6
    ctx->pc = 0x12e1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_12e1b0:
    // 0x12e1b0: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x12e1b4: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x12e1b4u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e1b8: 0x25f0ffd0  addiu       $s0, $t7, -0x30
    ctx->pc = 0x12e1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x12e1bc: 0x266fffd0  addiu       $t7, $s3, -0x30
    ctx->pc = 0x12e1bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x12e1c0: 0xafb00204  sw          $s0, 0x204($sp)
    ctx->pc = 0x12e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 16));
    // 0x12e1c4: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x12e1c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12e1c8: 0x11e0ffab  beqz        $t7, . + 4 + (-0x55 << 2)
    ctx->pc = 0x12E1C8u;
    {
        const bool branch_taken_0x12e1c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1C8u;
            // 0x12e1cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1c8) {
            ctx->pc = 0x12E078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e078;
        }
    }
    ctx->pc = 0x12E1D0u;
    // 0x12e1d0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12E1D0u;
    {
        const bool branch_taken_0x12e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1D0u;
            // 0x12e1d4: 0x20e7818  mult        $t7, $s0, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1d0) {
            ctx->pc = 0x12E1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e1b0;
        }
    }
    ctx->pc = 0x12E1D8u;
label_12e1d8:
    // 0x12e1d8: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12e1d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e1dc: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12e1dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12e1e0: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12e1e4:
    // 0x12e1e4: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12e1e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e1e8: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12e1e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12e1ec: 0x11e00347  beqz        $t7, . + 4 + (0x347 << 2)
    ctx->pc = 0x12E1ECu;
    {
        const bool branch_taken_0x12e1ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1ECu;
            // 0x12e1f0: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1ec) {
            ctx->pc = 0x12EF0Cu;
            goto label_12ef0c;
        }
    }
    ctx->pc = 0x12E1F4u;
    // 0x12e1f4: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12e1f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12e1f8:
    // 0x12e1f8: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12e1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12e1fc: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12e200:
    // 0x12e200: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E200u;
    {
        const bool branch_taken_0x12e200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E200u;
            // 0x12e204: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e200) {
            ctx->pc = 0x12E214u;
            goto label_12e214;
        }
    }
    ctx->pc = 0x12E208u;
    // 0x12e208: 0x240d002d  addiu       $t5, $zero, 0x2D
    ctx->pc = 0x12e208u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12e20c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x12e20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x12e210: 0xa3ad0000  sb          $t5, 0x0($sp)
    ctx->pc = 0x12e210u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 13));
label_12e214:
    // 0x12e214: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E214u;
    {
        const bool branch_taken_0x12e214 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E214u;
            // 0x12e218: 0xafb1021c  sw          $s1, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e214) {
            ctx->pc = 0x12E22Cu;
            goto label_12e22c;
        }
    }
    ctx->pc = 0x12E21Cu;
    // 0x12e21c: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12e21cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e220: 0x240fff7f  addiu       $t7, $zero, -0x81
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x12e224: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x12e224u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12e228: 0xafad01fc  sw          $t5, 0x1FC($sp)
    ctx->pc = 0x12e228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
label_12e22c:
    // 0x12e22c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E22Cu;
    {
        const bool branch_taken_0x12e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E22Cu;
            // 0x12e230: 0x27b601cc  addiu       $s6, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e22c) {
            ctx->pc = 0x12E240u;
            goto label_12e240;
        }
    }
    ctx->pc = 0x12E234u;
    // 0x12e234: 0x8faf021c  lw          $t7, 0x21C($sp)
    ctx->pc = 0x12e234u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x12e238: 0x11e0032b  beqz        $t7, . + 4 + (0x32B << 2)
    ctx->pc = 0x12E238u;
    {
        const bool branch_taken_0x12e238 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e238) {
            ctx->pc = 0x12EEE8u;
            goto label_12eee8;
        }
    }
    ctx->pc = 0x12E240u;
label_12e240:
    // 0x12e240: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12e240u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e244: 0x11cf0313  beq         $t6, $t7, . + 4 + (0x313 << 2)
    ctx->pc = 0x12E244u;
    {
        const bool branch_taken_0x12e244 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12E248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E244u;
            // 0x12e248: 0x2c4f000a  sltiu       $t7, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e244) {
            ctx->pc = 0x12EE94u;
            goto label_12ee94;
        }
    }
    ctx->pc = 0x12E24Cu;
    // 0x12e24c: 0x11c00300  beqz        $t6, . + 4 + (0x300 << 2)
    ctx->pc = 0x12E24Cu;
    {
        const bool branch_taken_0x12e24c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E24Cu;
            // 0x12e250: 0x304f0007  andi        $t7, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e24c) {
            ctx->pc = 0x12EE50u;
            goto label_12ee50;
        }
    }
    ctx->pc = 0x12E254u;
    // 0x12e254: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x12e254u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e258: 0x11cf02f0  beq         $t6, $t7, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x12E258u;
    {
        const bool branch_taken_0x12e258 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E258u;
            // 0x12e25c: 0x304f000f  andi        $t7, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e258) {
            ctx->pc = 0x12EE1Cu;
            goto label_12ee1c;
        }
    }
    ctx->pc = 0x12E260u;
    // 0x12e260: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e260u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12e264: 0x25f60b88  addiu       $s6, $t7, 0xB88
    ctx->pc = 0x12e264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 2952));
    // 0x12e268: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x12E268u;
    SET_GPR_U32(ctx, 31, 0x12E270u);
    ctx->pc = 0x12E26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E268u;
            // 0x12e26c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E270u; }
        if (ctx->pc != 0x12E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E270u; }
        if (ctx->pc != 0x12E270u) { return; }
    }
    ctx->pc = 0x12E270u;
label_12e270:
    // 0x12e270: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x12e270u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e274:
    // 0x12e274: 0x8fae021c  lw          $t6, 0x21C($sp)
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x12e278: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x12e278u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e27c: 0x93ad0000  lbu         $t5, 0x0($sp)
    ctx->pc = 0x12e27cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e280: 0x3ce782a  slt         $t7, $fp, $t6
    ctx->pc = 0x12e280u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12e284: 0x1cfb80b  movn        $s7, $t6, $t7
    ctx->pc = 0x12e284u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x12e288: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x12e288u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x12e28c: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12e28cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12e290: 0x11c002dd  beqz        $t6, . + 4 + (0x2DD << 2)
    ctx->pc = 0x12E290u;
    {
        const bool branch_taken_0x12e290 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E290u;
            // 0x12e294: 0x8faf01fc  lw          $t7, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e290) {
            ctx->pc = 0x12EE08u;
            goto label_12ee08;
        }
    }
    ctx->pc = 0x12E298u;
    // 0x12e298: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12e298u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12e29c:
    // 0x12e29c: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12e29cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e2a0: 0x31ce0084  andi        $t6, $t6, 0x84
    ctx->pc = 0x12e2a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)132);
    // 0x12e2a4: 0x15c00030  bnez        $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x12E2A4u;
    {
        const bool branch_taken_0x12e2a4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2A4u;
            // 0x12e2a8: 0xafae0224  sw          $t6, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2a4) {
            ctx->pc = 0x12E368u;
            goto label_12e368;
        }
    }
    ctx->pc = 0x12E2ACu;
    // 0x12e2ac: 0x8faf0204  lw          $t7, 0x204($sp)
    ctx->pc = 0x12e2acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12e2b0: 0x1f78023  subu        $s0, $t7, $s7
    ctx->pc = 0x12e2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
    // 0x12e2b4: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12E2B4u;
    {
        const bool branch_taken_0x12e2b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2B4u;
            // 0x12e2b8: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2b4) {
            ctx->pc = 0x12E368u;
            goto label_12e368;
        }
    }
    ctx->pc = 0x12E2BCu;
    // 0x12e2bc: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12E2BCu;
    {
        const bool branch_taken_0x12e2bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2BCu;
            // 0x12e2c0: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2bc) {
            ctx->pc = 0x12E320u;
            goto label_12e320;
        }
    }
    ctx->pc = 0x12E2C4u;
    // 0x12e2c4: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12e2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e2c8: 0x25f10b68  addiu       $s1, $t7, 0xB68
    ctx->pc = 0x12e2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2920));
    // 0x12e2cc: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12e2d0:
    // 0x12e2d0: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12e2d4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e2d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e2d8: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e2d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2dc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e2e0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e2e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e2e4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12e2e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12e2e8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e2ec: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e2ecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e2f0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E2F0u;
    {
        const bool branch_taken_0x12e2f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2F0u;
            // 0x12e2f4: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2f0) {
            ctx->pc = 0x12E30Cu;
            goto label_12e30c;
        }
    }
    ctx->pc = 0x12E2F8u;
    // 0x12e2f8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e2fc: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E2FCu;
    SET_GPR_U32(ctx, 31, 0x12E304u);
    ctx->pc = 0x12E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2FCu;
            // 0x12e300: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E304u; }
        if (ctx->pc != 0x12E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E304u; }
        if (ctx->pc != 0x12E304u) { return; }
    }
    ctx->pc = 0x12E304u;
label_12e304:
    // 0x12e304: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12E304u;
    {
        const bool branch_taken_0x12e304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E304u;
            // 0x12e308: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e304) {
            ctx->pc = 0x12E3BCu;
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E30Cu;
label_12e30c:
    // 0x12e30c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12e30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12e310: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12e310u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12e314: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E314u;
    {
        const bool branch_taken_0x12e314 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e314) {
            ctx->pc = 0x12E318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E314u;
            // 0x12e318: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E2D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e2d0;
        }
    }
    ctx->pc = 0x12E31Cu;
    // 0x12e31c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e31cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12e320:
    // 0x12e320: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e324: 0x25ef0b68  addiu       $t7, $t7, 0xB68
    ctx->pc = 0x12e324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2920));
    // 0x12e328: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e328u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e32c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e32cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e330: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e330u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e334: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12e334u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12e338: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e338u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e33c: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e340: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e344: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e344u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e348: 0x15e002ad  bnez        $t7, . + 4 + (0x2AD << 2)
    ctx->pc = 0x12E348u;
    {
        const bool branch_taken_0x12e348 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E348u;
            // 0x12e34c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e348) {
            ctx->pc = 0x12EE00u;
            goto label_12ee00;
        }
    }
    ctx->pc = 0x12E350u;
    // 0x12e350: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e354: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E354u;
    SET_GPR_U32(ctx, 31, 0x12E35Cu);
    ctx->pc = 0x12E358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E354u;
            // 0x12e358: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E35Cu; }
        if (ctx->pc != 0x12E35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E35Cu; }
        if (ctx->pc != 0x12E35Cu) { return; }
    }
    ctx->pc = 0x12E35Cu;
label_12e35c:
    // 0x12e35c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12E35Cu;
    {
        const bool branch_taken_0x12e35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E35Cu;
            // 0x12e360: 0x93ad0000  lbu         $t5, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e35c) {
            ctx->pc = 0x12E3BCu;
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E364u;
    // 0x12e364: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x12e364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12e368:
    // 0x12e368: 0xd7e00  sll         $t7, $t5, 24
    ctx->pc = 0x12e368u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x12e36c: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x12e36cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x12e370: 0x11e00289  beqz        $t7, . + 4 + (0x289 << 2)
    ctx->pc = 0x12E370u;
    {
        const bool branch_taken_0x12e370 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E370u;
            // 0x12e374: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e370) {
            ctx->pc = 0x12ED98u;
            goto label_12ed98;
        }
    }
    ctx->pc = 0x12E378u;
    // 0x12e378: 0xae9d0000  sw          $sp, 0x0($s4)
    ctx->pc = 0x12e378u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 29));
    // 0x12e37c: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12e380: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e380u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e384: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e388: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e388u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e38c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e38cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e390: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12e390u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12e394: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e398: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e398u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e39c: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12E39Cu;
    {
        const bool branch_taken_0x12e39c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E39Cu;
            // 0x12e3a0: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e39c) {
            ctx->pc = 0x12E3D8u;
            goto label_12e3d8;
        }
    }
    ctx->pc = 0x12E3A4u;
    // 0x12e3a4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e3a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e3ac: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E3ACu;
    SET_GPR_U32(ctx, 31, 0x12E3B4u);
    ctx->pc = 0x12E3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3ACu;
            // 0x12e3b0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3B4u; }
        if (ctx->pc != 0x12E3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3B4u; }
        if (ctx->pc != 0x12E3B4u) { return; }
    }
    ctx->pc = 0x12E3B4u;
label_12e3b4:
    // 0x12e3b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E3B4u;
    {
        const bool branch_taken_0x12e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e3b4) {
            ctx->pc = 0x12E3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3B4u;
            // 0x12e3b8: 0x8fae0224  lw          $t6, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E3DCu;
            goto label_12e3dc;
        }
    }
    ctx->pc = 0x12E3BCu;
label_12e3bc:
    // 0x12e3bc: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x12e3bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12e3c0:
    // 0x12e3c0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12e3c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e3c4: 0x95af000c  lhu         $t7, 0xC($t5)
    ctx->pc = 0x12e3c4u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x12e3c8: 0x8fad0200  lw          $t5, 0x200($sp)
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12e3cc: 0x31ef0040  andi        $t7, $t7, 0x40
    ctx->pc = 0x12e3ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)64);
    // 0x12e3d0: 0x1000feea  b           . + 4 + (-0x116 << 2)
    ctx->pc = 0x12E3D0u;
    {
        const bool branch_taken_0x12e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3D0u;
            // 0x12e3d4: 0x1af700a  movz        $t6, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3d0) {
            ctx->pc = 0x12DF7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12df7c;
        }
    }
    ctx->pc = 0x12E3D8u;
label_12e3d8:
    // 0x12e3d8: 0x8fae0224  lw          $t6, 0x224($sp)
    ctx->pc = 0x12e3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_12e3dc:
    // 0x12e3dc: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x12e3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12e3e0: 0x15cf0030  bne         $t6, $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x12E3E0u;
    {
        const bool branch_taken_0x12e3e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12E3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3E0u;
            // 0x12e3e4: 0x8fad021c  lw          $t5, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3e0) {
            ctx->pc = 0x12E4A4u;
            goto label_12e4a4;
        }
    }
    ctx->pc = 0x12E3E8u;
    // 0x12e3e8: 0x8faf0204  lw          $t7, 0x204($sp)
    ctx->pc = 0x12e3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12e3ec: 0x1f78023  subu        $s0, $t7, $s7
    ctx->pc = 0x12e3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
    // 0x12e3f0: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12E3F0u;
    {
        const bool branch_taken_0x12e3f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3F0u;
            // 0x12e3f4: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3f0) {
            ctx->pc = 0x12E4A4u;
            goto label_12e4a4;
        }
    }
    ctx->pc = 0x12E3F8u;
    // 0x12e3f8: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12E3F8u;
    {
        const bool branch_taken_0x12e3f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3F8u;
            // 0x12e3fc: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3f8) {
            ctx->pc = 0x12E45Cu;
            goto label_12e45c;
        }
    }
    ctx->pc = 0x12E400u;
    // 0x12e400: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e404: 0x25f10b78  addiu       $s1, $t7, 0xB78
    ctx->pc = 0x12e404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e408: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12e408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12e40c:
    // 0x12e40c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12e410: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e410u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e414: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e414u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e418: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e41c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e41cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e420: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12e420u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12e424: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e428: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e428u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e42c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E42Cu;
    {
        const bool branch_taken_0x12e42c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E42Cu;
            // 0x12e430: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e42c) {
            ctx->pc = 0x12E448u;
            goto label_12e448;
        }
    }
    ctx->pc = 0x12E434u;
    // 0x12e434: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e438: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E438u;
    SET_GPR_U32(ctx, 31, 0x12E440u);
    ctx->pc = 0x12E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E438u;
            // 0x12e43c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E440u; }
        if (ctx->pc != 0x12E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E440u; }
        if (ctx->pc != 0x12E440u) { return; }
    }
    ctx->pc = 0x12E440u;
label_12e440:
    // 0x12e440: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x12E440u;
    {
        const bool branch_taken_0x12e440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E440u;
            // 0x12e444: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e440) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E448u;
label_12e448:
    // 0x12e448: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12e448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12e44c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12e44cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12e450: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E450u;
    {
        const bool branch_taken_0x12e450 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e450) {
            ctx->pc = 0x12E454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E450u;
            // 0x12e454: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e40c;
        }
    }
    ctx->pc = 0x12E458u;
    // 0x12e458: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e458u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12e45c:
    // 0x12e45c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e460: 0x25ef0b78  addiu       $t7, $t7, 0xB78
    ctx->pc = 0x12e460u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e464: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e468: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e468u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e46c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e46cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e470: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12e470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12e474: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e474u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e478: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e47c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e480: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e480u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e484: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E484u;
    {
        const bool branch_taken_0x12e484 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E484u;
            // 0x12e488: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e484) {
            ctx->pc = 0x12E4A0u;
            goto label_12e4a0;
        }
    }
    ctx->pc = 0x12E48Cu;
    // 0x12e48c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e490: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E490u;
    SET_GPR_U32(ctx, 31, 0x12E498u);
    ctx->pc = 0x12E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E490u;
            // 0x12e494: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E498u; }
        if (ctx->pc != 0x12E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E498u; }
        if (ctx->pc != 0x12E498u) { return; }
    }
    ctx->pc = 0x12E498u;
label_12e498:
    // 0x12e498: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x12E498u;
    {
        const bool branch_taken_0x12e498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E498u;
            // 0x12e49c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e498) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E4A0u;
label_12e4a0:
    // 0x12e4a0: 0x8fad021c  lw          $t5, 0x21C($sp)
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_12e4a4:
    // 0x12e4a4: 0x1be8023  subu        $s0, $t5, $fp
    ctx->pc = 0x12e4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 30)));
    // 0x12e4a8: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12E4A8u;
    {
        const bool branch_taken_0x12e4a8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4A8u;
            // 0x12e4ac: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4a8) {
            ctx->pc = 0x12E558u;
            goto label_12e558;
        }
    }
    ctx->pc = 0x12E4B0u;
    // 0x12e4b0: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12E4B0u;
    {
        const bool branch_taken_0x12e4b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4B0u;
            // 0x12e4b4: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4b0) {
            ctx->pc = 0x12E514u;
            goto label_12e514;
        }
    }
    ctx->pc = 0x12E4B8u;
    // 0x12e4b8: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12e4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e4bc: 0x25f10b78  addiu       $s1, $t7, 0xB78
    ctx->pc = 0x12e4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e4c0: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12e4c4:
    // 0x12e4c4: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12e4c8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e4c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e4cc: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e4d0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e4d4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e4d8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12e4dc: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e4e0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e4e0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e4e4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E4E4u;
    {
        const bool branch_taken_0x12e4e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4E4u;
            // 0x12e4e8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4e4) {
            ctx->pc = 0x12E500u;
            goto label_12e500;
        }
    }
    ctx->pc = 0x12E4ECu;
    // 0x12e4ec: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e4f0: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E4F0u;
    SET_GPR_U32(ctx, 31, 0x12E4F8u);
    ctx->pc = 0x12E4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4F0u;
            // 0x12e4f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4F8u; }
        if (ctx->pc != 0x12E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4F8u; }
        if (ctx->pc != 0x12E4F8u) { return; }
    }
    ctx->pc = 0x12E4F8u;
label_12e4f8:
    // 0x12e4f8: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x12E4F8u;
    {
        const bool branch_taken_0x12e4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4F8u;
            // 0x12e4fc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4f8) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E500u;
label_12e500:
    // 0x12e500: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12e500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12e504: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12e504u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12e508: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E508u;
    {
        const bool branch_taken_0x12e508 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e508) {
            ctx->pc = 0x12E50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E508u;
            // 0x12e50c: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E4C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e4c4;
        }
    }
    ctx->pc = 0x12E510u;
    // 0x12e510: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12e514:
    // 0x12e514: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e518: 0x25ef0b78  addiu       $t7, $t7, 0xB78
    ctx->pc = 0x12e518u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e51c: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e520: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e520u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e524: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e524u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e528: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12e528u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12e52c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e52cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e530: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e534: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e538: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e538u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e53c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E53Cu;
    {
        const bool branch_taken_0x12e53c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E53Cu;
            // 0x12e540: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e53c) {
            ctx->pc = 0x12E558u;
            goto label_12e558;
        }
    }
    ctx->pc = 0x12E544u;
    // 0x12e544: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e548: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E548u;
    SET_GPR_U32(ctx, 31, 0x12E550u);
    ctx->pc = 0x12E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E548u;
            // 0x12e54c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E550u; }
        if (ctx->pc != 0x12E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E550u; }
        if (ctx->pc != 0x12E550u) { return; }
    }
    ctx->pc = 0x12E550u;
label_12e550:
    // 0x12e550: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x12E550u;
    {
        const bool branch_taken_0x12e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E550u;
            // 0x12e554: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e550) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E558u;
label_12e558:
    // 0x12e558: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12e558u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e55c: 0x31cf0100  andi        $t7, $t6, 0x100
    ctx->pc = 0x12e55cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)256);
    // 0x12e560: 0x15e00054  bnez        $t7, . + 4 + (0x54 << 2)
    ctx->pc = 0x12E560u;
    {
        const bool branch_taken_0x12e560 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E560u;
            // 0x12e564: 0x2a6f0066  slti        $t7, $s3, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)102) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e560) {
            ctx->pc = 0x12E6B4u;
            goto label_12e6b4;
        }
    }
    ctx->pc = 0x12E568u;
    // 0x12e568: 0xae9e0004  sw          $fp, 0x4($s4)
    ctx->pc = 0x12e568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
    // 0x12e56c: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12e570: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e574: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e578: 0x1de7021  addu        $t6, $t6, $fp
    ctx->pc = 0x12e578u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
label_12e57c:
    // 0x12e57c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e580: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e584: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e584u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12e588:
    // 0x12e588: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e58c: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e58cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e590: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E590u;
    {
        const bool branch_taken_0x12e590 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E590u;
            // 0x12e594: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e590) {
            ctx->pc = 0x12E5B4u;
            goto label_12e5b4;
        }
    }
    ctx->pc = 0x12E598u;
    // 0x12e598: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e59c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e5a0: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E5A0u;
    SET_GPR_U32(ctx, 31, 0x12E5A8u);
    ctx->pc = 0x12E5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5A0u;
            // 0x12e5a4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5A8u; }
        if (ctx->pc != 0x12E5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5A8u; }
        if (ctx->pc != 0x12E5A8u) { return; }
    }
    ctx->pc = 0x12E5A8u;
label_12e5a8:
    // 0x12e5a8: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x12E5A8u;
    {
        const bool branch_taken_0x12e5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5A8u;
            // 0x12e5ac: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5a8) {
            ctx->pc = 0x12E3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12E5B0u;
label_12e5b0:
    // 0x12e5b0: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12e5b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_12e5b4:
    // 0x12e5b4: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x12e5b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x12e5b8: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x12E5B8u;
    {
        const bool branch_taken_0x12e5b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5B8u;
            // 0x12e5bc: 0x8faf0204  lw          $t7, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5b8) {
            ctx->pc = 0x12E674u;
            goto label_12e674;
        }
    }
    ctx->pc = 0x12E5C0u;
    // 0x12e5c0: 0x1f78023  subu        $s0, $t7, $s7
    ctx->pc = 0x12e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
    // 0x12e5c4: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12E5C4u;
    {
        const bool branch_taken_0x12e5c4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5C4u;
            // 0x12e5c8: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5c4) {
            ctx->pc = 0x12E674u;
            goto label_12e674;
        }
    }
    ctx->pc = 0x12E5CCu;
    // 0x12e5cc: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E5CCu;
    {
        const bool branch_taken_0x12e5cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e5cc) {
            ctx->pc = 0x12E5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5CCu;
            // 0x12e5d0: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E634u;
            goto label_12e634;
        }
    }
    ctx->pc = 0x12E5D4u;
    // 0x12e5d4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12e5d8: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12e5d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e5dc: 0x25f10b68  addiu       $s1, $t7, 0xB68
    ctx->pc = 0x12e5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2920));
    // 0x12e5e0: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12e5e4:
    // 0x12e5e4: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12e5e8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e5e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e5ec: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e5ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5f0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e5f4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e5f8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12e5f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12e5fc: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e600: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e600u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e604: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E604u;
    {
        const bool branch_taken_0x12e604 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E604u;
            // 0x12e608: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e604) {
            ctx->pc = 0x12E620u;
            goto label_12e620;
        }
    }
    ctx->pc = 0x12E60Cu;
    // 0x12e60c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e610: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E610u;
    SET_GPR_U32(ctx, 31, 0x12E618u);
    ctx->pc = 0x12E614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E610u;
            // 0x12e614: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E618u; }
        if (ctx->pc != 0x12E618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E618u; }
        if (ctx->pc != 0x12E618u) { return; }
    }
    ctx->pc = 0x12E618u;
label_12e618:
    // 0x12e618: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x12E618u;
    {
        const bool branch_taken_0x12e618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E618u;
            // 0x12e61c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e618) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E620u;
label_12e620:
    // 0x12e620: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12e620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12e624: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12e624u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12e628: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E628u;
    {
        const bool branch_taken_0x12e628 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e628) {
            ctx->pc = 0x12E62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E628u;
            // 0x12e62c: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E5E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e5e4;
        }
    }
    ctx->pc = 0x12E630u;
    // 0x12e630: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e630u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_12e634:
    // 0x12e634: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12e634u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x12e638: 0x25ce0b68  addiu       $t6, $t6, 0xB68
    ctx->pc = 0x12e638u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2920));
    // 0x12e63c: 0x8fad0024  lw          $t5, 0x24($sp)
    ctx->pc = 0x12e63cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e640: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12e640u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e644: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12e644u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12e648: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x12e648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x12e64c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12e64cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x12e650: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x12e650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x12e654: 0x29ad0008  slti        $t5, $t5, 0x8
    ctx->pc = 0x12e654u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e658: 0x15a00006  bnez        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E658u;
    {
        const bool branch_taken_0x12e658 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E658u;
            // 0x12e65c: 0xafaf0028  sw          $t7, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e658) {
            ctx->pc = 0x12E674u;
            goto label_12e674;
        }
    }
    ctx->pc = 0x12E660u;
    // 0x12e660: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e664: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E664u;
    SET_GPR_U32(ctx, 31, 0x12E66Cu);
    ctx->pc = 0x12E668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E664u;
            // 0x12e668: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E66Cu; }
        if (ctx->pc != 0x12E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E66Cu; }
        if (ctx->pc != 0x12E66Cu) { return; }
    }
    ctx->pc = 0x12E66Cu;
label_12e66c:
    // 0x12e66c: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x12E66Cu;
    {
        const bool branch_taken_0x12e66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E66Cu;
            // 0x12e670: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e66c) {
            ctx->pc = 0x12E3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12E674u;
label_12e674:
    // 0x12e674: 0x8fad0204  lw          $t5, 0x204($sp)
    ctx->pc = 0x12e674u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12e678: 0x8fae0200  lw          $t6, 0x200($sp)
    ctx->pc = 0x12e678u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12e67c: 0x2ed782a  slt         $t7, $s7, $t5
    ctx->pc = 0x12e67cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12e680: 0x2ef680a  movz        $t5, $s7, $t7
    ctx->pc = 0x12e680u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 23));
    // 0x12e684: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x12e684u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x12e688: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12e688u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e68c: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E68Cu;
    {
        const bool branch_taken_0x12e68c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E68Cu;
            // 0x12e690: 0xafae0200  sw          $t6, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e68c) {
            ctx->pc = 0x12E6A8u;
            goto label_12e6a8;
        }
    }
    ctx->pc = 0x12E694u;
    // 0x12e694: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e698: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E698u;
    SET_GPR_U32(ctx, 31, 0x12E6A0u);
    ctx->pc = 0x12E69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E698u;
            // 0x12e69c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6A0u; }
        if (ctx->pc != 0x12E6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6A0u; }
        if (ctx->pc != 0x12E6A0u) { return; }
    }
    ctx->pc = 0x12E6A0u;
label_12e6a0:
    // 0x12e6a0: 0x1440ff47  bnez        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x12E6A0u;
    {
        const bool branch_taken_0x12e6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6A0u;
            // 0x12e6a4: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6a0) {
            ctx->pc = 0x12E3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12E6A8u;
label_12e6a8:
    // 0x12e6a8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x12e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x12e6ac: 0x1000fe45  b           . + 4 + (-0x1BB << 2)
    ctx->pc = 0x12E6ACu;
    {
        const bool branch_taken_0x12e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6ACu;
            // 0x12e6b0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6ac) {
            ctx->pc = 0x12DFC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dfc4;
        }
    }
    ctx->pc = 0x12E6B4u;
label_12e6b4:
    // 0x12e6b4: 0x15e00131  bnez        $t7, . + 4 + (0x131 << 2)
    ctx->pc = 0x12E6B4u;
    {
        const bool branch_taken_0x12e6b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6B4u;
            // 0x12e6b8: 0x8faf01ec  lw          $t7, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6b4) {
            ctx->pc = 0x12EB7Cu;
            goto label_12eb7c;
        }
    }
    ctx->pc = 0x12E6BCu;
    // 0x12e6bc: 0xdfa40210  ld          $a0, 0x210($sp)
    ctx->pc = 0x12e6bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12e6c0: 0xc049760  jal         func_125D80
    ctx->pc = 0x12E6C0u;
    SET_GPR_U32(ctx, 31, 0x12E6C8u);
    ctx->pc = 0x12E6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6C0u;
            // 0x12e6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6C8u; }
        if (ctx->pc != 0x12E6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6C8u; }
        if (ctx->pc != 0x12E6C8u) { return; }
    }
    ctx->pc = 0x12E6C8u;
label_12e6c8:
    // 0x12e6c8: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x12E6C8u;
    {
        const bool branch_taken_0x12e6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e6c8) {
            ctx->pc = 0x12E6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6C8u;
            // 0x12e6cc: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E81Cu;
            goto label_12e81c;
        }
    }
    ctx->pc = 0x12E6D0u;
    // 0x12e6d0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12e6d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12e6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e6d8: 0x25ef0ba8  addiu       $t7, $t7, 0xBA8
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2984));
    // 0x12e6dc: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e6e0: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e6e4: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e6e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6e8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e6ec: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12e6f0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e6f4: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e6f8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e6fc: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e6fcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e700: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E700u;
    {
        const bool branch_taken_0x12e700 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E700u;
            // 0x12e704: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e700) {
            ctx->pc = 0x12E71Cu;
            goto label_12e71c;
        }
    }
    ctx->pc = 0x12E708u;
    // 0x12e708: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e70c: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E70Cu;
    SET_GPR_U32(ctx, 31, 0x12E714u);
    ctx->pc = 0x12E710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E70Cu;
            // 0x12e710: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E714u; }
        if (ctx->pc != 0x12E714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E714u; }
        if (ctx->pc != 0x12E714u) { return; }
    }
    ctx->pc = 0x12E714u;
label_12e714:
    // 0x12e714: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x12E714u;
    {
        const bool branch_taken_0x12e714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E714u;
            // 0x12e718: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e714) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E71Cu;
label_12e71c:
    // 0x12e71c: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12e71cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12e720: 0x8fae01ec  lw          $t6, 0x1EC($sp)
    ctx->pc = 0x12e720u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12e724: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12e728: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E728u;
    {
        const bool branch_taken_0x12e728 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E728u;
            // 0x12e72c: 0x8fae0208  lw          $t6, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e728) {
            ctx->pc = 0x12E740u;
            goto label_12e740;
        }
    }
    ctx->pc = 0x12E730u;
    // 0x12e730: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12e734: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12e734u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12e738: 0x51e0ff9e  beql        $t7, $zero, . + 4 + (-0x62 << 2)
    ctx->pc = 0x12E738u;
    {
        const bool branch_taken_0x12e738 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e738) {
            ctx->pc = 0x12E73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E738u;
            // 0x12e73c: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E5B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e5b4;
        }
    }
    ctx->pc = 0x12E740u;
label_12e740:
    // 0x12e740: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e744: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x12e744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x12e748: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e748u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e74c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e74cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e750: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e754: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e758: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12e758u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12e75c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e760: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e760u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e764: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E764u;
    {
        const bool branch_taken_0x12e764 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E764u;
            // 0x12e768: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e764) {
            ctx->pc = 0x12E780u;
            goto label_12e780;
        }
    }
    ctx->pc = 0x12E76Cu;
    // 0x12e76c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e770: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E770u;
    SET_GPR_U32(ctx, 31, 0x12E778u);
    ctx->pc = 0x12E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E770u;
            // 0x12e774: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E778u; }
        if (ctx->pc != 0x12E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E778u; }
        if (ctx->pc != 0x12E778u) { return; }
    }
    ctx->pc = 0x12E778u;
label_12e778:
    // 0x12e778: 0x1440ff10  bnez        $v0, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x12E778u;
    {
        const bool branch_taken_0x12e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E778u;
            // 0x12e77c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e778) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E780u;
label_12e780:
    // 0x12e780: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12e780u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12e784: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x12e784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12e788: 0x1a00ff89  blez        $s0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x12E788u;
    {
        const bool branch_taken_0x12e788 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E788u;
            // 0x12e78c: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e788) {
            ctx->pc = 0x12E5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e5b0;
        }
    }
    ctx->pc = 0x12E790u;
    // 0x12e790: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12E790u;
    {
        const bool branch_taken_0x12e790 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E790u;
            // 0x12e794: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e790) {
            ctx->pc = 0x12E7F4u;
            goto label_12e7f4;
        }
    }
    ctx->pc = 0x12E798u;
    // 0x12e798: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12e798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e79c: 0x25f10b78  addiu       $s1, $t7, 0xB78
    ctx->pc = 0x12e79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e7a0: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12e7a4:
    // 0x12e7a4: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12e7a8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e7ac: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e7acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e7b0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e7b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e7b4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e7b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e7b8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12e7b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12e7bc: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e7c0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e7c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e7c4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E7C4u;
    {
        const bool branch_taken_0x12e7c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7C4u;
            // 0x12e7c8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7c4) {
            ctx->pc = 0x12E7E0u;
            goto label_12e7e0;
        }
    }
    ctx->pc = 0x12E7CCu;
    // 0x12e7cc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e7d0: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E7D0u;
    SET_GPR_U32(ctx, 31, 0x12E7D8u);
    ctx->pc = 0x12E7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7D0u;
            // 0x12e7d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7D8u; }
        if (ctx->pc != 0x12E7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7D8u; }
        if (ctx->pc != 0x12E7D8u) { return; }
    }
    ctx->pc = 0x12E7D8u;
label_12e7d8:
    // 0x12e7d8: 0x1440fef8  bnez        $v0, . + 4 + (-0x108 << 2)
    ctx->pc = 0x12E7D8u;
    {
        const bool branch_taken_0x12e7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7D8u;
            // 0x12e7dc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7d8) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E7E0u;
label_12e7e0:
    // 0x12e7e0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12e7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12e7e4: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12e7e4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12e7e8: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E7E8u;
    {
        const bool branch_taken_0x12e7e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e7e8) {
            ctx->pc = 0x12E7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7E8u;
            // 0x12e7ec: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e7a4;
        }
    }
    ctx->pc = 0x12E7F0u;
    // 0x12e7f0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e7f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12e7f4:
    // 0x12e7f4: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e7f8: 0x25ef0b78  addiu       $t7, $t7, 0xB78
    ctx->pc = 0x12e7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e7fc: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e800: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e804: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e804u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e808: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e80c: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12e80cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12e810: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e810u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e814: 0x1000ff5c  b           . + 4 + (-0xA4 << 2)
    ctx->pc = 0x12E814u;
    {
        const bool branch_taken_0x12e814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E814u;
            // 0x12e818: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e814) {
            ctx->pc = 0x12E588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e588;
        }
    }
    ctx->pc = 0x12E81Cu;
label_12e81c:
    // 0x12e81c: 0x1ca0005f  bgtz        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x12E81Cu;
    {
        const bool branch_taken_0x12e81c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x12E820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E81Cu;
            // 0x12e820: 0x8fae01ec  lw          $t6, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e81c) {
            ctx->pc = 0x12E99Cu;
            goto label_12e99c;
        }
    }
    ctx->pc = 0x12E824u;
    // 0x12e824: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e824u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12e828: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e82c: 0x25ef0ba8  addiu       $t7, $t7, 0xBA8
    ctx->pc = 0x12e82cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2984));
    // 0x12e830: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e834: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e834u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e838: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e838u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e83c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e83cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e840: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12e840u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12e844: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e848: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e84c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e850: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e850u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e854: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E854u;
    {
        const bool branch_taken_0x12e854 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E854u;
            // 0x12e858: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e854) {
            ctx->pc = 0x12E870u;
            goto label_12e870;
        }
    }
    ctx->pc = 0x12E85Cu;
    // 0x12e85c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e860: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E860u;
    SET_GPR_U32(ctx, 31, 0x12E868u);
    ctx->pc = 0x12E864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E860u;
            // 0x12e864: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E868u; }
        if (ctx->pc != 0x12E868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E868u; }
        if (ctx->pc != 0x12E868u) { return; }
    }
    ctx->pc = 0x12E868u;
label_12e868:
    // 0x12e868: 0x1440fed4  bnez        $v0, . + 4 + (-0x12C << 2)
    ctx->pc = 0x12E868u;
    {
        const bool branch_taken_0x12e868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E868u;
            // 0x12e86c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e868) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E870u;
label_12e870:
    // 0x12e870: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12e870u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12e874: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E874u;
    {
        const bool branch_taken_0x12e874 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E874u;
            // 0x12e878: 0x8faf0208  lw          $t7, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e874) {
            ctx->pc = 0x12E888u;
            goto label_12e888;
        }
    }
    ctx->pc = 0x12E87Cu;
    // 0x12e87c: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12e87cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12e880: 0x11e0ff4b  beqz        $t7, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x12E880u;
    {
        const bool branch_taken_0x12e880 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E880u;
            // 0x12e884: 0x8faf0208  lw          $t7, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e880) {
            ctx->pc = 0x12E5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e5b0;
        }
    }
    ctx->pc = 0x12E888u;
label_12e888:
    // 0x12e888: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e88c: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e890: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e894: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e894u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e898: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12e898u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12e89c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e89cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e8a0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e8a4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e8a8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e8a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e8ac: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E8ACu;
    {
        const bool branch_taken_0x12e8ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8ACu;
            // 0x12e8b0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8ac) {
            ctx->pc = 0x12E8C8u;
            goto label_12e8c8;
        }
    }
    ctx->pc = 0x12E8B4u;
    // 0x12e8b4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e8b8: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E8B8u;
    SET_GPR_U32(ctx, 31, 0x12E8C0u);
    ctx->pc = 0x12E8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8B8u;
            // 0x12e8bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8C0u; }
        if (ctx->pc != 0x12E8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8C0u; }
        if (ctx->pc != 0x12E8C0u) { return; }
    }
    ctx->pc = 0x12E8C0u;
label_12e8c0:
    // 0x12e8c0: 0x1440febe  bnez        $v0, . + 4 + (-0x142 << 2)
    ctx->pc = 0x12E8C0u;
    {
        const bool branch_taken_0x12e8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8C0u;
            // 0x12e8c4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8c0) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E8C8u;
label_12e8c8:
    // 0x12e8c8: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12e8c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12e8cc: 0xf8023  negu        $s0, $t7
    ctx->pc = 0x12e8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12e8d0: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12E8D0u;
    {
        const bool branch_taken_0x12e8d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8D0u;
            // 0x12e8d4: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d0) {
            ctx->pc = 0x12E980u;
            goto label_12e980;
        }
    }
    ctx->pc = 0x12E8D8u;
    // 0x12e8d8: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8D8u;
            // 0x12e8dc: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12E93Cu;
            goto label_12e93c;
        }
    }
    ctx->pc = 0x12E8E0u;
    // 0x12e8e0: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12e8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e8e4: 0x25f10b78  addiu       $s1, $t7, 0xB78
    ctx->pc = 0x12e8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e8e8: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12e8ec:
    // 0x12e8ec: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12e8f0: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e8f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e8f4: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e8f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e8f8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e8fc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e8fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e900: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12e900u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12e904: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e908: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e908u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e90c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E90Cu;
    {
        const bool branch_taken_0x12e90c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E90Cu;
            // 0x12e910: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e90c) {
            ctx->pc = 0x12E928u;
            goto label_12e928;
        }
    }
    ctx->pc = 0x12E914u;
    // 0x12e914: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e918: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E918u;
    SET_GPR_U32(ctx, 31, 0x12E920u);
    ctx->pc = 0x12E91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E918u;
            // 0x12e91c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E920u; }
        if (ctx->pc != 0x12E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E920u; }
        if (ctx->pc != 0x12E920u) { return; }
    }
    ctx->pc = 0x12E920u;
label_12e920:
    // 0x12e920: 0x1440fea6  bnez        $v0, . + 4 + (-0x15A << 2)
    ctx->pc = 0x12E920u;
    {
        const bool branch_taken_0x12e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E920u;
            // 0x12e924: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e920) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E928u;
label_12e928:
    // 0x12e928: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12e928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12e92c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12e92cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12e930: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E930u;
    {
        const bool branch_taken_0x12e930 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e930) {
            ctx->pc = 0x12E934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E930u;
            // 0x12e934: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E8ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e8ec;
        }
    }
    ctx->pc = 0x12E938u;
    // 0x12e938: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12e938u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12e93c:
    // 0x12e93c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12e940: 0x25ef0b78  addiu       $t7, $t7, 0xB78
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12e944: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12e944u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12e948: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e948u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e94c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e94cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e950: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12e954: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e958: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12e958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12e95c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e960: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e960u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e964: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E964u;
    {
        const bool branch_taken_0x12e964 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E964u;
            // 0x12e968: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e964) {
            ctx->pc = 0x12E980u;
            goto label_12e980;
        }
    }
    ctx->pc = 0x12E96Cu;
    // 0x12e96c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e970: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E970u;
    SET_GPR_U32(ctx, 31, 0x12E978u);
    ctx->pc = 0x12E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E970u;
            // 0x12e974: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E978u; }
        if (ctx->pc != 0x12E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E978u; }
        if (ctx->pc != 0x12E978u) { return; }
    }
    ctx->pc = 0x12E978u;
label_12e978:
    // 0x12e978: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x12E978u;
    {
        const bool branch_taken_0x12e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E978u;
            // 0x12e97c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e978) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E980u;
label_12e980:
    // 0x12e980: 0x8fad01ec  lw          $t5, 0x1EC($sp)
    ctx->pc = 0x12e980u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12e984: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12e984u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
label_12e988:
    // 0x12e988: 0xae8d0004  sw          $t5, 0x4($s4)
    ctx->pc = 0x12e988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 13));
    // 0x12e98c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e98cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e990: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e994: 0x1000fef9  b           . + 4 + (-0x107 << 2)
    ctx->pc = 0x12E994u;
    {
        const bool branch_taken_0x12e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E994u;
            // 0x12e998: 0x1cd7021  addu        $t6, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e994) {
            ctx->pc = 0x12E57Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e57c;
        }
    }
    ctx->pc = 0x12E99Cu;
label_12e99c:
    // 0x12e99c: 0xae782a  slt         $t7, $a1, $t6
    ctx->pc = 0x12e99cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12e9a0: 0x55e0004d  bnel        $t7, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x12E9A0u;
    {
        const bool branch_taken_0x12e9a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e9a0) {
            ctx->pc = 0x12E9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9A0u;
            // 0x12e9a4: 0xae850004  sw          $a1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EAD8u;
            goto label_12ead8;
        }
    }
    ctx->pc = 0x12E9A8u;
    // 0x12e9a8: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12e9ac: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x12e9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9b0: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12e9b4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e9b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e9b8: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12e9b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e9bc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12e9bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12e9c0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e9c4: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x12e9c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x12e9c8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12e9cc: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12e9ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12e9d0: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E9D0u;
    {
        const bool branch_taken_0x12e9d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9D0u;
            // 0x12e9d4: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9d0) {
            ctx->pc = 0x12E9F0u;
            goto label_12e9f0;
        }
    }
    ctx->pc = 0x12E9D8u;
    // 0x12e9d8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12e9dc: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12E9DCu;
    SET_GPR_U32(ctx, 31, 0x12E9E4u);
    ctx->pc = 0x12E9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9DCu;
            // 0x12e9e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E9E4u; }
        if (ctx->pc != 0x12E9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E9E4u; }
        if (ctx->pc != 0x12E9E4u) { return; }
    }
    ctx->pc = 0x12E9E4u;
label_12e9e4:
    // 0x12e9e4: 0x1440fe75  bnez        $v0, . + 4 + (-0x18B << 2)
    ctx->pc = 0x12E9E4u;
    {
        const bool branch_taken_0x12e9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9E4u;
            // 0x12e9e8: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9e4) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12E9ECu;
    // 0x12e9ec: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x12e9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12e9f0:
    // 0x12e9f0: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12e9f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12e9f4: 0x1e28023  subu        $s0, $t7, $v0
    ctx->pc = 0x12e9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12e9f8: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12E9F8u;
    {
        const bool branch_taken_0x12e9f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9F8u;
            // 0x12e9fc: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9f8) {
            ctx->pc = 0x12EAA8u;
            goto label_12eaa8;
        }
    }
    ctx->pc = 0x12EA00u;
    // 0x12ea00: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12EA00u;
    {
        const bool branch_taken_0x12ea00 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA00u;
            // 0x12ea04: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea00) {
            ctx->pc = 0x12EA64u;
            goto label_12ea64;
        }
    }
    ctx->pc = 0x12EA08u;
    // 0x12ea08: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12ea08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ea0c: 0x25f10b78  addiu       $s1, $t7, 0xB78
    ctx->pc = 0x12ea0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12ea10: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12ea14:
    // 0x12ea14: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12ea18: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ea18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ea1c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ea1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ea20: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ea20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ea24: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ea24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ea28: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12ea2c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ea30: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ea30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ea34: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EA34u;
    {
        const bool branch_taken_0x12ea34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA34u;
            // 0x12ea38: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea34) {
            ctx->pc = 0x12EA50u;
            goto label_12ea50;
        }
    }
    ctx->pc = 0x12EA3Cu;
    // 0x12ea3c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ea40: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EA40u;
    SET_GPR_U32(ctx, 31, 0x12EA48u);
    ctx->pc = 0x12EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA40u;
            // 0x12ea44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA48u; }
        if (ctx->pc != 0x12EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA48u; }
        if (ctx->pc != 0x12EA48u) { return; }
    }
    ctx->pc = 0x12EA48u;
label_12ea48:
    // 0x12ea48: 0x1440fe5c  bnez        $v0, . + 4 + (-0x1A4 << 2)
    ctx->pc = 0x12EA48u;
    {
        const bool branch_taken_0x12ea48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA48u;
            // 0x12ea4c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea48) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12EA50u;
label_12ea50:
    // 0x12ea50: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12ea50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12ea54: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12ea54u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12ea58: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12EA58u;
    {
        const bool branch_taken_0x12ea58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea58) {
            ctx->pc = 0x12EA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA58u;
            // 0x12ea5c: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EA14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ea14;
        }
    }
    ctx->pc = 0x12EA60u;
    // 0x12ea60: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12ea64:
    // 0x12ea64: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12ea68: 0x25ef0b78  addiu       $t7, $t7, 0xB78
    ctx->pc = 0x12ea68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12ea6c: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12ea70: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ea70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ea74: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ea74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ea78: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12ea78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12ea7c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ea7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ea80: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12ea84: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ea88: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ea88u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ea8c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EA8Cu;
    {
        const bool branch_taken_0x12ea8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA8Cu;
            // 0x12ea90: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea8c) {
            ctx->pc = 0x12EAA8u;
            goto label_12eaa8;
        }
    }
    ctx->pc = 0x12EA94u;
    // 0x12ea94: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ea98: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EA98u;
    SET_GPR_U32(ctx, 31, 0x12EAA0u);
    ctx->pc = 0x12EA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA98u;
            // 0x12ea9c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAA0u; }
        if (ctx->pc != 0x12EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAA0u; }
        if (ctx->pc != 0x12EAA0u) { return; }
    }
    ctx->pc = 0x12EAA0u;
label_12eaa0:
    // 0x12eaa0: 0x1440fe46  bnez        $v0, . + 4 + (-0x1BA << 2)
    ctx->pc = 0x12EAA0u;
    {
        const bool branch_taken_0x12eaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAA0u;
            // 0x12eaa4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eaa0) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12EAA8u;
label_12eaa8:
    // 0x12eaa8: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12eaa8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12eaac: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12eaacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12eab0: 0x11e0febf  beqz        $t7, . + 4 + (-0x141 << 2)
    ctx->pc = 0x12EAB0u;
    {
        const bool branch_taken_0x12eab0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAB0u;
            // 0x12eab4: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eab0) {
            ctx->pc = 0x12E5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e5b0;
        }
    }
    ctx->pc = 0x12EAB8u;
    // 0x12eab8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12eab8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12eabc: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12eac0: 0x25ef0bb0  addiu       $t7, $t7, 0xBB0
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2992));
    // 0x12eac4: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12eac8: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12eac8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eacc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12eaccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ead0: 0x1000feaa  b           . + 4 + (-0x156 << 2)
    ctx->pc = 0x12EAD0u;
    {
        const bool branch_taken_0x12ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAD0u;
            // 0x12ead4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ead0) {
            ctx->pc = 0x12E57Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e57c;
        }
    }
    ctx->pc = 0x12EAD8u;
label_12ead8:
    // 0x12ead8: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12eadc: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12eadcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12eae0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12eae0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eae4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12eae4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12eae8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12eae8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12eaec: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12eaecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12eaf0: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12eaf4: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12eaf8: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EAF8u;
    {
        const bool branch_taken_0x12eaf8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAF8u;
            // 0x12eafc: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eaf8) {
            ctx->pc = 0x12EB18u;
            goto label_12eb18;
        }
    }
    ctx->pc = 0x12EB00u;
    // 0x12eb00: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12eb04: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EB04u;
    SET_GPR_U32(ctx, 31, 0x12EB0Cu);
    ctx->pc = 0x12EB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB04u;
            // 0x12eb08: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB0Cu; }
        if (ctx->pc != 0x12EB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB0Cu; }
        if (ctx->pc != 0x12EB0Cu) { return; }
    }
    ctx->pc = 0x12EB0Cu;
label_12eb0c:
    // 0x12eb0c: 0x1440fe2b  bnez        $v0, . + 4 + (-0x1D5 << 2)
    ctx->pc = 0x12EB0Cu;
    {
        const bool branch_taken_0x12eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB0Cu;
            // 0x12eb10: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb0c) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12EB14u;
    // 0x12eb14: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12eb18:
    // 0x12eb18: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12eb18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12eb1c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12eb1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb20: 0x25ef0bb0  addiu       $t7, $t7, 0xBB0
    ctx->pc = 0x12eb20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2992));
    // 0x12eb24: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12eb28: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12eb2c: 0x2c5b021  addu        $s6, $s6, $a1
    ctx->pc = 0x12eb2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x12eb30: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12eb30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eb34: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12eb34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12eb38: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12eb38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12eb3c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12eb3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12eb40: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12eb44: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12eb48: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12eb48u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12eb4c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EB4Cu;
    {
        const bool branch_taken_0x12eb4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB4Cu;
            // 0x12eb50: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb4c) {
            ctx->pc = 0x12EB68u;
            goto label_12eb68;
        }
    }
    ctx->pc = 0x12EB54u;
    // 0x12eb54: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12eb58: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EB58u;
    SET_GPR_U32(ctx, 31, 0x12EB60u);
    ctx->pc = 0x12EB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB58u;
            // 0x12eb5c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB60u; }
        if (ctx->pc != 0x12EB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB60u; }
        if (ctx->pc != 0x12EB60u) { return; }
    }
    ctx->pc = 0x12EB60u;
label_12eb60:
    // 0x12eb60: 0x1440fe16  bnez        $v0, . + 4 + (-0x1EA << 2)
    ctx->pc = 0x12EB60u;
    {
        const bool branch_taken_0x12eb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB60u;
            // 0x12eb64: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb60) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12EB68u;
label_12eb68:
    // 0x12eb68: 0x8fad01ec  lw          $t5, 0x1EC($sp)
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12eb6c: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12eb70: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12eb74: 0x1000ff84  b           . + 4 + (-0x7C << 2)
    ctx->pc = 0x12EB74u;
    {
        const bool branch_taken_0x12eb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB74u;
            // 0x12eb78: 0x1af6823  subu        $t5, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb74) {
            ctx->pc = 0x12E988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e988;
        }
    }
    ctx->pc = 0x12EB7Cu;
label_12eb7c:
    // 0x12eb7c: 0x29ef0002  slti        $t7, $t7, 0x2
    ctx->pc = 0x12eb7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12eb80: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EB80u;
    {
        const bool branch_taken_0x12eb80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB80u;
            // 0x12eb84: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb80) {
            ctx->pc = 0x12EB94u;
            goto label_12eb94;
        }
    }
    ctx->pc = 0x12EB88u;
    // 0x12eb88: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12eb88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12eb8c: 0x11e00070  beqz        $t7, . + 4 + (0x70 << 2)
    ctx->pc = 0x12EB8Cu;
    {
        const bool branch_taken_0x12eb8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB8Cu;
            // 0x12eb90: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb8c) {
            ctx->pc = 0x12ED50u;
            goto label_12ed50;
        }
    }
    ctx->pc = 0x12EB94u;
label_12eb94:
    // 0x12eb94: 0x92cf0000  lbu         $t7, 0x0($s6)
    ctx->pc = 0x12eb94u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12eb98: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12eb98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12eb9c: 0xa3af01d0  sb          $t7, 0x1D0($sp)
    ctx->pc = 0x12eb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 15));
    // 0x12eba0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12eba0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12eba4: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x12eba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x12eba8: 0xa3af01d1  sb          $t7, 0x1D1($sp)
    ctx->pc = 0x12eba8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 15));
    // 0x12ebac: 0x27af01d0  addiu       $t7, $sp, 0x1D0
    ctx->pc = 0x12ebacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12ebb0: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12ebb4: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12ebb8: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ebbc: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ebbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ebc0: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x12ebc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x12ebc4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ebc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ebc8: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12ebcc: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ebd0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ebd0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ebd4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EBD4u;
    {
        const bool branch_taken_0x12ebd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBD4u;
            // 0x12ebd8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebd4) {
            ctx->pc = 0x12EBF0u;
            goto label_12ebf0;
        }
    }
    ctx->pc = 0x12EBDCu;
    // 0x12ebdc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ebe0: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EBE0u;
    SET_GPR_U32(ctx, 31, 0x12EBE8u);
    ctx->pc = 0x12EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBE0u;
            // 0x12ebe4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBE8u; }
        if (ctx->pc != 0x12EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBE8u; }
        if (ctx->pc != 0x12EBE8u) { return; }
    }
    ctx->pc = 0x12EBE8u;
label_12ebe8:
    // 0x12ebe8: 0x1440fdf4  bnez        $v0, . + 4 + (-0x20C << 2)
    ctx->pc = 0x12EBE8u;
    {
        const bool branch_taken_0x12ebe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBE8u;
            // 0x12ebec: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebe8) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12EBF0u;
label_12ebf0:
    // 0x12ebf0: 0xdfa40210  ld          $a0, 0x210($sp)
    ctx->pc = 0x12ebf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12ebf4: 0xc049760  jal         func_125D80
    ctx->pc = 0x12EBF4u;
    SET_GPR_U32(ctx, 31, 0x12EBFCu);
    ctx->pc = 0x12EBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBF4u;
            // 0x12ebf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBFCu; }
        if (ctx->pc != 0x12EBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBFCu; }
        if (ctx->pc != 0x12EBFCu) { return; }
    }
    ctx->pc = 0x12EBFCu;
label_12ebfc:
    // 0x12ebfc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12EBFCu;
    {
        const bool branch_taken_0x12ebfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBFCu;
            // 0x12ec00: 0x8fad01ec  lw          $t5, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebfc) {
            ctx->pc = 0x12ECA4u;
            goto label_12eca4;
        }
    }
    ctx->pc = 0x12EC04u;
    // 0x12ec04: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12ec08: 0x25afffff  addiu       $t7, $t5, -0x1
    ctx->pc = 0x12ec08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x12ec0c: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12ec10: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12ec10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ec14: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ec14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ec18: 0x8fae0024  lw          $t6, 0x24($sp)
    ctx->pc = 0x12ec18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ec1c: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12ec1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12ec20: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12ec20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12ec24: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12ec24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12ec28: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x12ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x12ec2c: 0x29cd0008  slti        $t5, $t6, 0x8
    ctx->pc = 0x12ec2cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ec30: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EC30u;
    {
        const bool branch_taken_0x12ec30 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC30u;
            // 0x12ec34: 0xafae0024  sw          $t6, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec30) {
            ctx->pc = 0x12EC50u;
            goto label_12ec50;
        }
    }
    ctx->pc = 0x12EC38u;
    // 0x12ec38: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12ec3c:
    // 0x12ec3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ec40: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EC40u;
    SET_GPR_U32(ctx, 31, 0x12EC48u);
    ctx->pc = 0x12EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC40u;
            // 0x12ec44: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC48u; }
        if (ctx->pc != 0x12EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC48u; }
        if (ctx->pc != 0x12EC48u) { return; }
    }
    ctx->pc = 0x12EC48u;
label_12ec48:
    // 0x12ec48: 0x1440fddd  bnez        $v0, . + 4 + (-0x223 << 2)
    ctx->pc = 0x12EC48u;
    {
        const bool branch_taken_0x12ec48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC48u;
            // 0x12ec4c: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec48) {
            ctx->pc = 0x12E3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12EC50u;
label_12ec50:
    // 0x12ec50: 0x8faf0218  lw          $t7, 0x218($sp)
    ctx->pc = 0x12ec50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_12ec54:
    // 0x12ec54: 0x8fad0218  lw          $t5, 0x218($sp)
    ctx->pc = 0x12ec54u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x12ec58: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12ec5c: 0x27af0010  addiu       $t7, $sp, 0x10
    ctx->pc = 0x12ec5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ec60: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ec64: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12ec68: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x12ec68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x12ec6c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ec6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ec70: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12ec74: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ec74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ec78: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ec7c: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ec7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ec80: 0x15e0fe4b  bnez        $t7, . + 4 + (-0x1B5 << 2)
    ctx->pc = 0x12EC80u;
    {
        const bool branch_taken_0x12ec80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC80u;
            // 0x12ec84: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec80) {
            ctx->pc = 0x12E5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e5b0;
        }
    }
    ctx->pc = 0x12EC88u;
    // 0x12ec88: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ec8c: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EC8Cu;
    SET_GPR_U32(ctx, 31, 0x12EC94u);
    ctx->pc = 0x12EC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC8Cu;
            // 0x12ec90: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC94u; }
        if (ctx->pc != 0x12EC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC94u; }
        if (ctx->pc != 0x12EC94u) { return; }
    }
    ctx->pc = 0x12EC94u;
label_12ec94:
    // 0x12ec94: 0x1440fdc9  bnez        $v0, . + 4 + (-0x237 << 2)
    ctx->pc = 0x12EC94u;
    {
        const bool branch_taken_0x12ec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC94u;
            // 0x12ec98: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec94) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12EC9Cu;
    // 0x12ec9c: 0x1000fe45  b           . + 4 + (-0x1BB << 2)
    ctx->pc = 0x12EC9Cu;
    {
        const bool branch_taken_0x12ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC9Cu;
            // 0x12eca0: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec9c) {
            ctx->pc = 0x12E5B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e5b4;
        }
    }
    ctx->pc = 0x12ECA4u;
label_12eca4:
    // 0x12eca4: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12eca4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12eca8: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x12eca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12ecac: 0x1a00ffe8  blez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12ECACu;
    {
        const bool branch_taken_0x12ecac = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12ECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECACu;
            // 0x12ecb0: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecac) {
            ctx->pc = 0x12EC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ec50;
        }
    }
    ctx->pc = 0x12ECB4u;
    // 0x12ecb4: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12ECB4u;
    {
        const bool branch_taken_0x12ecb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECB4u;
            // 0x12ecb8: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecb4) {
            ctx->pc = 0x12ED18u;
            goto label_12ed18;
        }
    }
    ctx->pc = 0x12ECBCu;
    // 0x12ecbc: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12ecbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ecc0: 0x25f10b78  addiu       $s1, $t7, 0xB78
    ctx->pc = 0x12ecc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12ecc4: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12ecc8:
    // 0x12ecc8: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12eccc: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ecccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ecd0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ecd4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ecd8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ecd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ecdc: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12ecdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12ece0: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ece4: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ece4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ece8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12ECE8u;
    {
        const bool branch_taken_0x12ece8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECE8u;
            // 0x12ecec: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ece8) {
            ctx->pc = 0x12ED04u;
            goto label_12ed04;
        }
    }
    ctx->pc = 0x12ECF0u;
    // 0x12ecf0: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ecf4: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12ECF4u;
    SET_GPR_U32(ctx, 31, 0x12ECFCu);
    ctx->pc = 0x12ECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECF4u;
            // 0x12ecf8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECFCu; }
        if (ctx->pc != 0x12ECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECFCu; }
        if (ctx->pc != 0x12ECFCu) { return; }
    }
    ctx->pc = 0x12ECFCu;
label_12ecfc:
    // 0x12ecfc: 0x1440fdaf  bnez        $v0, . + 4 + (-0x251 << 2)
    ctx->pc = 0x12ECFCu;
    {
        const bool branch_taken_0x12ecfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECFCu;
            // 0x12ed00: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecfc) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12ED04u;
label_12ed04:
    // 0x12ed04: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12ed04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12ed08: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12ed08u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12ed0c: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12ED0Cu;
    {
        const bool branch_taken_0x12ed0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ed0c) {
            ctx->pc = 0x12ED10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED0Cu;
            // 0x12ed10: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ecc8;
        }
    }
    ctx->pc = 0x12ED14u;
    // 0x12ed14: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12ed14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12ed18:
    // 0x12ed18: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12ed1c: 0x25ef0b78  addiu       $t7, $t7, 0xB78
    ctx->pc = 0x12ed1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2936));
    // 0x12ed20: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12ed24: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ed24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ed28: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ed2c: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12ed2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12ed30: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ed30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ed34: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12ed38: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ed3c: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ed3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ed40: 0x15e0ffc3  bnez        $t7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x12ED40u;
    {
        const bool branch_taken_0x12ed40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED40u;
            // 0x12ed44: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed40) {
            ctx->pc = 0x12EC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ec50;
        }
    }
    ctx->pc = 0x12ED48u;
    // 0x12ed48: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x12ED48u;
    {
        const bool branch_taken_0x12ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED48u;
            // 0x12ed4c: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed48) {
            ctx->pc = 0x12EC3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ec3c;
        }
    }
    ctx->pc = 0x12ED50u;
label_12ed50:
    // 0x12ed50: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12ed54: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12ed58: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ed58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ed5c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ed5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ed60: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ed60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ed64: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ed64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ed68: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12ed68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12ed6c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ed70: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ed70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ed74: 0x15e0ffb6  bnez        $t7, . + 4 + (-0x4A << 2)
    ctx->pc = 0x12ED74u;
    {
        const bool branch_taken_0x12ed74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED74u;
            // 0x12ed78: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed74) {
            ctx->pc = 0x12EC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ec50;
        }
    }
    ctx->pc = 0x12ED7Cu;
    // 0x12ed7c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ed80: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12ED80u;
    SET_GPR_U32(ctx, 31, 0x12ED88u);
    ctx->pc = 0x12ED84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED80u;
            // 0x12ed84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED88u; }
        if (ctx->pc != 0x12ED88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED88u; }
        if (ctx->pc != 0x12ED88u) { return; }
    }
    ctx->pc = 0x12ED88u;
label_12ed88:
    // 0x12ed88: 0x1440fd8c  bnez        $v0, . + 4 + (-0x274 << 2)
    ctx->pc = 0x12ED88u;
    {
        const bool branch_taken_0x12ed88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED88u;
            // 0x12ed8c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed88) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12ED90u;
    // 0x12ed90: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x12ED90u;
    {
        const bool branch_taken_0x12ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED90u;
            // 0x12ed94: 0x8faf0218  lw          $t7, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed90) {
            ctx->pc = 0x12EC54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ec54;
        }
    }
    ctx->pc = 0x12ED98u;
label_12ed98:
    // 0x12ed98: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ed98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ed9c: 0x31af0002  andi        $t7, $t5, 0x2
    ctx->pc = 0x12ed9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)2);
    // 0x12eda0: 0x11e0fd8d  beqz        $t7, . + 4 + (-0x273 << 2)
    ctx->pc = 0x12EDA0u;
    {
        const bool branch_taken_0x12eda0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDA0u;
            // 0x12eda4: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eda0) {
            ctx->pc = 0x12E3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3d8;
        }
    }
    ctx->pc = 0x12EDA8u;
    // 0x12eda8: 0xa3b301d1  sb          $s3, 0x1D1($sp)
    ctx->pc = 0x12eda8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 19));
    // 0x12edac: 0xa3af01d0  sb          $t7, 0x1D0($sp)
    ctx->pc = 0x12edacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 15));
    // 0x12edb0: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12edb4: 0x27af01d0  addiu       $t7, $sp, 0x1D0
    ctx->pc = 0x12edb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12edb8: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12edbc: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12edc0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12edc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12edc4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12edc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12edc8: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x12edc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x12edcc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12edccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12edd0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12edd4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12edd8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12edd8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12eddc: 0x15e0fd7e  bnez        $t7, . + 4 + (-0x282 << 2)
    ctx->pc = 0x12EDDCu;
    {
        const bool branch_taken_0x12eddc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDDCu;
            // 0x12ede0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eddc) {
            ctx->pc = 0x12E3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3d8;
        }
    }
    ctx->pc = 0x12EDE4u;
    // 0x12ede4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ede8: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12EDE8u;
    SET_GPR_U32(ctx, 31, 0x12EDF0u);
    ctx->pc = 0x12EDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDE8u;
            // 0x12edec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDF0u; }
        if (ctx->pc != 0x12EDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDF0u; }
        if (ctx->pc != 0x12EDF0u) { return; }
    }
    ctx->pc = 0x12EDF0u;
label_12edf0:
    // 0x12edf0: 0x1440fd72  bnez        $v0, . + 4 + (-0x28E << 2)
    ctx->pc = 0x12EDF0u;
    {
        const bool branch_taken_0x12edf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDF0u;
            // 0x12edf4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edf0) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12EDF8u;
    // 0x12edf8: 0x1000fd78  b           . + 4 + (-0x288 << 2)
    ctx->pc = 0x12EDF8u;
    {
        const bool branch_taken_0x12edf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDF8u;
            // 0x12edfc: 0x8fae0224  lw          $t6, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edf8) {
            ctx->pc = 0x12E3DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3dc;
        }
    }
    ctx->pc = 0x12EE00u;
label_12ee00:
    // 0x12ee00: 0x1000fd59  b           . + 4 + (-0x2A7 << 2)
    ctx->pc = 0x12EE00u;
    {
        const bool branch_taken_0x12ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE00u;
            // 0x12ee04: 0x93ad0000  lbu         $t5, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee00) {
            ctx->pc = 0x12E368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e368;
        }
    }
    ctx->pc = 0x12EE08u;
label_12ee08:
    // 0x12ee08: 0x31ee0002  andi        $t6, $t7, 0x2
    ctx->pc = 0x12ee08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x12ee0c: 0x26ef0002  addiu       $t7, $s7, 0x2
    ctx->pc = 0x12ee0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x12ee10: 0x1000fd22  b           . + 4 + (-0x2DE << 2)
    ctx->pc = 0x12EE10u;
    {
        const bool branch_taken_0x12ee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE10u;
            // 0x12ee14: 0x1eeb80b  movn        $s7, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee10) {
            ctx->pc = 0x12E29Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e29c;
        }
    }
    ctx->pc = 0x12EE18u;
label_12ee18:
    // 0x12ee18: 0x304f000f  andi        $t7, $v0, 0xF
    ctx->pc = 0x12ee18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_12ee1c:
    // 0x12ee1c: 0x8fae0220  lw          $t6, 0x220($sp)
    ctx->pc = 0x12ee1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12ee20: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12ee20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12ee24: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12ee24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12ee28: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12ee28u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12ee2c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x12ee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x12ee30: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x12ee30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12ee34: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12ee34u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ee38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12EE38u;
    {
        const bool branch_taken_0x12ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE38u;
            // 0x12ee3c: 0xa2ce0000  sb          $t6, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee38) {
            ctx->pc = 0x12EE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee18;
        }
    }
    ctx->pc = 0x12EE40u;
label_12ee40:
    // 0x12ee40: 0x3b67823  subu        $t7, $sp, $s6
    ctx->pc = 0x12ee40u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
label_12ee44:
    // 0x12ee44: 0x1000fd0b  b           . + 4 + (-0x2F5 << 2)
    ctx->pc = 0x12EE44u;
    {
        const bool branch_taken_0x12ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE44u;
            // 0x12ee48: 0x25fe01cc  addiu       $fp, $t7, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee44) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12EE4Cu;
label_12ee4c:
    // 0x12ee4c: 0x304f0007  andi        $t7, $v0, 0x7
    ctx->pc = 0x12ee4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_12ee50:
    // 0x12ee50: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12ee50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12ee54: 0x65ef0030  daddiu      $t7, $t7, 0x30
    ctx->pc = 0x12ee54u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)48);
    // 0x12ee58: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x12ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x12ee5c: 0x31ee00ff  andi        $t6, $t7, 0xFF
    ctx->pc = 0x12ee5cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x12ee60: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12EE60u;
    {
        const bool branch_taken_0x12ee60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE60u;
            // 0x12ee64: 0xa2ce0000  sb          $t6, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee60) {
            ctx->pc = 0x12EE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee4c;
        }
    }
    ctx->pc = 0x12EE68u;
    // 0x12ee68: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ee68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ee6c: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12ee6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12ee70: 0x11e0fff3  beqz        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x12EE70u;
    {
        const bool branch_taken_0x12ee70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE70u;
            // 0x12ee74: 0xe7e00  sll         $t7, $t6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee70) {
            ctx->pc = 0x12EE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee40;
        }
    }
    ctx->pc = 0x12EE78u;
    // 0x12ee78: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x12ee78u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x12ee7c: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12ee7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12ee80: 0x11eefff0  beq         $t7, $t6, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12EE80u;
    {
        const bool branch_taken_0x12ee80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x12EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE80u;
            // 0x12ee84: 0x3b67823  subu        $t7, $sp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee80) {
            ctx->pc = 0x12EE44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee44;
        }
    }
    ctx->pc = 0x12EE88u;
    // 0x12ee88: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12ee88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12ee8c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12EE8Cu;
    {
        const bool branch_taken_0x12ee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE8Cu;
            // 0x12ee90: 0xa2ce0000  sb          $t6, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee8c) {
            ctx->pc = 0x12EE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee40;
        }
    }
    ctx->pc = 0x12EE94u;
label_12ee94:
    // 0x12ee94: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12EE94u;
    {
        const bool branch_taken_0x12ee94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE94u;
            // 0x12ee98: 0x644f0030  daddiu      $t7, $v0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee94) {
            ctx->pc = 0x12EED8u;
            goto label_12eed8;
        }
    }
    ctx->pc = 0x12EE9Cu;
    // 0x12ee9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ee9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12eea0:
    // 0x12eea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12eea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eea4: 0xc049328  jal         func_124CA0
    ctx->pc = 0x12EEA4u;
    SET_GPR_U32(ctx, 31, 0x12EEACu);
    ctx->pc = 0x12EEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEA4u;
            // 0x12eea8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124CA0u;
    if (runtime->hasFunction(0x124CA0u)) {
        auto targetFn = runtime->lookupFunction(0x124CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEACu; }
        if (ctx->pc != 0x12EEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124CA0_0x124ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEACu; }
        if (ctx->pc != 0x12EEACu) { return; }
    }
    ctx->pc = 0x12EEACu;
label_12eeac:
    // 0x12eeac: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12eeacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12eeb0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12eeb0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12eeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eeb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eebc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12eec0: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x12EEC0u;
    SET_GPR_U32(ctx, 31, 0x12EEC8u);
    ctx->pc = 0x12EEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEC0u;
            // 0x12eec4: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEC8u; }
        if (ctx->pc != 0x12EEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEC8u; }
        if (ctx->pc != 0x12EEC8u) { return; }
    }
    ctx->pc = 0x12EEC8u;
label_12eec8:
    // 0x12eec8: 0x2c4f000a  sltiu       $t7, $v0, 0xA
    ctx->pc = 0x12eec8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12eecc: 0x11e0fff4  beqz        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x12EECCu;
    {
        const bool branch_taken_0x12eecc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EECCu;
            // 0x12eed0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eecc) {
            ctx->pc = 0x12EEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12eea0;
        }
    }
    ctx->pc = 0x12EED4u;
    // 0x12eed4: 0x644f0030  daddiu      $t7, $v0, 0x30
    ctx->pc = 0x12eed4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_12eed8:
    // 0x12eed8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12eed8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12eedc: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x12eedcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x12eee0: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x12EEE0u;
    {
        const bool branch_taken_0x12eee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEE0u;
            // 0x12eee4: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eee0) {
            ctx->pc = 0x12EE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee40;
        }
    }
    ctx->pc = 0x12EEE8u;
label_12eee8:
    // 0x12eee8: 0x15c0ffd6  bnez        $t6, . + 4 + (-0x2A << 2)
    ctx->pc = 0x12EEE8u;
    {
        const bool branch_taken_0x12eee8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEE8u;
            // 0x12eeec: 0x3b67823  subu        $t7, $sp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eee8) {
            ctx->pc = 0x12EE44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee44;
        }
    }
    ctx->pc = 0x12EEF0u;
    // 0x12eef0: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12eef0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12eef4: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12eef4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12eef8: 0x11e0ffd1  beqz        $t7, . + 4 + (-0x2F << 2)
    ctx->pc = 0x12EEF8u;
    {
        const bool branch_taken_0x12eef8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEF8u;
            // 0x12eefc: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eef8) {
            ctx->pc = 0x12EE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee40;
        }
    }
    ctx->pc = 0x12EF00u;
    // 0x12ef00: 0x27b601cb  addiu       $s6, $sp, 0x1CB
    ctx->pc = 0x12ef00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 459));
    // 0x12ef04: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x12EF04u;
    {
        const bool branch_taken_0x12ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF04u;
            // 0x12ef08: 0xa3af01cb  sb          $t7, 0x1CB($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 459), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef04) {
            ctx->pc = 0x12EE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee40;
        }
    }
    ctx->pc = 0x12EF0Cu;
label_12ef0c:
    // 0x12ef0c: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12ef0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12ef10: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EF10u;
    {
        const bool branch_taken_0x12ef10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF10u;
            // 0x12ef14: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef10) {
            ctx->pc = 0x12EF20u;
            goto label_12ef20;
        }
    }
    ctx->pc = 0x12EF18u;
    // 0x12ef18: 0x1000fcb7  b           . + 4 + (-0x349 << 2)
    ctx->pc = 0x12EF18u;
    {
        const bool branch_taken_0x12ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF18u;
            // 0x12ef1c: 0x85e20000  lh          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef18) {
            ctx->pc = 0x12E1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e1f8;
        }
    }
    ctx->pc = 0x12EF20u;
label_12ef20:
    // 0x12ef20: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x12ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ef24: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12ef24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ef28: 0x1000fcb5  b           . + 4 + (-0x34B << 2)
    ctx->pc = 0x12EF28u;
    {
        const bool branch_taken_0x12ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF28u;
            // 0x12ef2c: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef28) {
            ctx->pc = 0x12E200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e200;
        }
    }
    ctx->pc = 0x12EF30u;
label_12ef30:
    // 0x12ef30: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ef30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ef34: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12ef34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12ef38: 0x1000fc71  b           . + 4 + (-0x38F << 2)
    ctx->pc = 0x12EF38u;
    {
        const bool branch_taken_0x12ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF38u;
            // 0x12ef3c: 0x35ce0008  ori         $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef38) {
            ctx->pc = 0x12E100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e100;
        }
    }
    ctx->pc = 0x12EF40u;
label_12ef40:
    // 0x12ef40: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ef40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ef44: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12ef44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12ef48: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12ef4c:
    // 0x12ef4c: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ef4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ef50: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12ef50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12ef54: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EF54u;
    {
        const bool branch_taken_0x12ef54 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF54u;
            // 0x12ef58: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef54) {
            ctx->pc = 0x12EF74u;
            goto label_12ef74;
        }
    }
    ctx->pc = 0x12EF5Cu;
    // 0x12ef5c: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12ef5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12ef60:
    // 0x12ef60: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12ef60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ef64: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12ef68:
    // 0x12ef68: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12ef68u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ef6c:
    // 0x12ef6c: 0x1000fca9  b           . + 4 + (-0x357 << 2)
    ctx->pc = 0x12EF6Cu;
    {
        const bool branch_taken_0x12ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF6Cu;
            // 0x12ef70: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef6c) {
            ctx->pc = 0x12E214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e214;
        }
    }
    ctx->pc = 0x12EF74u;
label_12ef74:
    // 0x12ef74: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12ef74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12ef78: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EF78u;
    {
        const bool branch_taken_0x12ef78 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF78u;
            // 0x12ef7c: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef78) {
            ctx->pc = 0x12EF88u;
            goto label_12ef88;
        }
    }
    ctx->pc = 0x12EF80u;
    // 0x12ef80: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12EF80u;
    {
        const bool branch_taken_0x12ef80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF80u;
            // 0x12ef84: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef80) {
            ctx->pc = 0x12EF60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ef60;
        }
    }
    ctx->pc = 0x12EF88u;
label_12ef88:
    // 0x12ef88: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12ef88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ef8c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ef90: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x12EF90u;
    {
        const bool branch_taken_0x12ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF90u;
            // 0x12ef94: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef90) {
            ctx->pc = 0x12EF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ef68;
        }
    }
    ctx->pc = 0x12EF98u;
label_12ef98:
    // 0x12ef98: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ef98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ef9c: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12ef9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12efa0: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12efa4:
    // 0x12efa4: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12efa4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12efa8: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12efa8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12efac: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EFACu;
    {
        const bool branch_taken_0x12efac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFACu;
            // 0x12efb0: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efac) {
            ctx->pc = 0x12EFC8u;
            goto label_12efc8;
        }
    }
    ctx->pc = 0x12EFB4u;
    // 0x12efb4: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12efb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12efb8:
    // 0x12efb8: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12efb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12efbc: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12efc0:
    // 0x12efc0: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x12EFC0u;
    {
        const bool branch_taken_0x12efc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFC0u;
            // 0x12efc4: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efc0) {
            ctx->pc = 0x12EF6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ef6c;
        }
    }
    ctx->pc = 0x12EFC8u;
label_12efc8:
    // 0x12efc8: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12efc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12efcc: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EFCCu;
    {
        const bool branch_taken_0x12efcc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFCCu;
            // 0x12efd0: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efcc) {
            ctx->pc = 0x12EFDCu;
            goto label_12efdc;
        }
    }
    ctx->pc = 0x12EFD4u;
    // 0x12efd4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12EFD4u;
    {
        const bool branch_taken_0x12efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFD4u;
            // 0x12efd8: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efd4) {
            ctx->pc = 0x12EFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12efb8;
        }
    }
    ctx->pc = 0x12EFDCu;
label_12efdc:
    // 0x12efdc: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12efdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12efe0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12efe0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12efe4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x12EFE4u;
    {
        const bool branch_taken_0x12efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFE4u;
            // 0x12efe8: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efe4) {
            ctx->pc = 0x12EFC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12efc0;
        }
    }
    ctx->pc = 0x12EFECu;
label_12efec:
    // 0x12efec: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12efecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12eff0: 0x25ef0bb8  addiu       $t7, $t7, 0xBB8
    ctx->pc = 0x12eff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3000));
label_12eff4:
    // 0x12eff4: 0xafaf0220  sw          $t7, 0x220($sp)
    ctx->pc = 0x12eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 15));
    // 0x12eff8: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12eff8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12effc: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12effcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12f000: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12F000u;
    {
        const bool branch_taken_0x12f000 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F000u;
            // 0x12f004: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f000) {
            ctx->pc = 0x12F034u;
            goto label_12f034;
        }
    }
    ctx->pc = 0x12F008u;
    // 0x12f008: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12f008u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12f00c:
    // 0x12f00c: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12f00cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f010: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12f010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12f014:
    // 0x12f014: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12f014u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f018: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12f018u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12f01c: 0x11e0ffd3  beqz        $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x12F01Cu;
    {
        const bool branch_taken_0x12f01c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F01Cu;
            // 0x12f020: 0x240e0002  addiu       $t6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f01c) {
            ctx->pc = 0x12EF6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ef6c;
        }
    }
    ctx->pc = 0x12F024u;
    // 0x12f024: 0x35af0002  ori         $t7, $t5, 0x2
    ctx->pc = 0x12f024u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x12f028: 0x1e2680b  movn        $t5, $t7, $v0
    ctx->pc = 0x12f028u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 15));
    // 0x12f02c: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x12F02Cu;
    {
        const bool branch_taken_0x12f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F02Cu;
            // 0x12f030: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f02c) {
            ctx->pc = 0x12EF6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ef6c;
        }
    }
    ctx->pc = 0x12F034u;
label_12f034:
    // 0x12f034: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12f034u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12f038: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F038u;
    {
        const bool branch_taken_0x12f038 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F038u;
            // 0x12f03c: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f038) {
            ctx->pc = 0x12F048u;
            goto label_12f048;
        }
    }
    ctx->pc = 0x12F040u;
    // 0x12f040: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12F040u;
    {
        const bool branch_taken_0x12f040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F040u;
            // 0x12f044: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f040) {
            ctx->pc = 0x12F00Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f00c;
        }
    }
    ctx->pc = 0x12F048u;
label_12f048:
    // 0x12f048: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12f048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f04c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12f04cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f050: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x12F050u;
    {
        const bool branch_taken_0x12f050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F050u;
            // 0x12f054: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f050) {
            ctx->pc = 0x12F014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f014;
        }
    }
    ctx->pc = 0x12F058u;
label_12f058:
    // 0x12f058: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f05c: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x12f05cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12f060: 0x8fad01f8  lw          $t5, 0x1F8($sp)
    ctx->pc = 0x12f060u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f064: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x12f064u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f068: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12f068u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f06c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12f06cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x12f070: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12f070u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f074: 0xafad01f8  sw          $t5, 0x1F8($sp)
    ctx->pc = 0x12f074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
    // 0x12f078: 0x1000fc7e  b           . + 4 + (-0x382 << 2)
    ctx->pc = 0x12F078u;
    {
        const bool branch_taken_0x12f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F078u;
            // 0x12f07c: 0xa3ae0070  sb          $t6, 0x70($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f078) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F080u;
label_12f080:
    // 0x12f080: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12f080u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f084: 0x162f0074  bne         $s1, $t7, . + 4 + (0x74 << 2)
    ctx->pc = 0x12F084u;
    {
        const bool branch_taken_0x12f084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F084u;
            // 0x12f088: 0x240f0067  addiu       $t7, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f084) {
            ctx->pc = 0x12F258u;
            goto label_12f258;
        }
    }
    ctx->pc = 0x12F08Cu;
    // 0x12f08c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12f08cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12f090:
    // 0x12f090: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12f090u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_12f094:
    // 0x12f094: 0x31af0008  andi        $t7, $t5, 0x8
    ctx->pc = 0x12f094u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8);
    // 0x12f098: 0x11e00069  beqz        $t7, . + 4 + (0x69 << 2)
    ctx->pc = 0x12F098u;
    {
        const bool branch_taken_0x12f098 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F098u;
            // 0x12f09c: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f098) {
            ctx->pc = 0x12F240u;
            goto label_12f240;
        }
    }
    ctx->pc = 0x12F0A0u;
    // 0x12f0a0: 0x8fae01f8  lw          $t6, 0x1F8($sp)
    ctx->pc = 0x12f0a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f0a4: 0xddef0000  ld          $t7, 0x0($t7)
    ctx->pc = 0x12f0a4u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f0a8: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12f0a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x12f0ac: 0xffaf0210  sd          $t7, 0x210($sp)
    ctx->pc = 0x12f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 15));
    // 0x12f0b0: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12f0b4:
    // 0x12f0b4: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x12F0B4u;
    SET_GPR_U32(ctx, 31, 0x12F0BCu);
    ctx->pc = 0x12F0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0B4u;
            // 0x12f0b8: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (runtime->hasFunction(0x11D4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11D4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0BCu; }
        if (ctx->pc != 0x12F0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D4E8_0x11d4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0BCu; }
        if (ctx->pc != 0x12F0BCu) { return; }
    }
    ctx->pc = 0x12F0BCu;
label_12f0bc:
    // 0x12f0bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12F0BCu;
    {
        const bool branch_taken_0x12f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0BCu;
            // 0x12f0c0: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0bc) {
            ctx->pc = 0x12F0E8u;
            goto label_12f0e8;
        }
    }
    ctx->pc = 0x12F0C4u;
    // 0x12f0c4: 0xc049760  jal         func_125D80
    ctx->pc = 0x12F0C4u;
    SET_GPR_U32(ctx, 31, 0x12F0CCu);
    ctx->pc = 0x12F0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0C4u;
            // 0x12f0c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0CCu; }
        if (ctx->pc != 0x12F0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0CCu; }
        if (ctx->pc != 0x12F0CCu) { return; }
    }
    ctx->pc = 0x12F0CCu;
label_12f0cc:
    // 0x12f0cc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F0CCu;
    {
        const bool branch_taken_0x12f0cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12F0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0CCu;
            // 0x12f0d0: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0cc) {
            ctx->pc = 0x12F0DCu;
            goto label_12f0dc;
        }
    }
    ctx->pc = 0x12F0D4u;
    // 0x12f0d4: 0x240d002d  addiu       $t5, $zero, 0x2D
    ctx->pc = 0x12f0d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12f0d8: 0xa3ad0000  sb          $t5, 0x0($sp)
    ctx->pc = 0x12f0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 13));
label_12f0dc:
    // 0x12f0dc: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12f0dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f0e0: 0x1000fc64  b           . + 4 + (-0x39C << 2)
    ctx->pc = 0x12F0E0u;
    {
        const bool branch_taken_0x12f0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0E0u;
            // 0x12f0e4: 0x25f60bd0  addiu       $s6, $t7, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 3024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0e0) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F0E8u;
label_12f0e8:
    // 0x12f0e8: 0xc04754c  jal         func_11D530
    ctx->pc = 0x12F0E8u;
    SET_GPR_U32(ctx, 31, 0x12F0F0u);
    ctx->pc = 0x12F0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0E8u;
            // 0x12f0ec: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D530u;
    if (runtime->hasFunction(0x11D530u)) {
        auto targetFn = runtime->lookupFunction(0x11D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0F0u; }
        if (ctx->pc != 0x12F0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D530_0x11d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0F0u; }
        if (ctx->pc != 0x12F0F0u) { return; }
    }
    ctx->pc = 0x12F0F0u;
label_12f0f0:
    // 0x12f0f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F0F0u;
    {
        const bool branch_taken_0x12f0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0F0u;
            // 0x12f0f4: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0f0) {
            ctx->pc = 0x12F104u;
            goto label_12f104;
        }
    }
    ctx->pc = 0x12F0F8u;
    // 0x12f0f8: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12f0f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f0fc: 0x1000fc5d  b           . + 4 + (-0x3A3 << 2)
    ctx->pc = 0x12F0FCu;
    {
        const bool branch_taken_0x12f0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0FCu;
            // 0x12f100: 0x25f60bd8  addiu       $s6, $t7, 0xBD8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 3032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0fc) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F104u;
label_12f104:
    // 0x12f104: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f108: 0x27a80001  addiu       $t0, $sp, 0x1
    ctx->pc = 0x12f108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x12f10c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x12f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12f110: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12f110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f114: 0x35ad0100  ori         $t5, $t5, 0x100
    ctx->pc = 0x12f114u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)256);
    // 0x12f118: 0xdfa50210  ld          $a1, 0x210($sp)
    ctx->pc = 0x12f118u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12f11c: 0xafad01fc  sw          $t5, 0x1FC($sp)
    ctx->pc = 0x12f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
    // 0x12f120: 0x27a901e8  addiu       $t1, $sp, 0x1E8
    ctx->pc = 0x12f120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x12f124: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x12f124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f128: 0x27ab01ec  addiu       $t3, $sp, 0x1EC
    ctx->pc = 0x12f128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x12f12c: 0xc04bd08  jal         func_12F420
    ctx->pc = 0x12F12Cu;
    SET_GPR_U32(ctx, 31, 0x12F134u);
    ctx->pc = 0x12F130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F12Cu;
            // 0x12f130: 0x8fa701fc  lw          $a3, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F420u;
    if (runtime->hasFunction(0x12F420u)) {
        auto targetFn = runtime->lookupFunction(0x12F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F134u; }
        if (ctx->pc != 0x12F134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F420_0x12f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F134u; }
        if (ctx->pc != 0x12F134u) { return; }
    }
    ctx->pc = 0x12F134u;
label_12f134:
    // 0x12f134: 0x240f0067  addiu       $t7, $zero, 0x67
    ctx->pc = 0x12f134u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12f138: 0x126f0004  beq         $s3, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F138u;
    {
        const bool branch_taken_0x12f138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x12F13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F138u;
            // 0x12f13c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f138) {
            ctx->pc = 0x12F14Cu;
            goto label_12f14c;
        }
    }
    ctx->pc = 0x12F140u;
    // 0x12f140: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12f144: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12F144u;
    {
        const bool branch_taken_0x12f144 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F144u;
            // 0x12f148: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f144) {
            ctx->pc = 0x12F178u;
            goto label_12f178;
        }
    }
    ctx->pc = 0x12F14Cu;
label_12f14c:
    // 0x12f14c: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x12f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12f150: 0x28affffd  slti        $t7, $a1, -0x3
    ctx->pc = 0x12f150u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x12f154: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F154u;
    {
        const bool branch_taken_0x12f154 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F154u;
            // 0x12f158: 0x3a6d0067  xori        $t5, $s3, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f154) {
            ctx->pc = 0x12F168u;
            goto label_12f168;
        }
    }
    ctx->pc = 0x12F15Cu;
    // 0x12f15c: 0x225782a  slt         $t7, $s1, $a1
    ctx->pc = 0x12f15cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12f160: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F160u;
    {
        const bool branch_taken_0x12f160 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F160u;
            // 0x12f164: 0x24130067  addiu       $s3, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f160) {
            ctx->pc = 0x12F178u;
            goto label_12f178;
        }
    }
    ctx->pc = 0x12F168u;
label_12f168:
    // 0x12f168: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12f168u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12f16c: 0x240e0045  addiu       $t6, $zero, 0x45
    ctx->pc = 0x12f16cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12f170: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x12f170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f174: 0x1cd980b  movn        $s3, $t6, $t5
    ctx->pc = 0x12f174u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 14));
label_12f178:
    // 0x12f178: 0x2a6f0066  slti        $t7, $s3, 0x66
    ctx->pc = 0x12f178u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x12f17c: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x12F17Cu;
    {
        const bool branch_taken_0x12f17c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F17Cu;
            // 0x12f180: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f17c) {
            ctx->pc = 0x12F1D0u;
            goto label_12f1d0;
        }
    }
    ctx->pc = 0x12F184u;
    // 0x12f184: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12f184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12f188: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x12f188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x12f18c: 0xc04bd72  jal         func_12F5C8
    ctx->pc = 0x12F18Cu;
    SET_GPR_U32(ctx, 31, 0x12F194u);
    ctx->pc = 0x12F190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F18Cu;
            // 0x12f190: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5C8u;
    if (runtime->hasFunction(0x12F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x12F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F194u; }
        if (ctx->pc != 0x12F194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F5C8_0x12f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F194u; }
        if (ctx->pc != 0x12F194u) { return; }
    }
    ctx->pc = 0x12F194u;
label_12f194:
    // 0x12f194: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12f194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12f198: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x12f198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x12f19c: 0x29ee0002  slti        $t6, $t7, 0x2
    ctx->pc = 0x12f19cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12f1a0: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F1A0u;
    {
        const bool branch_taken_0x12f1a0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1A0u;
            // 0x12f1a4: 0x4ff021  addu        $fp, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1a0) {
            ctx->pc = 0x12F1B8u;
            goto label_12f1b8;
        }
    }
    ctx->pc = 0x12F1A8u;
    // 0x12f1a8: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12f1a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f1ac: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12f1acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12f1b0: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F1B0u;
    {
        const bool branch_taken_0x12f1b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1B0u;
            // 0x12f1b4: 0x83af0001  lb          $t7, 0x1($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1b0) {
            ctx->pc = 0x12F1C0u;
            goto label_12f1c0;
        }
    }
    ctx->pc = 0x12F1B8u;
label_12f1b8:
    // 0x12f1b8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12f1b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_12f1bc:
    // 0x12f1bc: 0x83af0001  lb          $t7, 0x1($sp)
    ctx->pc = 0x12f1bcu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_12f1c0:
    // 0x12f1c0: 0x11e0fc2c  beqz        $t7, . + 4 + (-0x3D4 << 2)
    ctx->pc = 0x12F1C0u;
    {
        const bool branch_taken_0x12f1c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1C0u;
            // 0x12f1c4: 0x240d002d  addiu       $t5, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1c0) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F1C8u;
    // 0x12f1c8: 0x1000fc2a  b           . + 4 + (-0x3D6 << 2)
    ctx->pc = 0x12F1C8u;
    {
        const bool branch_taken_0x12f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1C8u;
            // 0x12f1cc: 0xa3ad0000  sb          $t5, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1c8) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F1D0u;
label_12f1d0:
    // 0x12f1d0: 0x240f0066  addiu       $t7, $zero, 0x66
    ctx->pc = 0x12f1d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12f1d4: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12F1D4u;
    {
        const bool branch_taken_0x12f1d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1D4u;
            // 0x12f1d8: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1d4) {
            ctx->pc = 0x12F208u;
            goto label_12f208;
        }
    }
    ctx->pc = 0x12F1DCu;
    // 0x12f1dc: 0x18a0fff7  blez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12F1DCu;
    {
        const bool branch_taken_0x12f1dc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x12F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1DCu;
            // 0x12f1e0: 0x263e0002  addiu       $fp, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1dc) {
            ctx->pc = 0x12F1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f1bc;
        }
    }
    ctx->pc = 0x12F1E4u;
    // 0x12f1e4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F1E4u;
    {
        const bool branch_taken_0x12f1e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1E4u;
            // 0x12f1e8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1e4) {
            ctx->pc = 0x12F1FCu;
            goto label_12f1fc;
        }
    }
    ctx->pc = 0x12F1ECu;
    // 0x12f1ec: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12f1ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f1f0: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12f1f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12f1f4: 0x11e0fff2  beqz        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x12F1F4u;
    {
        const bool branch_taken_0x12f1f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1F4u;
            // 0x12f1f8: 0x83af0001  lb          $t7, 0x1($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1f4) {
            ctx->pc = 0x12F1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f1c0;
        }
    }
    ctx->pc = 0x12F1FCu;
label_12f1fc:
    // 0x12f1fc: 0xb17821  addu        $t7, $a1, $s1
    ctx->pc = 0x12f1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x12f200: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x12F200u;
    {
        const bool branch_taken_0x12f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F200u;
            // 0x12f204: 0x25fe0001  addiu       $fp, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f200) {
            ctx->pc = 0x12F1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f1bc;
        }
    }
    ctx->pc = 0x12F208u;
label_12f208:
    // 0x12f208: 0xa2782a  slt         $t7, $a1, $v0
    ctx->pc = 0x12f208u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12f20c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F20Cu;
    {
        const bool branch_taken_0x12f20c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F20Cu;
            // 0x12f210: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f20c) {
            ctx->pc = 0x12F228u;
            goto label_12f228;
        }
    }
    ctx->pc = 0x12F214u;
    // 0x12f214: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12f214u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12f218: 0x11e0ffe8  beqz        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12F218u;
    {
        const bool branch_taken_0x12f218 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F218u;
            // 0x12f21c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f218) {
            ctx->pc = 0x12F1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f1bc;
        }
    }
    ctx->pc = 0x12F220u;
    // 0x12f220: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x12F220u;
    {
        const bool branch_taken_0x12f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F220u;
            // 0x12f224: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f220) {
            ctx->pc = 0x12F1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f1bc;
        }
    }
    ctx->pc = 0x12F228u;
label_12f228:
    // 0x12f228: 0x5ca0ffe4  bgtzl       $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12F228u;
    {
        const bool branch_taken_0x12f228 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x12f228) {
            ctx->pc = 0x12F22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F228u;
            // 0x12f22c: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f1bc;
        }
    }
    ctx->pc = 0x12F230u;
    // 0x12f230: 0x457823  subu        $t7, $v0, $a1
    ctx->pc = 0x12f230u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12f234: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x12F234u;
    {
        const bool branch_taken_0x12f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F234u;
            // 0x12f238: 0x25fe0002  addiu       $fp, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f234) {
            ctx->pc = 0x12F1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f1bc;
        }
    }
    ctx->pc = 0x12F23Cu;
    // 0x12f23c: 0x0  nop
    ctx->pc = 0x12f23cu;
    // NOP
label_12f240:
    // 0x12f240: 0xddef0000  ld          $t7, 0x0($t7)
    ctx->pc = 0x12f240u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f244: 0xffaf0210  sd          $t7, 0x210($sp)
    ctx->pc = 0x12f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 15));
    // 0x12f248: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12f248u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f24c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12f24cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f250: 0x1000ff98  b           . + 4 + (-0x68 << 2)
    ctx->pc = 0x12F250u;
    {
        const bool branch_taken_0x12f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F250u;
            // 0x12f254: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f250) {
            ctx->pc = 0x12F0B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f0b4;
        }
    }
    ctx->pc = 0x12F258u;
label_12f258:
    // 0x12f258: 0x126f0003  beq         $s3, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F258u;
    {
        const bool branch_taken_0x12f258 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x12F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F258u;
            // 0x12f25c: 0x240f0047  addiu       $t7, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f258) {
            ctx->pc = 0x12F268u;
            goto label_12f268;
        }
    }
    ctx->pc = 0x12F260u;
    // 0x12f260: 0x166fff8c  bne         $s3, $t7, . + 4 + (-0x74 << 2)
    ctx->pc = 0x12F260u;
    {
        const bool branch_taken_0x12f260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F260u;
            // 0x12f264: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f260) {
            ctx->pc = 0x12F094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f094;
        }
    }
    ctx->pc = 0x12F268u;
label_12f268:
    // 0x12f268: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12f268u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f26c: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x12F26Cu;
    {
        const bool branch_taken_0x12f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F26Cu;
            // 0x12f270: 0x1f1880a  movz        $s1, $t7, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f26c) {
            ctx->pc = 0x12F090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f090;
        }
    }
    ctx->pc = 0x12F274u;
label_12f274:
    // 0x12f274: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12f274u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f278: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12f278u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12f27c: 0x1000fb92  b           . + 4 + (-0x46E << 2)
    ctx->pc = 0x12F27Cu;
    {
        const bool branch_taken_0x12f27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F27Cu;
            // 0x12f280: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f27c) {
            ctx->pc = 0x12E0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12F284u;
label_12f284:
    // 0x12f284: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12f284u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12f288: 0x240f006c  addiu       $t7, $zero, 0x6C
    ctx->pc = 0x12f288u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12f28c: 0x67600  sll         $t6, $a2, 24
    ctx->pc = 0x12f28cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x12f290: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12f294: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F294u;
    {
        const bool branch_taken_0x12f294 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F294u;
            // 0x12f298: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f294) {
            ctx->pc = 0x12F2B0u;
            goto label_12f2b0;
        }
    }
    ctx->pc = 0x12F29Cu;
    // 0x12f29c: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12f29cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f2a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f2a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12f2a4: 0x35ad0010  ori         $t5, $t5, 0x10
    ctx->pc = 0x12f2a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16);
    // 0x12f2a8: 0x1000fb80  b           . + 4 + (-0x480 << 2)
    ctx->pc = 0x12F2A8u;
    {
        const bool branch_taken_0x12f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F2A8u;
            // 0x12f2ac: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2a8) {
            ctx->pc = 0x12E0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0ac;
        }
    }
    ctx->pc = 0x12F2B0u;
label_12f2b0:
    // 0x12f2b0: 0x1000fb93  b           . + 4 + (-0x46D << 2)
    ctx->pc = 0x12F2B0u;
    {
        const bool branch_taken_0x12f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F2B0u;
            // 0x12f2b4: 0x35ce0010  ori         $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2b0) {
            ctx->pc = 0x12E100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e100;
        }
    }
    ctx->pc = 0x12F2B8u;
label_12f2b8:
    // 0x12f2b8: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12f2b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f2bc: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12f2bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12f2c0: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F2C0u;
    {
        const bool branch_taken_0x12f2c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F2C0u;
            // 0x12f2c4: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2c0) {
            ctx->pc = 0x12F2E0u;
            goto label_12f2e0;
        }
    }
    ctx->pc = 0x12F2C8u;
    // 0x12f2c8: 0x8fad0200  lw          $t5, 0x200($sp)
    ctx->pc = 0x12f2c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12f2cc: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12f2ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f2d0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12f2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f2d4: 0xfdcd0000  sd          $t5, 0x0($t6)
    ctx->pc = 0x12f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 13));
label_12f2d8:
    // 0x12f2d8: 0x1000fb3a  b           . + 4 + (-0x4C6 << 2)
    ctx->pc = 0x12F2D8u;
    {
        const bool branch_taken_0x12f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F2D8u;
            // 0x12f2dc: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2d8) {
            ctx->pc = 0x12DFC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dfc4;
        }
    }
    ctx->pc = 0x12F2E0u;
label_12f2e0:
    // 0x12f2e0: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12f2e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12f2e4: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F2E4u;
    {
        const bool branch_taken_0x12f2e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F2E4u;
            // 0x12f2e8: 0x8fad0200  lw          $t5, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2e4) {
            ctx->pc = 0x12F300u;
            goto label_12f300;
        }
    }
    ctx->pc = 0x12F2ECu;
    // 0x12f2ec: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12f2ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f2f0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12f2f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f2f4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12f2f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f2f8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12F2F8u;
    {
        const bool branch_taken_0x12f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F2F8u;
            // 0x12f2fc: 0xa5cd0000  sh          $t5, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2f8) {
            ctx->pc = 0x12F2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f2d8;
        }
    }
    ctx->pc = 0x12F300u;
label_12f300:
    // 0x12f300: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12f300u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f304: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12f304u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f308: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12f308u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f30c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12F30Cu;
    {
        const bool branch_taken_0x12f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F30Cu;
            // 0x12f310: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f30c) {
            ctx->pc = 0x12F2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f2d8;
        }
    }
    ctx->pc = 0x12F314u;
label_12f314:
    // 0x12f314: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12f314u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f318: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12f318u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x12f31c: 0x25ce0be0  addiu       $t6, $t6, 0xBE0
    ctx->pc = 0x12f31cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3040));
    // 0x12f320: 0x24130078  addiu       $s3, $zero, 0x78
    ctx->pc = 0x12f320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12f324: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x12f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f328: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12f328u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f32c: 0xafae0220  sw          $t6, 0x220($sp)
    ctx->pc = 0x12f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 14));
    // 0x12f330: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12f330u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f334: 0xafad01f8  sw          $t5, 0x1F8($sp)
    ctx->pc = 0x12f334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
    // 0x12f338: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12f338u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f33c: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x12f33cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x12f340: 0x1000ff0a  b           . + 4 + (-0xF6 << 2)
    ctx->pc = 0x12F340u;
    {
        const bool branch_taken_0x12f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F340u;
            // 0x12f344: 0xafaf01fc  sw          $t7, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f340) {
            ctx->pc = 0x12EF6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ef6c;
        }
    }
    ctx->pc = 0x12F348u;
label_12f348:
    // 0x12f348: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12f348u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12f34c: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12f34cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12f350: 0x1000fb5d  b           . + 4 + (-0x4A3 << 2)
    ctx->pc = 0x12F350u;
    {
        const bool branch_taken_0x12f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F350u;
            // 0x12f354: 0x35ef0010  ori         $t7, $t7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f350) {
            ctx->pc = 0x12E0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12F358u;
label_12f358:
    // 0x12f358: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12f358u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12f35c: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12f35cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12f360: 0x8df60000  lw          $s6, 0x0($t7)
    ctx->pc = 0x12f360u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12f364: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F364u;
    {
        const bool branch_taken_0x12f364 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F364u;
            // 0x12f368: 0xafad01f8  sw          $t5, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f364) {
            ctx->pc = 0x12F374u;
            goto label_12f374;
        }
    }
    ctx->pc = 0x12F36Cu;
    // 0x12f36c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12f36cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12f370: 0x25f60bf8  addiu       $s6, $t7, 0xBF8
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 3064));
label_12f374:
    // 0x12f374: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x12F374u;
    {
        const bool branch_taken_0x12f374 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12F378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F374u;
            // 0x12f378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f374) {
            ctx->pc = 0x12F3ACu;
            goto label_12f3ac;
        }
    }
    ctx->pc = 0x12F37Cu;
    // 0x12f37c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12f37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f380: 0xc04a4aa  jal         func_1292A8
    ctx->pc = 0x12F380u;
    SET_GPR_U32(ctx, 31, 0x12F388u);
    ctx->pc = 0x12F384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F380u;
            // 0x12f384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1292A8u;
    if (runtime->hasFunction(0x1292A8u)) {
        auto targetFn = runtime->lookupFunction(0x1292A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F388u; }
        if (ctx->pc != 0x12F388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001292A8_0x1292a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F388u; }
        if (ctx->pc != 0x12F388u) { return; }
    }
    ctx->pc = 0x12F388u;
label_12f388:
    // 0x12f388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F388u;
    {
        const bool branch_taken_0x12f388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F388u;
            // 0x12f38c: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f388) {
            ctx->pc = 0x12F3A4u;
            goto label_12f3a4;
        }
    }
    ctx->pc = 0x12F390u;
    // 0x12f390: 0x56f023  subu        $fp, $v0, $s6
    ctx->pc = 0x12f390u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x12f394: 0x23e782a  slt         $t7, $s1, $fp
    ctx->pc = 0x12f394u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x12f398: 0x51e0fbb6  beql        $t7, $zero, . + 4 + (-0x44A << 2)
    ctx->pc = 0x12F398u;
    {
        const bool branch_taken_0x12f398 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f398) {
            ctx->pc = 0x12F39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F398u;
            // 0x12f39c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F3A0u;
    // 0x12f3a0: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x12f3a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f3a4:
    // 0x12f3a4: 0x1000fbb3  b           . + 4 + (-0x44D << 2)
    ctx->pc = 0x12F3A4u;
    {
        const bool branch_taken_0x12f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3A4u;
            // 0x12f3a8: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3a4) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F3ACu;
label_12f3ac:
    // 0x12f3ac: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x12F3ACu;
    SET_GPR_U32(ctx, 31, 0x12F3B4u);
    ctx->pc = 0x12F3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3ACu;
            // 0x12f3b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3B4u; }
        if (ctx->pc != 0x12F3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3B4u; }
        if (ctx->pc != 0x12F3B4u) { return; }
    }
    ctx->pc = 0x12F3B4u;
label_12f3b4:
    // 0x12f3b4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x12F3B4u;
    {
        const bool branch_taken_0x12f3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3B4u;
            // 0x12f3b8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3b4) {
            ctx->pc = 0x12F3A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f3a4;
        }
    }
    ctx->pc = 0x12F3BCu;
label_12f3bc:
    // 0x12f3bc: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F3BCu;
    {
        const bool branch_taken_0x12f3bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3BCu;
            // 0x12f3c0: 0x27b60070  addiu       $s6, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3bc) {
            ctx->pc = 0x12F3D4u;
            goto label_12f3d4;
        }
    }
    ctx->pc = 0x12F3C4u;
    // 0x12f3c4: 0xa3b30070  sb          $s3, 0x70($sp)
    ctx->pc = 0x12f3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 19));
    // 0x12f3c8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12f3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f3cc: 0x1000fba9  b           . + 4 + (-0x457 << 2)
    ctx->pc = 0x12F3CCu;
    {
        const bool branch_taken_0x12f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3CCu;
            // 0x12f3d0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3cc) {
            ctx->pc = 0x12E274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e274;
        }
    }
    ctx->pc = 0x12F3D4u;
label_12f3d4:
    // 0x12f3d4: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12f3d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f3d8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F3D8u;
    {
        const bool branch_taken_0x12f3d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3D8u;
            // 0x12f3dc: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3d8) {
            ctx->pc = 0x12F3F0u;
            goto label_12f3f0;
        }
    }
    ctx->pc = 0x12F3E0u;
    // 0x12f3e0: 0xc04b754  jal         func_12DD50
    ctx->pc = 0x12F3E0u;
    SET_GPR_U32(ctx, 31, 0x12F3E8u);
    ctx->pc = 0x12F3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3E0u;
            // 0x12f3e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD50u;
    if (runtime->hasFunction(0x12DD50u)) {
        auto targetFn = runtime->lookupFunction(0x12DD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3E8u; }
        if (ctx->pc != 0x12F3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD50_0x12dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3E8u; }
        if (ctx->pc != 0x12F3E8u) { return; }
    }
    ctx->pc = 0x12F3E8u;
label_12f3e8:
    // 0x12f3e8: 0x1440fbf5  bnez        $v0, . + 4 + (-0x40B << 2)
    ctx->pc = 0x12F3E8u;
    {
        const bool branch_taken_0x12f3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3E8u;
            // 0x12f3ec: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3e8) {
            ctx->pc = 0x12E3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12F3F0u;
label_12f3f0:
    // 0x12f3f0: 0x1000fbf2  b           . + 4 + (-0x40E << 2)
    ctx->pc = 0x12F3F0u;
    {
        const bool branch_taken_0x12f3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3F0u;
            // 0x12f3f4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3f0) {
            ctx->pc = 0x12E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3bc;
        }
    }
    ctx->pc = 0x12F3F8u;
label_12f3f8:
    // 0x12f3f8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12f3f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12f3fc: 0x1000fefd  b           . + 4 + (-0x103 << 2)
    ctx->pc = 0x12F3FCu;
    {
        const bool branch_taken_0x12f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3FCu;
            // 0x12f400: 0x25ef0be0  addiu       $t7, $t7, 0xBE0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3fc) {
            ctx->pc = 0x12EFF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12eff4;
        }
    }
    ctx->pc = 0x12F404u;
    // 0x12f404: 0x0  nop
    ctx->pc = 0x12f404u;
    // NOP
label_12f408:
    // 0x12f408: 0x8faf01e0  lw          $t7, 0x1E0($sp)
    ctx->pc = 0x12f408u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12f40c: 0x15f1faf1  bne         $t7, $s1, . + 4 + (-0x50F << 2)
    ctx->pc = 0x12F40Cu;
    {
        const bool branch_taken_0x12f40c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        ctx->pc = 0x12F410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F40Cu;
            // 0x12f410: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f40c) {
            ctx->pc = 0x12DFD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dfd4;
        }
    }
    ctx->pc = 0x12F414u;
    // 0x12f414: 0x1000faf7  b           . + 4 + (-0x509 << 2)
    ctx->pc = 0x12F414u;
    {
        const bool branch_taken_0x12f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F414u;
            // 0x12f418: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f414) {
            ctx->pc = 0x12DFF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dff4;
        }
    }
    ctx->pc = 0x12F41Cu;
    // 0x12f41c: 0x0  nop
    ctx->pc = 0x12f41cu;
    // NOP
}
